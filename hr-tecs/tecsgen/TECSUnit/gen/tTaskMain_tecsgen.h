/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTaskMain_TECSGEN_H
#define tTaskMain_TECSGEN_H

/*
 * celltype          :  tTaskMain
 * global name       :  tTaskMain
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
#include "sTaskBody_tecsgen.h"
#include "sTECSUnit_tecsgen.h"
#include "sJSMN_tecsgen.h"
#include "nTECSInfo_sTECSInfo_tecsgen.h"
#include "nTECSInfo_sNamespaceInfo_tecsgen.h"
#include "nTECSInfo_sRegionInfo_tecsgen.h"
#include "nTECSInfo_sCellInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"
#include "nTECSInfo_sVarDeclInfo_tecsgen.h"
#include "nTECSInfo_sTypeInfo_tecsgen.h"
#include "nTECSInfo_sFunctionInfo_tecsgen.h"
#include "nTECSInfo_sParamInfo_tecsgen.h"
#include "nTECSInfo_sEntryInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTaskMain_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        NAME_LEN;
    int16_t        ARG_NAME_LEN;
    int16_t        ARG_DIM;
    int16_t        TARGET_NUM;
    char_t*        cell_path;
    char_t*        celltype_path;
    char_t*        entry_path;
    char_t*        entry_path_tmp;
    char_t*        signature_path;
    char_t*        function_path;
    char_t*        function_path_tmp;
    char_t*        exp_type;
}  tTaskMain_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tTaskMain_CB {
    tTaskMain_INIB  *_inib;
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES *cNSInfo;
    struct tag_nTECSInfo_sRegionInfo_VDES *cRegionInfo;
    struct tag_nTECSInfo_sCellInfo_VDES *cCellInfo;
    struct tag_nTECSInfo_sSignatureInfo_VDES *cSignatureInfo;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *cCelltypeInfo;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *cVarDeclInfo;
    struct tag_nTECSInfo_sTypeInfo_VDES *cTypeInfo;
    struct tag_nTECSInfo_sFunctionInfo_VDES *cFunctionInfo;
    struct tag_nTECSInfo_sParamInfo_VDES *cParamInfo;
    struct tag_nTECSInfo_sEntryInfo_VDES *cEntryInfo;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int8_t         arg_num;
    char_t         arg[32][128];
    char_t         arg_type[32][128];
    int8_t         find_entry;
    int8_t         find_func;
}  tTaskMain_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tTaskMain_CB  tTaskMain_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tTaskMain_CB *tTaskMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tTaskMain_eBody_main(tTaskMain_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTaskMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTECSUnit_tecsgen.h"
#include "tJSMN_tecsgen.h"
#include "nTECSInfo_tTECSInfo_tecsgen.h"
#ifdef  tTaskMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTaskMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTaskMain_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tTaskMain_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTaskMain_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tTaskMain_is_cNSInfo_joined(p_that) \
	  ((p_that)->cNSInfo!=0)
#define tTaskMain_is_cRegionInfo_joined(p_that) \
	  ((p_that)->cRegionInfo!=0)
#define tTaskMain_is_cCellInfo_joined(p_that) \
	  ((p_that)->cCellInfo!=0)
#define tTaskMain_is_cSignatureInfo_joined(p_that) \
	  ((p_that)->cSignatureInfo!=0)
#define tTaskMain_is_cCelltypeInfo_joined(p_that) \
	  ((p_that)->cCelltypeInfo!=0)
#define tTaskMain_is_cVarDeclInfo_joined(p_that) \
	  ((p_that)->cVarDeclInfo!=0)
#define tTaskMain_is_cTypeInfo_joined(p_that) \
	  ((p_that)->cTypeInfo!=0)
#define tTaskMain_is_cFunctionInfo_joined(p_that) \
	  ((p_that)->cFunctionInfo!=0)
#define tTaskMain_is_cParamInfo_joined(p_that) \
	  ((p_that)->cParamInfo!=0)
#define tTaskMain_is_cEntryInfo_joined(p_that) \
	  ((p_that)->cEntryInfo!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tTaskMain_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTaskMain_ATTR_NAME_LEN( p_that )	((p_that)->_inib->NAME_LEN)
#define tTaskMain_ATTR_ARG_NAME_LEN( p_that )	((p_that)->_inib->ARG_NAME_LEN)
#define tTaskMain_ATTR_ARG_DIM( p_that )	((p_that)->_inib->ARG_DIM)
#define tTaskMain_ATTR_TARGET_NUM( p_that )	((p_that)->_inib->TARGET_NUM)

#define tTaskMain_GET_NAME_LEN(p_that)	((p_that)->_inib->NAME_LEN)
#define tTaskMain_GET_ARG_NAME_LEN(p_that)	((p_that)->_inib->ARG_NAME_LEN)
#define tTaskMain_GET_ARG_DIM(p_that)	((p_that)->_inib->ARG_DIM)
#define tTaskMain_GET_TARGET_NUM(p_that)	((p_that)->_inib->TARGET_NUM)


/* var アクセスマクロ #_VAM_# */
#define tTaskMain_VAR_cell_path(p_that)	((p_that)->_inib->cell_path)
#define tTaskMain_VAR_celltype_path(p_that)	((p_that)->_inib->celltype_path)
#define tTaskMain_VAR_entry_path(p_that)	((p_that)->_inib->entry_path)
#define tTaskMain_VAR_entry_path_tmp(p_that)	((p_that)->_inib->entry_path_tmp)
#define tTaskMain_VAR_signature_path(p_that)	((p_that)->_inib->signature_path)
#define tTaskMain_VAR_function_path(p_that)	((p_that)->_inib->function_path)
#define tTaskMain_VAR_function_path_tmp(p_that)	((p_that)->_inib->function_path_tmp)
#define tTaskMain_VAR_arg_num(p_that)	((p_that)->arg_num)
#define tTaskMain_VAR_exp_type(p_that)	((p_that)->_inib->exp_type)
#define tTaskMain_VAR_arg(p_that)	((p_that)->arg)
#define tTaskMain_VAR_arg_type(p_that)	((p_that)->arg_type)
#define tTaskMain_VAR_find_entry(p_that)	((p_that)->find_entry)
#define tTaskMain_VAR_find_func(p_that)	((p_that)->find_func)

#define tTaskMain_GET_cell_path(p_that)	((p_that)->cell_path)
#define tTaskMain_SET_cell_path(p_that,val)	((p_that)->cell_path=(val))
#define tTaskMain_GET_celltype_path(p_that)	((p_that)->celltype_path)
#define tTaskMain_SET_celltype_path(p_that,val)	((p_that)->celltype_path=(val))
#define tTaskMain_GET_entry_path(p_that)	((p_that)->entry_path)
#define tTaskMain_SET_entry_path(p_that,val)	((p_that)->entry_path=(val))
#define tTaskMain_GET_entry_path_tmp(p_that)	((p_that)->entry_path_tmp)
#define tTaskMain_SET_entry_path_tmp(p_that,val)	((p_that)->entry_path_tmp=(val))
#define tTaskMain_GET_signature_path(p_that)	((p_that)->signature_path)
#define tTaskMain_SET_signature_path(p_that,val)	((p_that)->signature_path=(val))
#define tTaskMain_GET_function_path(p_that)	((p_that)->function_path)
#define tTaskMain_SET_function_path(p_that,val)	((p_that)->function_path=(val))
#define tTaskMain_GET_function_path_tmp(p_that)	((p_that)->function_path_tmp)
#define tTaskMain_SET_function_path_tmp(p_that,val)	((p_that)->function_path_tmp=(val))
#define tTaskMain_GET_arg_num(p_that)	((p_that)->arg_num)
#define tTaskMain_SET_arg_num(p_that,val)	((p_that)->arg_num=(val))
#define tTaskMain_GET_exp_type(p_that)	((p_that)->exp_type)
#define tTaskMain_SET_exp_type(p_that,val)	((p_that)->exp_type=(val))
#define tTaskMain_GET_arg(p_that)	((p_that)->arg)
#define tTaskMain_SET_arg(p_that,val)	((p_that)->arg=(val))
#define tTaskMain_GET_arg_type(p_that)	((p_that)->arg_type)
#define tTaskMain_SET_arg_type(p_that,val)	((p_that)->arg_type=(val))
#define tTaskMain_GET_find_entry(p_that)	((p_that)->find_entry)
#define tTaskMain_SET_find_entry(p_that,val)	((p_that)->find_entry=(val))
#define tTaskMain_GET_find_func(p_that)	((p_that)->find_func)
#define tTaskMain_SET_find_func(p_that,val)	((p_that)->find_func=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tTaskMain_cUnit_main( p_that, cell_path, entry_path, signature_path, function_path, arguments, exp_val ) \
	  tTECSUnit_eUnit_main( \
	   &tTECSUnit_CB_tab[0], (cell_path), (entry_path), (signature_path), (function_path), (arguments), (exp_val) )
#define tTaskMain_cJSMN_json_open( p_that ) \
	  tJSMN_eJSMN_json_open( \
	   &tJSMN_CB_tab[0] )
#define tTaskMain_cJSMN_json_parse_path( p_that, c_path, e_path, f_path, target_num, btr ) \
	  tJSMN_eJSMN_json_parse_path( \
	   &tJSMN_CB_tab[0], (c_path), (e_path), (f_path), (target_num), (btr) )
#define tTaskMain_cJSMN_json_parse_arg( p_that, arguments, exp_val, arg_num, target_num, btr ) \
	  tJSMN_eJSMN_json_parse_arg( \
	   &tJSMN_CB_tab[0], (arguments), (exp_val), (arg_num), (target_num), (btr) )
#define tTaskMain_cTECSInfo_findNamespace( p_that, namespace_path, nsDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( \
	    (namespace_path), (nsDesc) )
#define tTaskMain_cTECSInfo_findRegion( p_that, namespace_path, regionDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRegion( \
	    (namespace_path), (regionDesc) )
#define tTaskMain_cTECSInfo_findSignature( p_that, namespace_path, signatureDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findSignature( \
	    (namespace_path), (signatureDesc) )
#define tTaskMain_cTECSInfo_findCelltype( p_that, namespace_path, celltypeDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( \
	    (namespace_path), (celltypeDesc) )
#define tTaskMain_cTECSInfo_findCell( p_that, namespace_path, cellDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findCell( \
	    (namespace_path), (cellDesc) )
#define tTaskMain_cTECSInfo_findRawEntryDescriptor( p_that, namespace_path, rawEntryDescDesc, entryDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor( \
	    (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define tTaskMain_cTECSInfo_findRawEntryDescriptor_unsafe( p_that, namespace_path, subsc, rawDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe( \
	    (namespace_path), (subsc), (rawDesc) )
#define tTaskMain_cNSInfo_getName( p_that, name, max_len ) \
	  (p_that)->cNSInfo->VMT->getName__T( \
	   (p_that)->cNSInfo, (name), (max_len) )
#define tTaskMain_cNSInfo_getNameLength( p_that ) \
	  (p_that)->cNSInfo->VMT->getNameLength__T( \
	   (p_that)->cNSInfo )
#define tTaskMain_cNSInfo_getNNamespace( p_that ) \
	  (p_that)->cNSInfo->VMT->getNNamespace__T( \
	   (p_that)->cNSInfo )
#define tTaskMain_cNSInfo_getNamespaceInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getNamespaceInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTaskMain_cNSInfo_getNSignature( p_that ) \
	  (p_that)->cNSInfo->VMT->getNSignature__T( \
	   (p_that)->cNSInfo )
#define tTaskMain_cNSInfo_getSignatureInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getSignatureInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTaskMain_cNSInfo_getNCelltype( p_that ) \
	  (p_that)->cNSInfo->VMT->getNCelltype__T( \
	   (p_that)->cNSInfo )
#define tTaskMain_cNSInfo_getCelltypeInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getCelltypeInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTaskMain_cRegionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cRegionInfo->VMT->getName__T( \
	   (p_that)->cRegionInfo, (name), (max_len) )
#define tTaskMain_cRegionInfo_getNameLength( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNameLength__T( \
	   (p_that)->cRegionInfo )
#define tTaskMain_cRegionInfo_getNCell( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNCell__T( \
	   (p_that)->cRegionInfo )
#define tTaskMain_cRegionInfo_getCellInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo->VMT->getCellInfo__T( \
	   (p_that)->cRegionInfo, (ith), (des) )
#define tTaskMain_cRegionInfo_getNRegion( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNRegion__T( \
	   (p_that)->cRegionInfo )
#define tTaskMain_cRegionInfo_getRegionInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo->VMT->getRegionInfo__T( \
	   (p_that)->cRegionInfo, (ith), (des) )
#define tTaskMain_cCellInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCellInfo->VMT->getName__T( \
	   (p_that)->cCellInfo, (name), (max_len) )
#define tTaskMain_cCellInfo_getNameLength( p_that ) \
	  (p_that)->cCellInfo->VMT->getNameLength__T( \
	   (p_that)->cCellInfo )
#define tTaskMain_cCellInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cCellInfo->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo )
#define tTaskMain_cCellInfo_getRawEntryDescriptorInfo( p_that, index, desc ) \
	  (p_that)->cCellInfo->VMT->getRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo, (index), (desc) )
#define tTaskMain_cCellInfo_getCelltypeInfo( p_that, desc ) \
	  (p_that)->cCellInfo->VMT->getCelltypeInfo__T( \
	   (p_that)->cCellInfo, (desc) )
#define tTaskMain_cCellInfo_getCBP( p_that, cbp ) \
	  (p_that)->cCellInfo->VMT->getCBP__T( \
	   (p_that)->cCellInfo, (cbp) )
#define tTaskMain_cCellInfo_getINIBP( p_that, inibp ) \
	  (p_that)->cCellInfo->VMT->getINIBP__T( \
	   (p_that)->cCellInfo, (inibp) )
#define tTaskMain_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo->VMT->getName__T( \
	   (p_that)->cSignatureInfo, (name), (max_len) )
#define tTaskMain_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo )
#define tTaskMain_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo )
#define tTaskMain_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo, (ith), (desc) )
#define tTaskMain_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo->VMT->getName__T( \
	   (p_that)->cCelltypeInfo, (name), (max_len) )
#define tTaskMain_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNameLength__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNAttr__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getAttrInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTaskMain_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNVar__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getVarInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTaskMain_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNCall__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getCallInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTaskMain_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNEntry__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getEntryInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTaskMain_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isSingleton__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isIDX_is_ID__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfCB__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfINIB__T( \
	   (p_that)->cCelltypeInfo )
#define tTaskMain_cVarDeclInfo_getName( p_that, name, max_len ) \
	  (p_that)->cVarDeclInfo->VMT->getName__T( \
	   (p_that)->cVarDeclInfo, (name), (max_len) )
#define tTaskMain_cVarDeclInfo_getNameLength( p_that ) \
	  (p_that)->cVarDeclInfo->VMT->getNameLength__T( \
	   (p_that)->cVarDeclInfo )
#define tTaskMain_cVarDeclInfo_getLocationInfo( p_that, offset, place ) \
	  (p_that)->cVarDeclInfo->VMT->getLocationInfo__T( \
	   (p_that)->cVarDeclInfo, (offset), (place) )
#define tTaskMain_cVarDeclInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cVarDeclInfo->VMT->getTypeInfo__T( \
	   (p_that)->cVarDeclInfo, (desc) )
#define tTaskMain_cVarDeclInfo_getSizeIsExpr( p_that, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo->VMT->getSizeIsExpr__T( \
	   (p_that)->cVarDeclInfo, (expr_str), (max_len) )
#define tTaskMain_cVarDeclInfo_getSizeIs( p_that, size, p_cb ) \
	  (p_that)->cVarDeclInfo->VMT->getSizeIs__T( \
	   (p_that)->cVarDeclInfo, (size), (p_cb) )
#define tTaskMain_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define tTaskMain_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo )
#define tTaskMain_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo )
#define tTaskMain_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo )
#define tTaskMain_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo )
#define tTaskMain_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (desc) )
#define tTaskMain_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNMember__T( \
	   (p_that)->cTypeInfo )
#define tTaskMain_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getMemberInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )
#define tTaskMain_cFunctionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cFunctionInfo->VMT->getName__T( \
	   (p_that)->cFunctionInfo, (name), (max_len) )
#define tTaskMain_cFunctionInfo_getNameLength( p_that ) \
	  (p_that)->cFunctionInfo->VMT->getNameLength__T( \
	   (p_that)->cFunctionInfo )
#define tTaskMain_cFunctionInfo_getReturnTypeInfo( p_that, desc ) \
	  (p_that)->cFunctionInfo->VMT->getReturnTypeInfo__T( \
	   (p_that)->cFunctionInfo, (desc) )
#define tTaskMain_cFunctionInfo_getNParam( p_that ) \
	  (p_that)->cFunctionInfo->VMT->getNParam__T( \
	   (p_that)->cFunctionInfo )
#define tTaskMain_cFunctionInfo_getParamInfo( p_that, ith, param ) \
	  (p_that)->cFunctionInfo->VMT->getParamInfo__T( \
	   (p_that)->cFunctionInfo, (ith), (param) )
#define tTaskMain_cParamInfo_getName( p_that, name, max_len ) \
	  (p_that)->cParamInfo->VMT->getName__T( \
	   (p_that)->cParamInfo, (name), (max_len) )
#define tTaskMain_cParamInfo_getNameLength( p_that ) \
	  (p_that)->cParamInfo->VMT->getNameLength__T( \
	   (p_that)->cParamInfo )
#define tTaskMain_cParamInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cParamInfo->VMT->getTypeInfo__T( \
	   (p_that)->cParamInfo, (desc) )
#define tTaskMain_cParamInfo_getDir( p_that, dir ) \
	  (p_that)->cParamInfo->VMT->getDir__T( \
	   (p_that)->cParamInfo, (dir) )
#define tTaskMain_cEntryInfo_getName( p_that, name, max_len ) \
	  (p_that)->cEntryInfo->VMT->getName__T( \
	   (p_that)->cEntryInfo, (name), (max_len) )
#define tTaskMain_cEntryInfo_getNameLength( p_that ) \
	  (p_that)->cEntryInfo->VMT->getNameLength__T( \
	   (p_that)->cEntryInfo )
#define tTaskMain_cEntryInfo_getSignatureInfo( p_that, desc ) \
	  (p_that)->cEntryInfo->VMT->getSignatureInfo__T( \
	   (p_that)->cEntryInfo, (desc) )
#define tTaskMain_cEntryInfo_getArraySize( p_that ) \
	  (p_that)->cEntryInfo->VMT->getArraySize__T( \
	   (p_that)->cEntryInfo )
#define tTaskMain_cEntryInfo_isInline( p_that ) \
	  (p_that)->cEntryInfo->VMT->isInline__T( \
	   (p_that)->cEntryInfo )

#else  /* TECSFLOW */
#define tTaskMain_cUnit_main( p_that, cell_path, entry_path, signature_path, function_path, arguments, exp_val ) \
	  (p_that)->cUnit.main__T( \
 (cell_path), (entry_path), (signature_path), (function_path), (arguments), (exp_val) )
#define tTaskMain_cJSMN_json_open( p_that ) \
	  (p_that)->cJSMN.json_open__T( \
 )
#define tTaskMain_cJSMN_json_parse_path( p_that, c_path, e_path, f_path, target_num, btr ) \
	  (p_that)->cJSMN.json_parse_path__T( \
 (c_path), (e_path), (f_path), (target_num), (btr) )
#define tTaskMain_cJSMN_json_parse_arg( p_that, arguments, exp_val, arg_num, target_num, btr ) \
	  (p_that)->cJSMN.json_parse_arg__T( \
 (arguments), (exp_val), (arg_num), (target_num), (btr) )
#define tTaskMain_cTECSInfo_findNamespace( p_that, namespace_path, nsDesc ) \
	  (p_that)->cTECSInfo.findNamespace__T( \
 (namespace_path), (nsDesc) )
#define tTaskMain_cTECSInfo_findRegion( p_that, namespace_path, regionDesc ) \
	  (p_that)->cTECSInfo.findRegion__T( \
 (namespace_path), (regionDesc) )
#define tTaskMain_cTECSInfo_findSignature( p_that, namespace_path, signatureDesc ) \
	  (p_that)->cTECSInfo.findSignature__T( \
 (namespace_path), (signatureDesc) )
#define tTaskMain_cTECSInfo_findCelltype( p_that, namespace_path, celltypeDesc ) \
	  (p_that)->cTECSInfo.findCelltype__T( \
 (namespace_path), (celltypeDesc) )
#define tTaskMain_cTECSInfo_findCell( p_that, namespace_path, cellDesc ) \
	  (p_that)->cTECSInfo.findCell__T( \
 (namespace_path), (cellDesc) )
#define tTaskMain_cTECSInfo_findRawEntryDescriptor( p_that, namespace_path, rawEntryDescDesc, entryDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor__T( \
 (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define tTaskMain_cTECSInfo_findRawEntryDescriptor_unsafe( p_that, namespace_path, subsc, rawDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor_unsafe__T( \
 (namespace_path), (subsc), (rawDesc) )
#define tTaskMain_cNSInfo_getName( p_that, name, max_len ) \
	  (p_that)->cNSInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cNSInfo_getNameLength( p_that ) \
	  (p_that)->cNSInfo.getNameLength__T( \
 )
#define tTaskMain_cNSInfo_getNNamespace( p_that ) \
	  (p_that)->cNSInfo.getNNamespace__T( \
 )
#define tTaskMain_cNSInfo_getNamespaceInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getNamespaceInfo__T( \
 (ith), (des) )
#define tTaskMain_cNSInfo_getNSignature( p_that ) \
	  (p_that)->cNSInfo.getNSignature__T( \
 )
#define tTaskMain_cNSInfo_getSignatureInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getSignatureInfo__T( \
 (ith), (des) )
#define tTaskMain_cNSInfo_getNCelltype( p_that ) \
	  (p_that)->cNSInfo.getNCelltype__T( \
 )
#define tTaskMain_cNSInfo_getCelltypeInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getCelltypeInfo__T( \
 (ith), (des) )
#define tTaskMain_cRegionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cRegionInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cRegionInfo_getNameLength( p_that ) \
	  (p_that)->cRegionInfo.getNameLength__T( \
 )
#define tTaskMain_cRegionInfo_getNCell( p_that ) \
	  (p_that)->cRegionInfo.getNCell__T( \
 )
#define tTaskMain_cRegionInfo_getCellInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo.getCellInfo__T( \
 (ith), (des) )
#define tTaskMain_cRegionInfo_getNRegion( p_that ) \
	  (p_that)->cRegionInfo.getNRegion__T( \
 )
#define tTaskMain_cRegionInfo_getRegionInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo.getRegionInfo__T( \
 (ith), (des) )
#define tTaskMain_cCellInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCellInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cCellInfo_getNameLength( p_that ) \
	  (p_that)->cCellInfo.getNameLength__T( \
 )
#define tTaskMain_cCellInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cCellInfo.getNRawEntryDescriptorInfo__T( \
 )
#define tTaskMain_cCellInfo_getRawEntryDescriptorInfo( p_that, index, desc ) \
	  (p_that)->cCellInfo.getRawEntryDescriptorInfo__T( \
 (index), (desc) )
#define tTaskMain_cCellInfo_getCelltypeInfo( p_that, desc ) \
	  (p_that)->cCellInfo.getCelltypeInfo__T( \
 (desc) )
#define tTaskMain_cCellInfo_getCBP( p_that, cbp ) \
	  (p_that)->cCellInfo.getCBP__T( \
 (cbp) )
#define tTaskMain_cCellInfo_getINIBP( p_that, inibp ) \
	  (p_that)->cCellInfo.getINIBP__T( \
 (inibp) )
#define tTaskMain_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo.getNameLength__T( \
 )
#define tTaskMain_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo.getNFunction__T( \
 )
#define tTaskMain_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo.getFunctionInfo__T( \
 (ith), (desc) )
#define tTaskMain_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo.getNameLength__T( \
 )
#define tTaskMain_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo.getNAttr__T( \
 )
#define tTaskMain_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getAttrInfo__T( \
 (ith), (desc) )
#define tTaskMain_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo.getNVar__T( \
 )
#define tTaskMain_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getVarInfo__T( \
 (ith), (desc) )
#define tTaskMain_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo.getNCall__T( \
 )
#define tTaskMain_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getCallInfo__T( \
 (ith), (desc) )
#define tTaskMain_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo.getNEntry__T( \
 )
#define tTaskMain_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getEntryInfo__T( \
 (ith), (desc) )
#define tTaskMain_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo.isSingleton__T( \
 )
#define tTaskMain_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo.isIDX_is_ID__T( \
 )
#define tTaskMain_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfCB__T( \
 )
#define tTaskMain_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfINIB__T( \
 )
#define tTaskMain_cVarDeclInfo_getName( p_that, name, max_len ) \
	  (p_that)->cVarDeclInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cVarDeclInfo_getNameLength( p_that ) \
	  (p_that)->cVarDeclInfo.getNameLength__T( \
 )
#define tTaskMain_cVarDeclInfo_getLocationInfo( p_that, offset, place ) \
	  (p_that)->cVarDeclInfo.getLocationInfo__T( \
 (offset), (place) )
#define tTaskMain_cVarDeclInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cVarDeclInfo.getTypeInfo__T( \
 (desc) )
#define tTaskMain_cVarDeclInfo_getSizeIsExpr( p_that, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo.getSizeIsExpr__T( \
 (expr_str), (max_len) )
#define tTaskMain_cVarDeclInfo_getSizeIs( p_that, size, p_cb ) \
	  (p_that)->cVarDeclInfo.getSizeIs__T( \
 (size), (p_cb) )
#define tTaskMain_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo.getNameLength__T( \
 )
#define tTaskMain_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo.getSize__T( \
 )
#define tTaskMain_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo.getKind__T( \
 )
#define tTaskMain_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo.getNType__T( \
 )
#define tTaskMain_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo.getTypeInfo__T( \
 (desc) )
#define tTaskMain_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo.getNMember__T( \
 )
#define tTaskMain_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo.getMemberInfo__T( \
 (ith), (desc) )
#define tTaskMain_cFunctionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cFunctionInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cFunctionInfo_getNameLength( p_that ) \
	  (p_that)->cFunctionInfo.getNameLength__T( \
 )
#define tTaskMain_cFunctionInfo_getReturnTypeInfo( p_that, desc ) \
	  (p_that)->cFunctionInfo.getReturnTypeInfo__T( \
 (desc) )
#define tTaskMain_cFunctionInfo_getNParam( p_that ) \
	  (p_that)->cFunctionInfo.getNParam__T( \
 )
#define tTaskMain_cFunctionInfo_getParamInfo( p_that, ith, param ) \
	  (p_that)->cFunctionInfo.getParamInfo__T( \
 (ith), (param) )
#define tTaskMain_cParamInfo_getName( p_that, name, max_len ) \
	  (p_that)->cParamInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cParamInfo_getNameLength( p_that ) \
	  (p_that)->cParamInfo.getNameLength__T( \
 )
#define tTaskMain_cParamInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cParamInfo.getTypeInfo__T( \
 (desc) )
#define tTaskMain_cParamInfo_getDir( p_that, dir ) \
	  (p_that)->cParamInfo.getDir__T( \
 (dir) )
#define tTaskMain_cEntryInfo_getName( p_that, name, max_len ) \
	  (p_that)->cEntryInfo.getName__T( \
 (name), (max_len) )
#define tTaskMain_cEntryInfo_getNameLength( p_that ) \
	  (p_that)->cEntryInfo.getNameLength__T( \
 )
#define tTaskMain_cEntryInfo_getSignatureInfo( p_that, desc ) \
	  (p_that)->cEntryInfo.getSignatureInfo__T( \
 (desc) )
#define tTaskMain_cEntryInfo_getArraySize( p_that ) \
	  (p_that)->cEntryInfo.getArraySize__T( \
 )
#define tTaskMain_cEntryInfo_isInline( p_that ) \
	  (p_that)->cEntryInfo.isInline__T( \
 )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eBody */
void           tTaskMain_eBody_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cNSInfo */
Inline void
tTaskMain_cNSInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sNamespaceInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cNSInfo = des.vdes;
}

/* [dynamic,optional] cNSInfo */
Inline void
tTaskMain_cNSInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cNSInfo = NULL;
}

/* [dynamic] cRegionInfo */
Inline void
tTaskMain_cRegionInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sRegionInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cRegionInfo = des.vdes;
}

/* [dynamic,optional] cRegionInfo */
Inline void
tTaskMain_cRegionInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cRegionInfo = NULL;
}

/* [dynamic] cCellInfo */
Inline void
tTaskMain_cCellInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sCellInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCellInfo = des.vdes;
}

/* [dynamic,optional] cCellInfo */
Inline void
tTaskMain_cCellInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cCellInfo = NULL;
}

/* [dynamic] cSignatureInfo */
Inline void
tTaskMain_cSignatureInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sSignatureInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cSignatureInfo = des.vdes;
}

/* [dynamic,optional] cSignatureInfo */
Inline void
tTaskMain_cSignatureInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cSignatureInfo = NULL;
}

/* [dynamic] cCelltypeInfo */
Inline void
tTaskMain_cCelltypeInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sCelltypeInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCelltypeInfo = des.vdes;
}

/* [dynamic,optional] cCelltypeInfo */
Inline void
tTaskMain_cCelltypeInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cCelltypeInfo = NULL;
}

/* [dynamic] cVarDeclInfo */
Inline void
tTaskMain_cVarDeclInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sVarDeclInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cVarDeclInfo = des.vdes;
}

/* [dynamic,optional] cVarDeclInfo */
Inline void
tTaskMain_cVarDeclInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cVarDeclInfo = NULL;
}

/* [dynamic] cTypeInfo */
Inline void
tTaskMain_cTypeInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sTypeInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTypeInfo = des.vdes;
}

/* [dynamic,optional] cTypeInfo */
Inline void
tTaskMain_cTypeInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cTypeInfo = NULL;
}

/* [dynamic] cFunctionInfo */
Inline void
tTaskMain_cFunctionInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sFunctionInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cFunctionInfo = des.vdes;
}

/* [dynamic,optional] cFunctionInfo */
Inline void
tTaskMain_cFunctionInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cFunctionInfo = NULL;
}

/* [dynamic] cParamInfo */
Inline void
tTaskMain_cParamInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sParamInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cParamInfo = des.vdes;
}

/* [dynamic,optional] cParamInfo */
Inline void
tTaskMain_cParamInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cParamInfo = NULL;
}

/* [dynamic] cEntryInfo */
Inline void
tTaskMain_cEntryInfo_set_descriptor( tTaskMain_CB  *p_that, Descriptor( nTECSInfo_sEntryInfo ) des )
{
    tTaskMain_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cEntryInfo = des.vdes;
}

/* [dynamic,optional] cEntryInfo */
Inline void
tTaskMain_cEntryInfo_unjoin( tTaskMain_CB  *p_that  )
{
    tTaskMain_CB *p_cellcb = p_that;
    (p_cellcb)->cEntryInfo = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTaskMain_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTaskMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTaskMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTaskMain_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_NAME_LEN        tTaskMain_ATTR_NAME_LEN( p_cellcb )
#define ATTR_ARG_NAME_LEN    tTaskMain_ATTR_ARG_NAME_LEN( p_cellcb )
#define ATTR_ARG_DIM         tTaskMain_ATTR_ARG_DIM( p_cellcb )
#define ATTR_TARGET_NUM      tTaskMain_ATTR_TARGET_NUM( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_cell_path        tTaskMain_VAR_cell_path( p_cellcb )
#define VAR_celltype_path    tTaskMain_VAR_celltype_path( p_cellcb )
#define VAR_entry_path       tTaskMain_VAR_entry_path( p_cellcb )
#define VAR_entry_path_tmp   tTaskMain_VAR_entry_path_tmp( p_cellcb )
#define VAR_signature_path   tTaskMain_VAR_signature_path( p_cellcb )
#define VAR_function_path    tTaskMain_VAR_function_path( p_cellcb )
#define VAR_function_path_tmp tTaskMain_VAR_function_path_tmp( p_cellcb )
#define VAR_arg_num          tTaskMain_VAR_arg_num( p_cellcb )
#define VAR_exp_type         tTaskMain_VAR_exp_type( p_cellcb )
#define VAR_arg              tTaskMain_VAR_arg( p_cellcb )
#define VAR_arg_type         tTaskMain_VAR_arg_type( p_cellcb )
#define VAR_find_entry       tTaskMain_VAR_find_entry( p_cellcb )
#define VAR_find_func        tTaskMain_VAR_find_func( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cUnit_main( cell_path, entry_path, signature_path, function_path, arguments, exp_val ) \
          ((void)p_cellcb, tTaskMain_cUnit_main( p_cellcb, cell_path, entry_path, signature_path, function_path, arguments, exp_val ))
#define cJSMN_json_open( ) \
          ((void)p_cellcb, tTaskMain_cJSMN_json_open( p_cellcb ))
#define cJSMN_json_parse_path( c_path, e_path, f_path, target_num, btr ) \
          ((void)p_cellcb, tTaskMain_cJSMN_json_parse_path( p_cellcb, c_path, e_path, f_path, target_num, btr ))
#define cJSMN_json_parse_arg( arguments, exp_val, arg_num, target_num, btr ) \
          ((void)p_cellcb, tTaskMain_cJSMN_json_parse_arg( p_cellcb, arguments, exp_val, arg_num, target_num, btr ))
#define cTECSInfo_findNamespace( namespace_path, nsDesc ) \
          ((void)p_cellcb, tTaskMain_cTECSInfo_findNamespace( p_cellcb, namespace_path, nsDesc ))
#define cTECSInfo_findRegion( namespace_path, regionDesc ) \
          ((void)p_cellcb, tTaskMain_cTECSInfo_findRegion( p_cellcb, namespace_path, regionDesc ))
#define cTECSInfo_findSignature( namespace_path, signatureDesc ) \
          ((void)p_cellcb, tTaskMain_cTECSInfo_findSignature( p_cellcb, namespace_path, signatureDesc ))
#define cTECSInfo_findCelltype( namespace_path, celltypeDesc ) \
          ((void)p_cellcb, tTaskMain_cTECSInfo_findCelltype( p_cellcb, namespace_path, celltypeDesc ))
#define cTECSInfo_findCell( namespace_path, cellDesc ) \
          ((void)p_cellcb, tTaskMain_cTECSInfo_findCell( p_cellcb, namespace_path, cellDesc ))
#define cTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc ) \
          ((void)p_cellcb, tTaskMain_cTECSInfo_findRawEntryDescriptor( p_cellcb, namespace_path, rawEntryDescDesc, entryDesc ))
#define cTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc ) \
          ((void)p_cellcb, tTaskMain_cTECSInfo_findRawEntryDescriptor_unsafe( p_cellcb, namespace_path, subsc, rawDesc ))
#define cNSInfo_getName( name, max_len ) \
          tTaskMain_cNSInfo_getName( p_cellcb, name, max_len )
#define cNSInfo_getNameLength( ) \
          tTaskMain_cNSInfo_getNameLength( p_cellcb )
#define cNSInfo_getNNamespace( ) \
          tTaskMain_cNSInfo_getNNamespace( p_cellcb )
#define cNSInfo_getNamespaceInfo( ith, des ) \
          tTaskMain_cNSInfo_getNamespaceInfo( p_cellcb, ith, des )
#define cNSInfo_getNSignature( ) \
          tTaskMain_cNSInfo_getNSignature( p_cellcb )
#define cNSInfo_getSignatureInfo( ith, des ) \
          tTaskMain_cNSInfo_getSignatureInfo( p_cellcb, ith, des )
#define cNSInfo_getNCelltype( ) \
          tTaskMain_cNSInfo_getNCelltype( p_cellcb )
#define cNSInfo_getCelltypeInfo( ith, des ) \
          tTaskMain_cNSInfo_getCelltypeInfo( p_cellcb, ith, des )
#define cRegionInfo_getName( name, max_len ) \
          tTaskMain_cRegionInfo_getName( p_cellcb, name, max_len )
#define cRegionInfo_getNameLength( ) \
          tTaskMain_cRegionInfo_getNameLength( p_cellcb )
#define cRegionInfo_getNCell( ) \
          tTaskMain_cRegionInfo_getNCell( p_cellcb )
#define cRegionInfo_getCellInfo( ith, des ) \
          tTaskMain_cRegionInfo_getCellInfo( p_cellcb, ith, des )
#define cRegionInfo_getNRegion( ) \
          tTaskMain_cRegionInfo_getNRegion( p_cellcb )
#define cRegionInfo_getRegionInfo( ith, des ) \
          tTaskMain_cRegionInfo_getRegionInfo( p_cellcb, ith, des )
#define cCellInfo_getName( name, max_len ) \
          tTaskMain_cCellInfo_getName( p_cellcb, name, max_len )
#define cCellInfo_getNameLength( ) \
          tTaskMain_cCellInfo_getNameLength( p_cellcb )
#define cCellInfo_getNRawEntryDescriptorInfo( ) \
          tTaskMain_cCellInfo_getNRawEntryDescriptorInfo( p_cellcb )
#define cCellInfo_getRawEntryDescriptorInfo( index, desc ) \
          tTaskMain_cCellInfo_getRawEntryDescriptorInfo( p_cellcb, index, desc )
#define cCellInfo_getCelltypeInfo( desc ) \
          tTaskMain_cCellInfo_getCelltypeInfo( p_cellcb, desc )
#define cCellInfo_getCBP( cbp ) \
          tTaskMain_cCellInfo_getCBP( p_cellcb, cbp )
#define cCellInfo_getINIBP( inibp ) \
          tTaskMain_cCellInfo_getINIBP( p_cellcb, inibp )
#define cSignatureInfo_getName( name, max_len ) \
          tTaskMain_cSignatureInfo_getName( p_cellcb, name, max_len )
#define cSignatureInfo_getNameLength( ) \
          tTaskMain_cSignatureInfo_getNameLength( p_cellcb )
#define cSignatureInfo_getNFunction( ) \
          tTaskMain_cSignatureInfo_getNFunction( p_cellcb )
#define cSignatureInfo_getFunctionInfo( ith, desc ) \
          tTaskMain_cSignatureInfo_getFunctionInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getName( name, max_len ) \
          tTaskMain_cCelltypeInfo_getName( p_cellcb, name, max_len )
#define cCelltypeInfo_getNameLength( ) \
          tTaskMain_cCelltypeInfo_getNameLength( p_cellcb )
#define cCelltypeInfo_getNAttr( ) \
          tTaskMain_cCelltypeInfo_getNAttr( p_cellcb )
#define cCelltypeInfo_getAttrInfo( ith, desc ) \
          tTaskMain_cCelltypeInfo_getAttrInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNVar( ) \
          tTaskMain_cCelltypeInfo_getNVar( p_cellcb )
#define cCelltypeInfo_getVarInfo( ith, desc ) \
          tTaskMain_cCelltypeInfo_getVarInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNCall( ) \
          tTaskMain_cCelltypeInfo_getNCall( p_cellcb )
#define cCelltypeInfo_getCallInfo( ith, desc ) \
          tTaskMain_cCelltypeInfo_getCallInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNEntry( ) \
          tTaskMain_cCelltypeInfo_getNEntry( p_cellcb )
#define cCelltypeInfo_getEntryInfo( ith, desc ) \
          tTaskMain_cCelltypeInfo_getEntryInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_isSingleton( ) \
          tTaskMain_cCelltypeInfo_isSingleton( p_cellcb )
#define cCelltypeInfo_isIDX_is_ID( ) \
          tTaskMain_cCelltypeInfo_isIDX_is_ID( p_cellcb )
#define cCelltypeInfo_sizeOfCB( ) \
          tTaskMain_cCelltypeInfo_sizeOfCB( p_cellcb )
#define cCelltypeInfo_sizeOfINIB( ) \
          tTaskMain_cCelltypeInfo_sizeOfINIB( p_cellcb )
#define cVarDeclInfo_getName( name, max_len ) \
          tTaskMain_cVarDeclInfo_getName( p_cellcb, name, max_len )
#define cVarDeclInfo_getNameLength( ) \
          tTaskMain_cVarDeclInfo_getNameLength( p_cellcb )
#define cVarDeclInfo_getLocationInfo( offset, place ) \
          tTaskMain_cVarDeclInfo_getLocationInfo( p_cellcb, offset, place )
#define cVarDeclInfo_getTypeInfo( desc ) \
          tTaskMain_cVarDeclInfo_getTypeInfo( p_cellcb, desc )
#define cVarDeclInfo_getSizeIsExpr( expr_str, max_len ) \
          tTaskMain_cVarDeclInfo_getSizeIsExpr( p_cellcb, expr_str, max_len )
#define cVarDeclInfo_getSizeIs( size, p_cb ) \
          tTaskMain_cVarDeclInfo_getSizeIs( p_cellcb, size, p_cb )
#define cTypeInfo_getName( name, max_len ) \
          tTaskMain_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( ) \
          tTaskMain_cTypeInfo_getNameLength( p_cellcb )
#define cTypeInfo_getSize( ) \
          tTaskMain_cTypeInfo_getSize( p_cellcb )
#define cTypeInfo_getKind( ) \
          tTaskMain_cTypeInfo_getKind( p_cellcb )
#define cTypeInfo_getNType( ) \
          tTaskMain_cTypeInfo_getNType( p_cellcb )
#define cTypeInfo_getTypeInfo( desc ) \
          tTaskMain_cTypeInfo_getTypeInfo( p_cellcb, desc )
#define cTypeInfo_getNMember( ) \
          tTaskMain_cTypeInfo_getNMember( p_cellcb )
#define cTypeInfo_getMemberInfo( ith, desc ) \
          tTaskMain_cTypeInfo_getMemberInfo( p_cellcb, ith, desc )
#define cFunctionInfo_getName( name, max_len ) \
          tTaskMain_cFunctionInfo_getName( p_cellcb, name, max_len )
#define cFunctionInfo_getNameLength( ) \
          tTaskMain_cFunctionInfo_getNameLength( p_cellcb )
#define cFunctionInfo_getReturnTypeInfo( desc ) \
          tTaskMain_cFunctionInfo_getReturnTypeInfo( p_cellcb, desc )
#define cFunctionInfo_getNParam( ) \
          tTaskMain_cFunctionInfo_getNParam( p_cellcb )
#define cFunctionInfo_getParamInfo( ith, param ) \
          tTaskMain_cFunctionInfo_getParamInfo( p_cellcb, ith, param )
#define cParamInfo_getName( name, max_len ) \
          tTaskMain_cParamInfo_getName( p_cellcb, name, max_len )
#define cParamInfo_getNameLength( ) \
          tTaskMain_cParamInfo_getNameLength( p_cellcb )
#define cParamInfo_getTypeInfo( desc ) \
          tTaskMain_cParamInfo_getTypeInfo( p_cellcb, desc )
#define cParamInfo_getDir( dir ) \
          tTaskMain_cParamInfo_getDir( p_cellcb, dir )
#define cEntryInfo_getName( name, max_len ) \
          tTaskMain_cEntryInfo_getName( p_cellcb, name, max_len )
#define cEntryInfo_getNameLength( ) \
          tTaskMain_cEntryInfo_getNameLength( p_cellcb )
#define cEntryInfo_getSignatureInfo( desc ) \
          tTaskMain_cEntryInfo_getSignatureInfo( p_cellcb, desc )
#define cEntryInfo_getArraySize( ) \
          tTaskMain_cEntryInfo_getArraySize( p_cellcb )
#define cEntryInfo_isInline( ) \
          tTaskMain_cEntryInfo_isInline( p_cellcb )



/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cNSInfo_set_descriptor( desc )\
          tTaskMain_cNSInfo_set_descriptor( p_cellcb, desc )
#define cNSInfo_unjoin(  )\
          tTaskMain_cNSInfo_unjoin( p_cellcb )
#define cRegionInfo_set_descriptor( desc )\
          tTaskMain_cRegionInfo_set_descriptor( p_cellcb, desc )
#define cRegionInfo_unjoin(  )\
          tTaskMain_cRegionInfo_unjoin( p_cellcb )
#define cCellInfo_set_descriptor( desc )\
          tTaskMain_cCellInfo_set_descriptor( p_cellcb, desc )
#define cCellInfo_unjoin(  )\
          tTaskMain_cCellInfo_unjoin( p_cellcb )
#define cSignatureInfo_set_descriptor( desc )\
          tTaskMain_cSignatureInfo_set_descriptor( p_cellcb, desc )
#define cSignatureInfo_unjoin(  )\
          tTaskMain_cSignatureInfo_unjoin( p_cellcb )
#define cCelltypeInfo_set_descriptor( desc )\
          tTaskMain_cCelltypeInfo_set_descriptor( p_cellcb, desc )
#define cCelltypeInfo_unjoin(  )\
          tTaskMain_cCelltypeInfo_unjoin( p_cellcb )
#define cVarDeclInfo_set_descriptor( desc )\
          tTaskMain_cVarDeclInfo_set_descriptor( p_cellcb, desc )
#define cVarDeclInfo_unjoin(  )\
          tTaskMain_cVarDeclInfo_unjoin( p_cellcb )
#define cTypeInfo_set_descriptor( desc )\
          tTaskMain_cTypeInfo_set_descriptor( p_cellcb, desc )
#define cTypeInfo_unjoin(  )\
          tTaskMain_cTypeInfo_unjoin( p_cellcb )
#define cFunctionInfo_set_descriptor( desc )\
          tTaskMain_cFunctionInfo_set_descriptor( p_cellcb, desc )
#define cFunctionInfo_unjoin(  )\
          tTaskMain_cFunctionInfo_unjoin( p_cellcb )
#define cParamInfo_set_descriptor( desc )\
          tTaskMain_cParamInfo_set_descriptor( p_cellcb, desc )
#define cParamInfo_unjoin(  )\
          tTaskMain_cParamInfo_unjoin( p_cellcb )
#define cEntryInfo_set_descriptor( desc )\
          tTaskMain_cEntryInfo_set_descriptor( p_cellcb, desc )
#define cEntryInfo_unjoin(  )\
          tTaskMain_cEntryInfo_unjoin( p_cellcb )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cNSInfo_joined()\
		tTaskMain_is_cNSInfo_joined(p_cellcb)
#define is_cRegionInfo_joined()\
		tTaskMain_is_cRegionInfo_joined(p_cellcb)
#define is_cCellInfo_joined()\
		tTaskMain_is_cCellInfo_joined(p_cellcb)
#define is_cSignatureInfo_joined()\
		tTaskMain_is_cSignatureInfo_joined(p_cellcb)
#define is_cCelltypeInfo_joined()\
		tTaskMain_is_cCelltypeInfo_joined(p_cellcb)
#define is_cVarDeclInfo_joined()\
		tTaskMain_is_cVarDeclInfo_joined(p_cellcb)
#define is_cTypeInfo_joined()\
		tTaskMain_is_cTypeInfo_joined(p_cellcb)
#define is_cFunctionInfo_joined()\
		tTaskMain_is_cFunctionInfo_joined(p_cellcb)
#define is_cParamInfo_joined()\
		tTaskMain_is_cParamInfo_joined(p_cellcb)
#define is_cEntryInfo_joined()\
		tTaskMain_is_cEntryInfo_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tTaskMain_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTaskMain_N_CELL; (i)++ ){ \
       (p_cb) = &tTaskMain_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tTaskMain_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTaskMain_TECSGENH */
