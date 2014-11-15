/**
 *@filename: GvintUnpack.hpp
 *@brief   :
 *@create  : 2010-11-13
 *@author  : shandd
 */

#ifndef GVINTBINARYUNPACKINTELPARALLEL_HPP_
#define GVINTBINARYUNPACKINTELPARALLEL_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {
struct GvintBinaryUnpackIntelParaInfo {
		uint8_t shf[16];	//shuffle sequence for parallel
		uint8_t skip;
};

static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_0 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1 }, 4 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_1 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1 }, 5 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_2 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_3 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_4 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1 }, 5 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_5 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_6 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_7 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, 6, 7 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_8 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_9 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_10 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, 6, 7, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_11 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, 6, 7, 8 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_12 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_13 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, 5, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_14 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, 5, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_15 = { { 0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, 5, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_16 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1 }, 5 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_17 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_18 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, 6, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_19 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, 6, 7 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_20 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_21 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, 6, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_22 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, 6, 7, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_23 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, 6, 7, 8 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_24 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_25 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_26 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_27 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_28 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, 6, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_29 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, 6, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_30 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, 6, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_31 = { { 0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, 6, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_32 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, -1, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_33 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, 6, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_34 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, 6, 7, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_35 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, 6, 7, 8 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_36 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, -1, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_37 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, -1, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_38 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, -1, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_39 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, -1, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_40 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_41 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_42 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_43 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_44 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, 7, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_45 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, 7, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_46 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, 7, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_47 = { { 0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, 7, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_48 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, -1, -1, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_49 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, -1, -1, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_50 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, -1, -1, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_51 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, -1, -1, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_52 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, -1, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_53 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, -1, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_54 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, -1, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_55 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, -1, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_56 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_57 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_58 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_59 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_60 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_61 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_62 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_63 = { { 0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_64 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1 }, 5 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_65 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_66 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, 6, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_67 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, 6, 7 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_68 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_69 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_70 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, 7, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_71 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, 7, 8 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_72 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_73 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_74 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_75 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_76 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_77 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_78 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_79 = { { 0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_80 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_81 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_82 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, 7, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_83 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, 7, 8 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_84 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_85 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_86 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_87 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_88 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_89 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_90 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_91 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_92 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, 7, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_93 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, 7, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_94 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, 7, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_95 = { { 0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, 7, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_96 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_97 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_98 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_99 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_100 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_101 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_102 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_103 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_104 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_105 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_106 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_107 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_108 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, 8, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_109 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, 8, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_110 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, 8, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_111 = { { 0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, 8, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_112 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_113 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_114 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_115 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_116 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, -1, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_117 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, -1, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_118 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, -1, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_119 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, -1, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_120 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, 8, -1, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_121 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, 8, -1, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_122 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, 8, -1, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_123 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, 8, -1, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_124 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_125 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_126 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_127 = { { 0, 1, -1, -1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_128 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1 }, 6 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_129 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_130 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, 7, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_131 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, 7, 8 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_132 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_133 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_134 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_135 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_136 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_137 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_138 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_139 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_140 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, 7, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_141 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, 7, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_142 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, 7, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_143 = { { 0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, 7, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_144 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_145 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_146 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_147 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_148 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_149 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, -1, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_150 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, -1, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_151 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, -1, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_152 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_153 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_154 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_155 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_156 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, 8, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_157 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, 8, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_158 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, 8, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_159 = { { 0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, 8, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_160 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, -1, -1, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_161 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, -1, -1, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_162 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, -1, -1, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_163 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, -1, -1, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_164 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, -1, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_165 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, -1, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_166 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, -1, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_167 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, -1, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_168 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, -1, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_169 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, -1, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_170 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, -1, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_171 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, -1, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_172 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, 9, 10, -1, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_173 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, 9, 10, 11, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_174 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, 9, 10, 11, 12, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_175 = { { 0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, 9, 10, 11, 12, 13 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_176 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, -1, -1, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_177 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, -1, -1, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_178 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, -1, -1, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_179 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, -1, -1, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_180 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, -1, -1, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_181 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, -1, -1, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_182 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, -1, -1, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_183 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, -1, -1, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_184 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, 9, -1, 10, -1, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_185 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, 9, -1, 10, 11, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_186 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, 9, -1, 10, 11, 12, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_187 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, 9, -1, 10, 11, 12, 13 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_188 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, 9, 10, 11, -1, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_189 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, -1, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_190 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, -1 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_191 = { { 0, 1, 2, -1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 }, 15 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_192 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1 }, 7 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_193 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_194 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, 8, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_195 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, 8, 9 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_196 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_197 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, -1, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_198 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, -1, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_199 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, -1, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_200 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_201 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_202 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_203 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_204 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, 8, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_205 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, 8, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_206 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, 8, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_207 = { { 0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, 8, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_208 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1 }, 8 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_209 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, -1, -1, -1, 7, 8, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_210 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, -1, -1, -1, 7, 8, 9, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_211 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, -1, -1, -1, 7, 8, 9, 10 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_212 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, -1, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_213 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, -1, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_214 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, -1, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_215 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, -1, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_216 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, -1, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_217 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, -1, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_218 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, -1, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_219 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, -1, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_220 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, 9, 10, -1, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_221 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, 9, 10, 11, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_222 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, 9, 10, 11, 12, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_223 = { { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, 9, 10, 11, 12, 13 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_224 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, -1, -1, -1, 8, -1, -1, -1 }, 9 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_225 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, -1, -1, -1, 8, 9, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_226 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, -1, -1, -1, 8, 9, 10, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_227 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, -1, -1, -1, 8, 9, 10, 11 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_228 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, -1, -1, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_229 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, -1, -1, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_230 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, -1, -1, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_231 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, -1, -1, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_232 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, 9, -1, 10, -1, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_233 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, 9, -1, 10, 11, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_234 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, 9, -1, 10, 11, 12, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_235 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, 9, -1, 10, 11, 12, 13 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_236 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, 9, 10, 11, -1, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_237 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, 9, 10, 11, 12, -1, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_238 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, 9, 10, 11, 12, 13, -1 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_239 = { { 0, 1, 2, 3, 4, 5, 6, -1, 7, 8, 9, 10, 11, 12, 13, 14 }, 15 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_240 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, -1, -1, -1, 9, -1, -1, -1 }, 10 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_241 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, -1, -1, -1, 9, 10, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_242 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, -1, -1, -1, 9, 10, 11, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_243 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, -1, -1, -1, 9, 10, 11, 12 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_244 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, 10, -1, -1, -1 }, 11 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_245 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, 10, 11, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_246 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, 10, 11, 12, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_247 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, 10, 11, 12, 13 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_248 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, 11, -1, -1, -1 }, 12 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_249 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, 11, 12, -1, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_250 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, 11, 12, 13, -1 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_251 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, 11, 12, 13, 14 }, 15 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_252 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, -1, -1, -1 }, 13 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_253 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, -1, -1 }, 14 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_254 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, -1 }, 15 };
static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_255 = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }, 16 };

static GvintBinaryUnpackIntelParaInfo binaryUnpackIntelParaInfoArr[256] = { GvintBinaryUnpackIntelParaInfo_0,
		GvintBinaryUnpackIntelParaInfo_1, GvintBinaryUnpackIntelParaInfo_2, GvintBinaryUnpackIntelParaInfo_3,
		GvintBinaryUnpackIntelParaInfo_4, GvintBinaryUnpackIntelParaInfo_5, GvintBinaryUnpackIntelParaInfo_6,
		GvintBinaryUnpackIntelParaInfo_7, GvintBinaryUnpackIntelParaInfo_8, GvintBinaryUnpackIntelParaInfo_9,
		GvintBinaryUnpackIntelParaInfo_10, GvintBinaryUnpackIntelParaInfo_11, GvintBinaryUnpackIntelParaInfo_12,
		GvintBinaryUnpackIntelParaInfo_13, GvintBinaryUnpackIntelParaInfo_14, GvintBinaryUnpackIntelParaInfo_15,
		GvintBinaryUnpackIntelParaInfo_16, GvintBinaryUnpackIntelParaInfo_17, GvintBinaryUnpackIntelParaInfo_18,
		GvintBinaryUnpackIntelParaInfo_19, GvintBinaryUnpackIntelParaInfo_20, GvintBinaryUnpackIntelParaInfo_21,
		GvintBinaryUnpackIntelParaInfo_22, GvintBinaryUnpackIntelParaInfo_23, GvintBinaryUnpackIntelParaInfo_24,
		GvintBinaryUnpackIntelParaInfo_25, GvintBinaryUnpackIntelParaInfo_26, GvintBinaryUnpackIntelParaInfo_27,
		GvintBinaryUnpackIntelParaInfo_28, GvintBinaryUnpackIntelParaInfo_29, GvintBinaryUnpackIntelParaInfo_30,
		GvintBinaryUnpackIntelParaInfo_31, GvintBinaryUnpackIntelParaInfo_32, GvintBinaryUnpackIntelParaInfo_33,
		GvintBinaryUnpackIntelParaInfo_34, GvintBinaryUnpackIntelParaInfo_35, GvintBinaryUnpackIntelParaInfo_36,
		GvintBinaryUnpackIntelParaInfo_37, GvintBinaryUnpackIntelParaInfo_38, GvintBinaryUnpackIntelParaInfo_39,
		GvintBinaryUnpackIntelParaInfo_40, GvintBinaryUnpackIntelParaInfo_41, GvintBinaryUnpackIntelParaInfo_42,
		GvintBinaryUnpackIntelParaInfo_43, GvintBinaryUnpackIntelParaInfo_44, GvintBinaryUnpackIntelParaInfo_45,
		GvintBinaryUnpackIntelParaInfo_46, GvintBinaryUnpackIntelParaInfo_47, GvintBinaryUnpackIntelParaInfo_48,
		GvintBinaryUnpackIntelParaInfo_49, GvintBinaryUnpackIntelParaInfo_50, GvintBinaryUnpackIntelParaInfo_51,
		GvintBinaryUnpackIntelParaInfo_52, GvintBinaryUnpackIntelParaInfo_53, GvintBinaryUnpackIntelParaInfo_54,
		GvintBinaryUnpackIntelParaInfo_55, GvintBinaryUnpackIntelParaInfo_56, GvintBinaryUnpackIntelParaInfo_57,
		GvintBinaryUnpackIntelParaInfo_58, GvintBinaryUnpackIntelParaInfo_59, GvintBinaryUnpackIntelParaInfo_60,
		GvintBinaryUnpackIntelParaInfo_61, GvintBinaryUnpackIntelParaInfo_62, GvintBinaryUnpackIntelParaInfo_63,
		GvintBinaryUnpackIntelParaInfo_64, GvintBinaryUnpackIntelParaInfo_65, GvintBinaryUnpackIntelParaInfo_66,
		GvintBinaryUnpackIntelParaInfo_67, GvintBinaryUnpackIntelParaInfo_68, GvintBinaryUnpackIntelParaInfo_69,
		GvintBinaryUnpackIntelParaInfo_70, GvintBinaryUnpackIntelParaInfo_71, GvintBinaryUnpackIntelParaInfo_72,
		GvintBinaryUnpackIntelParaInfo_73, GvintBinaryUnpackIntelParaInfo_74, GvintBinaryUnpackIntelParaInfo_75,
		GvintBinaryUnpackIntelParaInfo_76, GvintBinaryUnpackIntelParaInfo_77, GvintBinaryUnpackIntelParaInfo_78,
		GvintBinaryUnpackIntelParaInfo_79, GvintBinaryUnpackIntelParaInfo_80, GvintBinaryUnpackIntelParaInfo_81,
		GvintBinaryUnpackIntelParaInfo_82, GvintBinaryUnpackIntelParaInfo_83, GvintBinaryUnpackIntelParaInfo_84,
		GvintBinaryUnpackIntelParaInfo_85, GvintBinaryUnpackIntelParaInfo_86, GvintBinaryUnpackIntelParaInfo_87,
		GvintBinaryUnpackIntelParaInfo_88, GvintBinaryUnpackIntelParaInfo_89, GvintBinaryUnpackIntelParaInfo_90,
		GvintBinaryUnpackIntelParaInfo_91, GvintBinaryUnpackIntelParaInfo_92, GvintBinaryUnpackIntelParaInfo_93,
		GvintBinaryUnpackIntelParaInfo_94, GvintBinaryUnpackIntelParaInfo_95, GvintBinaryUnpackIntelParaInfo_96,
		GvintBinaryUnpackIntelParaInfo_97, GvintBinaryUnpackIntelParaInfo_98, GvintBinaryUnpackIntelParaInfo_99,
		GvintBinaryUnpackIntelParaInfo_100, GvintBinaryUnpackIntelParaInfo_101, GvintBinaryUnpackIntelParaInfo_102,
		GvintBinaryUnpackIntelParaInfo_103, GvintBinaryUnpackIntelParaInfo_104, GvintBinaryUnpackIntelParaInfo_105,
		GvintBinaryUnpackIntelParaInfo_106, GvintBinaryUnpackIntelParaInfo_107, GvintBinaryUnpackIntelParaInfo_108,
		GvintBinaryUnpackIntelParaInfo_109, GvintBinaryUnpackIntelParaInfo_110, GvintBinaryUnpackIntelParaInfo_111,
		GvintBinaryUnpackIntelParaInfo_112, GvintBinaryUnpackIntelParaInfo_113, GvintBinaryUnpackIntelParaInfo_114,
		GvintBinaryUnpackIntelParaInfo_115, GvintBinaryUnpackIntelParaInfo_116, GvintBinaryUnpackIntelParaInfo_117,
		GvintBinaryUnpackIntelParaInfo_118, GvintBinaryUnpackIntelParaInfo_119, GvintBinaryUnpackIntelParaInfo_120,
		GvintBinaryUnpackIntelParaInfo_121, GvintBinaryUnpackIntelParaInfo_122, GvintBinaryUnpackIntelParaInfo_123,
		GvintBinaryUnpackIntelParaInfo_124, GvintBinaryUnpackIntelParaInfo_125, GvintBinaryUnpackIntelParaInfo_126,
		GvintBinaryUnpackIntelParaInfo_127, GvintBinaryUnpackIntelParaInfo_128, GvintBinaryUnpackIntelParaInfo_129,
		GvintBinaryUnpackIntelParaInfo_130, GvintBinaryUnpackIntelParaInfo_131, GvintBinaryUnpackIntelParaInfo_132,
		GvintBinaryUnpackIntelParaInfo_133, GvintBinaryUnpackIntelParaInfo_134, GvintBinaryUnpackIntelParaInfo_135,
		GvintBinaryUnpackIntelParaInfo_136, GvintBinaryUnpackIntelParaInfo_137, GvintBinaryUnpackIntelParaInfo_138,
		GvintBinaryUnpackIntelParaInfo_139, GvintBinaryUnpackIntelParaInfo_140, GvintBinaryUnpackIntelParaInfo_141,
		GvintBinaryUnpackIntelParaInfo_142, GvintBinaryUnpackIntelParaInfo_143, GvintBinaryUnpackIntelParaInfo_144,
		GvintBinaryUnpackIntelParaInfo_145, GvintBinaryUnpackIntelParaInfo_146, GvintBinaryUnpackIntelParaInfo_147,
		GvintBinaryUnpackIntelParaInfo_148, GvintBinaryUnpackIntelParaInfo_149, GvintBinaryUnpackIntelParaInfo_150,
		GvintBinaryUnpackIntelParaInfo_151, GvintBinaryUnpackIntelParaInfo_152, GvintBinaryUnpackIntelParaInfo_153,
		GvintBinaryUnpackIntelParaInfo_154, GvintBinaryUnpackIntelParaInfo_155, GvintBinaryUnpackIntelParaInfo_156,
		GvintBinaryUnpackIntelParaInfo_157, GvintBinaryUnpackIntelParaInfo_158, GvintBinaryUnpackIntelParaInfo_159,
		GvintBinaryUnpackIntelParaInfo_160, GvintBinaryUnpackIntelParaInfo_161, GvintBinaryUnpackIntelParaInfo_162,
		GvintBinaryUnpackIntelParaInfo_163, GvintBinaryUnpackIntelParaInfo_164, GvintBinaryUnpackIntelParaInfo_165,
		GvintBinaryUnpackIntelParaInfo_166, GvintBinaryUnpackIntelParaInfo_167, GvintBinaryUnpackIntelParaInfo_168,
		GvintBinaryUnpackIntelParaInfo_169, GvintBinaryUnpackIntelParaInfo_170, GvintBinaryUnpackIntelParaInfo_171,
		GvintBinaryUnpackIntelParaInfo_172, GvintBinaryUnpackIntelParaInfo_173, GvintBinaryUnpackIntelParaInfo_174,
		GvintBinaryUnpackIntelParaInfo_175, GvintBinaryUnpackIntelParaInfo_176, GvintBinaryUnpackIntelParaInfo_177,
		GvintBinaryUnpackIntelParaInfo_178, GvintBinaryUnpackIntelParaInfo_179, GvintBinaryUnpackIntelParaInfo_180,
		GvintBinaryUnpackIntelParaInfo_181, GvintBinaryUnpackIntelParaInfo_182, GvintBinaryUnpackIntelParaInfo_183,
		GvintBinaryUnpackIntelParaInfo_184, GvintBinaryUnpackIntelParaInfo_185, GvintBinaryUnpackIntelParaInfo_186,
		GvintBinaryUnpackIntelParaInfo_187, GvintBinaryUnpackIntelParaInfo_188, GvintBinaryUnpackIntelParaInfo_189,
		GvintBinaryUnpackIntelParaInfo_190, GvintBinaryUnpackIntelParaInfo_191, GvintBinaryUnpackIntelParaInfo_192,
		GvintBinaryUnpackIntelParaInfo_193, GvintBinaryUnpackIntelParaInfo_194, GvintBinaryUnpackIntelParaInfo_195,
		GvintBinaryUnpackIntelParaInfo_196, GvintBinaryUnpackIntelParaInfo_197, GvintBinaryUnpackIntelParaInfo_198,
		GvintBinaryUnpackIntelParaInfo_199, GvintBinaryUnpackIntelParaInfo_200, GvintBinaryUnpackIntelParaInfo_201,
		GvintBinaryUnpackIntelParaInfo_202, GvintBinaryUnpackIntelParaInfo_203, GvintBinaryUnpackIntelParaInfo_204,
		GvintBinaryUnpackIntelParaInfo_205, GvintBinaryUnpackIntelParaInfo_206, GvintBinaryUnpackIntelParaInfo_207,
		GvintBinaryUnpackIntelParaInfo_208, GvintBinaryUnpackIntelParaInfo_209, GvintBinaryUnpackIntelParaInfo_210,
		GvintBinaryUnpackIntelParaInfo_211, GvintBinaryUnpackIntelParaInfo_212, GvintBinaryUnpackIntelParaInfo_213,
		GvintBinaryUnpackIntelParaInfo_214, GvintBinaryUnpackIntelParaInfo_215, GvintBinaryUnpackIntelParaInfo_216,
		GvintBinaryUnpackIntelParaInfo_217, GvintBinaryUnpackIntelParaInfo_218, GvintBinaryUnpackIntelParaInfo_219,
		GvintBinaryUnpackIntelParaInfo_220, GvintBinaryUnpackIntelParaInfo_221, GvintBinaryUnpackIntelParaInfo_222,
		GvintBinaryUnpackIntelParaInfo_223, GvintBinaryUnpackIntelParaInfo_224, GvintBinaryUnpackIntelParaInfo_225,
		GvintBinaryUnpackIntelParaInfo_226, GvintBinaryUnpackIntelParaInfo_227, GvintBinaryUnpackIntelParaInfo_228,
		GvintBinaryUnpackIntelParaInfo_229, GvintBinaryUnpackIntelParaInfo_230, GvintBinaryUnpackIntelParaInfo_231,
		GvintBinaryUnpackIntelParaInfo_232, GvintBinaryUnpackIntelParaInfo_233, GvintBinaryUnpackIntelParaInfo_234,
		GvintBinaryUnpackIntelParaInfo_235, GvintBinaryUnpackIntelParaInfo_236, GvintBinaryUnpackIntelParaInfo_237,
		GvintBinaryUnpackIntelParaInfo_238, GvintBinaryUnpackIntelParaInfo_239, GvintBinaryUnpackIntelParaInfo_240,
		GvintBinaryUnpackIntelParaInfo_241, GvintBinaryUnpackIntelParaInfo_242, GvintBinaryUnpackIntelParaInfo_243,
		GvintBinaryUnpackIntelParaInfo_244, GvintBinaryUnpackIntelParaInfo_245, GvintBinaryUnpackIntelParaInfo_246,
		GvintBinaryUnpackIntelParaInfo_247, GvintBinaryUnpackIntelParaInfo_248, GvintBinaryUnpackIntelParaInfo_249,
		GvintBinaryUnpackIntelParaInfo_250, GvintBinaryUnpackIntelParaInfo_251, GvintBinaryUnpackIntelParaInfo_252,
		GvintBinaryUnpackIntelParaInfo_253, GvintBinaryUnpackIntelParaInfo_254, GvintBinaryUnpackIntelParaInfo_255 };
}
}

/*
 * code for generating info arr:

#include <iostream>
#include <stdint.h>

using namespace std;

int main() {

	for (uint32_t i=0; i<256; i++) {
		uint32_t offsetArr[4] = {0,0,0,0};
		uint32_t lenArr[4] = {0,0,0,0};
		uint32_t maskArr[4] = {0,0,0,0};
		uint32_t skip = 0;
		uint32_t mask = i;

		uint32_t curBitIdx = 0;

		while (curBitIdx < 8) {
			//start from high bit
			uint32_t descriptor = (mask >> 6) & 0x3;
			mask <<= 2;
			descriptor ++;
			lenArr[curBitIdx / 2] = descriptor;
			if (descriptor < 4)
				maskArr[curBitIdx / 2] = (1 << (descriptor * 8)) - 1;
			else
				maskArr[curBitIdx / 2] = 0xffffffff;
			skip += descriptor;			
			offsetArr[curBitIdx / 2] = skip - descriptor;			
			curBitIdx += 2;
		}
		
		int shf[16] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
		int j = 0, k = 0;
		for (int t=0; t<4; t++) {
			for (int n=0; n<4; n++) {
				if (n < lenArr[t]) {
					shf[k] = j;
					j++;
				}
				else {
					shf[k] = -1;
				}
				k++;
			}
		}

		//output
		cout << "static GvintBinaryUnpackIntelParaInfo GvintBinaryUnpackIntelParaInfo_" << i << " = { ";
		cout << "{ ";
		for (int j=0; j<15; j++) {
			cout << shf[j] << ", ";
		}
		cout << shf[15] << " }, ";
		//for (int j=0; j<4; j++) {
		//	cout << offsetArr[j] << ", ";
		//}
		//for (int j=0; j<4; j++) {
		//	cout << showbase << hex << maskArr[j] << dec << ", ";
		//}
		cout << skip;
		cout << " };" << endl;
	}
	return 0;
}



 *
 */

#endif

#endif /* GVINTBINARYUNPACKINTELPARALLEL_HPP_ */
