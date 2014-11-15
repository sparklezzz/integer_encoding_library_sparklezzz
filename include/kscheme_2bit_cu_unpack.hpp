/*
 * kscheme_2bit_cu_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef KSCHEME_2BIT_CU_UNPACK_HPP_
#define KSCHEME_2BIT_CU_UNPACK_HPP_

namespace paradise {
namespace index {

struct KS2CUUnpackInfo {
		uint8_t m_bitCountArr[8];
		int m_intNum;
		int m_statusGen;
};


static KS2CUUnpackInfo KS2CUUnpackInfo_0 = { {2, 2, 2, 2, 2, 2, 2, 2}, 32, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_1 = { {4, 2, 2, 2, 2, 2, 2, 0}, 28, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_2 = { {2, 4, 2, 2, 2, 2, 2, 0}, 28, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_3 = { {6, 2, 2, 2, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_4 = { {2, 2, 4, 2, 2, 2, 2, 0}, 28, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_5 = { {4, 4, 2, 2, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_6 = { {2, 6, 2, 2, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_7 = { {8, 2, 2, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_8 = { {2, 2, 2, 4, 2, 2, 2, 0}, 28, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_9 = { {4, 2, 4, 2, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_10 = { {2, 4, 4, 2, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_11 = { {6, 4, 2, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_12 = { {2, 2, 6, 2, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_13 = { {4, 6, 2, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_14 = { {2, 8, 2, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_15 = { {10, 2, 2, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_16 = { {2, 2, 2, 2, 4, 2, 2, 0}, 28, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_17 = { {4, 2, 2, 4, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_18 = { {2, 4, 2, 4, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_19 = { {6, 2, 4, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_20 = { {2, 2, 4, 4, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_21 = { {4, 4, 4, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_22 = { {2, 6, 4, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_23 = { {8, 4, 2, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_24 = { {2, 2, 2, 6, 2, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_25 = { {4, 2, 6, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_26 = { {2, 4, 6, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_27 = { {6, 6, 2, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_28 = { {2, 2, 8, 2, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_29 = { {4, 8, 2, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_30 = { {2, 10, 2, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_31 = { {12, 2, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_32 = { {2, 2, 2, 2, 2, 4, 2, 0}, 28, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_33 = { {4, 2, 2, 2, 4, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_34 = { {2, 4, 2, 2, 4, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_35 = { {6, 2, 2, 4, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_36 = { {2, 2, 4, 2, 4, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_37 = { {4, 4, 2, 4, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_38 = { {2, 6, 2, 4, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_39 = { {8, 2, 4, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_40 = { {2, 2, 2, 4, 4, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_41 = { {4, 2, 4, 4, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_42 = { {2, 4, 4, 4, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_43 = { {6, 4, 4, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_44 = { {2, 2, 6, 4, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_45 = { {4, 6, 4, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_46 = { {2, 8, 4, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_47 = { {10, 4, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_48 = { {2, 2, 2, 2, 6, 2, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_49 = { {4, 2, 2, 6, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_50 = { {2, 4, 2, 6, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_51 = { {6, 2, 6, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_52 = { {2, 2, 4, 6, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_53 = { {4, 4, 6, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_54 = { {2, 6, 6, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_55 = { {8, 6, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_56 = { {2, 2, 2, 8, 2, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_57 = { {4, 2, 8, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_58 = { {2, 4, 8, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_59 = { {6, 8, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_60 = { {2, 2, 10, 2, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_61 = { {4, 10, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_62 = { {2, 12, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_63 = { {14, 2, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_64 = { {2, 2, 2, 2, 2, 2, 4, 0}, 28, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_65 = { {4, 2, 2, 2, 2, 4, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_66 = { {2, 4, 2, 2, 2, 4, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_67 = { {6, 2, 2, 2, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_68 = { {2, 2, 4, 2, 2, 4, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_69 = { {4, 4, 2, 2, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_70 = { {2, 6, 2, 2, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_71 = { {8, 2, 2, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_72 = { {2, 2, 2, 4, 2, 4, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_73 = { {4, 2, 4, 2, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_74 = { {2, 4, 4, 2, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_75 = { {6, 4, 2, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_76 = { {2, 2, 6, 2, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_77 = { {4, 6, 2, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_78 = { {2, 8, 2, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_79 = { {10, 2, 4, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_80 = { {2, 2, 2, 2, 4, 4, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_81 = { {4, 2, 2, 4, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_82 = { {2, 4, 2, 4, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_83 = { {6, 2, 4, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_84 = { {2, 2, 4, 4, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_85 = { {4, 4, 4, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_86 = { {2, 6, 4, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_87 = { {8, 4, 4, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_88 = { {2, 2, 2, 6, 4, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_89 = { {4, 2, 6, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_90 = { {2, 4, 6, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_91 = { {6, 6, 4, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_92 = { {2, 2, 8, 4, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_93 = { {4, 8, 4, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_94 = { {2, 10, 4, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_95 = { {12, 4, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_96 = { {2, 2, 2, 2, 2, 6, 0, 0}, 24, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_97 = { {4, 2, 2, 2, 6, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_98 = { {2, 4, 2, 2, 6, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_99 = { {6, 2, 2, 6, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_100 = { {2, 2, 4, 2, 6, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_101 = { {4, 4, 2, 6, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_102 = { {2, 6, 2, 6, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_103 = { {8, 2, 6, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_104 = { {2, 2, 2, 4, 6, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_105 = { {4, 2, 4, 6, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_106 = { {2, 4, 4, 6, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_107 = { {6, 4, 6, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_108 = { {2, 2, 6, 6, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_109 = { {4, 6, 6, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_110 = { {2, 8, 6, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_111 = { {10, 6, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_112 = { {2, 2, 2, 2, 8, 0, 0, 0}, 20, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_113 = { {4, 2, 2, 8, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_114 = { {2, 4, 2, 8, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_115 = { {6, 2, 8, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_116 = { {2, 2, 4, 8, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_117 = { {4, 4, 8, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_118 = { {2, 6, 8, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_119 = { {8, 8, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_120 = { {2, 2, 2, 10, 0, 0, 0, 0}, 16, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_121 = { {4, 2, 10, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_122 = { {2, 4, 10, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_123 = { {6, 10, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_124 = { {2, 2, 12, 0, 0, 0, 0, 0}, 12, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_125 = { {4, 12, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_126 = { {2, 14, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_127 = { {16, 0, 0, 0, 0, 0, 0, 0}, 4, 0,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_128 = { {2, 2, 2, 2, 2, 2, 2, 0}, 28, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_129 = { {4, 2, 2, 2, 2, 2, 0, 0}, 24, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_130 = { {2, 4, 2, 2, 2, 2, 0, 0}, 24, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_131 = { {6, 2, 2, 2, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_132 = { {2, 2, 4, 2, 2, 2, 0, 0}, 24, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_133 = { {4, 4, 2, 2, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_134 = { {2, 6, 2, 2, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_135 = { {8, 2, 2, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_136 = { {2, 2, 2, 4, 2, 2, 0, 0}, 24, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_137 = { {4, 2, 4, 2, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_138 = { {2, 4, 4, 2, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_139 = { {6, 4, 2, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_140 = { {2, 2, 6, 2, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_141 = { {4, 6, 2, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_142 = { {2, 8, 2, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_143 = { {10, 2, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_144 = { {2, 2, 2, 2, 4, 2, 0, 0}, 24, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_145 = { {4, 2, 2, 4, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_146 = { {2, 4, 2, 4, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_147 = { {6, 2, 4, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_148 = { {2, 2, 4, 4, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_149 = { {4, 4, 4, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_150 = { {2, 6, 4, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_151 = { {8, 4, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_152 = { {2, 2, 2, 6, 2, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_153 = { {4, 2, 6, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_154 = { {2, 4, 6, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_155 = { {6, 6, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_156 = { {2, 2, 8, 2, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_157 = { {4, 8, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_158 = { {2, 10, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_159 = { {12, 2, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_160 = { {2, 2, 2, 2, 2, 4, 0, 0}, 24, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_161 = { {4, 2, 2, 2, 4, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_162 = { {2, 4, 2, 2, 4, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_163 = { {6, 2, 2, 4, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_164 = { {2, 2, 4, 2, 4, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_165 = { {4, 4, 2, 4, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_166 = { {2, 6, 2, 4, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_167 = { {8, 2, 4, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_168 = { {2, 2, 2, 4, 4, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_169 = { {4, 2, 4, 4, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_170 = { {2, 4, 4, 4, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_171 = { {6, 4, 4, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_172 = { {2, 2, 6, 4, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_173 = { {4, 6, 4, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_174 = { {2, 8, 4, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_175 = { {10, 4, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_176 = { {2, 2, 2, 2, 6, 0, 0, 0}, 20, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_177 = { {4, 2, 2, 6, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_178 = { {2, 4, 2, 6, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_179 = { {6, 2, 6, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_180 = { {2, 2, 4, 6, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_181 = { {4, 4, 6, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_182 = { {2, 6, 6, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_183 = { {8, 6, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_184 = { {2, 2, 2, 8, 0, 0, 0, 0}, 16, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_185 = { {4, 2, 8, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_186 = { {2, 4, 8, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_187 = { {6, 8, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_188 = { {2, 2, 10, 0, 0, 0, 0, 0}, 12, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_189 = { {4, 10, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_190 = { {2, 12, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_191 = { {14, 0, 0, 0, 0, 0, 0, 0}, 4, 1,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_192 = { {2, 2, 2, 2, 2, 2, 0, 0}, 24, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_193 = { {4, 2, 2, 2, 2, 0, 0, 0}, 20, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_194 = { {2, 4, 2, 2, 2, 0, 0, 0}, 20, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_195 = { {6, 2, 2, 2, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_196 = { {2, 2, 4, 2, 2, 0, 0, 0}, 20, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_197 = { {4, 4, 2, 2, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_198 = { {2, 6, 2, 2, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_199 = { {8, 2, 2, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_200 = { {2, 2, 2, 4, 2, 0, 0, 0}, 20, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_201 = { {4, 2, 4, 2, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_202 = { {2, 4, 4, 2, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_203 = { {6, 4, 2, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_204 = { {2, 2, 6, 2, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_205 = { {4, 6, 2, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_206 = { {2, 8, 2, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_207 = { {10, 2, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_208 = { {2, 2, 2, 2, 4, 0, 0, 0}, 20, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_209 = { {4, 2, 2, 4, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_210 = { {2, 4, 2, 4, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_211 = { {6, 2, 4, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_212 = { {2, 2, 4, 4, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_213 = { {4, 4, 4, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_214 = { {2, 6, 4, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_215 = { {8, 4, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_216 = { {2, 2, 2, 6, 0, 0, 0, 0}, 16, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_217 = { {4, 2, 6, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_218 = { {2, 4, 6, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_219 = { {6, 6, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_220 = { {2, 2, 8, 0, 0, 0, 0, 0}, 12, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_221 = { {4, 8, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_222 = { {2, 10, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_223 = { {12, 0, 0, 0, 0, 0, 0, 0}, 4, 2,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_224 = { {2, 2, 2, 2, 2, 0, 0, 0}, 20, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_225 = { {4, 2, 2, 2, 0, 0, 0, 0}, 16, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_226 = { {2, 4, 2, 2, 0, 0, 0, 0}, 16, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_227 = { {6, 2, 2, 0, 0, 0, 0, 0}, 12, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_228 = { {2, 2, 4, 2, 0, 0, 0, 0}, 16, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_229 = { {4, 4, 2, 0, 0, 0, 0, 0}, 12, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_230 = { {2, 6, 2, 0, 0, 0, 0, 0}, 12, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_231 = { {8, 2, 0, 0, 0, 0, 0, 0}, 8, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_232 = { {2, 2, 2, 4, 0, 0, 0, 0}, 16, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_233 = { {4, 2, 4, 0, 0, 0, 0, 0}, 12, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_234 = { {2, 4, 4, 0, 0, 0, 0, 0}, 12, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_235 = { {6, 4, 0, 0, 0, 0, 0, 0}, 8, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_236 = { {2, 2, 6, 0, 0, 0, 0, 0}, 12, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_237 = { {4, 6, 0, 0, 0, 0, 0, 0}, 8, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_238 = { {2, 8, 0, 0, 0, 0, 0, 0}, 8, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_239 = { {10, 0, 0, 0, 0, 0, 0, 0}, 4, 3,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_240 = { {2, 2, 2, 2, 0, 0, 0, 0}, 16, 4,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_241 = { {4, 2, 2, 0, 0, 0, 0, 0}, 12, 4,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_242 = { {2, 4, 2, 0, 0, 0, 0, 0}, 12, 4,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_243 = { {6, 2, 0, 0, 0, 0, 0, 0}, 8, 4,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_244 = { {2, 2, 4, 0, 0, 0, 0, 0}, 12, 4,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_245 = { {4, 4, 0, 0, 0, 0, 0, 0}, 8, 4,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_246 = { {2, 6, 0, 0, 0, 0, 0, 0}, 8, 4,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_247 = { {8, 0, 0, 0, 0, 0, 0, 0}, 4, 4,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_248 = { {2, 2, 2, 0, 0, 0, 0, 0}, 12, 5,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_249 = { {4, 2, 0, 0, 0, 0, 0, 0}, 8, 5,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_250 = { {2, 4, 0, 0, 0, 0, 0, 0}, 8, 5,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_251 = { {6, 0, 0, 0, 0, 0, 0, 0}, 4, 5,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_252 = { {2, 2, 0, 0, 0, 0, 0, 0}, 8, 6,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_253 = { {4, 0, 0, 0, 0, 0, 0, 0}, 4, 6,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_254 = { {2, 0, 0, 0, 0, 0, 0, 0}, 4, 7,  };
static KS2CUUnpackInfo KS2CUUnpackInfo_255 = { {0, 0, 0, 0, 0, 0, 0, 0}, 0, 8,  };

static KS2CUUnpackInfo KS2CUUnpackInfoArr[256] = {
			KS2CUUnpackInfo_0, KS2CUUnpackInfo_1, KS2CUUnpackInfo_2, KS2CUUnpackInfo_3,
			KS2CUUnpackInfo_4, KS2CUUnpackInfo_5, KS2CUUnpackInfo_6, KS2CUUnpackInfo_7,
			KS2CUUnpackInfo_8, KS2CUUnpackInfo_9, KS2CUUnpackInfo_10, KS2CUUnpackInfo_11,
			KS2CUUnpackInfo_12, KS2CUUnpackInfo_13, KS2CUUnpackInfo_14, KS2CUUnpackInfo_15,
			KS2CUUnpackInfo_16, KS2CUUnpackInfo_17, KS2CUUnpackInfo_18, KS2CUUnpackInfo_19,
			KS2CUUnpackInfo_20, KS2CUUnpackInfo_21, KS2CUUnpackInfo_22, KS2CUUnpackInfo_23,
			KS2CUUnpackInfo_24, KS2CUUnpackInfo_25, KS2CUUnpackInfo_26, KS2CUUnpackInfo_27,
			KS2CUUnpackInfo_28, KS2CUUnpackInfo_29, KS2CUUnpackInfo_30, KS2CUUnpackInfo_31,
			KS2CUUnpackInfo_32, KS2CUUnpackInfo_33, KS2CUUnpackInfo_34, KS2CUUnpackInfo_35,
			KS2CUUnpackInfo_36, KS2CUUnpackInfo_37, KS2CUUnpackInfo_38, KS2CUUnpackInfo_39,
			KS2CUUnpackInfo_40, KS2CUUnpackInfo_41, KS2CUUnpackInfo_42, KS2CUUnpackInfo_43,
			KS2CUUnpackInfo_44, KS2CUUnpackInfo_45, KS2CUUnpackInfo_46, KS2CUUnpackInfo_47,
			KS2CUUnpackInfo_48, KS2CUUnpackInfo_49, KS2CUUnpackInfo_50, KS2CUUnpackInfo_51,
			KS2CUUnpackInfo_52, KS2CUUnpackInfo_53, KS2CUUnpackInfo_54, KS2CUUnpackInfo_55,
			KS2CUUnpackInfo_56, KS2CUUnpackInfo_57, KS2CUUnpackInfo_58, KS2CUUnpackInfo_59,
			KS2CUUnpackInfo_60, KS2CUUnpackInfo_61, KS2CUUnpackInfo_62, KS2CUUnpackInfo_63,
			KS2CUUnpackInfo_64, KS2CUUnpackInfo_65, KS2CUUnpackInfo_66, KS2CUUnpackInfo_67,
			KS2CUUnpackInfo_68, KS2CUUnpackInfo_69, KS2CUUnpackInfo_70, KS2CUUnpackInfo_71,
			KS2CUUnpackInfo_72, KS2CUUnpackInfo_73, KS2CUUnpackInfo_74, KS2CUUnpackInfo_75,
			KS2CUUnpackInfo_76, KS2CUUnpackInfo_77, KS2CUUnpackInfo_78, KS2CUUnpackInfo_79,
			KS2CUUnpackInfo_80, KS2CUUnpackInfo_81, KS2CUUnpackInfo_82, KS2CUUnpackInfo_83,
			KS2CUUnpackInfo_84, KS2CUUnpackInfo_85, KS2CUUnpackInfo_86, KS2CUUnpackInfo_87,
			KS2CUUnpackInfo_88, KS2CUUnpackInfo_89, KS2CUUnpackInfo_90, KS2CUUnpackInfo_91,
			KS2CUUnpackInfo_92, KS2CUUnpackInfo_93, KS2CUUnpackInfo_94, KS2CUUnpackInfo_95,
			KS2CUUnpackInfo_96, KS2CUUnpackInfo_97, KS2CUUnpackInfo_98, KS2CUUnpackInfo_99,
			KS2CUUnpackInfo_100, KS2CUUnpackInfo_101, KS2CUUnpackInfo_102, KS2CUUnpackInfo_103,
			KS2CUUnpackInfo_104, KS2CUUnpackInfo_105, KS2CUUnpackInfo_106, KS2CUUnpackInfo_107,
			KS2CUUnpackInfo_108, KS2CUUnpackInfo_109, KS2CUUnpackInfo_110, KS2CUUnpackInfo_111,
			KS2CUUnpackInfo_112, KS2CUUnpackInfo_113, KS2CUUnpackInfo_114, KS2CUUnpackInfo_115,
			KS2CUUnpackInfo_116, KS2CUUnpackInfo_117, KS2CUUnpackInfo_118, KS2CUUnpackInfo_119,
			KS2CUUnpackInfo_120, KS2CUUnpackInfo_121, KS2CUUnpackInfo_122, KS2CUUnpackInfo_123,
			KS2CUUnpackInfo_124, KS2CUUnpackInfo_125, KS2CUUnpackInfo_126, KS2CUUnpackInfo_127,
			KS2CUUnpackInfo_128, KS2CUUnpackInfo_129, KS2CUUnpackInfo_130, KS2CUUnpackInfo_131,
			KS2CUUnpackInfo_132, KS2CUUnpackInfo_133, KS2CUUnpackInfo_134, KS2CUUnpackInfo_135,
			KS2CUUnpackInfo_136, KS2CUUnpackInfo_137, KS2CUUnpackInfo_138, KS2CUUnpackInfo_139,
			KS2CUUnpackInfo_140, KS2CUUnpackInfo_141, KS2CUUnpackInfo_142, KS2CUUnpackInfo_143,
			KS2CUUnpackInfo_144, KS2CUUnpackInfo_145, KS2CUUnpackInfo_146, KS2CUUnpackInfo_147,
			KS2CUUnpackInfo_148, KS2CUUnpackInfo_149, KS2CUUnpackInfo_150, KS2CUUnpackInfo_151,
			KS2CUUnpackInfo_152, KS2CUUnpackInfo_153, KS2CUUnpackInfo_154, KS2CUUnpackInfo_155,
			KS2CUUnpackInfo_156, KS2CUUnpackInfo_157, KS2CUUnpackInfo_158, KS2CUUnpackInfo_159,
			KS2CUUnpackInfo_160, KS2CUUnpackInfo_161, KS2CUUnpackInfo_162, KS2CUUnpackInfo_163,
			KS2CUUnpackInfo_164, KS2CUUnpackInfo_165, KS2CUUnpackInfo_166, KS2CUUnpackInfo_167,
			KS2CUUnpackInfo_168, KS2CUUnpackInfo_169, KS2CUUnpackInfo_170, KS2CUUnpackInfo_171,
			KS2CUUnpackInfo_172, KS2CUUnpackInfo_173, KS2CUUnpackInfo_174, KS2CUUnpackInfo_175,
			KS2CUUnpackInfo_176, KS2CUUnpackInfo_177, KS2CUUnpackInfo_178, KS2CUUnpackInfo_179,
			KS2CUUnpackInfo_180, KS2CUUnpackInfo_181, KS2CUUnpackInfo_182, KS2CUUnpackInfo_183,
			KS2CUUnpackInfo_184, KS2CUUnpackInfo_185, KS2CUUnpackInfo_186, KS2CUUnpackInfo_187,
			KS2CUUnpackInfo_188, KS2CUUnpackInfo_189, KS2CUUnpackInfo_190, KS2CUUnpackInfo_191,
			KS2CUUnpackInfo_192, KS2CUUnpackInfo_193, KS2CUUnpackInfo_194, KS2CUUnpackInfo_195,
			KS2CUUnpackInfo_196, KS2CUUnpackInfo_197, KS2CUUnpackInfo_198, KS2CUUnpackInfo_199,
			KS2CUUnpackInfo_200, KS2CUUnpackInfo_201, KS2CUUnpackInfo_202, KS2CUUnpackInfo_203,
			KS2CUUnpackInfo_204, KS2CUUnpackInfo_205, KS2CUUnpackInfo_206, KS2CUUnpackInfo_207,
			KS2CUUnpackInfo_208, KS2CUUnpackInfo_209, KS2CUUnpackInfo_210, KS2CUUnpackInfo_211,
			KS2CUUnpackInfo_212, KS2CUUnpackInfo_213, KS2CUUnpackInfo_214, KS2CUUnpackInfo_215,
			KS2CUUnpackInfo_216, KS2CUUnpackInfo_217, KS2CUUnpackInfo_218, KS2CUUnpackInfo_219,
			KS2CUUnpackInfo_220, KS2CUUnpackInfo_221, KS2CUUnpackInfo_222, KS2CUUnpackInfo_223,
			KS2CUUnpackInfo_224, KS2CUUnpackInfo_225, KS2CUUnpackInfo_226, KS2CUUnpackInfo_227,
			KS2CUUnpackInfo_228, KS2CUUnpackInfo_229, KS2CUUnpackInfo_230, KS2CUUnpackInfo_231,
			KS2CUUnpackInfo_232, KS2CUUnpackInfo_233, KS2CUUnpackInfo_234, KS2CUUnpackInfo_235,
			KS2CUUnpackInfo_236, KS2CUUnpackInfo_237, KS2CUUnpackInfo_238, KS2CUUnpackInfo_239,
			KS2CUUnpackInfo_240, KS2CUUnpackInfo_241, KS2CUUnpackInfo_242, KS2CUUnpackInfo_243,
			KS2CUUnpackInfo_244, KS2CUUnpackInfo_245, KS2CUUnpackInfo_246, KS2CUUnpackInfo_247,
			KS2CUUnpackInfo_248, KS2CUUnpackInfo_249, KS2CUUnpackInfo_250, KS2CUUnpackInfo_251,
			KS2CUUnpackInfo_252, KS2CUUnpackInfo_253, KS2CUUnpackInfo_254, KS2CUUnpackInfo_255
};

}
}


#endif /* KSCHEME_2BIT_CU_UNPACK_HPP_ */

/*

// metacode:
#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string INFO_NAME = "KS2CUUnpackInfo";
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
}

int main(int argc, char **argv) {

//for (uint32_t lastStatus = 0; lastStatus < 8; lastStatus ++) {

	for (uint32_t i=0; i<256; i++) {
		//uint32_t infoIdx = (lastStatus << 8) + i;
		uint32_t infoIdx = i;

		bool validGroup = true;
		uint32_t offsetArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t lenArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t maskArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t intNum = 0;
		uint32_t statusGen = 0;
		uint32_t bitToWrite = 0;
		uint32_t mask = i;
		uint32_t totalBitCount = 0;
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
				//if (intBitNum > 8) {
				//	validGroup = false;	//a valid group can only hold integers less than 4bytes
				//}
				//else if (firstGroupInt && intBitNum + lastStatus > 8) {
				//	validGroup = false;
				//}

				lenArr[intNum] = intBitNum * 2;
				offsetArr[intNum] = (curBitIdx - intBitNum) * 2;	//offset starts from 0

				maskArr[intNum] = (1LL << (intBitNum * 2)) - 1;
				intNum ++;
			}
			firstGroupInt = false;
		}

		// include bytes from last group
		//lenArr[0] += lastStatus * 4;

		if (!validUnary) {	//last int of the group doesn't stop with 0, generate a remainder status
			statusGen = intBitNum;
		}

		//if (!validGroup) {
		//	intNum = 0;
		//}

		//if (intNum == 0) {
		//	validGroup = false;	//a valid group should represent at least one integer
		//}

		// begByteOffset: if there exists remaining unprocesse bytes in the last groups, start reading from the last
		// half part in the previous group!

		for (int j=0; j<intNum; j++)
			totalBitCount += lenArr[j];

		// different from codeword actually read!
		int codewordSkipped = 0;
		//if (lastStatus > 0)	{	// skip the words in last group
		//	codewordSkipped ++;
		//}
		int tmp = totalBitCount;
		codewordSkipped += (tmp + 31) / 32;
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
		//unpackInfoStr += Int2Str(codewordSkipped << 2) + ", ";
		unpackInfoStr += Int2Str(intNum << 2) + ", ";
		unpackInfoStr += Int2Str(statusGen) + ", ";
		//unpackInfoStr += (validGroup ? "true" : "false");
		unpackInfoStr += " };\n";
	}
//}

	cout << endl;
	cout << unpackInfoStr;
	cout << endl;
	printUnpackInfoArr();
	cout << unpackInfoArrStr;

	return 0;
}

 */
