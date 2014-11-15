/*
 * GvintIncompUnaryUnpackIntelParallel.hpp
 *
 *  Created on: 2013-1-23
 *      Author: zxd
 */

#ifndef GVINTINCOMPUNARYUNPACKINTELPARALLEL_HPP_
#define GVINTINCOMPUNARYUNPACKINTELPARALLEL_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {
struct GvintIncompUnaryUnpackIntelParaInfo {
		uint8_t shf[32];	//shuffle sequence for SIMD inst PSHUFB
		uint8_t intNum;
		bool valid;		//true if it's a valid representation of the group
};

static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_0 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1}, 8, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_1 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1}, 7, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_2 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1}, 7, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_3 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_4 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1}, 7, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_5 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_6 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_7 = { {0, 1, 2, 3, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_8 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1}, 7, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_9 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_10 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_11 = { {0, 1, 2, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_12 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_13 = { {0, 1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_14 = { {0, -1, -1, -1, 1, 2, 3, 4, 5, -1, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_15 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_16 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1}, 7, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_17 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_18 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_19 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_20 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_21 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_22 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_23 = { {0, 1, 2, 3, 4, 5, -1, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_24 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_25 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_26 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_27 = { {0, 1, 2, -1, 3, 4, 5, -1, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_28 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_29 = { {0, 1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_30 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_31 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_32 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1}, 7, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_33 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_34 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_35 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_36 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_37 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_38 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_39 = { {0, 1, 2, 3, 4, -1, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_40 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_41 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_42 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_43 = { {0, 1, 2, -1, 3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_44 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_45 = { {0, 1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_46 = { {0, -1, -1, -1, 1, 2, 3, 4, 5, 6, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_47 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_48 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, 6, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_49 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, 6, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_50 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, 6, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_51 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_52 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_53 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_54 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_55 = { {0, 1, 2, 3, 4, 5, 6, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_56 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_57 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_58 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_59 = { {0, 1, 2, -1, 3, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_60 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_61 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_62 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_63 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_64 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1}, 7, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_65 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_66 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_67 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_68 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_69 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_70 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_71 = { {0, 1, 2, 3, 4, -1, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_72 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_73 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_74 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_75 = { {0, 1, 2, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_76 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_77 = { {0, 1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_78 = { {0, -1, -1, -1, 1, 2, 3, 4, 5, -1, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_79 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_80 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_81 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_82 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_83 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_84 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_85 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_86 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, 5, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_87 = { {0, 1, 2, 3, 4, 5, -1, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_88 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_89 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_90 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_91 = { {0, 1, 2, -1, 3, 4, 5, -1, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_92 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_93 = { {0, 1, -1, -1, 2, 3, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_94 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_95 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_96 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_97 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_98 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_99 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_100 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_101 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_102 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_103 = { {0, 1, 2, 3, 4, -1, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_104 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_105 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_106 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_107 = { {0, 1, 2, -1, 3, 4, -1, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_108 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_109 = { {0, 1, -1, -1, 2, 3, 4, -1, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_110 = { {0, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_111 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_112 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_113 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_114 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_115 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_116 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_117 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_118 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_119 = { {0, 1, 2, 3, 4, 5, 6, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_120 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_121 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_122 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_123 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_124 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_125 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_126 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_127 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 1, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_128 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1}, 7, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_129 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_130 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_131 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_132 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_133 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_134 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_135 = { {0, 1, 2, 3, 4, -1, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_136 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_137 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_138 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_139 = { {0, 1, 2, -1, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_140 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_141 = { {0, 1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_142 = { {0, -1, -1, -1, 1, 2, 3, 4, 5, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_143 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_144 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_145 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_146 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_147 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_148 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_149 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_150 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, 5, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_151 = { {0, 1, 2, 3, 4, 5, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_152 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_153 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_154 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_155 = { {0, 1, 2, -1, 3, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_156 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_157 = { {0, 1, -1, -1, 2, 3, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_158 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_159 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_160 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_161 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_162 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_163 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_164 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_165 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_166 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_167 = { {0, 1, 2, 3, 4, -1, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_168 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_169 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_170 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_171 = { {0, 1, 2, -1, 3, 4, -1, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_172 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_173 = { {0, 1, -1, -1, 2, 3, 4, -1, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_174 = { {0, -1, -1, -1, 1, 2, 3, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_175 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_176 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_177 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_178 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_179 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_180 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_181 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_182 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_183 = { {0, 1, 2, 3, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_184 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_185 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_186 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_187 = { {0, 1, 2, -1, 3, 4, 5, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_188 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_189 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_190 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_191 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 1, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_192 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 6, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_193 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_194 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_195 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_196 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_197 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_198 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_199 = { {0, 1, 2, 3, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_200 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_201 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_202 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_203 = { {0, 1, 2, -1, 3, 4, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_204 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_205 = { {0, 1, -1, -1, 2, 3, 4, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_206 = { {0, -1, -1, -1, 1, 2, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_207 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_208 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_209 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_210 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_211 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_212 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_213 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_214 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_215 = { {0, 1, 2, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_216 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_217 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_218 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_219 = { {0, 1, 2, -1, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_220 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_221 = { {0, 1, -1, -1, 2, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_222 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_223 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 1, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_224 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 5, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_225 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_226 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_227 = { {0, 1, 2, -1, 3, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_228 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_229 = { {0, 1, -1, -1, 2, 3, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_230 = { {0, -1, -1, -1, 1, 2, 3, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_231 = { {0, 1, 2, 3, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_232 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_233 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_234 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_235 = { {0, 1, 2, -1, 3, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_236 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_237 = { {0, 1, -1, -1, 2, 3, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_238 = { {0, -1, -1, -1, 1, 2, 3, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_239 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 1, false };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_240 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 4, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_241 = { {0, 1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_242 = { {0, -1, -1, -1, 1, 2, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_243 = { {0, 1, 2, -1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_244 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_245 = { {0, 1, -1, -1, 2, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_246 = { {0, -1, -1, -1, 1, 2, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_247 = { {0, 1, 2, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 1, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_248 = { {0, -1, -1, -1, 1, -1, -1, -1, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 3, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_249 = { {0, 1, -1, -1, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_250 = { {0, -1, -1, -1, 1, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_251 = { {0, 1, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 1, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_252 = { {0, -1, -1, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 2, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_253 = { {0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 1, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_254 = { {0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 1, true };
static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_255 = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 0, false };

static GvintIncompUnaryUnpackIntelParaInfo incompUnaryUnpackIntelParaInfoArr[256] = { GvintIncompUnaryUnpackIntelParaInfo_0,
		GvintIncompUnaryUnpackIntelParaInfo_1, GvintIncompUnaryUnpackIntelParaInfo_2, GvintIncompUnaryUnpackIntelParaInfo_3,
		GvintIncompUnaryUnpackIntelParaInfo_4, GvintIncompUnaryUnpackIntelParaInfo_5, GvintIncompUnaryUnpackIntelParaInfo_6,
		GvintIncompUnaryUnpackIntelParaInfo_7, GvintIncompUnaryUnpackIntelParaInfo_8, GvintIncompUnaryUnpackIntelParaInfo_9,
		GvintIncompUnaryUnpackIntelParaInfo_10, GvintIncompUnaryUnpackIntelParaInfo_11, GvintIncompUnaryUnpackIntelParaInfo_12,
		GvintIncompUnaryUnpackIntelParaInfo_13, GvintIncompUnaryUnpackIntelParaInfo_14, GvintIncompUnaryUnpackIntelParaInfo_15,
		GvintIncompUnaryUnpackIntelParaInfo_16, GvintIncompUnaryUnpackIntelParaInfo_17, GvintIncompUnaryUnpackIntelParaInfo_18,
		GvintIncompUnaryUnpackIntelParaInfo_19, GvintIncompUnaryUnpackIntelParaInfo_20, GvintIncompUnaryUnpackIntelParaInfo_21,
		GvintIncompUnaryUnpackIntelParaInfo_22, GvintIncompUnaryUnpackIntelParaInfo_23, GvintIncompUnaryUnpackIntelParaInfo_24,
		GvintIncompUnaryUnpackIntelParaInfo_25, GvintIncompUnaryUnpackIntelParaInfo_26, GvintIncompUnaryUnpackIntelParaInfo_27,
		GvintIncompUnaryUnpackIntelParaInfo_28, GvintIncompUnaryUnpackIntelParaInfo_29, GvintIncompUnaryUnpackIntelParaInfo_30,
		GvintIncompUnaryUnpackIntelParaInfo_31, GvintIncompUnaryUnpackIntelParaInfo_32, GvintIncompUnaryUnpackIntelParaInfo_33,
		GvintIncompUnaryUnpackIntelParaInfo_34, GvintIncompUnaryUnpackIntelParaInfo_35, GvintIncompUnaryUnpackIntelParaInfo_36,
		GvintIncompUnaryUnpackIntelParaInfo_37, GvintIncompUnaryUnpackIntelParaInfo_38, GvintIncompUnaryUnpackIntelParaInfo_39,
		GvintIncompUnaryUnpackIntelParaInfo_40, GvintIncompUnaryUnpackIntelParaInfo_41, GvintIncompUnaryUnpackIntelParaInfo_42,
		GvintIncompUnaryUnpackIntelParaInfo_43, GvintIncompUnaryUnpackIntelParaInfo_44, GvintIncompUnaryUnpackIntelParaInfo_45,
		GvintIncompUnaryUnpackIntelParaInfo_46, GvintIncompUnaryUnpackIntelParaInfo_47, GvintIncompUnaryUnpackIntelParaInfo_48,
		GvintIncompUnaryUnpackIntelParaInfo_49, GvintIncompUnaryUnpackIntelParaInfo_50, GvintIncompUnaryUnpackIntelParaInfo_51,
		GvintIncompUnaryUnpackIntelParaInfo_52, GvintIncompUnaryUnpackIntelParaInfo_53, GvintIncompUnaryUnpackIntelParaInfo_54,
		GvintIncompUnaryUnpackIntelParaInfo_55, GvintIncompUnaryUnpackIntelParaInfo_56, GvintIncompUnaryUnpackIntelParaInfo_57,
		GvintIncompUnaryUnpackIntelParaInfo_58, GvintIncompUnaryUnpackIntelParaInfo_59, GvintIncompUnaryUnpackIntelParaInfo_60,
		GvintIncompUnaryUnpackIntelParaInfo_61, GvintIncompUnaryUnpackIntelParaInfo_62, GvintIncompUnaryUnpackIntelParaInfo_63,
		GvintIncompUnaryUnpackIntelParaInfo_64, GvintIncompUnaryUnpackIntelParaInfo_65, GvintIncompUnaryUnpackIntelParaInfo_66,
		GvintIncompUnaryUnpackIntelParaInfo_67, GvintIncompUnaryUnpackIntelParaInfo_68, GvintIncompUnaryUnpackIntelParaInfo_69,
		GvintIncompUnaryUnpackIntelParaInfo_70, GvintIncompUnaryUnpackIntelParaInfo_71, GvintIncompUnaryUnpackIntelParaInfo_72,
		GvintIncompUnaryUnpackIntelParaInfo_73, GvintIncompUnaryUnpackIntelParaInfo_74, GvintIncompUnaryUnpackIntelParaInfo_75,
		GvintIncompUnaryUnpackIntelParaInfo_76, GvintIncompUnaryUnpackIntelParaInfo_77, GvintIncompUnaryUnpackIntelParaInfo_78,
		GvintIncompUnaryUnpackIntelParaInfo_79, GvintIncompUnaryUnpackIntelParaInfo_80, GvintIncompUnaryUnpackIntelParaInfo_81,
		GvintIncompUnaryUnpackIntelParaInfo_82, GvintIncompUnaryUnpackIntelParaInfo_83, GvintIncompUnaryUnpackIntelParaInfo_84,
		GvintIncompUnaryUnpackIntelParaInfo_85, GvintIncompUnaryUnpackIntelParaInfo_86, GvintIncompUnaryUnpackIntelParaInfo_87,
		GvintIncompUnaryUnpackIntelParaInfo_88, GvintIncompUnaryUnpackIntelParaInfo_89, GvintIncompUnaryUnpackIntelParaInfo_90,
		GvintIncompUnaryUnpackIntelParaInfo_91, GvintIncompUnaryUnpackIntelParaInfo_92, GvintIncompUnaryUnpackIntelParaInfo_93,
		GvintIncompUnaryUnpackIntelParaInfo_94, GvintIncompUnaryUnpackIntelParaInfo_95, GvintIncompUnaryUnpackIntelParaInfo_96,
		GvintIncompUnaryUnpackIntelParaInfo_97, GvintIncompUnaryUnpackIntelParaInfo_98, GvintIncompUnaryUnpackIntelParaInfo_99,
		GvintIncompUnaryUnpackIntelParaInfo_100, GvintIncompUnaryUnpackIntelParaInfo_101, GvintIncompUnaryUnpackIntelParaInfo_102,
		GvintIncompUnaryUnpackIntelParaInfo_103, GvintIncompUnaryUnpackIntelParaInfo_104, GvintIncompUnaryUnpackIntelParaInfo_105,
		GvintIncompUnaryUnpackIntelParaInfo_106, GvintIncompUnaryUnpackIntelParaInfo_107, GvintIncompUnaryUnpackIntelParaInfo_108,
		GvintIncompUnaryUnpackIntelParaInfo_109, GvintIncompUnaryUnpackIntelParaInfo_110, GvintIncompUnaryUnpackIntelParaInfo_111,
		GvintIncompUnaryUnpackIntelParaInfo_112, GvintIncompUnaryUnpackIntelParaInfo_113, GvintIncompUnaryUnpackIntelParaInfo_114,
		GvintIncompUnaryUnpackIntelParaInfo_115, GvintIncompUnaryUnpackIntelParaInfo_116, GvintIncompUnaryUnpackIntelParaInfo_117,
		GvintIncompUnaryUnpackIntelParaInfo_118, GvintIncompUnaryUnpackIntelParaInfo_119, GvintIncompUnaryUnpackIntelParaInfo_120,
		GvintIncompUnaryUnpackIntelParaInfo_121, GvintIncompUnaryUnpackIntelParaInfo_122, GvintIncompUnaryUnpackIntelParaInfo_123,
		GvintIncompUnaryUnpackIntelParaInfo_124, GvintIncompUnaryUnpackIntelParaInfo_125, GvintIncompUnaryUnpackIntelParaInfo_126,
		GvintIncompUnaryUnpackIntelParaInfo_127, GvintIncompUnaryUnpackIntelParaInfo_128, GvintIncompUnaryUnpackIntelParaInfo_129,
		GvintIncompUnaryUnpackIntelParaInfo_130, GvintIncompUnaryUnpackIntelParaInfo_131, GvintIncompUnaryUnpackIntelParaInfo_132,
		GvintIncompUnaryUnpackIntelParaInfo_133, GvintIncompUnaryUnpackIntelParaInfo_134, GvintIncompUnaryUnpackIntelParaInfo_135,
		GvintIncompUnaryUnpackIntelParaInfo_136, GvintIncompUnaryUnpackIntelParaInfo_137, GvintIncompUnaryUnpackIntelParaInfo_138,
		GvintIncompUnaryUnpackIntelParaInfo_139, GvintIncompUnaryUnpackIntelParaInfo_140, GvintIncompUnaryUnpackIntelParaInfo_141,
		GvintIncompUnaryUnpackIntelParaInfo_142, GvintIncompUnaryUnpackIntelParaInfo_143, GvintIncompUnaryUnpackIntelParaInfo_144,
		GvintIncompUnaryUnpackIntelParaInfo_145, GvintIncompUnaryUnpackIntelParaInfo_146, GvintIncompUnaryUnpackIntelParaInfo_147,
		GvintIncompUnaryUnpackIntelParaInfo_148, GvintIncompUnaryUnpackIntelParaInfo_149, GvintIncompUnaryUnpackIntelParaInfo_150,
		GvintIncompUnaryUnpackIntelParaInfo_151, GvintIncompUnaryUnpackIntelParaInfo_152, GvintIncompUnaryUnpackIntelParaInfo_153,
		GvintIncompUnaryUnpackIntelParaInfo_154, GvintIncompUnaryUnpackIntelParaInfo_155, GvintIncompUnaryUnpackIntelParaInfo_156,
		GvintIncompUnaryUnpackIntelParaInfo_157, GvintIncompUnaryUnpackIntelParaInfo_158, GvintIncompUnaryUnpackIntelParaInfo_159,
		GvintIncompUnaryUnpackIntelParaInfo_160, GvintIncompUnaryUnpackIntelParaInfo_161, GvintIncompUnaryUnpackIntelParaInfo_162,
		GvintIncompUnaryUnpackIntelParaInfo_163, GvintIncompUnaryUnpackIntelParaInfo_164, GvintIncompUnaryUnpackIntelParaInfo_165,
		GvintIncompUnaryUnpackIntelParaInfo_166, GvintIncompUnaryUnpackIntelParaInfo_167, GvintIncompUnaryUnpackIntelParaInfo_168,
		GvintIncompUnaryUnpackIntelParaInfo_169, GvintIncompUnaryUnpackIntelParaInfo_170, GvintIncompUnaryUnpackIntelParaInfo_171,
		GvintIncompUnaryUnpackIntelParaInfo_172, GvintIncompUnaryUnpackIntelParaInfo_173, GvintIncompUnaryUnpackIntelParaInfo_174,
		GvintIncompUnaryUnpackIntelParaInfo_175, GvintIncompUnaryUnpackIntelParaInfo_176, GvintIncompUnaryUnpackIntelParaInfo_177,
		GvintIncompUnaryUnpackIntelParaInfo_178, GvintIncompUnaryUnpackIntelParaInfo_179, GvintIncompUnaryUnpackIntelParaInfo_180,
		GvintIncompUnaryUnpackIntelParaInfo_181, GvintIncompUnaryUnpackIntelParaInfo_182, GvintIncompUnaryUnpackIntelParaInfo_183,
		GvintIncompUnaryUnpackIntelParaInfo_184, GvintIncompUnaryUnpackIntelParaInfo_185, GvintIncompUnaryUnpackIntelParaInfo_186,
		GvintIncompUnaryUnpackIntelParaInfo_187, GvintIncompUnaryUnpackIntelParaInfo_188, GvintIncompUnaryUnpackIntelParaInfo_189,
		GvintIncompUnaryUnpackIntelParaInfo_190, GvintIncompUnaryUnpackIntelParaInfo_191, GvintIncompUnaryUnpackIntelParaInfo_192,
		GvintIncompUnaryUnpackIntelParaInfo_193, GvintIncompUnaryUnpackIntelParaInfo_194, GvintIncompUnaryUnpackIntelParaInfo_195,
		GvintIncompUnaryUnpackIntelParaInfo_196, GvintIncompUnaryUnpackIntelParaInfo_197, GvintIncompUnaryUnpackIntelParaInfo_198,
		GvintIncompUnaryUnpackIntelParaInfo_199, GvintIncompUnaryUnpackIntelParaInfo_200, GvintIncompUnaryUnpackIntelParaInfo_201,
		GvintIncompUnaryUnpackIntelParaInfo_202, GvintIncompUnaryUnpackIntelParaInfo_203, GvintIncompUnaryUnpackIntelParaInfo_204,
		GvintIncompUnaryUnpackIntelParaInfo_205, GvintIncompUnaryUnpackIntelParaInfo_206, GvintIncompUnaryUnpackIntelParaInfo_207,
		GvintIncompUnaryUnpackIntelParaInfo_208, GvintIncompUnaryUnpackIntelParaInfo_209, GvintIncompUnaryUnpackIntelParaInfo_210,
		GvintIncompUnaryUnpackIntelParaInfo_211, GvintIncompUnaryUnpackIntelParaInfo_212, GvintIncompUnaryUnpackIntelParaInfo_213,
		GvintIncompUnaryUnpackIntelParaInfo_214, GvintIncompUnaryUnpackIntelParaInfo_215, GvintIncompUnaryUnpackIntelParaInfo_216,
		GvintIncompUnaryUnpackIntelParaInfo_217, GvintIncompUnaryUnpackIntelParaInfo_218, GvintIncompUnaryUnpackIntelParaInfo_219,
		GvintIncompUnaryUnpackIntelParaInfo_220, GvintIncompUnaryUnpackIntelParaInfo_221, GvintIncompUnaryUnpackIntelParaInfo_222,
		GvintIncompUnaryUnpackIntelParaInfo_223, GvintIncompUnaryUnpackIntelParaInfo_224, GvintIncompUnaryUnpackIntelParaInfo_225,
		GvintIncompUnaryUnpackIntelParaInfo_226, GvintIncompUnaryUnpackIntelParaInfo_227, GvintIncompUnaryUnpackIntelParaInfo_228,
		GvintIncompUnaryUnpackIntelParaInfo_229, GvintIncompUnaryUnpackIntelParaInfo_230, GvintIncompUnaryUnpackIntelParaInfo_231,
		GvintIncompUnaryUnpackIntelParaInfo_232, GvintIncompUnaryUnpackIntelParaInfo_233, GvintIncompUnaryUnpackIntelParaInfo_234,
		GvintIncompUnaryUnpackIntelParaInfo_235, GvintIncompUnaryUnpackIntelParaInfo_236, GvintIncompUnaryUnpackIntelParaInfo_237,
		GvintIncompUnaryUnpackIntelParaInfo_238, GvintIncompUnaryUnpackIntelParaInfo_239, GvintIncompUnaryUnpackIntelParaInfo_240,
		GvintIncompUnaryUnpackIntelParaInfo_241, GvintIncompUnaryUnpackIntelParaInfo_242, GvintIncompUnaryUnpackIntelParaInfo_243,
		GvintIncompUnaryUnpackIntelParaInfo_244, GvintIncompUnaryUnpackIntelParaInfo_245, GvintIncompUnaryUnpackIntelParaInfo_246,
		GvintIncompUnaryUnpackIntelParaInfo_247, GvintIncompUnaryUnpackIntelParaInfo_248, GvintIncompUnaryUnpackIntelParaInfo_249,
		GvintIncompUnaryUnpackIntelParaInfo_250, GvintIncompUnaryUnpackIntelParaInfo_251, GvintIncompUnaryUnpackIntelParaInfo_252,
		GvintIncompUnaryUnpackIntelParaInfo_253, GvintIncompUnaryUnpackIntelParaInfo_254, GvintIncompUnaryUnpackIntelParaInfo_255 };

}
}


/*
 * code for generating InfoArr:
 *

#include <iostream>
#include <stdint.h>

using namespace std;

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
					validGroup = false;	//a valid group can only hold integers less than 4bytes
				}
				lenArr[intNum] = intBitNum;
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

		int shf[32] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
				-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
		if (validGroup) {
			int j = 0, k = 0;
			for (int t=0; t<intNum; t++) {
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
		}

		//output
		cout << "static GvintIncompUnaryUnpackIntelParaInfo GvintIncompUnaryUnpackIntelParaInfo_" << i << " = { ";
		cout << "{";
		for (int j=0; j<31; j++) {
			cout << shf[j] << ", ";
		}
		cout << shf[31] << "}, ";
		//cout << "{";
		//for (int j=0; j<7; j++) {
		//	cout << offsetArr[j] << ", ";
		//}
		//cout << offsetArr[7] << "}, {";
		//for (int j=0; j<7; j++) {
		//	cout << showbase << hex << maskArr[j] << dec << ", ";
		//}
		//cout << showbase << hex << maskArr[7] << dec << "}, ";
		cout << intNum << ", ";
		cout << (validGroup ? "true" : "false");
		cout << " };" << endl;
	}
	return 0;
}


 *
 */

#endif

#endif /* GVINTINCOMPUNARYUNPACKINTELPARALLEL_HPP_ */
