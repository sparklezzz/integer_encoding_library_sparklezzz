/*
 * kscheme_8bit_cu_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef KSCHEME_8BIT_CU_UNPACK_HPP_
#define KSCHEME_8BIT_CU_UNPACK_HPP_

namespace paradise {
namespace index {

struct KS8CUUnpackInfo {
		uint8_t m_byteCountArr[8];
		int m_codewordSkipped;
		int m_intNum;
		int m_statusGen;;
		bool m_valid;		//true if it's a valid representation of the group
};


static KS8CUUnpackInfo KS8CUUnpackInfo_0 = { {1, 1, 1, 1, 1, 1, 1, 1}, 8, 32, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1 = { {2, 1, 1, 1, 1, 1, 1, 0}, 8, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_2 = { {1, 2, 1, 1, 1, 1, 1, 0}, 8, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_3 = { {3, 1, 1, 1, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_4 = { {1, 1, 2, 1, 1, 1, 1, 0}, 8, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_5 = { {2, 2, 1, 1, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_6 = { {1, 3, 1, 1, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_7 = { {4, 1, 1, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_8 = { {1, 1, 1, 2, 1, 1, 1, 0}, 8, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_9 = { {2, 1, 2, 1, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_10 = { {1, 2, 2, 1, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_11 = { {3, 2, 1, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_12 = { {1, 1, 3, 1, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_13 = { {2, 3, 1, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_14 = { {1, 4, 1, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_15 = { {5, 1, 1, 1, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_16 = { {1, 1, 1, 1, 2, 1, 1, 0}, 8, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_17 = { {2, 1, 1, 2, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_18 = { {1, 2, 1, 2, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_19 = { {3, 1, 2, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_20 = { {1, 1, 2, 2, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_21 = { {2, 2, 2, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_22 = { {1, 3, 2, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_23 = { {4, 2, 1, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_24 = { {1, 1, 1, 3, 1, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_25 = { {2, 1, 3, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_26 = { {1, 2, 3, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_27 = { {3, 3, 1, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_28 = { {1, 1, 4, 1, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_29 = { {2, 4, 1, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_30 = { {1, 5, 1, 1, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_31 = { {6, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_32 = { {1, 1, 1, 1, 1, 2, 1, 0}, 8, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_33 = { {2, 1, 1, 1, 2, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_34 = { {1, 2, 1, 1, 2, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_35 = { {3, 1, 1, 2, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_36 = { {1, 1, 2, 1, 2, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_37 = { {2, 2, 1, 2, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_38 = { {1, 3, 1, 2, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_39 = { {4, 1, 2, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_40 = { {1, 1, 1, 2, 2, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_41 = { {2, 1, 2, 2, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_42 = { {1, 2, 2, 2, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_43 = { {3, 2, 2, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_44 = { {1, 1, 3, 2, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_45 = { {2, 3, 2, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_46 = { {1, 4, 2, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_47 = { {5, 2, 1, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_48 = { {1, 1, 1, 1, 3, 1, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_49 = { {2, 1, 1, 3, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_50 = { {1, 2, 1, 3, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_51 = { {3, 1, 3, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_52 = { {1, 1, 2, 3, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_53 = { {2, 2, 3, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_54 = { {1, 3, 3, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_55 = { {4, 3, 1, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_56 = { {1, 1, 1, 4, 1, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_57 = { {2, 1, 4, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_58 = { {1, 2, 4, 1, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_59 = { {3, 4, 1, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_60 = { {1, 1, 5, 1, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_61 = { {2, 5, 1, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_62 = { {1, 6, 1, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_63 = { {7, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_64 = { {1, 1, 1, 1, 1, 1, 2, 0}, 8, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_65 = { {2, 1, 1, 1, 1, 2, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_66 = { {1, 2, 1, 1, 1, 2, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_67 = { {3, 1, 1, 1, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_68 = { {1, 1, 2, 1, 1, 2, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_69 = { {2, 2, 1, 1, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_70 = { {1, 3, 1, 1, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_71 = { {4, 1, 1, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_72 = { {1, 1, 1, 2, 1, 2, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_73 = { {2, 1, 2, 1, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_74 = { {1, 2, 2, 1, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_75 = { {3, 2, 1, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_76 = { {1, 1, 3, 1, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_77 = { {2, 3, 1, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_78 = { {1, 4, 1, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_79 = { {5, 1, 2, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_80 = { {1, 1, 1, 1, 2, 2, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_81 = { {2, 1, 1, 2, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_82 = { {1, 2, 1, 2, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_83 = { {3, 1, 2, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_84 = { {1, 1, 2, 2, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_85 = { {2, 2, 2, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_86 = { {1, 3, 2, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_87 = { {4, 2, 2, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_88 = { {1, 1, 1, 3, 2, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_89 = { {2, 1, 3, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_90 = { {1, 2, 3, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_91 = { {3, 3, 2, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_92 = { {1, 1, 4, 2, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_93 = { {2, 4, 2, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_94 = { {1, 5, 2, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_95 = { {6, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_96 = { {1, 1, 1, 1, 1, 3, 0, 0}, 8, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_97 = { {2, 1, 1, 1, 3, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_98 = { {1, 2, 1, 1, 3, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_99 = { {3, 1, 1, 3, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_100 = { {1, 1, 2, 1, 3, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_101 = { {2, 2, 1, 3, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_102 = { {1, 3, 1, 3, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_103 = { {4, 1, 3, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_104 = { {1, 1, 1, 2, 3, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_105 = { {2, 1, 2, 3, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_106 = { {1, 2, 2, 3, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_107 = { {3, 2, 3, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_108 = { {1, 1, 3, 3, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_109 = { {2, 3, 3, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_110 = { {1, 4, 3, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_111 = { {5, 3, 0, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_112 = { {1, 1, 1, 1, 4, 0, 0, 0}, 8, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_113 = { {2, 1, 1, 4, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_114 = { {1, 2, 1, 4, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_115 = { {3, 1, 4, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_116 = { {1, 1, 2, 4, 0, 0, 0, 0}, 8, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_117 = { {2, 2, 4, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_118 = { {1, 3, 4, 0, 0, 0, 0, 0}, 8, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_119 = { {4, 4, 0, 0, 0, 0, 0, 0}, 8, 8, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_120 = { {1, 1, 1, 5, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_121 = { {2, 1, 5, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_122 = { {1, 2, 5, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_123 = { {3, 5, 0, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_124 = { {1, 1, 6, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_125 = { {2, 6, 0, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_126 = { {1, 7, 0, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_127 = { {8, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_128 = { {1, 1, 1, 1, 1, 1, 1, 0}, 4, 28, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_129 = { {2, 1, 1, 1, 1, 1, 0, 0}, 4, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_130 = { {1, 2, 1, 1, 1, 1, 0, 0}, 4, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_131 = { {3, 1, 1, 1, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_132 = { {1, 1, 2, 1, 1, 1, 0, 0}, 4, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_133 = { {2, 2, 1, 1, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_134 = { {1, 3, 1, 1, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_135 = { {4, 1, 1, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_136 = { {1, 1, 1, 2, 1, 1, 0, 0}, 4, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_137 = { {2, 1, 2, 1, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_138 = { {1, 2, 2, 1, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_139 = { {3, 2, 1, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_140 = { {1, 1, 3, 1, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_141 = { {2, 3, 1, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_142 = { {1, 4, 1, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_143 = { {5, 1, 1, 0, 0, 0, 0, 0}, -4, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_144 = { {1, 1, 1, 1, 2, 1, 0, 0}, 4, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_145 = { {2, 1, 1, 2, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_146 = { {1, 2, 1, 2, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_147 = { {3, 1, 2, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_148 = { {1, 1, 2, 2, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_149 = { {2, 2, 2, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_150 = { {1, 3, 2, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_151 = { {4, 2, 1, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_152 = { {1, 1, 1, 3, 1, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_153 = { {2, 1, 3, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_154 = { {1, 2, 3, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_155 = { {3, 3, 1, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_156 = { {1, 1, 4, 1, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_157 = { {2, 4, 1, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_158 = { {1, 5, 1, 0, 0, 0, 0, 0}, -4, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_159 = { {6, 1, 0, 0, 0, 0, 0, 0}, -4, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_160 = { {1, 1, 1, 1, 1, 2, 0, 0}, 4, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_161 = { {2, 1, 1, 1, 2, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_162 = { {1, 2, 1, 1, 2, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_163 = { {3, 1, 1, 2, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_164 = { {1, 1, 2, 1, 2, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_165 = { {2, 2, 1, 2, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_166 = { {1, 3, 1, 2, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_167 = { {4, 1, 2, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_168 = { {1, 1, 1, 2, 2, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_169 = { {2, 1, 2, 2, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_170 = { {1, 2, 2, 2, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_171 = { {3, 2, 2, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_172 = { {1, 1, 3, 2, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_173 = { {2, 3, 2, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_174 = { {1, 4, 2, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_175 = { {5, 2, 0, 0, 0, 0, 0, 0}, -4, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_176 = { {1, 1, 1, 1, 3, 0, 0, 0}, 4, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_177 = { {2, 1, 1, 3, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_178 = { {1, 2, 1, 3, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_179 = { {3, 1, 3, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_180 = { {1, 1, 2, 3, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_181 = { {2, 2, 3, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_182 = { {1, 3, 3, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_183 = { {4, 3, 0, 0, 0, 0, 0, 0}, 4, 8, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_184 = { {1, 1, 1, 4, 0, 0, 0, 0}, 4, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_185 = { {2, 1, 4, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_186 = { {1, 2, 4, 0, 0, 0, 0, 0}, 4, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_187 = { {3, 4, 0, 0, 0, 0, 0, 0}, 4, 8, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_188 = { {1, 1, 5, 0, 0, 0, 0, 0}, -4, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_189 = { {2, 5, 0, 0, 0, 0, 0, 0}, -4, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_190 = { {1, 6, 0, 0, 0, 0, 0, 0}, -4, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_191 = { {7, 0, 0, 0, 0, 0, 0, 0}, -4, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_192 = { {1, 1, 1, 1, 1, 1, 0, 0}, 4, 24, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_193 = { {2, 1, 1, 1, 1, 0, 0, 0}, 4, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_194 = { {1, 2, 1, 1, 1, 0, 0, 0}, 4, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_195 = { {3, 1, 1, 1, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_196 = { {1, 1, 2, 1, 1, 0, 0, 0}, 4, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_197 = { {2, 2, 1, 1, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_198 = { {1, 3, 1, 1, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_199 = { {4, 1, 1, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_200 = { {1, 1, 1, 2, 1, 0, 0, 0}, 4, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_201 = { {2, 1, 2, 1, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_202 = { {1, 2, 2, 1, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_203 = { {3, 2, 1, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_204 = { {1, 1, 3, 1, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_205 = { {2, 3, 1, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_206 = { {1, 4, 1, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_207 = { {5, 1, 0, 0, 0, 0, 0, 0}, -4, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_208 = { {1, 1, 1, 1, 2, 0, 0, 0}, 4, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_209 = { {2, 1, 1, 2, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_210 = { {1, 2, 1, 2, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_211 = { {3, 1, 2, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_212 = { {1, 1, 2, 2, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_213 = { {2, 2, 2, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_214 = { {1, 3, 2, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_215 = { {4, 2, 0, 0, 0, 0, 0, 0}, 4, 8, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_216 = { {1, 1, 1, 3, 0, 0, 0, 0}, 4, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_217 = { {2, 1, 3, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_218 = { {1, 2, 3, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_219 = { {3, 3, 0, 0, 0, 0, 0, 0}, 4, 8, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_220 = { {1, 1, 4, 0, 0, 0, 0, 0}, 4, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_221 = { {2, 4, 0, 0, 0, 0, 0, 0}, 4, 8, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_222 = { {1, 5, 0, 0, 0, 0, 0, 0}, -4, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_223 = { {6, 0, 0, 0, 0, 0, 0, 0}, -4, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_224 = { {1, 1, 1, 1, 1, 0, 0, 0}, 4, 20, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_225 = { {2, 1, 1, 1, 0, 0, 0, 0}, 4, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_226 = { {1, 2, 1, 1, 0, 0, 0, 0}, 4, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_227 = { {3, 1, 1, 0, 0, 0, 0, 0}, 4, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_228 = { {1, 1, 2, 1, 0, 0, 0, 0}, 4, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_229 = { {2, 2, 1, 0, 0, 0, 0, 0}, 4, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_230 = { {1, 3, 1, 0, 0, 0, 0, 0}, 4, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_231 = { {4, 1, 0, 0, 0, 0, 0, 0}, 4, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_232 = { {1, 1, 1, 2, 0, 0, 0, 0}, 4, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_233 = { {2, 1, 2, 0, 0, 0, 0, 0}, 4, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_234 = { {1, 2, 2, 0, 0, 0, 0, 0}, 4, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_235 = { {3, 2, 0, 0, 0, 0, 0, 0}, 4, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_236 = { {1, 1, 3, 0, 0, 0, 0, 0}, 4, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_237 = { {2, 3, 0, 0, 0, 0, 0, 0}, 4, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_238 = { {1, 4, 0, 0, 0, 0, 0, 0}, 4, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_239 = { {5, 0, 0, 0, 0, 0, 0, 0}, -4, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_240 = { {1, 1, 1, 1, 0, 0, 0, 0}, 0, 16, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_241 = { {2, 1, 1, 0, 0, 0, 0, 0}, 0, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_242 = { {1, 2, 1, 0, 0, 0, 0, 0}, 0, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_243 = { {3, 1, 0, 0, 0, 0, 0, 0}, 0, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_244 = { {1, 1, 2, 0, 0, 0, 0, 0}, 0, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_245 = { {2, 2, 0, 0, 0, 0, 0, 0}, 0, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_246 = { {1, 3, 0, 0, 0, 0, 0, 0}, 0, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_247 = { {4, 0, 0, 0, 0, 0, 0, 0}, 0, 4, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_248 = { {1, 1, 1, 0, 0, 0, 0, 0}, 0, 12, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_249 = { {2, 1, 0, 0, 0, 0, 0, 0}, 0, 8, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_250 = { {1, 2, 0, 0, 0, 0, 0, 0}, 0, 8, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_251 = { {3, 0, 0, 0, 0, 0, 0, 0}, 0, 4, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_252 = { {1, 1, 0, 0, 0, 0, 0, 0}, 0, 8, 6, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_253 = { {2, 0, 0, 0, 0, 0, 0, 0}, 0, 4, 6, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_254 = { {1, 0, 0, 0, 0, 0, 0, 0}, 0, 4, 7, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_255 = { {0, 0, 0, 0, 0, 0, 0, 0}, -4, 0, 8, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_256 = { {2, 1, 1, 1, 1, 1, 1, 1}, 12, 32, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_257 = { {3, 1, 1, 1, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_258 = { {2, 2, 1, 1, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_259 = { {4, 1, 1, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_260 = { {2, 1, 2, 1, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_261 = { {3, 2, 1, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_262 = { {2, 3, 1, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_263 = { {5, 1, 1, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_264 = { {2, 1, 1, 2, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_265 = { {3, 1, 2, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_266 = { {2, 2, 2, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_267 = { {4, 2, 1, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_268 = { {2, 1, 3, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_269 = { {3, 3, 1, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_270 = { {2, 4, 1, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_271 = { {6, 1, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_272 = { {2, 1, 1, 1, 2, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_273 = { {3, 1, 1, 2, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_274 = { {2, 2, 1, 2, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_275 = { {4, 1, 2, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_276 = { {2, 1, 2, 2, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_277 = { {3, 2, 2, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_278 = { {2, 3, 2, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_279 = { {5, 2, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_280 = { {2, 1, 1, 3, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_281 = { {3, 1, 3, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_282 = { {2, 2, 3, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_283 = { {4, 3, 1, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_284 = { {2, 1, 4, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_285 = { {3, 4, 1, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_286 = { {2, 5, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_287 = { {7, 1, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_288 = { {2, 1, 1, 1, 1, 2, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_289 = { {3, 1, 1, 1, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_290 = { {2, 2, 1, 1, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_291 = { {4, 1, 1, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_292 = { {2, 1, 2, 1, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_293 = { {3, 2, 1, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_294 = { {2, 3, 1, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_295 = { {5, 1, 2, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_296 = { {2, 1, 1, 2, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_297 = { {3, 1, 2, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_298 = { {2, 2, 2, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_299 = { {4, 2, 2, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_300 = { {2, 1, 3, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_301 = { {3, 3, 2, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_302 = { {2, 4, 2, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_303 = { {6, 2, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_304 = { {2, 1, 1, 1, 3, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_305 = { {3, 1, 1, 3, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_306 = { {2, 2, 1, 3, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_307 = { {4, 1, 3, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_308 = { {2, 1, 2, 3, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_309 = { {3, 2, 3, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_310 = { {2, 3, 3, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_311 = { {5, 3, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_312 = { {2, 1, 1, 4, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_313 = { {3, 1, 4, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_314 = { {2, 2, 4, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_315 = { {4, 4, 1, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_316 = { {2, 1, 5, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_317 = { {3, 5, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_318 = { {2, 6, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_319 = { {8, 1, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_320 = { {2, 1, 1, 1, 1, 1, 2, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_321 = { {3, 1, 1, 1, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_322 = { {2, 2, 1, 1, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_323 = { {4, 1, 1, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_324 = { {2, 1, 2, 1, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_325 = { {3, 2, 1, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_326 = { {2, 3, 1, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_327 = { {5, 1, 1, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_328 = { {2, 1, 1, 2, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_329 = { {3, 1, 2, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_330 = { {2, 2, 2, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_331 = { {4, 2, 1, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_332 = { {2, 1, 3, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_333 = { {3, 3, 1, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_334 = { {2, 4, 1, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_335 = { {6, 1, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_336 = { {2, 1, 1, 1, 2, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_337 = { {3, 1, 1, 2, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_338 = { {2, 2, 1, 2, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_339 = { {4, 1, 2, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_340 = { {2, 1, 2, 2, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_341 = { {3, 2, 2, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_342 = { {2, 3, 2, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_343 = { {5, 2, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_344 = { {2, 1, 1, 3, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_345 = { {3, 1, 3, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_346 = { {2, 2, 3, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_347 = { {4, 3, 2, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_348 = { {2, 1, 4, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_349 = { {3, 4, 2, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_350 = { {2, 5, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_351 = { {7, 2, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_352 = { {2, 1, 1, 1, 1, 3, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_353 = { {3, 1, 1, 1, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_354 = { {2, 2, 1, 1, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_355 = { {4, 1, 1, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_356 = { {2, 1, 2, 1, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_357 = { {3, 2, 1, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_358 = { {2, 3, 1, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_359 = { {5, 1, 3, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_360 = { {2, 1, 1, 2, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_361 = { {3, 1, 2, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_362 = { {2, 2, 2, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_363 = { {4, 2, 3, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_364 = { {2, 1, 3, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_365 = { {3, 3, 3, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_366 = { {2, 4, 3, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_367 = { {6, 3, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_368 = { {2, 1, 1, 1, 4, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_369 = { {3, 1, 1, 4, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_370 = { {2, 2, 1, 4, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_371 = { {4, 1, 4, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_372 = { {2, 1, 2, 4, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_373 = { {3, 2, 4, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_374 = { {2, 3, 4, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_375 = { {5, 4, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_376 = { {2, 1, 1, 5, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_377 = { {3, 1, 5, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_378 = { {2, 2, 5, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_379 = { {4, 5, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_380 = { {2, 1, 6, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_381 = { {3, 6, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_382 = { {2, 7, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_383 = { {9, 0, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_384 = { {2, 1, 1, 1, 1, 1, 1, 0}, 8, 28, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_385 = { {3, 1, 1, 1, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_386 = { {2, 2, 1, 1, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_387 = { {4, 1, 1, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_388 = { {2, 1, 2, 1, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_389 = { {3, 2, 1, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_390 = { {2, 3, 1, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_391 = { {5, 1, 1, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_392 = { {2, 1, 1, 2, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_393 = { {3, 1, 2, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_394 = { {2, 2, 2, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_395 = { {4, 2, 1, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_396 = { {2, 1, 3, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_397 = { {3, 3, 1, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_398 = { {2, 4, 1, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_399 = { {6, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_400 = { {2, 1, 1, 1, 2, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_401 = { {3, 1, 1, 2, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_402 = { {2, 2, 1, 2, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_403 = { {4, 1, 2, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_404 = { {2, 1, 2, 2, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_405 = { {3, 2, 2, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_406 = { {2, 3, 2, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_407 = { {5, 2, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_408 = { {2, 1, 1, 3, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_409 = { {3, 1, 3, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_410 = { {2, 2, 3, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_411 = { {4, 3, 1, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_412 = { {2, 1, 4, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_413 = { {3, 4, 1, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_414 = { {2, 5, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_415 = { {7, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_416 = { {2, 1, 1, 1, 1, 2, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_417 = { {3, 1, 1, 1, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_418 = { {2, 2, 1, 1, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_419 = { {4, 1, 1, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_420 = { {2, 1, 2, 1, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_421 = { {3, 2, 1, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_422 = { {2, 3, 1, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_423 = { {5, 1, 2, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_424 = { {2, 1, 1, 2, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_425 = { {3, 1, 2, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_426 = { {2, 2, 2, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_427 = { {4, 2, 2, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_428 = { {2, 1, 3, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_429 = { {3, 3, 2, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_430 = { {2, 4, 2, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_431 = { {6, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_432 = { {2, 1, 1, 1, 3, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_433 = { {3, 1, 1, 3, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_434 = { {2, 2, 1, 3, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_435 = { {4, 1, 3, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_436 = { {2, 1, 2, 3, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_437 = { {3, 2, 3, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_438 = { {2, 3, 3, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_439 = { {5, 3, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_440 = { {2, 1, 1, 4, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_441 = { {3, 1, 4, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_442 = { {2, 2, 4, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_443 = { {4, 4, 0, 0, 0, 0, 0, 0}, 8, 8, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_444 = { {2, 1, 5, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_445 = { {3, 5, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_446 = { {2, 6, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_447 = { {8, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_448 = { {2, 1, 1, 1, 1, 1, 0, 0}, 8, 24, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_449 = { {3, 1, 1, 1, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_450 = { {2, 2, 1, 1, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_451 = { {4, 1, 1, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_452 = { {2, 1, 2, 1, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_453 = { {3, 2, 1, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_454 = { {2, 3, 1, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_455 = { {5, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_456 = { {2, 1, 1, 2, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_457 = { {3, 1, 2, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_458 = { {2, 2, 2, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_459 = { {4, 2, 1, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_460 = { {2, 1, 3, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_461 = { {3, 3, 1, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_462 = { {2, 4, 1, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_463 = { {6, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_464 = { {2, 1, 1, 1, 2, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_465 = { {3, 1, 1, 2, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_466 = { {2, 2, 1, 2, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_467 = { {4, 1, 2, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_468 = { {2, 1, 2, 2, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_469 = { {3, 2, 2, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_470 = { {2, 3, 2, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_471 = { {5, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_472 = { {2, 1, 1, 3, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_473 = { {3, 1, 3, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_474 = { {2, 2, 3, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_475 = { {4, 3, 0, 0, 0, 0, 0, 0}, 8, 8, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_476 = { {2, 1, 4, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_477 = { {3, 4, 0, 0, 0, 0, 0, 0}, 8, 8, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_478 = { {2, 5, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_479 = { {7, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_480 = { {2, 1, 1, 1, 1, 0, 0, 0}, 8, 20, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_481 = { {3, 1, 1, 1, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_482 = { {2, 2, 1, 1, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_483 = { {4, 1, 1, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_484 = { {2, 1, 2, 1, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_485 = { {3, 2, 1, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_486 = { {2, 3, 1, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_487 = { {5, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_488 = { {2, 1, 1, 2, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_489 = { {3, 1, 2, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_490 = { {2, 2, 2, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_491 = { {4, 2, 0, 0, 0, 0, 0, 0}, 8, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_492 = { {2, 1, 3, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_493 = { {3, 3, 0, 0, 0, 0, 0, 0}, 8, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_494 = { {2, 4, 0, 0, 0, 0, 0, 0}, 8, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_495 = { {6, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_496 = { {2, 1, 1, 1, 0, 0, 0, 0}, 4, 16, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_497 = { {3, 1, 1, 0, 0, 0, 0, 0}, 4, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_498 = { {2, 2, 1, 0, 0, 0, 0, 0}, 4, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_499 = { {4, 1, 0, 0, 0, 0, 0, 0}, 4, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_500 = { {2, 1, 2, 0, 0, 0, 0, 0}, 4, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_501 = { {3, 2, 0, 0, 0, 0, 0, 0}, 4, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_502 = { {2, 3, 0, 0, 0, 0, 0, 0}, 4, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_503 = { {5, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 4, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_504 = { {2, 1, 1, 0, 0, 0, 0, 0}, 4, 12, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_505 = { {3, 1, 0, 0, 0, 0, 0, 0}, 4, 8, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_506 = { {2, 2, 0, 0, 0, 0, 0, 0}, 4, 8, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_507 = { {4, 0, 0, 0, 0, 0, 0, 0}, 4, 4, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_508 = { {2, 1, 0, 0, 0, 0, 0, 0}, 4, 8, 6, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_509 = { {3, 0, 0, 0, 0, 0, 0, 0}, 4, 4, 6, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_510 = { {2, 0, 0, 0, 0, 0, 0, 0}, 4, 4, 7, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_511 = { {1, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 8, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_512 = { {3, 1, 1, 1, 1, 1, 1, 1}, 12, 32, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_513 = { {4, 1, 1, 1, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_514 = { {3, 2, 1, 1, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_515 = { {5, 1, 1, 1, 1, 1, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_516 = { {3, 1, 2, 1, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_517 = { {4, 2, 1, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_518 = { {3, 3, 1, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_519 = { {6, 1, 1, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_520 = { {3, 1, 1, 2, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_521 = { {4, 1, 2, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_522 = { {3, 2, 2, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_523 = { {5, 2, 1, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_524 = { {3, 1, 3, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_525 = { {4, 3, 1, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_526 = { {3, 4, 1, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_527 = { {7, 1, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_528 = { {3, 1, 1, 1, 2, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_529 = { {4, 1, 1, 2, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_530 = { {3, 2, 1, 2, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_531 = { {5, 1, 2, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_532 = { {3, 1, 2, 2, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_533 = { {4, 2, 2, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_534 = { {3, 3, 2, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_535 = { {6, 2, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_536 = { {3, 1, 1, 3, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_537 = { {4, 1, 3, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_538 = { {3, 2, 3, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_539 = { {5, 3, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_540 = { {3, 1, 4, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_541 = { {4, 4, 1, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_542 = { {3, 5, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_543 = { {8, 1, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_544 = { {3, 1, 1, 1, 1, 2, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_545 = { {4, 1, 1, 1, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_546 = { {3, 2, 1, 1, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_547 = { {5, 1, 1, 2, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_548 = { {3, 1, 2, 1, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_549 = { {4, 2, 1, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_550 = { {3, 3, 1, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_551 = { {6, 1, 2, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_552 = { {3, 1, 1, 2, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_553 = { {4, 1, 2, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_554 = { {3, 2, 2, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_555 = { {5, 2, 2, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_556 = { {3, 1, 3, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_557 = { {4, 3, 2, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_558 = { {3, 4, 2, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_559 = { {7, 2, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_560 = { {3, 1, 1, 1, 3, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_561 = { {4, 1, 1, 3, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_562 = { {3, 2, 1, 3, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_563 = { {5, 1, 3, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_564 = { {3, 1, 2, 3, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_565 = { {4, 2, 3, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_566 = { {3, 3, 3, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_567 = { {6, 3, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_568 = { {3, 1, 1, 4, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_569 = { {4, 1, 4, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_570 = { {3, 2, 4, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_571 = { {5, 4, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_572 = { {3, 1, 5, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_573 = { {4, 5, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_574 = { {3, 6, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_575 = { {9, 1, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_576 = { {3, 1, 1, 1, 1, 1, 2, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_577 = { {4, 1, 1, 1, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_578 = { {3, 2, 1, 1, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_579 = { {5, 1, 1, 1, 2, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_580 = { {3, 1, 2, 1, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_581 = { {4, 2, 1, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_582 = { {3, 3, 1, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_583 = { {6, 1, 1, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_584 = { {3, 1, 1, 2, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_585 = { {4, 1, 2, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_586 = { {3, 2, 2, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_587 = { {5, 2, 1, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_588 = { {3, 1, 3, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_589 = { {4, 3, 1, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_590 = { {3, 4, 1, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_591 = { {7, 1, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_592 = { {3, 1, 1, 1, 2, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_593 = { {4, 1, 1, 2, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_594 = { {3, 2, 1, 2, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_595 = { {5, 1, 2, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_596 = { {3, 1, 2, 2, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_597 = { {4, 2, 2, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_598 = { {3, 3, 2, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_599 = { {6, 2, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_600 = { {3, 1, 1, 3, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_601 = { {4, 1, 3, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_602 = { {3, 2, 3, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_603 = { {5, 3, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_604 = { {3, 1, 4, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_605 = { {4, 4, 2, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_606 = { {3, 5, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_607 = { {8, 2, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_608 = { {3, 1, 1, 1, 1, 3, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_609 = { {4, 1, 1, 1, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_610 = { {3, 2, 1, 1, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_611 = { {5, 1, 1, 3, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_612 = { {3, 1, 2, 1, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_613 = { {4, 2, 1, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_614 = { {3, 3, 1, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_615 = { {6, 1, 3, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_616 = { {3, 1, 1, 2, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_617 = { {4, 1, 2, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_618 = { {3, 2, 2, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_619 = { {5, 2, 3, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_620 = { {3, 1, 3, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_621 = { {4, 3, 3, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_622 = { {3, 4, 3, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_623 = { {7, 3, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_624 = { {3, 1, 1, 1, 4, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_625 = { {4, 1, 1, 4, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_626 = { {3, 2, 1, 4, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_627 = { {5, 1, 4, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_628 = { {3, 1, 2, 4, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_629 = { {4, 2, 4, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_630 = { {3, 3, 4, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_631 = { {6, 4, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_632 = { {3, 1, 1, 5, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_633 = { {4, 1, 5, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_634 = { {3, 2, 5, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_635 = { {5, 5, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_636 = { {3, 1, 6, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_637 = { {4, 6, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_638 = { {3, 7, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_639 = { {10, 0, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_640 = { {3, 1, 1, 1, 1, 1, 1, 0}, 8, 28, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_641 = { {4, 1, 1, 1, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_642 = { {3, 2, 1, 1, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_643 = { {5, 1, 1, 1, 1, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_644 = { {3, 1, 2, 1, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_645 = { {4, 2, 1, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_646 = { {3, 3, 1, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_647 = { {6, 1, 1, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_648 = { {3, 1, 1, 2, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_649 = { {4, 1, 2, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_650 = { {3, 2, 2, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_651 = { {5, 2, 1, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_652 = { {3, 1, 3, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_653 = { {4, 3, 1, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_654 = { {3, 4, 1, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_655 = { {7, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_656 = { {3, 1, 1, 1, 2, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_657 = { {4, 1, 1, 2, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_658 = { {3, 2, 1, 2, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_659 = { {5, 1, 2, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_660 = { {3, 1, 2, 2, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_661 = { {4, 2, 2, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_662 = { {3, 3, 2, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_663 = { {6, 2, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_664 = { {3, 1, 1, 3, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_665 = { {4, 1, 3, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_666 = { {3, 2, 3, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_667 = { {5, 3, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_668 = { {3, 1, 4, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_669 = { {4, 4, 1, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_670 = { {3, 5, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_671 = { {8, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_672 = { {3, 1, 1, 1, 1, 2, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_673 = { {4, 1, 1, 1, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_674 = { {3, 2, 1, 1, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_675 = { {5, 1, 1, 2, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_676 = { {3, 1, 2, 1, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_677 = { {4, 2, 1, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_678 = { {3, 3, 1, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_679 = { {6, 1, 2, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_680 = { {3, 1, 1, 2, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_681 = { {4, 1, 2, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_682 = { {3, 2, 2, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_683 = { {5, 2, 2, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_684 = { {3, 1, 3, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_685 = { {4, 3, 2, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_686 = { {3, 4, 2, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_687 = { {7, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_688 = { {3, 1, 1, 1, 3, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_689 = { {4, 1, 1, 3, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_690 = { {3, 2, 1, 3, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_691 = { {5, 1, 3, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_692 = { {3, 1, 2, 3, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_693 = { {4, 2, 3, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_694 = { {3, 3, 3, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_695 = { {6, 3, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_696 = { {3, 1, 1, 4, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_697 = { {4, 1, 4, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_698 = { {3, 2, 4, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_699 = { {5, 4, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_700 = { {3, 1, 5, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_701 = { {4, 5, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_702 = { {3, 6, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_703 = { {9, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_704 = { {3, 1, 1, 1, 1, 1, 0, 0}, 8, 24, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_705 = { {4, 1, 1, 1, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_706 = { {3, 2, 1, 1, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_707 = { {5, 1, 1, 1, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_708 = { {3, 1, 2, 1, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_709 = { {4, 2, 1, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_710 = { {3, 3, 1, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_711 = { {6, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_712 = { {3, 1, 1, 2, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_713 = { {4, 1, 2, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_714 = { {3, 2, 2, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_715 = { {5, 2, 1, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_716 = { {3, 1, 3, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_717 = { {4, 3, 1, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_718 = { {3, 4, 1, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_719 = { {7, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_720 = { {3, 1, 1, 1, 2, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_721 = { {4, 1, 1, 2, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_722 = { {3, 2, 1, 2, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_723 = { {5, 1, 2, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_724 = { {3, 1, 2, 2, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_725 = { {4, 2, 2, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_726 = { {3, 3, 2, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_727 = { {6, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_728 = { {3, 1, 1, 3, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_729 = { {4, 1, 3, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_730 = { {3, 2, 3, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_731 = { {5, 3, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_732 = { {3, 1, 4, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_733 = { {4, 4, 0, 0, 0, 0, 0, 0}, 8, 8, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_734 = { {3, 5, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_735 = { {8, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_736 = { {3, 1, 1, 1, 1, 0, 0, 0}, 8, 20, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_737 = { {4, 1, 1, 1, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_738 = { {3, 2, 1, 1, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_739 = { {5, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_740 = { {3, 1, 2, 1, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_741 = { {4, 2, 1, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_742 = { {3, 3, 1, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_743 = { {6, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_744 = { {3, 1, 1, 2, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_745 = { {4, 1, 2, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_746 = { {3, 2, 2, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_747 = { {5, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_748 = { {3, 1, 3, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_749 = { {4, 3, 0, 0, 0, 0, 0, 0}, 8, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_750 = { {3, 4, 0, 0, 0, 0, 0, 0}, 8, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_751 = { {7, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_752 = { {3, 1, 1, 1, 0, 0, 0, 0}, 4, 16, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_753 = { {4, 1, 1, 0, 0, 0, 0, 0}, 4, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_754 = { {3, 2, 1, 0, 0, 0, 0, 0}, 4, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_755 = { {5, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 4, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_756 = { {3, 1, 2, 0, 0, 0, 0, 0}, 4, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_757 = { {4, 2, 0, 0, 0, 0, 0, 0}, 4, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_758 = { {3, 3, 0, 0, 0, 0, 0, 0}, 4, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_759 = { {6, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 4, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_760 = { {3, 1, 1, 0, 0, 0, 0, 0}, 4, 12, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_761 = { {4, 1, 0, 0, 0, 0, 0, 0}, 4, 8, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_762 = { {3, 2, 0, 0, 0, 0, 0, 0}, 4, 8, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_763 = { {5, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 5, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_764 = { {3, 1, 0, 0, 0, 0, 0, 0}, 4, 8, 6, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_765 = { {4, 0, 0, 0, 0, 0, 0, 0}, 4, 4, 6, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_766 = { {3, 0, 0, 0, 0, 0, 0, 0}, 4, 4, 7, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_767 = { {2, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 8, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_768 = { {4, 1, 1, 1, 1, 1, 1, 1}, 12, 32, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_769 = { {5, 1, 1, 1, 1, 1, 1, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_770 = { {4, 2, 1, 1, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_771 = { {6, 1, 1, 1, 1, 1, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_772 = { {4, 1, 2, 1, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_773 = { {5, 2, 1, 1, 1, 1, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_774 = { {4, 3, 1, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_775 = { {7, 1, 1, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_776 = { {4, 1, 1, 2, 1, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_777 = { {5, 1, 2, 1, 1, 1, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_778 = { {4, 2, 2, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_779 = { {6, 2, 1, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_780 = { {4, 1, 3, 1, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_781 = { {5, 3, 1, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_782 = { {4, 4, 1, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_783 = { {8, 1, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_784 = { {4, 1, 1, 1, 2, 1, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_785 = { {5, 1, 1, 2, 1, 1, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_786 = { {4, 2, 1, 2, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_787 = { {6, 1, 2, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_788 = { {4, 1, 2, 2, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_789 = { {5, 2, 2, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_790 = { {4, 3, 2, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_791 = { {7, 2, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_792 = { {4, 1, 1, 3, 1, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_793 = { {5, 1, 3, 1, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_794 = { {4, 2, 3, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_795 = { {6, 3, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_796 = { {4, 1, 4, 1, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_797 = { {5, 4, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_798 = { {4, 5, 1, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_799 = { {9, 1, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_800 = { {4, 1, 1, 1, 1, 2, 1, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_801 = { {5, 1, 1, 1, 2, 1, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_802 = { {4, 2, 1, 1, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_803 = { {6, 1, 1, 2, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_804 = { {4, 1, 2, 1, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_805 = { {5, 2, 1, 2, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_806 = { {4, 3, 1, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_807 = { {7, 1, 2, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_808 = { {4, 1, 1, 2, 2, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_809 = { {5, 1, 2, 2, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_810 = { {4, 2, 2, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_811 = { {6, 2, 2, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_812 = { {4, 1, 3, 2, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_813 = { {5, 3, 2, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_814 = { {4, 4, 2, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_815 = { {8, 2, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_816 = { {4, 1, 1, 1, 3, 1, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_817 = { {5, 1, 1, 3, 1, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_818 = { {4, 2, 1, 3, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_819 = { {6, 1, 3, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_820 = { {4, 1, 2, 3, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_821 = { {5, 2, 3, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_822 = { {4, 3, 3, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_823 = { {7, 3, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_824 = { {4, 1, 1, 4, 1, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_825 = { {5, 1, 4, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_826 = { {4, 2, 4, 1, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_827 = { {6, 4, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_828 = { {4, 1, 5, 1, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_829 = { {5, 5, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_830 = { {4, 6, 1, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_831 = { {10, 1, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_832 = { {4, 1, 1, 1, 1, 1, 2, 0}, 12, 28, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_833 = { {5, 1, 1, 1, 1, 2, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_834 = { {4, 2, 1, 1, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_835 = { {6, 1, 1, 1, 2, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_836 = { {4, 1, 2, 1, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_837 = { {5, 2, 1, 1, 2, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_838 = { {4, 3, 1, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_839 = { {7, 1, 1, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_840 = { {4, 1, 1, 2, 1, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_841 = { {5, 1, 2, 1, 2, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_842 = { {4, 2, 2, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_843 = { {6, 2, 1, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_844 = { {4, 1, 3, 1, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_845 = { {5, 3, 1, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_846 = { {4, 4, 1, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_847 = { {8, 1, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_848 = { {4, 1, 1, 1, 2, 2, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_849 = { {5, 1, 1, 2, 2, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_850 = { {4, 2, 1, 2, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_851 = { {6, 1, 2, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_852 = { {4, 1, 2, 2, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_853 = { {5, 2, 2, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_854 = { {4, 3, 2, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_855 = { {7, 2, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_856 = { {4, 1, 1, 3, 2, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_857 = { {5, 1, 3, 2, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_858 = { {4, 2, 3, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_859 = { {6, 3, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_860 = { {4, 1, 4, 2, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_861 = { {5, 4, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_862 = { {4, 5, 2, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_863 = { {9, 2, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_864 = { {4, 1, 1, 1, 1, 3, 0, 0}, 12, 24, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_865 = { {5, 1, 1, 1, 3, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_866 = { {4, 2, 1, 1, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_867 = { {6, 1, 1, 3, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_868 = { {4, 1, 2, 1, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_869 = { {5, 2, 1, 3, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_870 = { {4, 3, 1, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_871 = { {7, 1, 3, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_872 = { {4, 1, 1, 2, 3, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_873 = { {5, 1, 2, 3, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_874 = { {4, 2, 2, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_875 = { {6, 2, 3, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_876 = { {4, 1, 3, 3, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_877 = { {5, 3, 3, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_878 = { {4, 4, 3, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_879 = { {8, 3, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_880 = { {4, 1, 1, 1, 4, 0, 0, 0}, 12, 20, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_881 = { {5, 1, 1, 4, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_882 = { {4, 2, 1, 4, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_883 = { {6, 1, 4, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_884 = { {4, 1, 2, 4, 0, 0, 0, 0}, 12, 16, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_885 = { {5, 2, 4, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_886 = { {4, 3, 4, 0, 0, 0, 0, 0}, 12, 12, 0, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_887 = { {7, 4, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_888 = { {4, 1, 1, 5, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_889 = { {5, 1, 5, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_890 = { {4, 2, 5, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_891 = { {6, 5, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_892 = { {4, 1, 6, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_893 = { {5, 6, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_894 = { {4, 7, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_895 = { {11, 0, 0, 0, 0, 0, 0, 0}, 4, 0, 0, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_896 = { {4, 1, 1, 1, 1, 1, 1, 0}, 8, 28, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_897 = { {5, 1, 1, 1, 1, 1, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_898 = { {4, 2, 1, 1, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_899 = { {6, 1, 1, 1, 1, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_900 = { {4, 1, 2, 1, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_901 = { {5, 2, 1, 1, 1, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_902 = { {4, 3, 1, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_903 = { {7, 1, 1, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_904 = { {4, 1, 1, 2, 1, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_905 = { {5, 1, 2, 1, 1, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_906 = { {4, 2, 2, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_907 = { {6, 2, 1, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_908 = { {4, 1, 3, 1, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_909 = { {5, 3, 1, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_910 = { {4, 4, 1, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_911 = { {8, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_912 = { {4, 1, 1, 1, 2, 1, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_913 = { {5, 1, 1, 2, 1, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_914 = { {4, 2, 1, 2, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_915 = { {6, 1, 2, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_916 = { {4, 1, 2, 2, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_917 = { {5, 2, 2, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_918 = { {4, 3, 2, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_919 = { {7, 2, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_920 = { {4, 1, 1, 3, 1, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_921 = { {5, 1, 3, 1, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_922 = { {4, 2, 3, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_923 = { {6, 3, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_924 = { {4, 1, 4, 1, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_925 = { {5, 4, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_926 = { {4, 5, 1, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_927 = { {9, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_928 = { {4, 1, 1, 1, 1, 2, 0, 0}, 8, 24, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_929 = { {5, 1, 1, 1, 2, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_930 = { {4, 2, 1, 1, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_931 = { {6, 1, 1, 2, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_932 = { {4, 1, 2, 1, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_933 = { {5, 2, 1, 2, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_934 = { {4, 3, 1, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_935 = { {7, 1, 2, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_936 = { {4, 1, 1, 2, 2, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_937 = { {5, 1, 2, 2, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_938 = { {4, 2, 2, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_939 = { {6, 2, 2, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_940 = { {4, 1, 3, 2, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_941 = { {5, 3, 2, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_942 = { {4, 4, 2, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_943 = { {8, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_944 = { {4, 1, 1, 1, 3, 0, 0, 0}, 8, 20, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_945 = { {5, 1, 1, 3, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_946 = { {4, 2, 1, 3, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_947 = { {6, 1, 3, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_948 = { {4, 1, 2, 3, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_949 = { {5, 2, 3, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_950 = { {4, 3, 3, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_951 = { {7, 3, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_952 = { {4, 1, 1, 4, 0, 0, 0, 0}, 8, 16, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_953 = { {5, 1, 4, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_954 = { {4, 2, 4, 0, 0, 0, 0, 0}, 8, 12, 1, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_955 = { {6, 4, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_956 = { {4, 1, 5, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_957 = { {5, 5, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_958 = { {4, 6, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_959 = { {10, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 1, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_960 = { {4, 1, 1, 1, 1, 1, 0, 0}, 8, 24, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_961 = { {5, 1, 1, 1, 1, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_962 = { {4, 2, 1, 1, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_963 = { {6, 1, 1, 1, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_964 = { {4, 1, 2, 1, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_965 = { {5, 2, 1, 1, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_966 = { {4, 3, 1, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_967 = { {7, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_968 = { {4, 1, 1, 2, 1, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_969 = { {5, 1, 2, 1, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_970 = { {4, 2, 2, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_971 = { {6, 2, 1, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_972 = { {4, 1, 3, 1, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_973 = { {5, 3, 1, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_974 = { {4, 4, 1, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_975 = { {8, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_976 = { {4, 1, 1, 1, 2, 0, 0, 0}, 8, 20, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_977 = { {5, 1, 1, 2, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_978 = { {4, 2, 1, 2, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_979 = { {6, 1, 2, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_980 = { {4, 1, 2, 2, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_981 = { {5, 2, 2, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_982 = { {4, 3, 2, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_983 = { {7, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_984 = { {4, 1, 1, 3, 0, 0, 0, 0}, 8, 16, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_985 = { {5, 1, 3, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_986 = { {4, 2, 3, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_987 = { {6, 3, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_988 = { {4, 1, 4, 0, 0, 0, 0, 0}, 8, 12, 2, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_989 = { {5, 4, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_990 = { {4, 5, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_991 = { {9, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 2, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_992 = { {4, 1, 1, 1, 1, 0, 0, 0}, 8, 20, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_993 = { {5, 1, 1, 1, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_994 = { {4, 2, 1, 1, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_995 = { {6, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_996 = { {4, 1, 2, 1, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_997 = { {5, 2, 1, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_998 = { {4, 3, 1, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_999 = { {7, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1000 = { {4, 1, 1, 2, 0, 0, 0, 0}, 8, 16, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1001 = { {5, 1, 2, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1002 = { {4, 2, 2, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1003 = { {6, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1004 = { {4, 1, 3, 0, 0, 0, 0, 0}, 8, 12, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1005 = { {5, 3, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1006 = { {4, 4, 0, 0, 0, 0, 0, 0}, 8, 8, 3, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1007 = { {8, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 3, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1008 = { {4, 1, 1, 1, 0, 0, 0, 0}, 4, 16, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1009 = { {5, 1, 1, 0, 0, 0, 0, 0}, 0, 0, 4, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1010 = { {4, 2, 1, 0, 0, 0, 0, 0}, 4, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1011 = { {6, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 4, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1012 = { {4, 1, 2, 0, 0, 0, 0, 0}, 4, 12, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1013 = { {5, 2, 0, 0, 0, 0, 0, 0}, 0, 0, 4, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1014 = { {4, 3, 0, 0, 0, 0, 0, 0}, 4, 8, 4, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1015 = { {7, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 4, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1016 = { {4, 1, 1, 0, 0, 0, 0, 0}, 4, 12, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1017 = { {5, 1, 0, 0, 0, 0, 0, 0}, 0, 0, 5, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1018 = { {4, 2, 0, 0, 0, 0, 0, 0}, 4, 8, 5, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1019 = { {6, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 5, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1020 = { {4, 1, 0, 0, 0, 0, 0, 0}, 4, 8, 6, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1021 = { {5, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 6, false };
static KS8CUUnpackInfo KS8CUUnpackInfo_1022 = { {4, 0, 0, 0, 0, 0, 0, 0}, 4, 4, 7, true };
static KS8CUUnpackInfo KS8CUUnpackInfo_1023 = { {3, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 8, false };

static KS8CUUnpackInfo KS8CUUnpackInfoArr[1024] = {
			KS8CUUnpackInfo_0, KS8CUUnpackInfo_1, KS8CUUnpackInfo_2, KS8CUUnpackInfo_3,
			KS8CUUnpackInfo_4, KS8CUUnpackInfo_5, KS8CUUnpackInfo_6, KS8CUUnpackInfo_7,
			KS8CUUnpackInfo_8, KS8CUUnpackInfo_9, KS8CUUnpackInfo_10, KS8CUUnpackInfo_11,
			KS8CUUnpackInfo_12, KS8CUUnpackInfo_13, KS8CUUnpackInfo_14, KS8CUUnpackInfo_15,
			KS8CUUnpackInfo_16, KS8CUUnpackInfo_17, KS8CUUnpackInfo_18, KS8CUUnpackInfo_19,
			KS8CUUnpackInfo_20, KS8CUUnpackInfo_21, KS8CUUnpackInfo_22, KS8CUUnpackInfo_23,
			KS8CUUnpackInfo_24, KS8CUUnpackInfo_25, KS8CUUnpackInfo_26, KS8CUUnpackInfo_27,
			KS8CUUnpackInfo_28, KS8CUUnpackInfo_29, KS8CUUnpackInfo_30, KS8CUUnpackInfo_31,
			KS8CUUnpackInfo_32, KS8CUUnpackInfo_33, KS8CUUnpackInfo_34, KS8CUUnpackInfo_35,
			KS8CUUnpackInfo_36, KS8CUUnpackInfo_37, KS8CUUnpackInfo_38, KS8CUUnpackInfo_39,
			KS8CUUnpackInfo_40, KS8CUUnpackInfo_41, KS8CUUnpackInfo_42, KS8CUUnpackInfo_43,
			KS8CUUnpackInfo_44, KS8CUUnpackInfo_45, KS8CUUnpackInfo_46, KS8CUUnpackInfo_47,
			KS8CUUnpackInfo_48, KS8CUUnpackInfo_49, KS8CUUnpackInfo_50, KS8CUUnpackInfo_51,
			KS8CUUnpackInfo_52, KS8CUUnpackInfo_53, KS8CUUnpackInfo_54, KS8CUUnpackInfo_55,
			KS8CUUnpackInfo_56, KS8CUUnpackInfo_57, KS8CUUnpackInfo_58, KS8CUUnpackInfo_59,
			KS8CUUnpackInfo_60, KS8CUUnpackInfo_61, KS8CUUnpackInfo_62, KS8CUUnpackInfo_63,
			KS8CUUnpackInfo_64, KS8CUUnpackInfo_65, KS8CUUnpackInfo_66, KS8CUUnpackInfo_67,
			KS8CUUnpackInfo_68, KS8CUUnpackInfo_69, KS8CUUnpackInfo_70, KS8CUUnpackInfo_71,
			KS8CUUnpackInfo_72, KS8CUUnpackInfo_73, KS8CUUnpackInfo_74, KS8CUUnpackInfo_75,
			KS8CUUnpackInfo_76, KS8CUUnpackInfo_77, KS8CUUnpackInfo_78, KS8CUUnpackInfo_79,
			KS8CUUnpackInfo_80, KS8CUUnpackInfo_81, KS8CUUnpackInfo_82, KS8CUUnpackInfo_83,
			KS8CUUnpackInfo_84, KS8CUUnpackInfo_85, KS8CUUnpackInfo_86, KS8CUUnpackInfo_87,
			KS8CUUnpackInfo_88, KS8CUUnpackInfo_89, KS8CUUnpackInfo_90, KS8CUUnpackInfo_91,
			KS8CUUnpackInfo_92, KS8CUUnpackInfo_93, KS8CUUnpackInfo_94, KS8CUUnpackInfo_95,
			KS8CUUnpackInfo_96, KS8CUUnpackInfo_97, KS8CUUnpackInfo_98, KS8CUUnpackInfo_99,
			KS8CUUnpackInfo_100, KS8CUUnpackInfo_101, KS8CUUnpackInfo_102, KS8CUUnpackInfo_103,
			KS8CUUnpackInfo_104, KS8CUUnpackInfo_105, KS8CUUnpackInfo_106, KS8CUUnpackInfo_107,
			KS8CUUnpackInfo_108, KS8CUUnpackInfo_109, KS8CUUnpackInfo_110, KS8CUUnpackInfo_111,
			KS8CUUnpackInfo_112, KS8CUUnpackInfo_113, KS8CUUnpackInfo_114, KS8CUUnpackInfo_115,
			KS8CUUnpackInfo_116, KS8CUUnpackInfo_117, KS8CUUnpackInfo_118, KS8CUUnpackInfo_119,
			KS8CUUnpackInfo_120, KS8CUUnpackInfo_121, KS8CUUnpackInfo_122, KS8CUUnpackInfo_123,
			KS8CUUnpackInfo_124, KS8CUUnpackInfo_125, KS8CUUnpackInfo_126, KS8CUUnpackInfo_127,
			KS8CUUnpackInfo_128, KS8CUUnpackInfo_129, KS8CUUnpackInfo_130, KS8CUUnpackInfo_131,
			KS8CUUnpackInfo_132, KS8CUUnpackInfo_133, KS8CUUnpackInfo_134, KS8CUUnpackInfo_135,
			KS8CUUnpackInfo_136, KS8CUUnpackInfo_137, KS8CUUnpackInfo_138, KS8CUUnpackInfo_139,
			KS8CUUnpackInfo_140, KS8CUUnpackInfo_141, KS8CUUnpackInfo_142, KS8CUUnpackInfo_143,
			KS8CUUnpackInfo_144, KS8CUUnpackInfo_145, KS8CUUnpackInfo_146, KS8CUUnpackInfo_147,
			KS8CUUnpackInfo_148, KS8CUUnpackInfo_149, KS8CUUnpackInfo_150, KS8CUUnpackInfo_151,
			KS8CUUnpackInfo_152, KS8CUUnpackInfo_153, KS8CUUnpackInfo_154, KS8CUUnpackInfo_155,
			KS8CUUnpackInfo_156, KS8CUUnpackInfo_157, KS8CUUnpackInfo_158, KS8CUUnpackInfo_159,
			KS8CUUnpackInfo_160, KS8CUUnpackInfo_161, KS8CUUnpackInfo_162, KS8CUUnpackInfo_163,
			KS8CUUnpackInfo_164, KS8CUUnpackInfo_165, KS8CUUnpackInfo_166, KS8CUUnpackInfo_167,
			KS8CUUnpackInfo_168, KS8CUUnpackInfo_169, KS8CUUnpackInfo_170, KS8CUUnpackInfo_171,
			KS8CUUnpackInfo_172, KS8CUUnpackInfo_173, KS8CUUnpackInfo_174, KS8CUUnpackInfo_175,
			KS8CUUnpackInfo_176, KS8CUUnpackInfo_177, KS8CUUnpackInfo_178, KS8CUUnpackInfo_179,
			KS8CUUnpackInfo_180, KS8CUUnpackInfo_181, KS8CUUnpackInfo_182, KS8CUUnpackInfo_183,
			KS8CUUnpackInfo_184, KS8CUUnpackInfo_185, KS8CUUnpackInfo_186, KS8CUUnpackInfo_187,
			KS8CUUnpackInfo_188, KS8CUUnpackInfo_189, KS8CUUnpackInfo_190, KS8CUUnpackInfo_191,
			KS8CUUnpackInfo_192, KS8CUUnpackInfo_193, KS8CUUnpackInfo_194, KS8CUUnpackInfo_195,
			KS8CUUnpackInfo_196, KS8CUUnpackInfo_197, KS8CUUnpackInfo_198, KS8CUUnpackInfo_199,
			KS8CUUnpackInfo_200, KS8CUUnpackInfo_201, KS8CUUnpackInfo_202, KS8CUUnpackInfo_203,
			KS8CUUnpackInfo_204, KS8CUUnpackInfo_205, KS8CUUnpackInfo_206, KS8CUUnpackInfo_207,
			KS8CUUnpackInfo_208, KS8CUUnpackInfo_209, KS8CUUnpackInfo_210, KS8CUUnpackInfo_211,
			KS8CUUnpackInfo_212, KS8CUUnpackInfo_213, KS8CUUnpackInfo_214, KS8CUUnpackInfo_215,
			KS8CUUnpackInfo_216, KS8CUUnpackInfo_217, KS8CUUnpackInfo_218, KS8CUUnpackInfo_219,
			KS8CUUnpackInfo_220, KS8CUUnpackInfo_221, KS8CUUnpackInfo_222, KS8CUUnpackInfo_223,
			KS8CUUnpackInfo_224, KS8CUUnpackInfo_225, KS8CUUnpackInfo_226, KS8CUUnpackInfo_227,
			KS8CUUnpackInfo_228, KS8CUUnpackInfo_229, KS8CUUnpackInfo_230, KS8CUUnpackInfo_231,
			KS8CUUnpackInfo_232, KS8CUUnpackInfo_233, KS8CUUnpackInfo_234, KS8CUUnpackInfo_235,
			KS8CUUnpackInfo_236, KS8CUUnpackInfo_237, KS8CUUnpackInfo_238, KS8CUUnpackInfo_239,
			KS8CUUnpackInfo_240, KS8CUUnpackInfo_241, KS8CUUnpackInfo_242, KS8CUUnpackInfo_243,
			KS8CUUnpackInfo_244, KS8CUUnpackInfo_245, KS8CUUnpackInfo_246, KS8CUUnpackInfo_247,
			KS8CUUnpackInfo_248, KS8CUUnpackInfo_249, KS8CUUnpackInfo_250, KS8CUUnpackInfo_251,
			KS8CUUnpackInfo_252, KS8CUUnpackInfo_253, KS8CUUnpackInfo_254, KS8CUUnpackInfo_255,
			KS8CUUnpackInfo_256, KS8CUUnpackInfo_257, KS8CUUnpackInfo_258, KS8CUUnpackInfo_259,
			KS8CUUnpackInfo_260, KS8CUUnpackInfo_261, KS8CUUnpackInfo_262, KS8CUUnpackInfo_263,
			KS8CUUnpackInfo_264, KS8CUUnpackInfo_265, KS8CUUnpackInfo_266, KS8CUUnpackInfo_267,
			KS8CUUnpackInfo_268, KS8CUUnpackInfo_269, KS8CUUnpackInfo_270, KS8CUUnpackInfo_271,
			KS8CUUnpackInfo_272, KS8CUUnpackInfo_273, KS8CUUnpackInfo_274, KS8CUUnpackInfo_275,
			KS8CUUnpackInfo_276, KS8CUUnpackInfo_277, KS8CUUnpackInfo_278, KS8CUUnpackInfo_279,
			KS8CUUnpackInfo_280, KS8CUUnpackInfo_281, KS8CUUnpackInfo_282, KS8CUUnpackInfo_283,
			KS8CUUnpackInfo_284, KS8CUUnpackInfo_285, KS8CUUnpackInfo_286, KS8CUUnpackInfo_287,
			KS8CUUnpackInfo_288, KS8CUUnpackInfo_289, KS8CUUnpackInfo_290, KS8CUUnpackInfo_291,
			KS8CUUnpackInfo_292, KS8CUUnpackInfo_293, KS8CUUnpackInfo_294, KS8CUUnpackInfo_295,
			KS8CUUnpackInfo_296, KS8CUUnpackInfo_297, KS8CUUnpackInfo_298, KS8CUUnpackInfo_299,
			KS8CUUnpackInfo_300, KS8CUUnpackInfo_301, KS8CUUnpackInfo_302, KS8CUUnpackInfo_303,
			KS8CUUnpackInfo_304, KS8CUUnpackInfo_305, KS8CUUnpackInfo_306, KS8CUUnpackInfo_307,
			KS8CUUnpackInfo_308, KS8CUUnpackInfo_309, KS8CUUnpackInfo_310, KS8CUUnpackInfo_311,
			KS8CUUnpackInfo_312, KS8CUUnpackInfo_313, KS8CUUnpackInfo_314, KS8CUUnpackInfo_315,
			KS8CUUnpackInfo_316, KS8CUUnpackInfo_317, KS8CUUnpackInfo_318, KS8CUUnpackInfo_319,
			KS8CUUnpackInfo_320, KS8CUUnpackInfo_321, KS8CUUnpackInfo_322, KS8CUUnpackInfo_323,
			KS8CUUnpackInfo_324, KS8CUUnpackInfo_325, KS8CUUnpackInfo_326, KS8CUUnpackInfo_327,
			KS8CUUnpackInfo_328, KS8CUUnpackInfo_329, KS8CUUnpackInfo_330, KS8CUUnpackInfo_331,
			KS8CUUnpackInfo_332, KS8CUUnpackInfo_333, KS8CUUnpackInfo_334, KS8CUUnpackInfo_335,
			KS8CUUnpackInfo_336, KS8CUUnpackInfo_337, KS8CUUnpackInfo_338, KS8CUUnpackInfo_339,
			KS8CUUnpackInfo_340, KS8CUUnpackInfo_341, KS8CUUnpackInfo_342, KS8CUUnpackInfo_343,
			KS8CUUnpackInfo_344, KS8CUUnpackInfo_345, KS8CUUnpackInfo_346, KS8CUUnpackInfo_347,
			KS8CUUnpackInfo_348, KS8CUUnpackInfo_349, KS8CUUnpackInfo_350, KS8CUUnpackInfo_351,
			KS8CUUnpackInfo_352, KS8CUUnpackInfo_353, KS8CUUnpackInfo_354, KS8CUUnpackInfo_355,
			KS8CUUnpackInfo_356, KS8CUUnpackInfo_357, KS8CUUnpackInfo_358, KS8CUUnpackInfo_359,
			KS8CUUnpackInfo_360, KS8CUUnpackInfo_361, KS8CUUnpackInfo_362, KS8CUUnpackInfo_363,
			KS8CUUnpackInfo_364, KS8CUUnpackInfo_365, KS8CUUnpackInfo_366, KS8CUUnpackInfo_367,
			KS8CUUnpackInfo_368, KS8CUUnpackInfo_369, KS8CUUnpackInfo_370, KS8CUUnpackInfo_371,
			KS8CUUnpackInfo_372, KS8CUUnpackInfo_373, KS8CUUnpackInfo_374, KS8CUUnpackInfo_375,
			KS8CUUnpackInfo_376, KS8CUUnpackInfo_377, KS8CUUnpackInfo_378, KS8CUUnpackInfo_379,
			KS8CUUnpackInfo_380, KS8CUUnpackInfo_381, KS8CUUnpackInfo_382, KS8CUUnpackInfo_383,
			KS8CUUnpackInfo_384, KS8CUUnpackInfo_385, KS8CUUnpackInfo_386, KS8CUUnpackInfo_387,
			KS8CUUnpackInfo_388, KS8CUUnpackInfo_389, KS8CUUnpackInfo_390, KS8CUUnpackInfo_391,
			KS8CUUnpackInfo_392, KS8CUUnpackInfo_393, KS8CUUnpackInfo_394, KS8CUUnpackInfo_395,
			KS8CUUnpackInfo_396, KS8CUUnpackInfo_397, KS8CUUnpackInfo_398, KS8CUUnpackInfo_399,
			KS8CUUnpackInfo_400, KS8CUUnpackInfo_401, KS8CUUnpackInfo_402, KS8CUUnpackInfo_403,
			KS8CUUnpackInfo_404, KS8CUUnpackInfo_405, KS8CUUnpackInfo_406, KS8CUUnpackInfo_407,
			KS8CUUnpackInfo_408, KS8CUUnpackInfo_409, KS8CUUnpackInfo_410, KS8CUUnpackInfo_411,
			KS8CUUnpackInfo_412, KS8CUUnpackInfo_413, KS8CUUnpackInfo_414, KS8CUUnpackInfo_415,
			KS8CUUnpackInfo_416, KS8CUUnpackInfo_417, KS8CUUnpackInfo_418, KS8CUUnpackInfo_419,
			KS8CUUnpackInfo_420, KS8CUUnpackInfo_421, KS8CUUnpackInfo_422, KS8CUUnpackInfo_423,
			KS8CUUnpackInfo_424, KS8CUUnpackInfo_425, KS8CUUnpackInfo_426, KS8CUUnpackInfo_427,
			KS8CUUnpackInfo_428, KS8CUUnpackInfo_429, KS8CUUnpackInfo_430, KS8CUUnpackInfo_431,
			KS8CUUnpackInfo_432, KS8CUUnpackInfo_433, KS8CUUnpackInfo_434, KS8CUUnpackInfo_435,
			KS8CUUnpackInfo_436, KS8CUUnpackInfo_437, KS8CUUnpackInfo_438, KS8CUUnpackInfo_439,
			KS8CUUnpackInfo_440, KS8CUUnpackInfo_441, KS8CUUnpackInfo_442, KS8CUUnpackInfo_443,
			KS8CUUnpackInfo_444, KS8CUUnpackInfo_445, KS8CUUnpackInfo_446, KS8CUUnpackInfo_447,
			KS8CUUnpackInfo_448, KS8CUUnpackInfo_449, KS8CUUnpackInfo_450, KS8CUUnpackInfo_451,
			KS8CUUnpackInfo_452, KS8CUUnpackInfo_453, KS8CUUnpackInfo_454, KS8CUUnpackInfo_455,
			KS8CUUnpackInfo_456, KS8CUUnpackInfo_457, KS8CUUnpackInfo_458, KS8CUUnpackInfo_459,
			KS8CUUnpackInfo_460, KS8CUUnpackInfo_461, KS8CUUnpackInfo_462, KS8CUUnpackInfo_463,
			KS8CUUnpackInfo_464, KS8CUUnpackInfo_465, KS8CUUnpackInfo_466, KS8CUUnpackInfo_467,
			KS8CUUnpackInfo_468, KS8CUUnpackInfo_469, KS8CUUnpackInfo_470, KS8CUUnpackInfo_471,
			KS8CUUnpackInfo_472, KS8CUUnpackInfo_473, KS8CUUnpackInfo_474, KS8CUUnpackInfo_475,
			KS8CUUnpackInfo_476, KS8CUUnpackInfo_477, KS8CUUnpackInfo_478, KS8CUUnpackInfo_479,
			KS8CUUnpackInfo_480, KS8CUUnpackInfo_481, KS8CUUnpackInfo_482, KS8CUUnpackInfo_483,
			KS8CUUnpackInfo_484, KS8CUUnpackInfo_485, KS8CUUnpackInfo_486, KS8CUUnpackInfo_487,
			KS8CUUnpackInfo_488, KS8CUUnpackInfo_489, KS8CUUnpackInfo_490, KS8CUUnpackInfo_491,
			KS8CUUnpackInfo_492, KS8CUUnpackInfo_493, KS8CUUnpackInfo_494, KS8CUUnpackInfo_495,
			KS8CUUnpackInfo_496, KS8CUUnpackInfo_497, KS8CUUnpackInfo_498, KS8CUUnpackInfo_499,
			KS8CUUnpackInfo_500, KS8CUUnpackInfo_501, KS8CUUnpackInfo_502, KS8CUUnpackInfo_503,
			KS8CUUnpackInfo_504, KS8CUUnpackInfo_505, KS8CUUnpackInfo_506, KS8CUUnpackInfo_507,
			KS8CUUnpackInfo_508, KS8CUUnpackInfo_509, KS8CUUnpackInfo_510, KS8CUUnpackInfo_511,
			KS8CUUnpackInfo_512, KS8CUUnpackInfo_513, KS8CUUnpackInfo_514, KS8CUUnpackInfo_515,
			KS8CUUnpackInfo_516, KS8CUUnpackInfo_517, KS8CUUnpackInfo_518, KS8CUUnpackInfo_519,
			KS8CUUnpackInfo_520, KS8CUUnpackInfo_521, KS8CUUnpackInfo_522, KS8CUUnpackInfo_523,
			KS8CUUnpackInfo_524, KS8CUUnpackInfo_525, KS8CUUnpackInfo_526, KS8CUUnpackInfo_527,
			KS8CUUnpackInfo_528, KS8CUUnpackInfo_529, KS8CUUnpackInfo_530, KS8CUUnpackInfo_531,
			KS8CUUnpackInfo_532, KS8CUUnpackInfo_533, KS8CUUnpackInfo_534, KS8CUUnpackInfo_535,
			KS8CUUnpackInfo_536, KS8CUUnpackInfo_537, KS8CUUnpackInfo_538, KS8CUUnpackInfo_539,
			KS8CUUnpackInfo_540, KS8CUUnpackInfo_541, KS8CUUnpackInfo_542, KS8CUUnpackInfo_543,
			KS8CUUnpackInfo_544, KS8CUUnpackInfo_545, KS8CUUnpackInfo_546, KS8CUUnpackInfo_547,
			KS8CUUnpackInfo_548, KS8CUUnpackInfo_549, KS8CUUnpackInfo_550, KS8CUUnpackInfo_551,
			KS8CUUnpackInfo_552, KS8CUUnpackInfo_553, KS8CUUnpackInfo_554, KS8CUUnpackInfo_555,
			KS8CUUnpackInfo_556, KS8CUUnpackInfo_557, KS8CUUnpackInfo_558, KS8CUUnpackInfo_559,
			KS8CUUnpackInfo_560, KS8CUUnpackInfo_561, KS8CUUnpackInfo_562, KS8CUUnpackInfo_563,
			KS8CUUnpackInfo_564, KS8CUUnpackInfo_565, KS8CUUnpackInfo_566, KS8CUUnpackInfo_567,
			KS8CUUnpackInfo_568, KS8CUUnpackInfo_569, KS8CUUnpackInfo_570, KS8CUUnpackInfo_571,
			KS8CUUnpackInfo_572, KS8CUUnpackInfo_573, KS8CUUnpackInfo_574, KS8CUUnpackInfo_575,
			KS8CUUnpackInfo_576, KS8CUUnpackInfo_577, KS8CUUnpackInfo_578, KS8CUUnpackInfo_579,
			KS8CUUnpackInfo_580, KS8CUUnpackInfo_581, KS8CUUnpackInfo_582, KS8CUUnpackInfo_583,
			KS8CUUnpackInfo_584, KS8CUUnpackInfo_585, KS8CUUnpackInfo_586, KS8CUUnpackInfo_587,
			KS8CUUnpackInfo_588, KS8CUUnpackInfo_589, KS8CUUnpackInfo_590, KS8CUUnpackInfo_591,
			KS8CUUnpackInfo_592, KS8CUUnpackInfo_593, KS8CUUnpackInfo_594, KS8CUUnpackInfo_595,
			KS8CUUnpackInfo_596, KS8CUUnpackInfo_597, KS8CUUnpackInfo_598, KS8CUUnpackInfo_599,
			KS8CUUnpackInfo_600, KS8CUUnpackInfo_601, KS8CUUnpackInfo_602, KS8CUUnpackInfo_603,
			KS8CUUnpackInfo_604, KS8CUUnpackInfo_605, KS8CUUnpackInfo_606, KS8CUUnpackInfo_607,
			KS8CUUnpackInfo_608, KS8CUUnpackInfo_609, KS8CUUnpackInfo_610, KS8CUUnpackInfo_611,
			KS8CUUnpackInfo_612, KS8CUUnpackInfo_613, KS8CUUnpackInfo_614, KS8CUUnpackInfo_615,
			KS8CUUnpackInfo_616, KS8CUUnpackInfo_617, KS8CUUnpackInfo_618, KS8CUUnpackInfo_619,
			KS8CUUnpackInfo_620, KS8CUUnpackInfo_621, KS8CUUnpackInfo_622, KS8CUUnpackInfo_623,
			KS8CUUnpackInfo_624, KS8CUUnpackInfo_625, KS8CUUnpackInfo_626, KS8CUUnpackInfo_627,
			KS8CUUnpackInfo_628, KS8CUUnpackInfo_629, KS8CUUnpackInfo_630, KS8CUUnpackInfo_631,
			KS8CUUnpackInfo_632, KS8CUUnpackInfo_633, KS8CUUnpackInfo_634, KS8CUUnpackInfo_635,
			KS8CUUnpackInfo_636, KS8CUUnpackInfo_637, KS8CUUnpackInfo_638, KS8CUUnpackInfo_639,
			KS8CUUnpackInfo_640, KS8CUUnpackInfo_641, KS8CUUnpackInfo_642, KS8CUUnpackInfo_643,
			KS8CUUnpackInfo_644, KS8CUUnpackInfo_645, KS8CUUnpackInfo_646, KS8CUUnpackInfo_647,
			KS8CUUnpackInfo_648, KS8CUUnpackInfo_649, KS8CUUnpackInfo_650, KS8CUUnpackInfo_651,
			KS8CUUnpackInfo_652, KS8CUUnpackInfo_653, KS8CUUnpackInfo_654, KS8CUUnpackInfo_655,
			KS8CUUnpackInfo_656, KS8CUUnpackInfo_657, KS8CUUnpackInfo_658, KS8CUUnpackInfo_659,
			KS8CUUnpackInfo_660, KS8CUUnpackInfo_661, KS8CUUnpackInfo_662, KS8CUUnpackInfo_663,
			KS8CUUnpackInfo_664, KS8CUUnpackInfo_665, KS8CUUnpackInfo_666, KS8CUUnpackInfo_667,
			KS8CUUnpackInfo_668, KS8CUUnpackInfo_669, KS8CUUnpackInfo_670, KS8CUUnpackInfo_671,
			KS8CUUnpackInfo_672, KS8CUUnpackInfo_673, KS8CUUnpackInfo_674, KS8CUUnpackInfo_675,
			KS8CUUnpackInfo_676, KS8CUUnpackInfo_677, KS8CUUnpackInfo_678, KS8CUUnpackInfo_679,
			KS8CUUnpackInfo_680, KS8CUUnpackInfo_681, KS8CUUnpackInfo_682, KS8CUUnpackInfo_683,
			KS8CUUnpackInfo_684, KS8CUUnpackInfo_685, KS8CUUnpackInfo_686, KS8CUUnpackInfo_687,
			KS8CUUnpackInfo_688, KS8CUUnpackInfo_689, KS8CUUnpackInfo_690, KS8CUUnpackInfo_691,
			KS8CUUnpackInfo_692, KS8CUUnpackInfo_693, KS8CUUnpackInfo_694, KS8CUUnpackInfo_695,
			KS8CUUnpackInfo_696, KS8CUUnpackInfo_697, KS8CUUnpackInfo_698, KS8CUUnpackInfo_699,
			KS8CUUnpackInfo_700, KS8CUUnpackInfo_701, KS8CUUnpackInfo_702, KS8CUUnpackInfo_703,
			KS8CUUnpackInfo_704, KS8CUUnpackInfo_705, KS8CUUnpackInfo_706, KS8CUUnpackInfo_707,
			KS8CUUnpackInfo_708, KS8CUUnpackInfo_709, KS8CUUnpackInfo_710, KS8CUUnpackInfo_711,
			KS8CUUnpackInfo_712, KS8CUUnpackInfo_713, KS8CUUnpackInfo_714, KS8CUUnpackInfo_715,
			KS8CUUnpackInfo_716, KS8CUUnpackInfo_717, KS8CUUnpackInfo_718, KS8CUUnpackInfo_719,
			KS8CUUnpackInfo_720, KS8CUUnpackInfo_721, KS8CUUnpackInfo_722, KS8CUUnpackInfo_723,
			KS8CUUnpackInfo_724, KS8CUUnpackInfo_725, KS8CUUnpackInfo_726, KS8CUUnpackInfo_727,
			KS8CUUnpackInfo_728, KS8CUUnpackInfo_729, KS8CUUnpackInfo_730, KS8CUUnpackInfo_731,
			KS8CUUnpackInfo_732, KS8CUUnpackInfo_733, KS8CUUnpackInfo_734, KS8CUUnpackInfo_735,
			KS8CUUnpackInfo_736, KS8CUUnpackInfo_737, KS8CUUnpackInfo_738, KS8CUUnpackInfo_739,
			KS8CUUnpackInfo_740, KS8CUUnpackInfo_741, KS8CUUnpackInfo_742, KS8CUUnpackInfo_743,
			KS8CUUnpackInfo_744, KS8CUUnpackInfo_745, KS8CUUnpackInfo_746, KS8CUUnpackInfo_747,
			KS8CUUnpackInfo_748, KS8CUUnpackInfo_749, KS8CUUnpackInfo_750, KS8CUUnpackInfo_751,
			KS8CUUnpackInfo_752, KS8CUUnpackInfo_753, KS8CUUnpackInfo_754, KS8CUUnpackInfo_755,
			KS8CUUnpackInfo_756, KS8CUUnpackInfo_757, KS8CUUnpackInfo_758, KS8CUUnpackInfo_759,
			KS8CUUnpackInfo_760, KS8CUUnpackInfo_761, KS8CUUnpackInfo_762, KS8CUUnpackInfo_763,
			KS8CUUnpackInfo_764, KS8CUUnpackInfo_765, KS8CUUnpackInfo_766, KS8CUUnpackInfo_767,
			KS8CUUnpackInfo_768, KS8CUUnpackInfo_769, KS8CUUnpackInfo_770, KS8CUUnpackInfo_771,
			KS8CUUnpackInfo_772, KS8CUUnpackInfo_773, KS8CUUnpackInfo_774, KS8CUUnpackInfo_775,
			KS8CUUnpackInfo_776, KS8CUUnpackInfo_777, KS8CUUnpackInfo_778, KS8CUUnpackInfo_779,
			KS8CUUnpackInfo_780, KS8CUUnpackInfo_781, KS8CUUnpackInfo_782, KS8CUUnpackInfo_783,
			KS8CUUnpackInfo_784, KS8CUUnpackInfo_785, KS8CUUnpackInfo_786, KS8CUUnpackInfo_787,
			KS8CUUnpackInfo_788, KS8CUUnpackInfo_789, KS8CUUnpackInfo_790, KS8CUUnpackInfo_791,
			KS8CUUnpackInfo_792, KS8CUUnpackInfo_793, KS8CUUnpackInfo_794, KS8CUUnpackInfo_795,
			KS8CUUnpackInfo_796, KS8CUUnpackInfo_797, KS8CUUnpackInfo_798, KS8CUUnpackInfo_799,
			KS8CUUnpackInfo_800, KS8CUUnpackInfo_801, KS8CUUnpackInfo_802, KS8CUUnpackInfo_803,
			KS8CUUnpackInfo_804, KS8CUUnpackInfo_805, KS8CUUnpackInfo_806, KS8CUUnpackInfo_807,
			KS8CUUnpackInfo_808, KS8CUUnpackInfo_809, KS8CUUnpackInfo_810, KS8CUUnpackInfo_811,
			KS8CUUnpackInfo_812, KS8CUUnpackInfo_813, KS8CUUnpackInfo_814, KS8CUUnpackInfo_815,
			KS8CUUnpackInfo_816, KS8CUUnpackInfo_817, KS8CUUnpackInfo_818, KS8CUUnpackInfo_819,
			KS8CUUnpackInfo_820, KS8CUUnpackInfo_821, KS8CUUnpackInfo_822, KS8CUUnpackInfo_823,
			KS8CUUnpackInfo_824, KS8CUUnpackInfo_825, KS8CUUnpackInfo_826, KS8CUUnpackInfo_827,
			KS8CUUnpackInfo_828, KS8CUUnpackInfo_829, KS8CUUnpackInfo_830, KS8CUUnpackInfo_831,
			KS8CUUnpackInfo_832, KS8CUUnpackInfo_833, KS8CUUnpackInfo_834, KS8CUUnpackInfo_835,
			KS8CUUnpackInfo_836, KS8CUUnpackInfo_837, KS8CUUnpackInfo_838, KS8CUUnpackInfo_839,
			KS8CUUnpackInfo_840, KS8CUUnpackInfo_841, KS8CUUnpackInfo_842, KS8CUUnpackInfo_843,
			KS8CUUnpackInfo_844, KS8CUUnpackInfo_845, KS8CUUnpackInfo_846, KS8CUUnpackInfo_847,
			KS8CUUnpackInfo_848, KS8CUUnpackInfo_849, KS8CUUnpackInfo_850, KS8CUUnpackInfo_851,
			KS8CUUnpackInfo_852, KS8CUUnpackInfo_853, KS8CUUnpackInfo_854, KS8CUUnpackInfo_855,
			KS8CUUnpackInfo_856, KS8CUUnpackInfo_857, KS8CUUnpackInfo_858, KS8CUUnpackInfo_859,
			KS8CUUnpackInfo_860, KS8CUUnpackInfo_861, KS8CUUnpackInfo_862, KS8CUUnpackInfo_863,
			KS8CUUnpackInfo_864, KS8CUUnpackInfo_865, KS8CUUnpackInfo_866, KS8CUUnpackInfo_867,
			KS8CUUnpackInfo_868, KS8CUUnpackInfo_869, KS8CUUnpackInfo_870, KS8CUUnpackInfo_871,
			KS8CUUnpackInfo_872, KS8CUUnpackInfo_873, KS8CUUnpackInfo_874, KS8CUUnpackInfo_875,
			KS8CUUnpackInfo_876, KS8CUUnpackInfo_877, KS8CUUnpackInfo_878, KS8CUUnpackInfo_879,
			KS8CUUnpackInfo_880, KS8CUUnpackInfo_881, KS8CUUnpackInfo_882, KS8CUUnpackInfo_883,
			KS8CUUnpackInfo_884, KS8CUUnpackInfo_885, KS8CUUnpackInfo_886, KS8CUUnpackInfo_887,
			KS8CUUnpackInfo_888, KS8CUUnpackInfo_889, KS8CUUnpackInfo_890, KS8CUUnpackInfo_891,
			KS8CUUnpackInfo_892, KS8CUUnpackInfo_893, KS8CUUnpackInfo_894, KS8CUUnpackInfo_895,
			KS8CUUnpackInfo_896, KS8CUUnpackInfo_897, KS8CUUnpackInfo_898, KS8CUUnpackInfo_899,
			KS8CUUnpackInfo_900, KS8CUUnpackInfo_901, KS8CUUnpackInfo_902, KS8CUUnpackInfo_903,
			KS8CUUnpackInfo_904, KS8CUUnpackInfo_905, KS8CUUnpackInfo_906, KS8CUUnpackInfo_907,
			KS8CUUnpackInfo_908, KS8CUUnpackInfo_909, KS8CUUnpackInfo_910, KS8CUUnpackInfo_911,
			KS8CUUnpackInfo_912, KS8CUUnpackInfo_913, KS8CUUnpackInfo_914, KS8CUUnpackInfo_915,
			KS8CUUnpackInfo_916, KS8CUUnpackInfo_917, KS8CUUnpackInfo_918, KS8CUUnpackInfo_919,
			KS8CUUnpackInfo_920, KS8CUUnpackInfo_921, KS8CUUnpackInfo_922, KS8CUUnpackInfo_923,
			KS8CUUnpackInfo_924, KS8CUUnpackInfo_925, KS8CUUnpackInfo_926, KS8CUUnpackInfo_927,
			KS8CUUnpackInfo_928, KS8CUUnpackInfo_929, KS8CUUnpackInfo_930, KS8CUUnpackInfo_931,
			KS8CUUnpackInfo_932, KS8CUUnpackInfo_933, KS8CUUnpackInfo_934, KS8CUUnpackInfo_935,
			KS8CUUnpackInfo_936, KS8CUUnpackInfo_937, KS8CUUnpackInfo_938, KS8CUUnpackInfo_939,
			KS8CUUnpackInfo_940, KS8CUUnpackInfo_941, KS8CUUnpackInfo_942, KS8CUUnpackInfo_943,
			KS8CUUnpackInfo_944, KS8CUUnpackInfo_945, KS8CUUnpackInfo_946, KS8CUUnpackInfo_947,
			KS8CUUnpackInfo_948, KS8CUUnpackInfo_949, KS8CUUnpackInfo_950, KS8CUUnpackInfo_951,
			KS8CUUnpackInfo_952, KS8CUUnpackInfo_953, KS8CUUnpackInfo_954, KS8CUUnpackInfo_955,
			KS8CUUnpackInfo_956, KS8CUUnpackInfo_957, KS8CUUnpackInfo_958, KS8CUUnpackInfo_959,
			KS8CUUnpackInfo_960, KS8CUUnpackInfo_961, KS8CUUnpackInfo_962, KS8CUUnpackInfo_963,
			KS8CUUnpackInfo_964, KS8CUUnpackInfo_965, KS8CUUnpackInfo_966, KS8CUUnpackInfo_967,
			KS8CUUnpackInfo_968, KS8CUUnpackInfo_969, KS8CUUnpackInfo_970, KS8CUUnpackInfo_971,
			KS8CUUnpackInfo_972, KS8CUUnpackInfo_973, KS8CUUnpackInfo_974, KS8CUUnpackInfo_975,
			KS8CUUnpackInfo_976, KS8CUUnpackInfo_977, KS8CUUnpackInfo_978, KS8CUUnpackInfo_979,
			KS8CUUnpackInfo_980, KS8CUUnpackInfo_981, KS8CUUnpackInfo_982, KS8CUUnpackInfo_983,
			KS8CUUnpackInfo_984, KS8CUUnpackInfo_985, KS8CUUnpackInfo_986, KS8CUUnpackInfo_987,
			KS8CUUnpackInfo_988, KS8CUUnpackInfo_989, KS8CUUnpackInfo_990, KS8CUUnpackInfo_991,
			KS8CUUnpackInfo_992, KS8CUUnpackInfo_993, KS8CUUnpackInfo_994, KS8CUUnpackInfo_995,
			KS8CUUnpackInfo_996, KS8CUUnpackInfo_997, KS8CUUnpackInfo_998, KS8CUUnpackInfo_999,
			KS8CUUnpackInfo_1000, KS8CUUnpackInfo_1001, KS8CUUnpackInfo_1002, KS8CUUnpackInfo_1003,
			KS8CUUnpackInfo_1004, KS8CUUnpackInfo_1005, KS8CUUnpackInfo_1006, KS8CUUnpackInfo_1007,
			KS8CUUnpackInfo_1008, KS8CUUnpackInfo_1009, KS8CUUnpackInfo_1010, KS8CUUnpackInfo_1011,
			KS8CUUnpackInfo_1012, KS8CUUnpackInfo_1013, KS8CUUnpackInfo_1014, KS8CUUnpackInfo_1015,
			KS8CUUnpackInfo_1016, KS8CUUnpackInfo_1017, KS8CUUnpackInfo_1018, KS8CUUnpackInfo_1019,
			KS8CUUnpackInfo_1020, KS8CUUnpackInfo_1021, KS8CUUnpackInfo_1022, KS8CUUnpackInfo_1023
};




}
}


#endif /* KSCHEME_8BIT_CU_UNPACK_HPP_ */


/*

// metacode:
#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string INFO_NAME = "KS8CUUnpackInfo";
string TRIPLE_TAB = "\t\t\t";
string QUOTE_END_LINE = "\\n\"\n";
int BEG_REG_IDX = 3;

string funcStr = "";
string unpackInfoStr = "";
string unpackInfoArrStr = "";

string Int2Str(int n) {
	ostringstream oss;
	oss << n;
	return oss.str();
}

void printUnpackInfoArr() {
	unpackInfoArrStr += "static " + INFO_NAME + " " + INFO_NAME + "Arr[1024] = {\n";
	for (int i=0; i<1024; i++) {
		if (i % 4 == 0)
			unpackInfoArrStr += TRIPLE_TAB;
		unpackInfoArrStr += INFO_NAME + "_" + Int2Str(i);
		if (i != 1023)
			unpackInfoArrStr += ", ";

		if (i % 4 == 3)
			unpackInfoArrStr += "\n";
	}
	unpackInfoArrStr += "};\n";
}

int main(int argc, char **argv) {

for (uint32_t lastStatus = 0; lastStatus < 4; lastStatus ++) {

	for (uint32_t i=0; i<256; i++) {
		uint32_t infoIdx = (lastStatus << 8) + i;

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
				if (intBitNum > 4) {
					validGroup = false;	//a valid group can only hold integers less than 4bytes
				}
				else if (firstGroupInt && intBitNum + lastStatus > 4) {
					validGroup = false;
				}

				lenArr[intNum] = intBitNum;
				offsetArr[intNum] = curBitIdx - intBitNum;	//offset starts from 0

				maskArr[intNum] = (1LL << (intBitNum * 8)) - 1;
				intNum ++;
			}
			firstGroupInt = false;
		}

		// include bytes from last group
		lenArr[0] += lastStatus;

		if (!validUnary) {	//last int of the group doesn't stop with 0, generate a remainder status
			statusGen = intBitNum;
		}

		if (!validGroup) {
			intNum = 0;
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		// begByteOffset: if there exists remaining unprocesse bytes in the last groups, start reading from the last
		// half part in the previous group!
		int begByteOffset = (4 - lastStatus) % 4;

		byteToWrite = statusGen + (intNum << 2) - lastStatus;

		for (int j=0; j<intNum; j++)
			totalByteCount += lenArr[j];

		// different from codeword actually read!
		int codewordSkipped = 0;
		if (lastStatus > 0)	{	// skip the words in last group
			codewordSkipped ++;
		}
		int tmp = totalByteCount - lastStatus;
		codewordSkipped += (tmp + 3) / 4;
		if (statusGen > 0) {
			codewordSkipped --;		// leave the right words in current group
		}

		//output
		unpackInfoStr += "static " + INFO_NAME + " " + INFO_NAME + "_" + Int2Str(infoIdx) + " = { ";
		unpackInfoStr += "{";
		for (int j=0; j<7; j++) {
			unpackInfoStr += Int2Str(lenArr[j]) + ", ";
		}
		unpackInfoStr += Int2Str(lenArr[7]) + "}, ";
		unpackInfoStr += Int2Str(codewordSkipped << 2) + ", ";
		unpackInfoStr += Int2Str(intNum << 2) + ", ";
		unpackInfoStr += Int2Str(statusGen) + ", ";
		unpackInfoStr += (validGroup ? "true" : "false");
		unpackInfoStr += " };\n";
	}
}

	cout << endl;
	cout << unpackInfoStr;
	cout << endl;
	printUnpackInfoArr();
	cout << unpackInfoArrStr;

	return 0;
}

 */
