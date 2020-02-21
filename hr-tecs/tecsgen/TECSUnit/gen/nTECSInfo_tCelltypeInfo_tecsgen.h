/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tCelltypeInfo_TECSGEN_H
#define nTECSInfo_tCelltypeInfo_TECSGEN_H

/*
 * celltype          :  tCelltypeInfo
 * global name       :  nTECSInfo_tCelltypeInfo
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "nTECSInfo_sEntryInfo_tecsgen.h"
#include "nTECSInfo_sCallInfo_tecsgen.h"
#include "nTECSInfo_sVarDeclInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tCelltypeInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sEntryInfo_VDES *const*cEntryInfo;
    int_t n_cEntryInfo;
    struct tag_nTECSInfo_sCallInfo_VDES *const*cCallInfo;
    int_t n_cCallInfo;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *const*cAttrInfo;
    int_t n_cAttrInfo;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *const*cVarInfo;
    int_t n_cVarInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    bool_t         b_singleton;
    bool_t         b_IDX_is_ID_act;
    uint32_t       sizeOfCB;
    uint32_t       sizeOfINIB;
    uint32_t       n_cellInLinkUnit;
    uint32_t       n_cellInSystem;
}  nTECSInfo_tCelltypeInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tCelltypeInfo_CB_tab           nTECSInfo_tCelltypeInfo_INIB_tab
#define nTECSInfo_tCelltypeInfo_CB               nTECSInfo_tCelltypeInfo_INIB
#define tag_nTECSInfo_tCelltypeInfo_CB           tag_nTECSInfo_tCelltypeInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tCelltypeInfo_INIB  nTECSInfo_tCelltypeInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tCelltypeInfo_INIB *nTECSInfo_tCelltypeInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sCelltypeInfo */
ER           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName(nTECSInfo_tCelltypeInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength(nTECSInfo_tCelltypeInfo_IDX idx);
uint32_t     nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr(nTECSInfo_tCelltypeInfo_IDX idx);
ER           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo(nTECSInfo_tCelltypeInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
uint32_t     nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar(nTECSInfo_tCelltypeInfo_IDX idx);
ER           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo(nTECSInfo_tCelltypeInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
uint32_t     nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall(nTECSInfo_tCelltypeInfo_IDX idx);
ER           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo(nTECSInfo_tCelltypeInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc);
uint32_t     nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry(nTECSInfo_tCelltypeInfo_IDX idx);
ER           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo(nTECSInfo_tCelltypeInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc);
bool_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton(nTECSInfo_tCelltypeInfo_IDX idx);
bool_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID(nTECSInfo_tCelltypeInfo_IDX idx);
uint32_t     nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB(nTECSInfo_tCelltypeInfo_IDX idx);
uint32_t     nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB(nTECSInfo_tCelltypeInfo_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tCelltypeInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tCelltypeInfo_N_CELL        (8)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tCelltypeInfo_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cEntryInfo(p_that)  ((p_that)->n_cEntryInfo)
#define NCP_cEntryInfo           (N_CP_cEntryInfo(p_cellcb))
#define N_CP_cCallInfo(p_that)  ((p_that)->n_cCallInfo)
#define NCP_cCallInfo           (N_CP_cCallInfo(p_cellcb))
#define N_CP_cAttrInfo(p_that)  ((p_that)->n_cAttrInfo)
#define NCP_cAttrInfo           (N_CP_cAttrInfo(p_cellcb))
#define N_CP_cVarInfo(p_that)  ((p_that)->n_cVarInfo)
#define NCP_cVarInfo           (N_CP_cVarInfo(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define nTECSInfo_tCelltypeInfo_is_cEntryInfo_joined(p_that,subscript) \
	  (((p_that)->cEntryInfo!=0)\
	  &&((p_that)->cEntryInfo[subscript]!=0))
#define nTECSInfo_tCelltypeInfo_is_cCallInfo_joined(p_that,subscript) \
	  (((p_that)->cCallInfo!=0)\
	  &&((p_that)->cCallInfo[subscript]!=0))
#define nTECSInfo_tCelltypeInfo_is_cAttrInfo_joined(p_that,subscript) \
	  (((p_that)->cAttrInfo!=0)\
	  &&((p_that)->cAttrInfo[subscript]!=0))
#define nTECSInfo_tCelltypeInfo_is_cVarInfo_joined(p_that,subscript) \
	  (((p_that)->cVarInfo!=0)\
	  &&((p_that)->cVarInfo[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tCelltypeInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tCelltypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tCelltypeInfo_ATTR_b_singleton( p_that )	((p_that)->b_singleton)
#define nTECSInfo_tCelltypeInfo_ATTR_b_IDX_is_ID_act( p_that )	((p_that)->b_IDX_is_ID_act)
#define nTECSInfo_tCelltypeInfo_ATTR_sizeOfCB( p_that )	((p_that)->sizeOfCB)
#define nTECSInfo_tCelltypeInfo_ATTR_sizeOfINIB( p_that )	((p_that)->sizeOfINIB)
#define nTECSInfo_tCelltypeInfo_ATTR_n_cellInLinkUnit( p_that )	((p_that)->n_cellInLinkUnit)
#define nTECSInfo_tCelltypeInfo_ATTR_n_cellInSystem( p_that )	((p_that)->n_cellInSystem)

#define nTECSInfo_tCelltypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tCelltypeInfo_GET_b_singleton(p_that)	((p_that)->b_singleton)
#define nTECSInfo_tCelltypeInfo_GET_b_IDX_is_ID_act(p_that)	((p_that)->b_IDX_is_ID_act)
#define nTECSInfo_tCelltypeInfo_GET_sizeOfCB(p_that)	((p_that)->sizeOfCB)
#define nTECSInfo_tCelltypeInfo_GET_sizeOfINIB(p_that)	((p_that)->sizeOfINIB)
#define nTECSInfo_tCelltypeInfo_GET_n_cellInLinkUnit(p_that)	((p_that)->n_cellInLinkUnit)
#define nTECSInfo_tCelltypeInfo_GET_n_cellInSystem(p_that)	((p_that)->n_cellInSystem)



#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cEntryInfo[subscript]->VMT->getName__T( \
	   (p_that)->cEntryInfo[subscript], (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cEntryInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cEntryInfo[subscript] )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getSignatureInfo( p_that, subscript, desc ) \
	  (p_that)->cEntryInfo[subscript]->VMT->getSignatureInfo__T( \
	   (p_that)->cEntryInfo[subscript], (desc) )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getArraySize( p_that, subscript ) \
	  (p_that)->cEntryInfo[subscript]->VMT->getArraySize__T( \
	   (p_that)->cEntryInfo[subscript] )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_isInline( p_that, subscript ) \
	  (p_that)->cEntryInfo[subscript]->VMT->isInline__T( \
	   (p_that)->cEntryInfo[subscript] )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCallInfo[subscript]->VMT->getName__T( \
	   (p_that)->cCallInfo[subscript], (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cCallInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cCallInfo[subscript] )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getSignatureInfo( p_that, subscript, desc ) \
	  (p_that)->cCallInfo[subscript]->VMT->getSignatureInfo__T( \
	   (p_that)->cCallInfo[subscript], (desc) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getArraySize( p_that, subscript ) \
	  (p_that)->cCallInfo[subscript]->VMT->getArraySize__T( \
	   (p_that)->cCallInfo[subscript] )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getSpecifierInfo( p_that, subscript, b_optional, b_dynamic, b_ref_desc, b_omit ) \
	  (p_that)->cCallInfo[subscript]->VMT->getSpecifierInfo__T( \
	   (p_that)->cCallInfo[subscript], (b_optional), (b_dynamic), (b_ref_desc), (b_omit) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getInternalInfo( p_that, subscript, b_allocator_port, b_require_port ) \
	  (p_that)->cCallInfo[subscript]->VMT->getInternalInfo__T( \
	   (p_that)->cCallInfo[subscript], (b_allocator_port), (b_require_port) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cCallInfo[subscript]->VMT->getLocationInfo__T( \
	   (p_that)->cCallInfo[subscript], (offset), (place) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getOptimizeInfo( p_that, subscript, b_VMT_useless, b_skelton_useless, b_cell_unique ) \
	  (p_that)->cCallInfo[subscript]->VMT->getOptimizeInfo__T( \
	   (p_that)->cCallInfo[subscript], (b_VMT_useless), (b_skelton_useless), (b_cell_unique) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getName__T( \
	   (p_that)->cAttrInfo[subscript], (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cAttrInfo[subscript] )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getLocationInfo__T( \
	   (p_that)->cAttrInfo[subscript], (offset), (place) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getTypeInfo__T( \
	   (p_that)->cAttrInfo[subscript], (desc) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIsExpr( p_that, subscript, expr_str, max_len ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getSizeIsExpr__T( \
	   (p_that)->cAttrInfo[subscript], (expr_str), (max_len) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIs( p_that, subscript, size, p_cb ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getSizeIs__T( \
	   (p_that)->cAttrInfo[subscript], (size), (p_cb) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cVarInfo[subscript]->VMT->getName__T( \
	   (p_that)->cVarInfo[subscript], (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cVarInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cVarInfo[subscript] )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cVarInfo[subscript]->VMT->getLocationInfo__T( \
	   (p_that)->cVarInfo[subscript], (offset), (place) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cVarInfo[subscript]->VMT->getTypeInfo__T( \
	   (p_that)->cVarInfo[subscript], (desc) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIsExpr( p_that, subscript, expr_str, max_len ) \
	  (p_that)->cVarInfo[subscript]->VMT->getSizeIsExpr__T( \
	   (p_that)->cVarInfo[subscript], (expr_str), (max_len) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIs( p_that, subscript, size, p_cb ) \
	  (p_that)->cVarInfo[subscript]->VMT->getSizeIs__T( \
	   (p_that)->cVarInfo[subscript], (size), (p_cb) )

#else  /* TECSFLOW */
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cEntryInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cEntryInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getSignatureInfo( p_that, subscript, desc ) \
	  (p_that)->cEntryInfo[subscript].getSignatureInfo__T( \
 (desc) )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getArraySize( p_that, subscript ) \
	  (p_that)->cEntryInfo[subscript].getArraySize__T( \
 )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_isInline( p_that, subscript ) \
	  (p_that)->cEntryInfo[subscript].isInline__T( \
 )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCallInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cCallInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getSignatureInfo( p_that, subscript, desc ) \
	  (p_that)->cCallInfo[subscript].getSignatureInfo__T( \
 (desc) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getArraySize( p_that, subscript ) \
	  (p_that)->cCallInfo[subscript].getArraySize__T( \
 )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getSpecifierInfo( p_that, subscript, b_optional, b_dynamic, b_ref_desc, b_omit ) \
	  (p_that)->cCallInfo[subscript].getSpecifierInfo__T( \
 (b_optional), (b_dynamic), (b_ref_desc), (b_omit) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getInternalInfo( p_that, subscript, b_allocator_port, b_require_port ) \
	  (p_that)->cCallInfo[subscript].getInternalInfo__T( \
 (b_allocator_port), (b_require_port) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cCallInfo[subscript].getLocationInfo__T( \
 (offset), (place) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getOptimizeInfo( p_that, subscript, b_VMT_useless, b_skelton_useless, b_cell_unique ) \
	  (p_that)->cCallInfo[subscript].getOptimizeInfo__T( \
 (b_VMT_useless), (b_skelton_useless), (b_cell_unique) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cAttrInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cAttrInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cAttrInfo[subscript].getLocationInfo__T( \
 (offset), (place) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cAttrInfo[subscript].getTypeInfo__T( \
 (desc) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIsExpr( p_that, subscript, expr_str, max_len ) \
	  (p_that)->cAttrInfo[subscript].getSizeIsExpr__T( \
 (expr_str), (max_len) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIs( p_that, subscript, size, p_cb ) \
	  (p_that)->cAttrInfo[subscript].getSizeIs__T( \
 (size), (p_cb) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cVarInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cVarInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cVarInfo[subscript].getLocationInfo__T( \
 (offset), (place) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cVarInfo[subscript].getTypeInfo__T( \
 (desc) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIsExpr( p_that, subscript, expr_str, max_len ) \
	  (p_that)->cVarInfo[subscript].getSizeIsExpr__T( \
 (expr_str), (max_len) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIs( p_that, subscript, size, p_cb ) \
	  (p_that)->cVarInfo[subscript].getSizeIs__T( \
 (size), (p_cb) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eCelltypeInfo */
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc);
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc);
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cEntryInfo */
Inline Descriptor( nTECSInfo_sEntryInfo )
nTECSInfo_tCelltypeInfo_cEntryInfo_refer_to_descriptor( nTECSInfo_tCelltypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sEntryInfo )  des;
    nTECSInfo_tCelltypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cEntryInfo );
    des.vdes = (struct tag_nTECSInfo_sEntryInfo_VDES *)p_cellcb->cEntryInfo[ i ];
    return des;
}

/* [ref_desc] cCallInfo */
Inline Descriptor( nTECSInfo_sCallInfo )
nTECSInfo_tCelltypeInfo_cCallInfo_refer_to_descriptor( nTECSInfo_tCelltypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sCallInfo )  des;
    nTECSInfo_tCelltypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cCallInfo );
    des.vdes = (struct tag_nTECSInfo_sCallInfo_VDES *)p_cellcb->cCallInfo[ i ];
    return des;
}

/* [ref_desc] cAttrInfo */
Inline Descriptor( nTECSInfo_sVarDeclInfo )
nTECSInfo_tCelltypeInfo_cAttrInfo_refer_to_descriptor( nTECSInfo_tCelltypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sVarDeclInfo )  des;
    nTECSInfo_tCelltypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cAttrInfo );
    des.vdes = (struct tag_nTECSInfo_sVarDeclInfo_VDES *)p_cellcb->cAttrInfo[ i ];
    return des;
}

/* [ref_desc] cVarInfo */
Inline Descriptor( nTECSInfo_sVarDeclInfo )
nTECSInfo_tCelltypeInfo_cVarInfo_refer_to_descriptor( nTECSInfo_tCelltypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sVarDeclInfo )  des;
    nTECSInfo_tCelltypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cVarInfo );
    des.vdes = (struct tag_nTECSInfo_sVarDeclInfo_VDES *)p_cellcb->cVarInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tCelltypeInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tCelltypeInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tCelltypeInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tCelltypeInfo_IDX

#define tCelltypeInfo_IDX  nTECSInfo_tCelltypeInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tCelltypeInfo_ATTR_name( p_cellcb )
#define ATTR_b_singleton     nTECSInfo_tCelltypeInfo_ATTR_b_singleton( p_cellcb )
#define ATTR_b_IDX_is_ID_act nTECSInfo_tCelltypeInfo_ATTR_b_IDX_is_ID_act( p_cellcb )
#define ATTR_sizeOfCB        nTECSInfo_tCelltypeInfo_ATTR_sizeOfCB( p_cellcb )
#define ATTR_sizeOfINIB      nTECSInfo_tCelltypeInfo_ATTR_sizeOfINIB( p_cellcb )
#define ATTR_n_cellInLinkUnit nTECSInfo_tCelltypeInfo_ATTR_n_cellInLinkUnit( p_cellcb )
#define ATTR_n_cellInSystem  nTECSInfo_tCelltypeInfo_ATTR_n_cellInSystem( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cEntryInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_getName( p_cellcb, subscript, name, max_len )
#define cEntryInfo_getNameLength( subscript ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_getNameLength( p_cellcb, subscript )
#define cEntryInfo_getSignatureInfo( subscript, desc ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_getSignatureInfo( p_cellcb, subscript, desc )
#define cEntryInfo_getArraySize( subscript ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_getArraySize( p_cellcb, subscript )
#define cEntryInfo_isInline( subscript ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_isInline( p_cellcb, subscript )
#define cCallInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getName( p_cellcb, subscript, name, max_len )
#define cCallInfo_getNameLength( subscript ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getNameLength( p_cellcb, subscript )
#define cCallInfo_getSignatureInfo( subscript, desc ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getSignatureInfo( p_cellcb, subscript, desc )
#define cCallInfo_getArraySize( subscript ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getArraySize( p_cellcb, subscript )
#define cCallInfo_getSpecifierInfo( subscript, b_optional, b_dynamic, b_ref_desc, b_omit ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getSpecifierInfo( p_cellcb, subscript, b_optional, b_dynamic, b_ref_desc, b_omit )
#define cCallInfo_getInternalInfo( subscript, b_allocator_port, b_require_port ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getInternalInfo( p_cellcb, subscript, b_allocator_port, b_require_port )
#define cCallInfo_getLocationInfo( subscript, offset, place ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getLocationInfo( p_cellcb, subscript, offset, place )
#define cCallInfo_getOptimizeInfo( subscript, b_VMT_useless, b_skelton_useless, b_cell_unique ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getOptimizeInfo( p_cellcb, subscript, b_VMT_useless, b_skelton_useless, b_cell_unique )
#define cAttrInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getName( p_cellcb, subscript, name, max_len )
#define cAttrInfo_getNameLength( subscript ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getNameLength( p_cellcb, subscript )
#define cAttrInfo_getLocationInfo( subscript, offset, place ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getLocationInfo( p_cellcb, subscript, offset, place )
#define cAttrInfo_getTypeInfo( subscript, desc ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getTypeInfo( p_cellcb, subscript, desc )
#define cAttrInfo_getSizeIsExpr( subscript, expr_str, max_len ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIsExpr( p_cellcb, subscript, expr_str, max_len )
#define cAttrInfo_getSizeIs( subscript, size, p_cb ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIs( p_cellcb, subscript, size, p_cb )
#define cVarInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getName( p_cellcb, subscript, name, max_len )
#define cVarInfo_getNameLength( subscript ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getNameLength( p_cellcb, subscript )
#define cVarInfo_getLocationInfo( subscript, offset, place ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getLocationInfo( p_cellcb, subscript, offset, place )
#define cVarInfo_getTypeInfo( subscript, desc ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getTypeInfo( p_cellcb, subscript, desc )
#define cVarInfo_getSizeIsExpr( subscript, expr_str, max_len ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIsExpr( p_cellcb, subscript, expr_str, max_len )
#define cVarInfo_getSizeIs( subscript, size, p_cb ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIs( p_cellcb, subscript, size, p_cb )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cEntryInfo_refer_to_descriptor( i )\
          nTECSInfo_tCelltypeInfo_cEntryInfo_refer_to_descriptor( p_cellcb, i )
#define cEntryInfo_ref_desc( i )\
          cEntryInfo_refer_to_descriptor( i )
#define cCallInfo_refer_to_descriptor( i )\
          nTECSInfo_tCelltypeInfo_cCallInfo_refer_to_descriptor( p_cellcb, i )
#define cCallInfo_ref_desc( i )\
          cCallInfo_refer_to_descriptor( i )
#define cAttrInfo_refer_to_descriptor( i )\
          nTECSInfo_tCelltypeInfo_cAttrInfo_refer_to_descriptor( p_cellcb, i )
#define cAttrInfo_ref_desc( i )\
          cAttrInfo_refer_to_descriptor( i )
#define cVarInfo_refer_to_descriptor( i )\
          nTECSInfo_tCelltypeInfo_cVarInfo_refer_to_descriptor( p_cellcb, i )
#define cVarInfo_ref_desc( i )\
          cVarInfo_refer_to_descriptor( i )


/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cEntryInfo_joined(subscript)\
		nTECSInfo_tCelltypeInfo_is_cEntryInfo_joined(p_cellcb,subscript)
#define is_cCallInfo_joined(subscript)\
		nTECSInfo_tCelltypeInfo_is_cCallInfo_joined(p_cellcb,subscript)
#define is_cAttrInfo_joined(subscript)\
		nTECSInfo_tCelltypeInfo_is_cAttrInfo_joined(p_cellcb,subscript)
#define is_cVarInfo_joined(subscript)\
		nTECSInfo_tCelltypeInfo_is_cVarInfo_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eCelltypeInfo_getName nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName
#define eCelltypeInfo_getNameLength nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength
#define eCelltypeInfo_getNAttr nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr
#define eCelltypeInfo_getAttrInfo nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo
#define eCelltypeInfo_getNVar nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar
#define eCelltypeInfo_getVarInfo nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo
#define eCelltypeInfo_getNCall nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall
#define eCelltypeInfo_getCallInfo nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo
#define eCelltypeInfo_getNEntry nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry
#define eCelltypeInfo_getEntryInfo nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo
#define eCelltypeInfo_isSingleton nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton
#define eCelltypeInfo_isIDX_is_ID nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID
#define eCelltypeInfo_sizeOfCB nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB
#define eCelltypeInfo_sizeOfINIB nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tCelltypeInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tCelltypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tCelltypeInfo_TECSGENH */
