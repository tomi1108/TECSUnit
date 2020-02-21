/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTECSUnit_TECSGEN_H
#define tTECSUnit_TECSGEN_H

/*
 * celltype          :  tTECSUnit
 * global name       :  tTECSUnit
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTECSUnit_tecsgen.h"
#include "nTECSInfo_sTECSInfo_tecsgen.h"
#include "nTECSInfo_sNamespaceInfo_tecsgen.h"
#include "nTECSInfo_sRegionInfo_tecsgen.h"
#include "nTECSInfo_sCellInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"
#include "nTECSInfo_sVarDeclInfo_tecsgen.h"
#include "nTECSInfo_sTypeInfo_tecsgen.h"
#include "nTECSInfo_sRawEntryDescriptorInfo_tecsgen.h"
#include "nTECSInfo_sEntryInfo_tecsgen.h"
#include "sTarget1_tecsgen.h"
#include "sTarget2_tecsgen.h"
#include "sTarget3_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTECSUnit_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        LEN;
    char*          cell_entry;
}  tTECSUnit_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tTECSUnit_CB {
    tTECSUnit_INIB  *_inib;
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES *cNSInfo;
    struct tag_nTECSInfo_sRegionInfo_VDES *cRegionInfo;
    struct tag_nTECSInfo_sCellInfo_VDES *cCellInfo;
    struct tag_nTECSInfo_sSignatureInfo_VDES *cSignatureInfo;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *cCelltypeInfo;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *cVarDeclInfo;
    struct tag_nTECSInfo_sTypeInfo_VDES *cTypeInfo;
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *cREDInfo;
    struct tag_nTECSInfo_sEntryInfo_VDES *cEntryInfo;
    struct tag_sTarget1_VDES *cTarget1;
    struct tag_sTarget2_VDES *cTarget2;
    struct tag_sTarget3_VDES *cTarget3;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        out_int[16][64];
    double64_t     out_double[16][32];
    char_t         out_char[16][256];
}  tTECSUnit_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tTECSUnit_CB  tTECSUnit_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tTECSUnit_CB *tTECSUnit_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTECSUnit */
void         tTECSUnit_eUnit_main(tTECSUnit_IDX idx, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTECSUnit_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nTECSInfo_tTECSInfo_tecsgen.h"
#ifdef  tTECSUnit_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTECSUnit_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTECSUnit_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tTECSUnit_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTECSUnit_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tTECSUnit_is_cNSInfo_joined(p_that) \
	  ((p_that)->cNSInfo!=0)
#define tTECSUnit_is_cRegionInfo_joined(p_that) \
	  ((p_that)->cRegionInfo!=0)
#define tTECSUnit_is_cCellInfo_joined(p_that) \
	  ((p_that)->cCellInfo!=0)
#define tTECSUnit_is_cSignatureInfo_joined(p_that) \
	  ((p_that)->cSignatureInfo!=0)
#define tTECSUnit_is_cCelltypeInfo_joined(p_that) \
	  ((p_that)->cCelltypeInfo!=0)
#define tTECSUnit_is_cVarDeclInfo_joined(p_that) \
	  ((p_that)->cVarDeclInfo!=0)
#define tTECSUnit_is_cTypeInfo_joined(p_that) \
	  ((p_that)->cTypeInfo!=0)
#define tTECSUnit_is_cREDInfo_joined(p_that) \
	  ((p_that)->cREDInfo!=0)
#define tTECSUnit_is_cEntryInfo_joined(p_that) \
	  ((p_that)->cEntryInfo!=0)
#define tTECSUnit_is_cTarget1_joined(p_that) \
	  ((p_that)->cTarget1!=0)
#define tTECSUnit_is_cTarget2_joined(p_that) \
	  ((p_that)->cTarget2!=0)
#define tTECSUnit_is_cTarget3_joined(p_that) \
	  ((p_that)->cTarget3!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tTECSUnit_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTECSUnit_ATTR_LEN( p_that )	((p_that)->_inib->LEN)

#define tTECSUnit_GET_LEN(p_that)	((p_that)->_inib->LEN)


/* var アクセスマクロ #_VAM_# */
#define tTECSUnit_VAR_out_int(p_that)	((p_that)->out_int)
#define tTECSUnit_VAR_out_double(p_that)	((p_that)->out_double)
#define tTECSUnit_VAR_out_char(p_that)	((p_that)->out_char)
#define tTECSUnit_VAR_cell_entry(p_that)	((p_that)->_inib->cell_entry)

#define tTECSUnit_GET_out_int(p_that)	((p_that)->out_int)
#define tTECSUnit_SET_out_int(p_that,val)	((p_that)->out_int=(val))
#define tTECSUnit_GET_out_double(p_that)	((p_that)->out_double)
#define tTECSUnit_SET_out_double(p_that,val)	((p_that)->out_double=(val))
#define tTECSUnit_GET_out_char(p_that)	((p_that)->out_char)
#define tTECSUnit_SET_out_char(p_that,val)	((p_that)->out_char=(val))
#define tTECSUnit_GET_cell_entry(p_that)	((p_that)->cell_entry)
#define tTECSUnit_SET_cell_entry(p_that,val)	((p_that)->cell_entry=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tTECSUnit_cTECSInfo_findNamespace( p_that, namespace_path, nsDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( \
	    (namespace_path), (nsDesc) )
#define tTECSUnit_cTECSInfo_findRegion( p_that, namespace_path, regionDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRegion( \
	    (namespace_path), (regionDesc) )
#define tTECSUnit_cTECSInfo_findSignature( p_that, namespace_path, signatureDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findSignature( \
	    (namespace_path), (signatureDesc) )
#define tTECSUnit_cTECSInfo_findCelltype( p_that, namespace_path, celltypeDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( \
	    (namespace_path), (celltypeDesc) )
#define tTECSUnit_cTECSInfo_findCell( p_that, namespace_path, cellDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findCell( \
	    (namespace_path), (cellDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_that, namespace_path, rawEntryDescDesc, entryDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor( \
	    (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_that, namespace_path, subsc, rawDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe( \
	    (namespace_path), (subsc), (rawDesc) )
#define tTECSUnit_cNSInfo_getName( p_that, name, max_len ) \
	  (p_that)->cNSInfo->VMT->getName__T( \
	   (p_that)->cNSInfo, (name), (max_len) )
#define tTECSUnit_cNSInfo_getNameLength( p_that ) \
	  (p_that)->cNSInfo->VMT->getNameLength__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getNNamespace( p_that ) \
	  (p_that)->cNSInfo->VMT->getNNamespace__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getNamespaceInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getNamespaceInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cNSInfo_getNSignature( p_that ) \
	  (p_that)->cNSInfo->VMT->getNSignature__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getSignatureInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getSignatureInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cNSInfo_getNCelltype( p_that ) \
	  (p_that)->cNSInfo->VMT->getNCelltype__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getCelltypeInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getCelltypeInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cRegionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cRegionInfo->VMT->getName__T( \
	   (p_that)->cRegionInfo, (name), (max_len) )
#define tTECSUnit_cRegionInfo_getNameLength( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNameLength__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getNCell( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNCell__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getCellInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo->VMT->getCellInfo__T( \
	   (p_that)->cRegionInfo, (ith), (des) )
#define tTECSUnit_cRegionInfo_getNRegion( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNRegion__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getRegionInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo->VMT->getRegionInfo__T( \
	   (p_that)->cRegionInfo, (ith), (des) )
#define tTECSUnit_cCellInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCellInfo->VMT->getName__T( \
	   (p_that)->cCellInfo, (name), (max_len) )
#define tTECSUnit_cCellInfo_getNameLength( p_that ) \
	  (p_that)->cCellInfo->VMT->getNameLength__T( \
	   (p_that)->cCellInfo )
#define tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cCellInfo->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo )
#define tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_that, index, desc ) \
	  (p_that)->cCellInfo->VMT->getRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo, (index), (desc) )
#define tTECSUnit_cCellInfo_getCelltypeInfo( p_that, desc ) \
	  (p_that)->cCellInfo->VMT->getCelltypeInfo__T( \
	   (p_that)->cCellInfo, (desc) )
#define tTECSUnit_cCellInfo_getCBP( p_that, cbp ) \
	  (p_that)->cCellInfo->VMT->getCBP__T( \
	   (p_that)->cCellInfo, (cbp) )
#define tTECSUnit_cCellInfo_getINIBP( p_that, inibp ) \
	  (p_that)->cCellInfo->VMT->getINIBP__T( \
	   (p_that)->cCellInfo, (inibp) )
#define tTECSUnit_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo->VMT->getName__T( \
	   (p_that)->cSignatureInfo, (name), (max_len) )
#define tTECSUnit_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo )
#define tTECSUnit_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo )
#define tTECSUnit_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo->VMT->getName__T( \
	   (p_that)->cCelltypeInfo, (name), (max_len) )
#define tTECSUnit_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNameLength__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNAttr__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getAttrInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNVar__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getVarInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNCall__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getCallInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNEntry__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getEntryInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isSingleton__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isIDX_is_ID__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfCB__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfINIB__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cVarDeclInfo_getName( p_that, name, max_len ) \
	  (p_that)->cVarDeclInfo->VMT->getName__T( \
	   (p_that)->cVarDeclInfo, (name), (max_len) )
#define tTECSUnit_cVarDeclInfo_getNameLength( p_that ) \
	  (p_that)->cVarDeclInfo->VMT->getNameLength__T( \
	   (p_that)->cVarDeclInfo )
#define tTECSUnit_cVarDeclInfo_getLocationInfo( p_that, offset, place ) \
	  (p_that)->cVarDeclInfo->VMT->getLocationInfo__T( \
	   (p_that)->cVarDeclInfo, (offset), (place) )
#define tTECSUnit_cVarDeclInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cVarDeclInfo->VMT->getTypeInfo__T( \
	   (p_that)->cVarDeclInfo, (desc) )
#define tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_that, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo->VMT->getSizeIsExpr__T( \
	   (p_that)->cVarDeclInfo, (expr_str), (max_len) )
#define tTECSUnit_cVarDeclInfo_getSizeIs( p_that, size, p_cb ) \
	  (p_that)->cVarDeclInfo->VMT->getSizeIs__T( \
	   (p_that)->cVarDeclInfo, (size), (p_cb) )
#define tTECSUnit_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define tTECSUnit_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (desc) )
#define tTECSUnit_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNMember__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getMemberInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )
#define tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cREDInfo->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cREDInfo )
#define tTECSUnit_cREDInfo_getRawDescriptor( p_that, subsc, rawDesc ) \
	  (p_that)->cREDInfo->VMT->getRawDescriptor__T( \
	   (p_that)->cREDInfo, (subsc), (rawDesc) )
#define tTECSUnit_cEntryInfo_getName( p_that, name, max_len ) \
	  (p_that)->cEntryInfo->VMT->getName__T( \
	   (p_that)->cEntryInfo, (name), (max_len) )
#define tTECSUnit_cEntryInfo_getNameLength( p_that ) \
	  (p_that)->cEntryInfo->VMT->getNameLength__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_cEntryInfo_getSignatureInfo( p_that, desc ) \
	  (p_that)->cEntryInfo->VMT->getSignatureInfo__T( \
	   (p_that)->cEntryInfo, (desc) )
#define tTECSUnit_cEntryInfo_getArraySize( p_that ) \
	  (p_that)->cEntryInfo->VMT->getArraySize__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_cEntryInfo_isInline( p_that ) \
	  (p_that)->cEntryInfo->VMT->isInline__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_cTarget1_double( p_that, arg ) \
	  (p_that)->cTarget1->VMT->double__T( \
	   (p_that)->cTarget1, (arg) )
#define tTECSUnit_cTarget2_add( p_that, arg1, arg2 ) \
	  (p_that)->cTarget2->VMT->add__T( \
	   (p_that)->cTarget2, (arg1), (arg2) )
#define tTECSUnit_cTarget3_send( p_that, buf, len ) \
	  (p_that)->cTarget3->VMT->send__T( \
	   (p_that)->cTarget3, (buf), (len) )
#define tTECSUnit_cTarget3_sendMessage( p_that, buf, len ) \
	  (p_that)->cTarget3->VMT->sendMessage__T( \
	   (p_that)->cTarget3, (buf), (len) )
#define tTECSUnit_cTarget3_sendStruct( p_that, data ) \
	  (p_that)->cTarget3->VMT->sendStruct__T( \
	   (p_that)->cTarget3, (data) )
#define tTECSUnit_cTarget3_receiveMessage( p_that, buf, len ) \
	  (p_that)->cTarget3->VMT->receiveMessage__T( \
	   (p_that)->cTarget3, (buf), (len) )
#define tTECSUnit_cTarget3_checkER( p_that, eroor ) \
	  (p_that)->cTarget3->VMT->checkER__T( \
	   (p_that)->cTarget3, (eroor) )

#else  /* TECSFLOW */
#define tTECSUnit_cTECSInfo_findNamespace( p_that, namespace_path, nsDesc ) \
	  (p_that)->cTECSInfo.findNamespace__T( \
 (namespace_path), (nsDesc) )
#define tTECSUnit_cTECSInfo_findRegion( p_that, namespace_path, regionDesc ) \
	  (p_that)->cTECSInfo.findRegion__T( \
 (namespace_path), (regionDesc) )
#define tTECSUnit_cTECSInfo_findSignature( p_that, namespace_path, signatureDesc ) \
	  (p_that)->cTECSInfo.findSignature__T( \
 (namespace_path), (signatureDesc) )
#define tTECSUnit_cTECSInfo_findCelltype( p_that, namespace_path, celltypeDesc ) \
	  (p_that)->cTECSInfo.findCelltype__T( \
 (namespace_path), (celltypeDesc) )
#define tTECSUnit_cTECSInfo_findCell( p_that, namespace_path, cellDesc ) \
	  (p_that)->cTECSInfo.findCell__T( \
 (namespace_path), (cellDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_that, namespace_path, rawEntryDescDesc, entryDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor__T( \
 (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_that, namespace_path, subsc, rawDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor_unsafe__T( \
 (namespace_path), (subsc), (rawDesc) )
#define tTECSUnit_cNSInfo_getName( p_that, name, max_len ) \
	  (p_that)->cNSInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cNSInfo_getNameLength( p_that ) \
	  (p_that)->cNSInfo.getNameLength__T( \
 )
#define tTECSUnit_cNSInfo_getNNamespace( p_that ) \
	  (p_that)->cNSInfo.getNNamespace__T( \
 )
#define tTECSUnit_cNSInfo_getNamespaceInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getNamespaceInfo__T( \
 (ith), (des) )
#define tTECSUnit_cNSInfo_getNSignature( p_that ) \
	  (p_that)->cNSInfo.getNSignature__T( \
 )
#define tTECSUnit_cNSInfo_getSignatureInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getSignatureInfo__T( \
 (ith), (des) )
#define tTECSUnit_cNSInfo_getNCelltype( p_that ) \
	  (p_that)->cNSInfo.getNCelltype__T( \
 )
#define tTECSUnit_cNSInfo_getCelltypeInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getCelltypeInfo__T( \
 (ith), (des) )
#define tTECSUnit_cRegionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cRegionInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cRegionInfo_getNameLength( p_that ) \
	  (p_that)->cRegionInfo.getNameLength__T( \
 )
#define tTECSUnit_cRegionInfo_getNCell( p_that ) \
	  (p_that)->cRegionInfo.getNCell__T( \
 )
#define tTECSUnit_cRegionInfo_getCellInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo.getCellInfo__T( \
 (ith), (des) )
#define tTECSUnit_cRegionInfo_getNRegion( p_that ) \
	  (p_that)->cRegionInfo.getNRegion__T( \
 )
#define tTECSUnit_cRegionInfo_getRegionInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo.getRegionInfo__T( \
 (ith), (des) )
#define tTECSUnit_cCellInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCellInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cCellInfo_getNameLength( p_that ) \
	  (p_that)->cCellInfo.getNameLength__T( \
 )
#define tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cCellInfo.getNRawEntryDescriptorInfo__T( \
 )
#define tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_that, index, desc ) \
	  (p_that)->cCellInfo.getRawEntryDescriptorInfo__T( \
 (index), (desc) )
#define tTECSUnit_cCellInfo_getCelltypeInfo( p_that, desc ) \
	  (p_that)->cCellInfo.getCelltypeInfo__T( \
 (desc) )
#define tTECSUnit_cCellInfo_getCBP( p_that, cbp ) \
	  (p_that)->cCellInfo.getCBP__T( \
 (cbp) )
#define tTECSUnit_cCellInfo_getINIBP( p_that, inibp ) \
	  (p_that)->cCellInfo.getINIBP__T( \
 (inibp) )
#define tTECSUnit_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo.getNameLength__T( \
 )
#define tTECSUnit_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo.getNFunction__T( \
 )
#define tTECSUnit_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo.getFunctionInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo.getNameLength__T( \
 )
#define tTECSUnit_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo.getNAttr__T( \
 )
#define tTECSUnit_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getAttrInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo.getNVar__T( \
 )
#define tTECSUnit_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getVarInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo.getNCall__T( \
 )
#define tTECSUnit_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getCallInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo.getNEntry__T( \
 )
#define tTECSUnit_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getEntryInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo.isSingleton__T( \
 )
#define tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo.isIDX_is_ID__T( \
 )
#define tTECSUnit_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfCB__T( \
 )
#define tTECSUnit_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfINIB__T( \
 )
#define tTECSUnit_cVarDeclInfo_getName( p_that, name, max_len ) \
	  (p_that)->cVarDeclInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cVarDeclInfo_getNameLength( p_that ) \
	  (p_that)->cVarDeclInfo.getNameLength__T( \
 )
#define tTECSUnit_cVarDeclInfo_getLocationInfo( p_that, offset, place ) \
	  (p_that)->cVarDeclInfo.getLocationInfo__T( \
 (offset), (place) )
#define tTECSUnit_cVarDeclInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cVarDeclInfo.getTypeInfo__T( \
 (desc) )
#define tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_that, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo.getSizeIsExpr__T( \
 (expr_str), (max_len) )
#define tTECSUnit_cVarDeclInfo_getSizeIs( p_that, size, p_cb ) \
	  (p_that)->cVarDeclInfo.getSizeIs__T( \
 (size), (p_cb) )
#define tTECSUnit_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo.getNameLength__T( \
 )
#define tTECSUnit_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo.getSize__T( \
 )
#define tTECSUnit_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo.getKind__T( \
 )
#define tTECSUnit_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo.getNType__T( \
 )
#define tTECSUnit_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo.getTypeInfo__T( \
 (desc) )
#define tTECSUnit_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo.getNMember__T( \
 )
#define tTECSUnit_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo.getMemberInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cREDInfo.getNRawEntryDescriptorInfo__T( \
 )
#define tTECSUnit_cREDInfo_getRawDescriptor( p_that, subsc, rawDesc ) \
	  (p_that)->cREDInfo.getRawDescriptor__T( \
 (subsc), (rawDesc) )
#define tTECSUnit_cEntryInfo_getName( p_that, name, max_len ) \
	  (p_that)->cEntryInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cEntryInfo_getNameLength( p_that ) \
	  (p_that)->cEntryInfo.getNameLength__T( \
 )
#define tTECSUnit_cEntryInfo_getSignatureInfo( p_that, desc ) \
	  (p_that)->cEntryInfo.getSignatureInfo__T( \
 (desc) )
#define tTECSUnit_cEntryInfo_getArraySize( p_that ) \
	  (p_that)->cEntryInfo.getArraySize__T( \
 )
#define tTECSUnit_cEntryInfo_isInline( p_that ) \
	  (p_that)->cEntryInfo.isInline__T( \
 )
#define tTECSUnit_cTarget1_double( p_that, arg ) \
	  (p_that)->cTarget1.double__T( \
 (arg) )
#define tTECSUnit_cTarget2_add( p_that, arg1, arg2 ) \
	  (p_that)->cTarget2.add__T( \
 (arg1), (arg2) )
#define tTECSUnit_cTarget3_send( p_that, buf, len ) \
	  (p_that)->cTarget3.send__T( \
 (buf), (len) )
#define tTECSUnit_cTarget3_sendMessage( p_that, buf, len ) \
	  (p_that)->cTarget3.sendMessage__T( \
 (buf), (len) )
#define tTECSUnit_cTarget3_sendStruct( p_that, data ) \
	  (p_that)->cTarget3.sendStruct__T( \
 (data) )
#define tTECSUnit_cTarget3_receiveMessage( p_that, buf, len ) \
	  (p_that)->cTarget3.receiveMessage__T( \
 (buf), (len) )
#define tTECSUnit_cTarget3_checkER( p_that, eroor ) \
	  (p_that)->cTarget3.checkER__T( \
 (eroor) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eUnit */
void           tTECSUnit_eUnit_main_skel( const struct tag_sTECSUnit_VDES *epd, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cNSInfo */
Inline void
tTECSUnit_cNSInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sNamespaceInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cNSInfo = des.vdes;
}

/* [dynamic,optional] cNSInfo */
Inline void
tTECSUnit_cNSInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cNSInfo = NULL;
}

/* [dynamic] cRegionInfo */
Inline void
tTECSUnit_cRegionInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sRegionInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cRegionInfo = des.vdes;
}

/* [dynamic,optional] cRegionInfo */
Inline void
tTECSUnit_cRegionInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cRegionInfo = NULL;
}

/* [dynamic] cCellInfo */
Inline void
tTECSUnit_cCellInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sCellInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCellInfo = des.vdes;
}

/* [dynamic,optional] cCellInfo */
Inline void
tTECSUnit_cCellInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cCellInfo = NULL;
}

/* [dynamic] cSignatureInfo */
Inline void
tTECSUnit_cSignatureInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sSignatureInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cSignatureInfo = des.vdes;
}

/* [dynamic,optional] cSignatureInfo */
Inline void
tTECSUnit_cSignatureInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cSignatureInfo = NULL;
}

/* [dynamic] cCelltypeInfo */
Inline void
tTECSUnit_cCelltypeInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sCelltypeInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCelltypeInfo = des.vdes;
}

/* [dynamic,optional] cCelltypeInfo */
Inline void
tTECSUnit_cCelltypeInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cCelltypeInfo = NULL;
}

/* [dynamic] cVarDeclInfo */
Inline void
tTECSUnit_cVarDeclInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sVarDeclInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cVarDeclInfo = des.vdes;
}

/* [dynamic,optional] cVarDeclInfo */
Inline void
tTECSUnit_cVarDeclInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cVarDeclInfo = NULL;
}

/* [dynamic] cTypeInfo */
Inline void
tTECSUnit_cTypeInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sTypeInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTypeInfo = des.vdes;
}

/* [dynamic,optional] cTypeInfo */
Inline void
tTECSUnit_cTypeInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTypeInfo = NULL;
}

/* [dynamic] cREDInfo */
Inline void
tTECSUnit_cREDInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cREDInfo = des.vdes;
}

/* [dynamic,optional] cREDInfo */
Inline void
tTECSUnit_cREDInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cREDInfo = NULL;
}

/* [dynamic] cEntryInfo */
Inline void
tTECSUnit_cEntryInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sEntryInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cEntryInfo = des.vdes;
}

/* [dynamic,optional] cEntryInfo */
Inline void
tTECSUnit_cEntryInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cEntryInfo = NULL;
}

/* [dynamic] cTarget1 */
Inline void
tTECSUnit_cTarget1_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTarget1 ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTarget1 = des.vdes;
}

/* [dynamic,optional] cTarget1 */
Inline void
tTECSUnit_cTarget1_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTarget1 = NULL;
}

/* [dynamic] cTarget2 */
Inline void
tTECSUnit_cTarget2_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTarget2 ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTarget2 = des.vdes;
}

/* [dynamic,optional] cTarget2 */
Inline void
tTECSUnit_cTarget2_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTarget2 = NULL;
}

/* [dynamic] cTarget3 */
Inline void
tTECSUnit_cTarget3_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTarget3 ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTarget3 = des.vdes;
}

/* [dynamic,optional] cTarget3 */
Inline void
tTECSUnit_cTarget3_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTarget3 = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTECSUnit_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTECSUnit_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTECSUnit_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTECSUnit_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_LEN             tTECSUnit_ATTR_LEN( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_out_int          tTECSUnit_VAR_out_int( p_cellcb )
#define VAR_out_double       tTECSUnit_VAR_out_double( p_cellcb )
#define VAR_out_char         tTECSUnit_VAR_out_char( p_cellcb )
#define VAR_cell_entry       tTECSUnit_VAR_cell_entry( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECSInfo_findNamespace( namespace_path, nsDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findNamespace( p_cellcb, namespace_path, nsDesc ))
#define cTECSInfo_findRegion( namespace_path, regionDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRegion( p_cellcb, namespace_path, regionDesc ))
#define cTECSInfo_findSignature( namespace_path, signatureDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findSignature( p_cellcb, namespace_path, signatureDesc ))
#define cTECSInfo_findCelltype( namespace_path, celltypeDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findCelltype( p_cellcb, namespace_path, celltypeDesc ))
#define cTECSInfo_findCell( namespace_path, cellDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findCell( p_cellcb, namespace_path, cellDesc ))
#define cTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_cellcb, namespace_path, rawEntryDescDesc, entryDesc ))
#define cTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_cellcb, namespace_path, subsc, rawDesc ))
#define cNSInfo_getName( name, max_len ) \
          tTECSUnit_cNSInfo_getName( p_cellcb, name, max_len )
#define cNSInfo_getNameLength( ) \
          tTECSUnit_cNSInfo_getNameLength( p_cellcb )
#define cNSInfo_getNNamespace( ) \
          tTECSUnit_cNSInfo_getNNamespace( p_cellcb )
#define cNSInfo_getNamespaceInfo( ith, des ) \
          tTECSUnit_cNSInfo_getNamespaceInfo( p_cellcb, ith, des )
#define cNSInfo_getNSignature( ) \
          tTECSUnit_cNSInfo_getNSignature( p_cellcb )
#define cNSInfo_getSignatureInfo( ith, des ) \
          tTECSUnit_cNSInfo_getSignatureInfo( p_cellcb, ith, des )
#define cNSInfo_getNCelltype( ) \
          tTECSUnit_cNSInfo_getNCelltype( p_cellcb )
#define cNSInfo_getCelltypeInfo( ith, des ) \
          tTECSUnit_cNSInfo_getCelltypeInfo( p_cellcb, ith, des )
#define cRegionInfo_getName( name, max_len ) \
          tTECSUnit_cRegionInfo_getName( p_cellcb, name, max_len )
#define cRegionInfo_getNameLength( ) \
          tTECSUnit_cRegionInfo_getNameLength( p_cellcb )
#define cRegionInfo_getNCell( ) \
          tTECSUnit_cRegionInfo_getNCell( p_cellcb )
#define cRegionInfo_getCellInfo( ith, des ) \
          tTECSUnit_cRegionInfo_getCellInfo( p_cellcb, ith, des )
#define cRegionInfo_getNRegion( ) \
          tTECSUnit_cRegionInfo_getNRegion( p_cellcb )
#define cRegionInfo_getRegionInfo( ith, des ) \
          tTECSUnit_cRegionInfo_getRegionInfo( p_cellcb, ith, des )
#define cCellInfo_getName( name, max_len ) \
          tTECSUnit_cCellInfo_getName( p_cellcb, name, max_len )
#define cCellInfo_getNameLength( ) \
          tTECSUnit_cCellInfo_getNameLength( p_cellcb )
#define cCellInfo_getNRawEntryDescriptorInfo( ) \
          tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_cellcb )
#define cCellInfo_getRawEntryDescriptorInfo( index, desc ) \
          tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_cellcb, index, desc )
#define cCellInfo_getCelltypeInfo( desc ) \
          tTECSUnit_cCellInfo_getCelltypeInfo( p_cellcb, desc )
#define cCellInfo_getCBP( cbp ) \
          tTECSUnit_cCellInfo_getCBP( p_cellcb, cbp )
#define cCellInfo_getINIBP( inibp ) \
          tTECSUnit_cCellInfo_getINIBP( p_cellcb, inibp )
#define cSignatureInfo_getName( name, max_len ) \
          tTECSUnit_cSignatureInfo_getName( p_cellcb, name, max_len )
#define cSignatureInfo_getNameLength( ) \
          tTECSUnit_cSignatureInfo_getNameLength( p_cellcb )
#define cSignatureInfo_getNFunction( ) \
          tTECSUnit_cSignatureInfo_getNFunction( p_cellcb )
#define cSignatureInfo_getFunctionInfo( ith, desc ) \
          tTECSUnit_cSignatureInfo_getFunctionInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getName( name, max_len ) \
          tTECSUnit_cCelltypeInfo_getName( p_cellcb, name, max_len )
#define cCelltypeInfo_getNameLength( ) \
          tTECSUnit_cCelltypeInfo_getNameLength( p_cellcb )
#define cCelltypeInfo_getNAttr( ) \
          tTECSUnit_cCelltypeInfo_getNAttr( p_cellcb )
#define cCelltypeInfo_getAttrInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getAttrInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNVar( ) \
          tTECSUnit_cCelltypeInfo_getNVar( p_cellcb )
#define cCelltypeInfo_getVarInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getVarInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNCall( ) \
          tTECSUnit_cCelltypeInfo_getNCall( p_cellcb )
#define cCelltypeInfo_getCallInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getCallInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNEntry( ) \
          tTECSUnit_cCelltypeInfo_getNEntry( p_cellcb )
#define cCelltypeInfo_getEntryInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getEntryInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_isSingleton( ) \
          tTECSUnit_cCelltypeInfo_isSingleton( p_cellcb )
#define cCelltypeInfo_isIDX_is_ID( ) \
          tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_cellcb )
#define cCelltypeInfo_sizeOfCB( ) \
          tTECSUnit_cCelltypeInfo_sizeOfCB( p_cellcb )
#define cCelltypeInfo_sizeOfINIB( ) \
          tTECSUnit_cCelltypeInfo_sizeOfINIB( p_cellcb )
#define cVarDeclInfo_getName( name, max_len ) \
          tTECSUnit_cVarDeclInfo_getName( p_cellcb, name, max_len )
#define cVarDeclInfo_getNameLength( ) \
          tTECSUnit_cVarDeclInfo_getNameLength( p_cellcb )
#define cVarDeclInfo_getLocationInfo( offset, place ) \
          tTECSUnit_cVarDeclInfo_getLocationInfo( p_cellcb, offset, place )
#define cVarDeclInfo_getTypeInfo( desc ) \
          tTECSUnit_cVarDeclInfo_getTypeInfo( p_cellcb, desc )
#define cVarDeclInfo_getSizeIsExpr( expr_str, max_len ) \
          tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_cellcb, expr_str, max_len )
#define cVarDeclInfo_getSizeIs( size, p_cb ) \
          tTECSUnit_cVarDeclInfo_getSizeIs( p_cellcb, size, p_cb )
#define cTypeInfo_getName( name, max_len ) \
          tTECSUnit_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( ) \
          tTECSUnit_cTypeInfo_getNameLength( p_cellcb )
#define cTypeInfo_getSize( ) \
          tTECSUnit_cTypeInfo_getSize( p_cellcb )
#define cTypeInfo_getKind( ) \
          tTECSUnit_cTypeInfo_getKind( p_cellcb )
#define cTypeInfo_getNType( ) \
          tTECSUnit_cTypeInfo_getNType( p_cellcb )
#define cTypeInfo_getTypeInfo( desc ) \
          tTECSUnit_cTypeInfo_getTypeInfo( p_cellcb, desc )
#define cTypeInfo_getNMember( ) \
          tTECSUnit_cTypeInfo_getNMember( p_cellcb )
#define cTypeInfo_getMemberInfo( ith, desc ) \
          tTECSUnit_cTypeInfo_getMemberInfo( p_cellcb, ith, desc )
#define cREDInfo_getNRawEntryDescriptorInfo( ) \
          tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_cellcb )
#define cREDInfo_getRawDescriptor( subsc, rawDesc ) \
          tTECSUnit_cREDInfo_getRawDescriptor( p_cellcb, subsc, rawDesc )
#define cEntryInfo_getName( name, max_len ) \
          tTECSUnit_cEntryInfo_getName( p_cellcb, name, max_len )
#define cEntryInfo_getNameLength( ) \
          tTECSUnit_cEntryInfo_getNameLength( p_cellcb )
#define cEntryInfo_getSignatureInfo( desc ) \
          tTECSUnit_cEntryInfo_getSignatureInfo( p_cellcb, desc )
#define cEntryInfo_getArraySize( ) \
          tTECSUnit_cEntryInfo_getArraySize( p_cellcb )
#define cEntryInfo_isInline( ) \
          tTECSUnit_cEntryInfo_isInline( p_cellcb )
#define cTarget1_double( arg ) \
          tTECSUnit_cTarget1_double( p_cellcb, arg )
#define cTarget2_add( arg1, arg2 ) \
          tTECSUnit_cTarget2_add( p_cellcb, arg1, arg2 )
#define cTarget3_send( buf, len ) \
          tTECSUnit_cTarget3_send( p_cellcb, buf, len )
#define cTarget3_sendMessage( buf, len ) \
          tTECSUnit_cTarget3_sendMessage( p_cellcb, buf, len )
#define cTarget3_sendStruct( data ) \
          tTECSUnit_cTarget3_sendStruct( p_cellcb, data )
#define cTarget3_receiveMessage( buf, len ) \
          tTECSUnit_cTarget3_receiveMessage( p_cellcb, buf, len )
#define cTarget3_checkER( eroor ) \
          tTECSUnit_cTarget3_checkER( p_cellcb, eroor )



/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cNSInfo_set_descriptor( desc )\
          tTECSUnit_cNSInfo_set_descriptor( p_cellcb, desc )
#define cNSInfo_unjoin(  )\
          tTECSUnit_cNSInfo_unjoin( p_cellcb )
#define cRegionInfo_set_descriptor( desc )\
          tTECSUnit_cRegionInfo_set_descriptor( p_cellcb, desc )
#define cRegionInfo_unjoin(  )\
          tTECSUnit_cRegionInfo_unjoin( p_cellcb )
#define cCellInfo_set_descriptor( desc )\
          tTECSUnit_cCellInfo_set_descriptor( p_cellcb, desc )
#define cCellInfo_unjoin(  )\
          tTECSUnit_cCellInfo_unjoin( p_cellcb )
#define cSignatureInfo_set_descriptor( desc )\
          tTECSUnit_cSignatureInfo_set_descriptor( p_cellcb, desc )
#define cSignatureInfo_unjoin(  )\
          tTECSUnit_cSignatureInfo_unjoin( p_cellcb )
#define cCelltypeInfo_set_descriptor( desc )\
          tTECSUnit_cCelltypeInfo_set_descriptor( p_cellcb, desc )
#define cCelltypeInfo_unjoin(  )\
          tTECSUnit_cCelltypeInfo_unjoin( p_cellcb )
#define cVarDeclInfo_set_descriptor( desc )\
          tTECSUnit_cVarDeclInfo_set_descriptor( p_cellcb, desc )
#define cVarDeclInfo_unjoin(  )\
          tTECSUnit_cVarDeclInfo_unjoin( p_cellcb )
#define cTypeInfo_set_descriptor( desc )\
          tTECSUnit_cTypeInfo_set_descriptor( p_cellcb, desc )
#define cTypeInfo_unjoin(  )\
          tTECSUnit_cTypeInfo_unjoin( p_cellcb )
#define cREDInfo_set_descriptor( desc )\
          tTECSUnit_cREDInfo_set_descriptor( p_cellcb, desc )
#define cREDInfo_unjoin(  )\
          tTECSUnit_cREDInfo_unjoin( p_cellcb )
#define cEntryInfo_set_descriptor( desc )\
          tTECSUnit_cEntryInfo_set_descriptor( p_cellcb, desc )
#define cEntryInfo_unjoin(  )\
          tTECSUnit_cEntryInfo_unjoin( p_cellcb )
#define cTarget1_set_descriptor( desc )\
          tTECSUnit_cTarget1_set_descriptor( p_cellcb, desc )
#define cTarget1_unjoin(  )\
          tTECSUnit_cTarget1_unjoin( p_cellcb )
#define cTarget2_set_descriptor( desc )\
          tTECSUnit_cTarget2_set_descriptor( p_cellcb, desc )
#define cTarget2_unjoin(  )\
          tTECSUnit_cTarget2_unjoin( p_cellcb )
#define cTarget3_set_descriptor( desc )\
          tTECSUnit_cTarget3_set_descriptor( p_cellcb, desc )
#define cTarget3_unjoin(  )\
          tTECSUnit_cTarget3_unjoin( p_cellcb )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cNSInfo_joined()\
		tTECSUnit_is_cNSInfo_joined(p_cellcb)
#define is_cRegionInfo_joined()\
		tTECSUnit_is_cRegionInfo_joined(p_cellcb)
#define is_cCellInfo_joined()\
		tTECSUnit_is_cCellInfo_joined(p_cellcb)
#define is_cSignatureInfo_joined()\
		tTECSUnit_is_cSignatureInfo_joined(p_cellcb)
#define is_cCelltypeInfo_joined()\
		tTECSUnit_is_cCelltypeInfo_joined(p_cellcb)
#define is_cVarDeclInfo_joined()\
		tTECSUnit_is_cVarDeclInfo_joined(p_cellcb)
#define is_cTypeInfo_joined()\
		tTECSUnit_is_cTypeInfo_joined(p_cellcb)
#define is_cREDInfo_joined()\
		tTECSUnit_is_cREDInfo_joined(p_cellcb)
#define is_cEntryInfo_joined()\
		tTECSUnit_is_cEntryInfo_joined(p_cellcb)
#define is_cTarget1_joined()\
		tTECSUnit_is_cTarget1_joined(p_cellcb)
#define is_cTarget2_joined()\
		tTECSUnit_is_cTarget2_joined(p_cellcb)
#define is_cTarget3_joined()\
		tTECSUnit_is_cTarget3_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eUnit_main       tTECSUnit_eUnit_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTECSUnit_N_CELL; (i)++ ){ \
       (p_cb) = &tTECSUnit_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tTECSUnit_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTECSUnit_TECSGENH */
