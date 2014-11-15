/*
 * kscheme_1bit_cu_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef KSCHEME_1BIT_CU_UNPACK_HPP_
#define KSCHEME_1BIT_CU_UNPACK_HPP_

namespace paradise {
namespace index {

struct KS1CUUnpackInfo {
		uint8_t m_bitCountArr[8];
		int m_intNum;
		int m_statusGen;
};


static KS1CUUnpackInfo KS1CUUnpackInfo_0 = { {1, 1, 1, 1, 1, 1, 1, 1}, 32, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_1 = { {2, 1, 1, 1, 1, 1, 1, 0}, 28, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_2 = { {1, 2, 1, 1, 1, 1, 1, 0}, 28, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_3 = { {3, 1, 1, 1, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_4 = { {1, 1, 2, 1, 1, 1, 1, 0}, 28, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_5 = { {2, 2, 1, 1, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_6 = { {1, 3, 1, 1, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_7 = { {4, 1, 1, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_8 = { {1, 1, 1, 2, 1, 1, 1, 0}, 28, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_9 = { {2, 1, 2, 1, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_10 = { {1, 2, 2, 1, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_11 = { {3, 2, 1, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_12 = { {1, 1, 3, 1, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_13 = { {2, 3, 1, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_14 = { {1, 4, 1, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_15 = { {5, 1, 1, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_16 = { {1, 1, 1, 1, 2, 1, 1, 0}, 28, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_17 = { {2, 1, 1, 2, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_18 = { {1, 2, 1, 2, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_19 = { {3, 1, 2, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_20 = { {1, 1, 2, 2, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_21 = { {2, 2, 2, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_22 = { {1, 3, 2, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_23 = { {4, 2, 1, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_24 = { {1, 1, 1, 3, 1, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_25 = { {2, 1, 3, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_26 = { {1, 2, 3, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_27 = { {3, 3, 1, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_28 = { {1, 1, 4, 1, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_29 = { {2, 4, 1, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_30 = { {1, 5, 1, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_31 = { {6, 1, 1, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_32 = { {1, 1, 1, 1, 1, 2, 1, 0}, 28, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_33 = { {2, 1, 1, 1, 2, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_34 = { {1, 2, 1, 1, 2, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_35 = { {3, 1, 1, 2, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_36 = { {1, 1, 2, 1, 2, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_37 = { {2, 2, 1, 2, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_38 = { {1, 3, 1, 2, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_39 = { {4, 1, 2, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_40 = { {1, 1, 1, 2, 2, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_41 = { {2, 1, 2, 2, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_42 = { {1, 2, 2, 2, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_43 = { {3, 2, 2, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_44 = { {1, 1, 3, 2, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_45 = { {2, 3, 2, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_46 = { {1, 4, 2, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_47 = { {5, 2, 1, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_48 = { {1, 1, 1, 1, 3, 1, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_49 = { {2, 1, 1, 3, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_50 = { {1, 2, 1, 3, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_51 = { {3, 1, 3, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_52 = { {1, 1, 2, 3, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_53 = { {2, 2, 3, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_54 = { {1, 3, 3, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_55 = { {4, 3, 1, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_56 = { {1, 1, 1, 4, 1, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_57 = { {2, 1, 4, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_58 = { {1, 2, 4, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_59 = { {3, 4, 1, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_60 = { {1, 1, 5, 1, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_61 = { {2, 5, 1, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_62 = { {1, 6, 1, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_63 = { {7, 1, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_64 = { {1, 1, 1, 1, 1, 1, 2, 0}, 28, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_65 = { {2, 1, 1, 1, 1, 2, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_66 = { {1, 2, 1, 1, 1, 2, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_67 = { {3, 1, 1, 1, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_68 = { {1, 1, 2, 1, 1, 2, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_69 = { {2, 2, 1, 1, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_70 = { {1, 3, 1, 1, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_71 = { {4, 1, 1, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_72 = { {1, 1, 1, 2, 1, 2, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_73 = { {2, 1, 2, 1, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_74 = { {1, 2, 2, 1, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_75 = { {3, 2, 1, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_76 = { {1, 1, 3, 1, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_77 = { {2, 3, 1, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_78 = { {1, 4, 1, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_79 = { {5, 1, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_80 = { {1, 1, 1, 1, 2, 2, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_81 = { {2, 1, 1, 2, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_82 = { {1, 2, 1, 2, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_83 = { {3, 1, 2, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_84 = { {1, 1, 2, 2, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_85 = { {2, 2, 2, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_86 = { {1, 3, 2, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_87 = { {4, 2, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_88 = { {1, 1, 1, 3, 2, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_89 = { {2, 1, 3, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_90 = { {1, 2, 3, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_91 = { {3, 3, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_92 = { {1, 1, 4, 2, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_93 = { {2, 4, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_94 = { {1, 5, 2, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_95 = { {6, 2, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_96 = { {1, 1, 1, 1, 1, 3, 0, 0}, 24, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_97 = { {2, 1, 1, 1, 3, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_98 = { {1, 2, 1, 1, 3, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_99 = { {3, 1, 1, 3, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_100 = { {1, 1, 2, 1, 3, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_101 = { {2, 2, 1, 3, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_102 = { {1, 3, 1, 3, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_103 = { {4, 1, 3, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_104 = { {1, 1, 1, 2, 3, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_105 = { {2, 1, 2, 3, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_106 = { {1, 2, 2, 3, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_107 = { {3, 2, 3, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_108 = { {1, 1, 3, 3, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_109 = { {2, 3, 3, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_110 = { {1, 4, 3, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_111 = { {5, 3, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_112 = { {1, 1, 1, 1, 4, 0, 0, 0}, 20, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_113 = { {2, 1, 1, 4, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_114 = { {1, 2, 1, 4, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_115 = { {3, 1, 4, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_116 = { {1, 1, 2, 4, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_117 = { {2, 2, 4, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_118 = { {1, 3, 4, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_119 = { {4, 4, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_120 = { {1, 1, 1, 5, 0, 0, 0, 0}, 16, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_121 = { {2, 1, 5, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_122 = { {1, 2, 5, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_123 = { {3, 5, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_124 = { {1, 1, 6, 0, 0, 0, 0, 0}, 12, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_125 = { {2, 6, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_126 = { {1, 7, 0, 0, 0, 0, 0, 0}, 8, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_127 = { {8, 0, 0, 0, 0, 0, 0, 0}, 4, 0,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_128 = { {1, 1, 1, 1, 1, 1, 1, 0}, 28, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_129 = { {2, 1, 1, 1, 1, 1, 0, 0}, 24, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_130 = { {1, 2, 1, 1, 1, 1, 0, 0}, 24, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_131 = { {3, 1, 1, 1, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_132 = { {1, 1, 2, 1, 1, 1, 0, 0}, 24, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_133 = { {2, 2, 1, 1, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_134 = { {1, 3, 1, 1, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_135 = { {4, 1, 1, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_136 = { {1, 1, 1, 2, 1, 1, 0, 0}, 24, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_137 = { {2, 1, 2, 1, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_138 = { {1, 2, 2, 1, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_139 = { {3, 2, 1, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_140 = { {1, 1, 3, 1, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_141 = { {2, 3, 1, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_142 = { {1, 4, 1, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_143 = { {5, 1, 1, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_144 = { {1, 1, 1, 1, 2, 1, 0, 0}, 24, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_145 = { {2, 1, 1, 2, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_146 = { {1, 2, 1, 2, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_147 = { {3, 1, 2, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_148 = { {1, 1, 2, 2, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_149 = { {2, 2, 2, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_150 = { {1, 3, 2, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_151 = { {4, 2, 1, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_152 = { {1, 1, 1, 3, 1, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_153 = { {2, 1, 3, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_154 = { {1, 2, 3, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_155 = { {3, 3, 1, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_156 = { {1, 1, 4, 1, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_157 = { {2, 4, 1, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_158 = { {1, 5, 1, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_159 = { {6, 1, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_160 = { {1, 1, 1, 1, 1, 2, 0, 0}, 24, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_161 = { {2, 1, 1, 1, 2, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_162 = { {1, 2, 1, 1, 2, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_163 = { {3, 1, 1, 2, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_164 = { {1, 1, 2, 1, 2, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_165 = { {2, 2, 1, 2, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_166 = { {1, 3, 1, 2, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_167 = { {4, 1, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_168 = { {1, 1, 1, 2, 2, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_169 = { {2, 1, 2, 2, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_170 = { {1, 2, 2, 2, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_171 = { {3, 2, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_172 = { {1, 1, 3, 2, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_173 = { {2, 3, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_174 = { {1, 4, 2, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_175 = { {5, 2, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_176 = { {1, 1, 1, 1, 3, 0, 0, 0}, 20, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_177 = { {2, 1, 1, 3, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_178 = { {1, 2, 1, 3, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_179 = { {3, 1, 3, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_180 = { {1, 1, 2, 3, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_181 = { {2, 2, 3, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_182 = { {1, 3, 3, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_183 = { {4, 3, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_184 = { {1, 1, 1, 4, 0, 0, 0, 0}, 16, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_185 = { {2, 1, 4, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_186 = { {1, 2, 4, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_187 = { {3, 4, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_188 = { {1, 1, 5, 0, 0, 0, 0, 0}, 12, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_189 = { {2, 5, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_190 = { {1, 6, 0, 0, 0, 0, 0, 0}, 8, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_191 = { {7, 0, 0, 0, 0, 0, 0, 0}, 4, 1,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_192 = { {1, 1, 1, 1, 1, 1, 0, 0}, 24, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_193 = { {2, 1, 1, 1, 1, 0, 0, 0}, 20, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_194 = { {1, 2, 1, 1, 1, 0, 0, 0}, 20, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_195 = { {3, 1, 1, 1, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_196 = { {1, 1, 2, 1, 1, 0, 0, 0}, 20, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_197 = { {2, 2, 1, 1, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_198 = { {1, 3, 1, 1, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_199 = { {4, 1, 1, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_200 = { {1, 1, 1, 2, 1, 0, 0, 0}, 20, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_201 = { {2, 1, 2, 1, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_202 = { {1, 2, 2, 1, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_203 = { {3, 2, 1, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_204 = { {1, 1, 3, 1, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_205 = { {2, 3, 1, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_206 = { {1, 4, 1, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_207 = { {5, 1, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_208 = { {1, 1, 1, 1, 2, 0, 0, 0}, 20, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_209 = { {2, 1, 1, 2, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_210 = { {1, 2, 1, 2, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_211 = { {3, 1, 2, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_212 = { {1, 1, 2, 2, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_213 = { {2, 2, 2, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_214 = { {1, 3, 2, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_215 = { {4, 2, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_216 = { {1, 1, 1, 3, 0, 0, 0, 0}, 16, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_217 = { {2, 1, 3, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_218 = { {1, 2, 3, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_219 = { {3, 3, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_220 = { {1, 1, 4, 0, 0, 0, 0, 0}, 12, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_221 = { {2, 4, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_222 = { {1, 5, 0, 0, 0, 0, 0, 0}, 8, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_223 = { {6, 0, 0, 0, 0, 0, 0, 0}, 4, 2,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_224 = { {1, 1, 1, 1, 1, 0, 0, 0}, 20, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_225 = { {2, 1, 1, 1, 0, 0, 0, 0}, 16, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_226 = { {1, 2, 1, 1, 0, 0, 0, 0}, 16, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_227 = { {3, 1, 1, 0, 0, 0, 0, 0}, 12, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_228 = { {1, 1, 2, 1, 0, 0, 0, 0}, 16, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_229 = { {2, 2, 1, 0, 0, 0, 0, 0}, 12, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_230 = { {1, 3, 1, 0, 0, 0, 0, 0}, 12, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_231 = { {4, 1, 0, 0, 0, 0, 0, 0}, 8, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_232 = { {1, 1, 1, 2, 0, 0, 0, 0}, 16, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_233 = { {2, 1, 2, 0, 0, 0, 0, 0}, 12, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_234 = { {1, 2, 2, 0, 0, 0, 0, 0}, 12, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_235 = { {3, 2, 0, 0, 0, 0, 0, 0}, 8, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_236 = { {1, 1, 3, 0, 0, 0, 0, 0}, 12, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_237 = { {2, 3, 0, 0, 0, 0, 0, 0}, 8, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_238 = { {1, 4, 0, 0, 0, 0, 0, 0}, 8, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_239 = { {5, 0, 0, 0, 0, 0, 0, 0}, 4, 3,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_240 = { {1, 1, 1, 1, 0, 0, 0, 0}, 16, 4,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_241 = { {2, 1, 1, 0, 0, 0, 0, 0}, 12, 4,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_242 = { {1, 2, 1, 0, 0, 0, 0, 0}, 12, 4,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_243 = { {3, 1, 0, 0, 0, 0, 0, 0}, 8, 4,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_244 = { {1, 1, 2, 0, 0, 0, 0, 0}, 12, 4,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_245 = { {2, 2, 0, 0, 0, 0, 0, 0}, 8, 4,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_246 = { {1, 3, 0, 0, 0, 0, 0, 0}, 8, 4,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_247 = { {4, 0, 0, 0, 0, 0, 0, 0}, 4, 4,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_248 = { {1, 1, 1, 0, 0, 0, 0, 0}, 12, 5,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_249 = { {2, 1, 0, 0, 0, 0, 0, 0}, 8, 5,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_250 = { {1, 2, 0, 0, 0, 0, 0, 0}, 8, 5,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_251 = { {3, 0, 0, 0, 0, 0, 0, 0}, 4, 5,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_252 = { {1, 1, 0, 0, 0, 0, 0, 0}, 8, 6,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_253 = { {2, 0, 0, 0, 0, 0, 0, 0}, 4, 6,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_254 = { {1, 0, 0, 0, 0, 0, 0, 0}, 4, 7,  };
static KS1CUUnpackInfo KS1CUUnpackInfo_255 = { {0, 0, 0, 0, 0, 0, 0, 0}, 0, 8,  };

static KS1CUUnpackInfo KS1CUUnpackInfoArr[256] = {
			KS1CUUnpackInfo_0, KS1CUUnpackInfo_1, KS1CUUnpackInfo_2, KS1CUUnpackInfo_3,
			KS1CUUnpackInfo_4, KS1CUUnpackInfo_5, KS1CUUnpackInfo_6, KS1CUUnpackInfo_7,
			KS1CUUnpackInfo_8, KS1CUUnpackInfo_9, KS1CUUnpackInfo_10, KS1CUUnpackInfo_11,
			KS1CUUnpackInfo_12, KS1CUUnpackInfo_13, KS1CUUnpackInfo_14, KS1CUUnpackInfo_15,
			KS1CUUnpackInfo_16, KS1CUUnpackInfo_17, KS1CUUnpackInfo_18, KS1CUUnpackInfo_19,
			KS1CUUnpackInfo_20, KS1CUUnpackInfo_21, KS1CUUnpackInfo_22, KS1CUUnpackInfo_23,
			KS1CUUnpackInfo_24, KS1CUUnpackInfo_25, KS1CUUnpackInfo_26, KS1CUUnpackInfo_27,
			KS1CUUnpackInfo_28, KS1CUUnpackInfo_29, KS1CUUnpackInfo_30, KS1CUUnpackInfo_31,
			KS1CUUnpackInfo_32, KS1CUUnpackInfo_33, KS1CUUnpackInfo_34, KS1CUUnpackInfo_35,
			KS1CUUnpackInfo_36, KS1CUUnpackInfo_37, KS1CUUnpackInfo_38, KS1CUUnpackInfo_39,
			KS1CUUnpackInfo_40, KS1CUUnpackInfo_41, KS1CUUnpackInfo_42, KS1CUUnpackInfo_43,
			KS1CUUnpackInfo_44, KS1CUUnpackInfo_45, KS1CUUnpackInfo_46, KS1CUUnpackInfo_47,
			KS1CUUnpackInfo_48, KS1CUUnpackInfo_49, KS1CUUnpackInfo_50, KS1CUUnpackInfo_51,
			KS1CUUnpackInfo_52, KS1CUUnpackInfo_53, KS1CUUnpackInfo_54, KS1CUUnpackInfo_55,
			KS1CUUnpackInfo_56, KS1CUUnpackInfo_57, KS1CUUnpackInfo_58, KS1CUUnpackInfo_59,
			KS1CUUnpackInfo_60, KS1CUUnpackInfo_61, KS1CUUnpackInfo_62, KS1CUUnpackInfo_63,
			KS1CUUnpackInfo_64, KS1CUUnpackInfo_65, KS1CUUnpackInfo_66, KS1CUUnpackInfo_67,
			KS1CUUnpackInfo_68, KS1CUUnpackInfo_69, KS1CUUnpackInfo_70, KS1CUUnpackInfo_71,
			KS1CUUnpackInfo_72, KS1CUUnpackInfo_73, KS1CUUnpackInfo_74, KS1CUUnpackInfo_75,
			KS1CUUnpackInfo_76, KS1CUUnpackInfo_77, KS1CUUnpackInfo_78, KS1CUUnpackInfo_79,
			KS1CUUnpackInfo_80, KS1CUUnpackInfo_81, KS1CUUnpackInfo_82, KS1CUUnpackInfo_83,
			KS1CUUnpackInfo_84, KS1CUUnpackInfo_85, KS1CUUnpackInfo_86, KS1CUUnpackInfo_87,
			KS1CUUnpackInfo_88, KS1CUUnpackInfo_89, KS1CUUnpackInfo_90, KS1CUUnpackInfo_91,
			KS1CUUnpackInfo_92, KS1CUUnpackInfo_93, KS1CUUnpackInfo_94, KS1CUUnpackInfo_95,
			KS1CUUnpackInfo_96, KS1CUUnpackInfo_97, KS1CUUnpackInfo_98, KS1CUUnpackInfo_99,
			KS1CUUnpackInfo_100, KS1CUUnpackInfo_101, KS1CUUnpackInfo_102, KS1CUUnpackInfo_103,
			KS1CUUnpackInfo_104, KS1CUUnpackInfo_105, KS1CUUnpackInfo_106, KS1CUUnpackInfo_107,
			KS1CUUnpackInfo_108, KS1CUUnpackInfo_109, KS1CUUnpackInfo_110, KS1CUUnpackInfo_111,
			KS1CUUnpackInfo_112, KS1CUUnpackInfo_113, KS1CUUnpackInfo_114, KS1CUUnpackInfo_115,
			KS1CUUnpackInfo_116, KS1CUUnpackInfo_117, KS1CUUnpackInfo_118, KS1CUUnpackInfo_119,
			KS1CUUnpackInfo_120, KS1CUUnpackInfo_121, KS1CUUnpackInfo_122, KS1CUUnpackInfo_123,
			KS1CUUnpackInfo_124, KS1CUUnpackInfo_125, KS1CUUnpackInfo_126, KS1CUUnpackInfo_127,
			KS1CUUnpackInfo_128, KS1CUUnpackInfo_129, KS1CUUnpackInfo_130, KS1CUUnpackInfo_131,
			KS1CUUnpackInfo_132, KS1CUUnpackInfo_133, KS1CUUnpackInfo_134, KS1CUUnpackInfo_135,
			KS1CUUnpackInfo_136, KS1CUUnpackInfo_137, KS1CUUnpackInfo_138, KS1CUUnpackInfo_139,
			KS1CUUnpackInfo_140, KS1CUUnpackInfo_141, KS1CUUnpackInfo_142, KS1CUUnpackInfo_143,
			KS1CUUnpackInfo_144, KS1CUUnpackInfo_145, KS1CUUnpackInfo_146, KS1CUUnpackInfo_147,
			KS1CUUnpackInfo_148, KS1CUUnpackInfo_149, KS1CUUnpackInfo_150, KS1CUUnpackInfo_151,
			KS1CUUnpackInfo_152, KS1CUUnpackInfo_153, KS1CUUnpackInfo_154, KS1CUUnpackInfo_155,
			KS1CUUnpackInfo_156, KS1CUUnpackInfo_157, KS1CUUnpackInfo_158, KS1CUUnpackInfo_159,
			KS1CUUnpackInfo_160, KS1CUUnpackInfo_161, KS1CUUnpackInfo_162, KS1CUUnpackInfo_163,
			KS1CUUnpackInfo_164, KS1CUUnpackInfo_165, KS1CUUnpackInfo_166, KS1CUUnpackInfo_167,
			KS1CUUnpackInfo_168, KS1CUUnpackInfo_169, KS1CUUnpackInfo_170, KS1CUUnpackInfo_171,
			KS1CUUnpackInfo_172, KS1CUUnpackInfo_173, KS1CUUnpackInfo_174, KS1CUUnpackInfo_175,
			KS1CUUnpackInfo_176, KS1CUUnpackInfo_177, KS1CUUnpackInfo_178, KS1CUUnpackInfo_179,
			KS1CUUnpackInfo_180, KS1CUUnpackInfo_181, KS1CUUnpackInfo_182, KS1CUUnpackInfo_183,
			KS1CUUnpackInfo_184, KS1CUUnpackInfo_185, KS1CUUnpackInfo_186, KS1CUUnpackInfo_187,
			KS1CUUnpackInfo_188, KS1CUUnpackInfo_189, KS1CUUnpackInfo_190, KS1CUUnpackInfo_191,
			KS1CUUnpackInfo_192, KS1CUUnpackInfo_193, KS1CUUnpackInfo_194, KS1CUUnpackInfo_195,
			KS1CUUnpackInfo_196, KS1CUUnpackInfo_197, KS1CUUnpackInfo_198, KS1CUUnpackInfo_199,
			KS1CUUnpackInfo_200, KS1CUUnpackInfo_201, KS1CUUnpackInfo_202, KS1CUUnpackInfo_203,
			KS1CUUnpackInfo_204, KS1CUUnpackInfo_205, KS1CUUnpackInfo_206, KS1CUUnpackInfo_207,
			KS1CUUnpackInfo_208, KS1CUUnpackInfo_209, KS1CUUnpackInfo_210, KS1CUUnpackInfo_211,
			KS1CUUnpackInfo_212, KS1CUUnpackInfo_213, KS1CUUnpackInfo_214, KS1CUUnpackInfo_215,
			KS1CUUnpackInfo_216, KS1CUUnpackInfo_217, KS1CUUnpackInfo_218, KS1CUUnpackInfo_219,
			KS1CUUnpackInfo_220, KS1CUUnpackInfo_221, KS1CUUnpackInfo_222, KS1CUUnpackInfo_223,
			KS1CUUnpackInfo_224, KS1CUUnpackInfo_225, KS1CUUnpackInfo_226, KS1CUUnpackInfo_227,
			KS1CUUnpackInfo_228, KS1CUUnpackInfo_229, KS1CUUnpackInfo_230, KS1CUUnpackInfo_231,
			KS1CUUnpackInfo_232, KS1CUUnpackInfo_233, KS1CUUnpackInfo_234, KS1CUUnpackInfo_235,
			KS1CUUnpackInfo_236, KS1CUUnpackInfo_237, KS1CUUnpackInfo_238, KS1CUUnpackInfo_239,
			KS1CUUnpackInfo_240, KS1CUUnpackInfo_241, KS1CUUnpackInfo_242, KS1CUUnpackInfo_243,
			KS1CUUnpackInfo_244, KS1CUUnpackInfo_245, KS1CUUnpackInfo_246, KS1CUUnpackInfo_247,
			KS1CUUnpackInfo_248, KS1CUUnpackInfo_249, KS1CUUnpackInfo_250, KS1CUUnpackInfo_251,
			KS1CUUnpackInfo_252, KS1CUUnpackInfo_253, KS1CUUnpackInfo_254, KS1CUUnpackInfo_255
};


}
}


#endif /* KSCHEME_1BIT_CU_UNPACK_HPP_ */

