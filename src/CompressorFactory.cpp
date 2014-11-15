/*
 * CompressorFactory.cpp
 */
#include <iostream>
#include "CompressorFactory.hpp"
#include "PackedBinary.hpp"
#include "PForDelta.hpp"
#include "PForDeltaOpt.hpp"
#include "Plain.hpp"
#include "Rice.hpp"
#include "Simple9.hpp"
#include "Simple16.hpp"
#include "Simple14_x64.hpp"
#include "Simple16_x64.hpp"
#include "Simple32_x64.hpp"
#include "Simple64_x64.hpp"
#include "VarByte.hpp"
#include "GroupVarByte.hpp"
#include "GroupVBIncompUnary.hpp"
#include "GroupVBCompUnary.hpp"
#include "EliasGamma.hpp"
#include "EliasGamma_opt.hpp"
#include "KGammaSeq.hpp"
#include "KSimple.hpp"
#include "PFD_SE.hpp"
#include "PFD_VL.hpp"
#include "PFD_SVL.hpp"
#include "PackedBinary_SE.hpp"
#include "PackedBinary_VL.hpp"
#include "PackedBinary_SVL.hpp"
#include "KVarByte.hpp"
#include "KVarByte_IU.hpp"
#include "KVarByte_CU.hpp"
#include "KScheme_1Bit_Binary.hpp"
#include "KScheme_2Bit_Binary.hpp"
#include "KScheme_3Bit_Binary.hpp"
#include "KScheme_4Bit_Binary.hpp"
#include "KScheme_4Bit_IU.hpp"
#include "KScheme_1Bit_CU.hpp"
#include "KScheme_2Bit_CU.hpp"
#include "KScheme_4Bit_CU.hpp"
#include "AFOR.hpp"
#include "KAFOR.hpp"
#include "VSEncodingNaive.hpp"
#include "VSEncodingSimple.hpp"
#include "KVSEncoding.hpp"
#include "Simple14_x128.hpp"

#ifdef USE_SSE_INSTRUCTION
#include "PForDeltaIntelParallel.hpp"
#include "GroupVBBinaryIntelParallel.hpp"
#include "GroupVBIUIntelParallel.hpp"
#include "GroupVBCUIntelParallel.hpp"
#include "SIMD_PB.hpp"
#include "SIMD_KGamma.hpp"
#include "SIMD_KSimple.hpp"
#include "SIMD_PFD_SE.hpp"
#include "SIMD_PFD_SVL.hpp"
#include "SIMD_PB_SE.hpp"
#include "SIMD_PB_SVL.hpp"
#include "SIMD_Simple9.hpp"
#include "SIMD_KVarByte.hpp"
#include "SIMD_KVarByte_IU.hpp"
#include "SIMD_KVarByte_CU.hpp"
#include "SIMD_KScheme_1Bit_Binary.hpp"
#include "SIMD_KScheme_2Bit_Binary.hpp"
#include "SIMD_KScheme_4Bit_Binary.hpp"
#include "SIMD_KScheme_4Bit_IU.hpp"
#include "SIMD_KScheme_1Bit_CU.hpp"
#include "SIMD_KScheme_2Bit_CU.hpp"
#include "SIMD_KScheme_4Bit_CU.hpp"
#include "SIMD_Simple14_x64.hpp"
#include "SIMD_KAFOR.hpp"
#include "SIMD_KVSEncoding.hpp"

#include "SIMD_PB_VL.hpp"
#include "SIMD_PFD_VL.hpp"
#include "SIMD_Group_PFD.hpp"
#include "SIMD_Group_PFD_2.hpp"
#include "SIMD_Group_PFD_3.hpp"
#include "SIMD_Rice.hpp"
#include "SIMD_Simple14_x128.hpp"
#include "SIMD_FastPFor.hpp"
#include "SIMD_KSimple_sorted.hpp"
#include "SIMD_KAFOR_sorted.hpp"

#endif

using namespace paradise::index;
using namespace std;
CompressorFactory* CompressorFactory::m_pFactory = NULL;

CompressorFactory::CompressorFactory() {

}

CompressorFactory* CompressorFactory::getInstance() {
	if (m_pFactory == NULL) {
		m_pFactory = new CompressorFactory;
	}
	return m_pFactory;
}

Compressor* CompressorFactory::createCompressor(CompressorType type) {
	Compressor * pCompress;
	switch (type) {
	case COM_RICE:
		pCompress = new Rice();
		break;
	case COM_PB:
		pCompress = new PackedBinary();
		break;
	case COM_PB_SE:
		pCompress = new PackedBinary_SE();
		break;
	case COM_PB_VL:
		pCompress = new PackedBinary_VL();
		break;
	case COM_PB_SVL:
		pCompress = new PackedBinary_SVL();
		break;
	case COM_PFOR_DELTA:
		pCompress = new PForDelta();
		break;
	case COM_PFOR_DELTA_OPT:
		pCompress = new PForDeltaOpt();
		break;
	case COM_PFD_SE:
		pCompress = new PFD_SE();
		break;
	case COM_PFD_VL:
		pCompress = new PFD_VL();
		break;
	case COM_PFD_SVL:
		pCompress = new PFD_SVL();
		break;
	case COM_VINT:
		pCompress = new VarByte();
		break;
	case COM_GVINT:
		pCompress = new GroupVarByte();
		break;
	case COM_GVINT_IU:
		pCompress = new GroupVBIncompUnary();
		break;
	case COM_GVINT_CU:
		pCompress = new GroupVBCompUnary();
		break;
	case COM_KVINT:
		pCompress = new KVarByte();
		break;
	case COM_KVINT_IU:
		pCompress = new KVarByte_IU();
		break;
	case COM_KVINT_CU:
		pCompress = new KVarByte_CU();
		break;
	case COM_KSCHEME_1BIT_BINARY:
		pCompress = new KScheme_1Bit_Binary();
		break;
	case COM_KSCHEME_2BIT_BINARY:
		pCompress = new KScheme_2Bit_Binary();
		break;
	case COM_KSCHEME_3BIT_BINARY:
		pCompress = new KScheme_3Bit_Binary();
		break;
	case COM_KSCHEME_4BIT_BINARY:
		pCompress = new KScheme_4Bit_Binary();
		break;
	case COM_KSCHEME_4BIT_IU:
		pCompress = new KScheme_4Bit_IU();
		break;
	case COM_KSCHEME_1BIT_CU:
		pCompress = new KScheme_1Bit_CU();
		break;
	case COM_KSCHEME_2BIT_CU:
		pCompress = new KScheme_2Bit_CU();
		break;
	case COM_KSCHEME_4BIT_CU:
		pCompress = new KScheme_4Bit_CU();
		break;
	case COM_S9:
		pCompress = new Simple9();
		break;
	case COM_S16:
		pCompress = new Simple16();
		break;
	case COM_S14_X64:
		pCompress = new Simple14_x64();
		break;
	case COM_S16_X64:
		pCompress = new Simple16_x64();
		break;
	case COM_S32_X64:
		pCompress = new Simple32_x64();
		break;
	case COM_S64_X64:
		pCompress = new Simple64_x64();
		break;
	case COM_GAMMA:
		pCompress = new EliasGamma();
		break;
	case COM_GAMMA_OPT:
		pCompress = new EliasGamma_opt();
		break;
	case COM_KGAMMA:
		pCompress = new KGammaSeq();
		break;
	case COM_KSIMPLE:
		pCompress = new KSimple();
		break;
	case COM_AFOR:
		pCompress = new AFOR();
		break;
	case COM_KAFOR:
		pCompress = new KAFOR();
		break;
	case COM_VSE_NAIVE:
		pCompress = new VSEncodingNaive();
		break;
	case COM_VSE_SIMPLE:
		pCompress = new VSEncodingSimple();
		break;
	case COM_KVSE:
		pCompress = new KVSEncoding();
		break;
	case COM_S14_X128:
		pCompress = new Simple14_x128();
		break;


#ifdef USE_SSE_INSTRUCTION
	case COM_PFOR_DELTA_INTEL:
		pCompress = new PForDeltaIntelParallel();
		break;
	case COM_GVINT_INTEL:
		pCompress = new GroupVBBinaryIntelParallel();
		break;
	case COM_GVINT_IU_INTEL:
		pCompress = new GroupVBIUIntelParallel();
		break;
	case COM_GVINT_CU_INTEL:
		pCompress = new GroupVBCUIntelParallel();
		break;
	case COM_SIMD_PB:
		pCompress = new SIMD_PB();
		break;
	case COM_SIMD_PB_SE:
		pCompress = new SIMD_PB_SE();
		break;
	case COM_SIMD_PB_SVL:
		pCompress = new SIMD_PB_SVL();
		break;
	case COM_SIMD_PFD_SE:
		pCompress = new SIMD_PFD_SE();
		break;
	case COM_SIMD_PFD_SVL:
		pCompress = new SIMD_PFD_SVL();
		break;
	case COM_SIMD_KVINT:
		pCompress = new SIMD_KVarByte();
		break;
	case COM_SIMD_KVINT_IU:
		pCompress = new SIMD_KVarByte_IU();
		break;
	case COM_SIMD_KVINT_CU:
		pCompress = new SIMD_KVarByte_CU();
		break;
	case COM_SIMD_KSCHEME_1BIT_BINARY:
		pCompress = new SIMD_KScheme_1Bit_Binary();
		break;
	case COM_SIMD_KSCHEME_2BIT_BINARY:
		pCompress = new SIMD_KScheme_2Bit_Binary();
		break;
	case COM_SIMD_KSCHEME_4BIT_BINARY:
		pCompress = new SIMD_KScheme_4Bit_Binary();
		break;
	case COM_SIMD_KSCHEME_4BIT_IU:
		pCompress = new SIMD_KScheme_4Bit_IU();
		break;
	case COM_SIMD_KSCHEME_1BIT_CU:
		pCompress = new SIMD_KScheme_1Bit_CU();
		break;
	case COM_SIMD_KSCHEME_2BIT_CU:
		pCompress = new SIMD_KScheme_2Bit_CU();
		break;
	case COM_SIMD_KSCHEME_4BIT_CU:
		pCompress = new SIMD_KScheme_4Bit_CU();
		break;
	case COM_SIMD_S9:
		pCompress = new SIMD_Simple9();
		break;
	case COM_SIMD_KGAMMA:
		pCompress = new SIMD_KGamma();
		break;
	case COM_SIMD_KSIMPLE:
		pCompress = new SIMD_KSimple();
		break;

	case COM_SIMD_KAFOR:
		pCompress = new SIMD_KAFOR();
		break;
	case COM_SIMD_KVSE:
		pCompress = new SIMD_KVSEncoding();
		break;

	case COM_SIMD_PB_VL:
		pCompress = new SIMD_PB_VL();
		break;
	case COM_SIMD_PFD_VL:
		pCompress = new SIMD_PFD_VL();
		break;
	case COM_SIMD_S14_X64:
		pCompress = new SIMD_Simple14_x64();
		break;
	case COM_SIMD_GROUP_PFD:
		pCompress = new SIMD_Group_PFD();
		break;
	case COM_SIMD_GROUP_PFD_2:
		pCompress = new SIMD_Group_PFD_2();
		break;
	case COM_SIMD_GROUP_PFD_3:
		pCompress = new SIMD_Group_PFD_3();
		break;
	case COM_SIMD_RICE:
		pCompress = new SIMD_Rice();
		break;
	case COM_SIMD_S14_X128:
		pCompress = new SIMD_Simple14_x128();
		break;
	case COM_SIMD_FASTPFOR:
		pCompress = new SIMD_FastPFor();
		break;
	case COM_SIMD_KSIMPLE_SORTED:
		pCompress = new SIMD_KSimple_sorted();
		break;
	case COM_SIMD_KAFOR_SORTED:
		pCompress = new SIMD_KAFOR_sorted();
		break;

#endif
	case COM_PLAIN:
		pCompress = new Plain();
		break;
	default:
		pCompress = new VarByte();
		break;
	}
	return pCompress;
}
Compressor* CompressorFactory::createCompressor(std::string compName) {
	CompressorType type = transCompressorType(compName);
	return createCompressor(type);
}

CompressorType CompressorFactory::transCompressorType(std::string compName) {
	if (compName == "var_byte") {
		return COM_VINT;
	} else if (compName == "rice") {
		return COM_RICE;
	} else if (compName == "packed_binary") {
		return COM_PB;
	} else if (compName == "packed_binary_se") {
		return COM_PB_SE;
	} else if (compName == "packed_binary_vl") {
		return COM_PB_VL;
	} else if (compName == "packed_binary_svl") {
		return COM_PB_SVL;
	} else if (compName == "pfor_delta") {
		return COM_PFOR_DELTA;
	} else if (compName == "pfor_delta_opt") {
		return COM_PFOR_DELTA_OPT;
	} else if (compName == "pfor_delta_se") {
		return COM_PFD_SE;
	} else if (compName == "pfor_delta_vl") {
		return COM_PFD_VL;
	} else if (compName == "pfor_delta_svl") {
		return COM_PFD_SVL;
	} else if (compName == "group_var_byte") {
		return COM_GVINT;
	} else if (compName == "group_var_byte_incomp_unary") {
		return COM_GVINT_IU;
	} else if (compName == "group_var_byte_comp_unary") {
		return COM_GVINT_CU;
	} else if (compName == "kvint") {
		return COM_KVINT;
	} else if (compName == "kvint_iu") {
		return COM_KVINT_IU;
	} else if (compName == "kvint_cu") {
		return COM_KVINT_CU;
	} else if (compName == "kscheme_1bit_binary") {
		return COM_KSCHEME_1BIT_BINARY;
	} else if (compName == "kscheme_2bit_binary") {
		return COM_KSCHEME_2BIT_BINARY;
	} else if (compName == "kscheme_3bit_binary") {
		return COM_KSCHEME_3BIT_BINARY;
	} else if (compName == "kscheme_4bit_binary") {
		return COM_KSCHEME_4BIT_BINARY;
	} else if (compName == "kscheme_4bit_iu") {
		return COM_KSCHEME_4BIT_IU;
	} else if (compName == "kscheme_1bit_cu") {
		return COM_KSCHEME_1BIT_CU;
	} else if (compName == "kscheme_2bit_cu") {
		return COM_KSCHEME_2BIT_CU;
	} else if (compName == "kscheme_4bit_cu") {
		return COM_KSCHEME_4BIT_CU;
	} else if (compName == "simple9") {
		return COM_S9;
	} else if (compName == "simple16") {
		return COM_S16;
	} else if (compName == "simple14_x64") {
		return COM_S14_X64;
	} else if (compName == "simple16_x64") {
		return COM_S16_X64;
	} else if (compName == "simple32_x64") {
		return COM_S32_X64;
	} else if (compName == "simple32_x64") {
		return COM_S64_X64;
	} else if (compName == "gamma") {
		return COM_GAMMA;
	} else if (compName == "gamma_opt") {
		return COM_GAMMA_OPT;
	} else if (compName == "k_gamma") {
		return COM_KGAMMA;
	} else if (compName == "ksimple") {
		return COM_KSIMPLE;
	} else if (compName == "afor") {
		return COM_AFOR;
	} else if (compName == "kafor") {
		return COM_KAFOR;
	} else if (compName == "vse_naive") {
		return COM_VSE_NAIVE;
	} else if (compName == "vse_simple") {
		return COM_VSE_SIMPLE;
	} else if (compName == "kvse") {
		return COM_KVSE;
	} else if (compName == "simple14_x128") {
		return COM_S14_X128;

#ifdef USE_SSE_INSTRUCTION
	} else if (compName == "simd_pfor_delta") {
		return COM_PFOR_DELTA_INTEL;
	} else if (compName == "simd_pb") {
		return COM_SIMD_PB;
	} else if (compName == "simd_pb_se") {
		return COM_SIMD_PB_SE;
	} else if (compName == "simd_pb_svl") {
		return COM_SIMD_PB_SVL;
	} else if (compName == "simd_pfor_delta_se") {
		return COM_SIMD_PFD_SE;
	} else if (compName == "simd_pfor_delta_svl") {
		return COM_SIMD_PFD_SVL;
	} else if (compName == "simd_group_var_byte") {
		return COM_GVINT_INTEL;
	} else if (compName == "simd_group_var_byte_incomp_unary") {
		return COM_GVINT_IU_INTEL;
	} else if (compName == "simd_group_var_byte_comp_unary") {
		return COM_GVINT_CU_INTEL;
	} else if (compName == "simd_kvint") {
		return COM_SIMD_KVINT;
	} else if (compName == "simd_kvint_iu") {
		return COM_SIMD_KVINT_IU;
	} else if (compName == "simd_kvint_cu") {
		return COM_SIMD_KVINT_CU;
	} else if (compName == "simd_simple9") {
		return COM_SIMD_S9;
	} else if (compName == "simd_kgamma") {
		return COM_SIMD_KGAMMA;
	} else if (compName == "simd_ksimple") {
		return COM_SIMD_KSIMPLE;
	} else if (compName == "simd_kscheme_1bit_binary") {
		return COM_SIMD_KSCHEME_1BIT_BINARY;
	} else if (compName == "simd_kscheme_2bit_binary") {
		return COM_SIMD_KSCHEME_2BIT_BINARY;
	} else if (compName == "simd_kscheme_4bit_binary") {
		return COM_SIMD_KSCHEME_4BIT_BINARY;
	} else if (compName == "simd_kscheme_4bit_iu") {
		return COM_SIMD_KSCHEME_4BIT_IU;
	} else if (compName == "simd_kscheme_1bit_cu") {
		return COM_SIMD_KSCHEME_1BIT_CU;
	} else if (compName == "simd_kscheme_2bit_cu") {
		return COM_SIMD_KSCHEME_2BIT_CU;
	} else if (compName == "simd_kscheme_4bit_cu") {
		return COM_SIMD_KSCHEME_4BIT_CU;
	} else if (compName == "simd_kafor") {
		return COM_SIMD_KAFOR;
	} else if (compName == "simd_kvse") {
		return COM_SIMD_KVSE;

	} else if (compName == "simd_pb_vl") {
		return COM_SIMD_PB_VL;
	} else if (compName == "simd_pfor_delta_vl") {
		return COM_SIMD_PFD_VL;
	} else if (compName == "simd_simple14_x64") {
		return COM_SIMD_S14_X64;
	} else if (compName == "simd_group_pfd") {
		return COM_SIMD_GROUP_PFD;
	} else if (compName == "simd_group_pfd_2") {
		return COM_SIMD_GROUP_PFD_2;
	} else if (compName == "simd_group_pfd_3") {
		return COM_SIMD_GROUP_PFD_3;
	} else if (compName == "simd_rice") {
		return COM_SIMD_RICE;
	} else if (compName == "simd_simple14_x128") {
		return COM_SIMD_S14_X128;
	} else if (compName == "simd_fastpfor") {
		return COM_SIMD_FASTPFOR;
	} else if (compName == "simd_ksimple_sorted") {
		return COM_SIMD_KSIMPLE_SORTED;
	} else if (compName == "simd_kafor_sorted") {
		return COM_SIMD_KAFOR_SORTED;

#endif
	} else if (compName == "plain") {
		return COM_PLAIN;
	} else {
		cout << "can't find the " << compName
				<< " , supports[var_byte,"
					"rice,"
					"packed_binary,"
					"packed_binary_se,"
					"packed_binary_vl,"
					"packed_binary_svl,"
					"pfor_delta,"
					"pfor_delta_se,"
					"pfor_delta_vl,"
					"pfor_delta_svl,"
					"pfor_delta_opt,"
					"group_var_byte,"
					"group_var_byte_incomp_unary,"
					"group_var_byte_comp_unary,"
					"simple9,"
					"simple16,"
					"simple14_x64,"
					"simple16_x64,"
					"simple32_x64,"
					"simple32_x64,"
					"ksimple,"
					"gamma,"
					"gamma_opt,"
					"k_gamma,"
					"kvint,"
					"kvint_iu,"
					"kvint_cu,"
					"kscheme_1bit_binary,"
					"kscheme_2bit_binary,"
					"kscheme_3bit_binary,"
					"kscheme_4bit_binary,"
					"kscheme_4bit_iu,"
					"kscheme_1bit_cu,"
					"kscheme_2bit_cu,"
					"kscheme_4bit_cu,"
					"afor,"
					"kafor,"
					"vse_naive,"
					"vse_simple,"
					"kvse,"
					"simple14_x128,"

#ifdef USE_SSE_INSTRUCTION
					"simd_pfor_delta,"
					"simd_pfor_delta_se,"
					"simd_pfor_delta_svl,"
					"simd_pb,"
					"simd_pb_se,"
					"simd_pb_svl,"
					"simd_group_var_byte,"
					"simd_group_var_byte_incomp_unary,"
					"simd_group_var_byte_comp_unary,"
					"simd_simple9,"
					"simd_ksimple,"
					"simd_kgamma,"
					"simd_kvint,"
					"simd_kvint_iu,"
					"simd_kvint_cu,"
					"simd_kscheme_1bit_binary,"
					"simd_kscheme_2bit_binary,"
					"simd_kscheme_4bit_binary,"
					"simd_kscheme_4bit_iu,"
					"simd_kscheme_1bit_cu,"
					"simd_kscheme_2bit_cu,"
					"simd_kscheme_4bit_cu,"

					"simd_kafor,"
					"simd_kvse,"

					"simd_pb_vl,"
					"simd_pfor_delta_vl,"
					"simd_simple14_x64,"
					"simd_group_pfd,"
					"simd_group_pfd_2,"
					"simd_group_pfd_3,"
					"simd_rice,"
					"simd_simple14_x128,"
					"simd_fastpfor,"
					"simd_ksimple_sorted,"
					"simd_kafor_sorted,"
#endif
					"plain]"
				<< endl;
		return COM_VINT;
	}
}

CompressorFactory::~CompressorFactory() {
	if (m_pFactory != NULL) {
		delete m_pFactory;
	}
}
