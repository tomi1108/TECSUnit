/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tTECSInfoSub_TECSGEN_H
#define nTECSInfo_tTECSInfoSub_TECSGEN_H

/*
 * celltype          :  tTECSInfoSub
 * global name       :  nTECSInfo_tTECSInfoSub
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  yes
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "nTECSInfo_sTECSInfo_tecsgen.h"
#include "nTECSInfo_sNamespaceInfo_tecsgen.h"
#include "nTECSInfo_sRegionInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"
#include "nTECSInfo_sCellInfo_tecsgen.h"
#include "nTECSInfo_sEntryInfo_tecsgen.h"
#include "nTECSInfo_sRawEntryDescriptorInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tTECSInfoSub_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES const*cNamespaceInfo;
    struct tag_nTECSInfo_sRegionInfo_VDES const*cRegionInfo;
    struct tag_nTECSInfo_sNamespaceInfo_VDES *cNamespaceInfoTemp_init_;
    struct tag_nTECSInfo_sRegionInfo_VDES *cRegionInfoTemp_init_;
    struct tag_nTECSInfo_sSignatureInfo_VDES *cSignatureInfoTemp_init_;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *cCelltypeInfoTemp_init_;
    struct tag_nTECSInfo_sCellInfo_VDES *cCellInfoTemp_init_;
    struct tag_nTECSInfo_sEntryInfo_VDES *cEntryInfoTemp_init_;
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *cRawEntryDescriptorInfoTemp_init_;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        name_len;
    int32_t        path_len;
    char_t*        name1;
    char_t*        name2;
    char_t*        path;
}  nTECSInfo_tTECSInfoSub_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_nTECSInfo_tTECSInfoSub_CB {
    nTECSInfo_tTECSInfoSub_INIB  *_inib;
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES *cNamespaceInfoTemp;
    struct tag_nTECSInfo_sRegionInfo_VDES *cRegionInfoTemp;
    struct tag_nTECSInfo_sSignatureInfo_VDES *cSignatureInfoTemp;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *cCelltypeInfoTemp;
    struct tag_nTECSInfo_sCellInfo_VDES *cCellInfoTemp;
    struct tag_nTECSInfo_sEntryInfo_VDES *cEntryInfoTemp;
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *cRawEntryDescriptorInfoTemp;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
}  nTECSInfo_tTECSInfoSub_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  nTECSInfo_tTECSInfoSub_CB  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB;
extern  nTECSInfo_tTECSInfoSub_INIB  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_nTECSInfo_tTECSInfoSub_CB *nTECSInfo_tTECSInfoSub_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sTECSInfo */
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor( const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_unsafe( const char_t* namespace_path, uint32_t subsc, void** rawDesc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define nTECSInfo_tTECSInfoSub_is_cNamespaceInfoTemp_joined() \
	  (nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp!=0)
#define nTECSInfo_tTECSInfoSub_is_cRegionInfoTemp_joined() \
	  (nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp!=0)
#define nTECSInfo_tTECSInfoSub_is_cSignatureInfoTemp_joined() \
	  (nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp!=0)
#define nTECSInfo_tTECSInfoSub_is_cCelltypeInfoTemp_joined() \
	  (nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp!=0)
#define nTECSInfo_tTECSInfoSub_is_cCellInfoTemp_joined() \
	  (nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp!=0)
#define nTECSInfo_tTECSInfoSub_is_cEntryInfoTemp_joined() \
	  (nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp!=0)
#define nTECSInfo_tTECSInfoSub_is_cRawEntryDescriptorInfoTemp_joined() \
	  (nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRawEntryDescriptorInfoTemp!=0)

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tTECSInfoSub_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tTECSInfoSub_ATTR_name_len	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.name_len)
#define nTECSInfo_tTECSInfoSub_ATTR_path_len	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.path_len)

#define nTECSInfo_tTECSInfoSub_GET_name_len()	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.name_len)
#define nTECSInfo_tTECSInfoSub_GET_path_len()	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.path_len)


/* var アクセスマクロ #_VAM_# */
#define nTECSInfo_tTECSInfoSub_VAR_name1	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.name1)
#define nTECSInfo_tTECSInfoSub_VAR_name2	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.name2)
#define nTECSInfo_tTECSInfoSub_VAR_path	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.path)

#define nTECSInfo_tTECSInfoSub_GET_name1()	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.name1)
#define nTECSInfo_tTECSInfoSub_SET_name1(val)	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.name1=(val))
#define nTECSInfo_tTECSInfoSub_GET_name2()	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.name2)
#define nTECSInfo_tTECSInfoSub_SET_name2(val)	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.name2=(val))
#define nTECSInfo_tTECSInfoSub_GET_path()	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.path)
#define nTECSInfo_tTECSInfoSub_SET_path(val)	(nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.path=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNameLength( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNNamespace( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNNamespace__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNamespaceInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNamespaceInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNSignature( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNSignature__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getSignatureInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getSignatureInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNCelltype( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNCelltype__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getCelltypeInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getCelltypeInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNameLength( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNCell( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getNCell__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getCellInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getCellInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNRegion( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getNRegion__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getRegionInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getRegionInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNameLength( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNNamespace( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp->VMT->getNNamespace__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNamespaceInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp->VMT->getNamespaceInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNSignature( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp->VMT->getNSignature__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getSignatureInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp->VMT->getSignatureInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNCelltype( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp->VMT->getNCelltype__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getCelltypeInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp->VMT->getCelltypeInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNameLength( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNCell( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp->VMT->getNCell__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getCellInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp->VMT->getCellInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNRegion( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp->VMT->getNRegion__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getRegionInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp->VMT->getRegionInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getNameLength( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp )
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getNFunction( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp->VMT->getNFunction__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp )
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getFunctionInfo( ith, desc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp->VMT->getFunctionInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp, (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNameLength( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNAttr( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getNAttr__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getAttrInfo( ith, desc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getAttrInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp, (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNVar( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getNVar__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getVarInfo( ith, desc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getVarInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp, (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNCall( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getNCall__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getCallInfo( ith, desc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getCallInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp, (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNEntry( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getNEntry__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getEntryInfo( ith, desc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->getEntryInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp, (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_isSingleton( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->isSingleton__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_isIDX_is_ID( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->isIDX_is_ID__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_sizeOfCB( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->sizeOfCB__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_sizeOfINIB( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp->VMT->sizeOfINIB__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getNameLength( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getNRawEntryDescriptorInfo( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp->VMT->getNRawEntryDescriptorInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getRawEntryDescriptorInfo( index, desc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp->VMT->getRawEntryDescriptorInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp, (index), (desc) )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getCelltypeInfo( desc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp->VMT->getCelltypeInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp, (desc) )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getCBP( cbp ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp->VMT->getCBP__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp, (cbp) )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getINIBP( inibp ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp->VMT->getINIBP__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp, (inibp) )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getNameLength( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getSignatureInfo( desc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp->VMT->getSignatureInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp, (desc) )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getArraySize( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp->VMT->getArraySize__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_isInline( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp->VMT->isInline__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp )
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_getNRawEntryDescriptorInfo( ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRawEntryDescriptorInfoTemp->VMT->getNRawEntryDescriptorInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRawEntryDescriptorInfoTemp )
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_getRawDescriptor( subsc, rawDesc ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRawEntryDescriptorInfoTemp->VMT->getRawDescriptor__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRawEntryDescriptorInfoTemp, (subsc), (rawDesc) )

#else  /* TECSFLOW */
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getName( name, max_len ) \
	  (p_that)->cNamespaceInfo.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNameLength( ) \
	  (p_that)->cNamespaceInfo.getNameLength__T( \
 )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNNamespace( ) \
	  (p_that)->cNamespaceInfo.getNNamespace__T( \
 )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNamespaceInfo( ith, des ) \
	  (p_that)->cNamespaceInfo.getNamespaceInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNSignature( ) \
	  (p_that)->cNamespaceInfo.getNSignature__T( \
 )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getSignatureInfo( ith, des ) \
	  (p_that)->cNamespaceInfo.getSignatureInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNCelltype( ) \
	  (p_that)->cNamespaceInfo.getNCelltype__T( \
 )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getCelltypeInfo( ith, des ) \
	  (p_that)->cNamespaceInfo.getCelltypeInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getName( name, max_len ) \
	  (p_that)->cRegionInfo.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNameLength( ) \
	  (p_that)->cRegionInfo.getNameLength__T( \
 )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNCell( ) \
	  (p_that)->cRegionInfo.getNCell__T( \
 )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getCellInfo( ith, des ) \
	  (p_that)->cRegionInfo.getCellInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNRegion( ) \
	  (p_that)->cRegionInfo.getNRegion__T( \
 )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getRegionInfo( ith, des ) \
	  (p_that)->cRegionInfo.getRegionInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getName( name, max_len ) \
	  (p_that)->cNamespaceInfoTemp.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNameLength( ) \
	  (p_that)->cNamespaceInfoTemp.getNameLength__T( \
 )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNNamespace( ) \
	  (p_that)->cNamespaceInfoTemp.getNNamespace__T( \
 )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNamespaceInfo( ith, des ) \
	  (p_that)->cNamespaceInfoTemp.getNamespaceInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNSignature( ) \
	  (p_that)->cNamespaceInfoTemp.getNSignature__T( \
 )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getSignatureInfo( ith, des ) \
	  (p_that)->cNamespaceInfoTemp.getSignatureInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNCelltype( ) \
	  (p_that)->cNamespaceInfoTemp.getNCelltype__T( \
 )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getCelltypeInfo( ith, des ) \
	  (p_that)->cNamespaceInfoTemp.getCelltypeInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getName( name, max_len ) \
	  (p_that)->cRegionInfoTemp.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNameLength( ) \
	  (p_that)->cRegionInfoTemp.getNameLength__T( \
 )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNCell( ) \
	  (p_that)->cRegionInfoTemp.getNCell__T( \
 )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getCellInfo( ith, des ) \
	  (p_that)->cRegionInfoTemp.getCellInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNRegion( ) \
	  (p_that)->cRegionInfoTemp.getNRegion__T( \
 )
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getRegionInfo( ith, des ) \
	  (p_that)->cRegionInfoTemp.getRegionInfo__T( \
 (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getName( name, max_len ) \
	  (p_that)->cSignatureInfoTemp.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getNameLength( ) \
	  (p_that)->cSignatureInfoTemp.getNameLength__T( \
 )
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getNFunction( ) \
	  (p_that)->cSignatureInfoTemp.getNFunction__T( \
 )
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getFunctionInfo( ith, desc ) \
	  (p_that)->cSignatureInfoTemp.getFunctionInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getName( name, max_len ) \
	  (p_that)->cCelltypeInfoTemp.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNameLength( ) \
	  (p_that)->cCelltypeInfoTemp.getNameLength__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNAttr( ) \
	  (p_that)->cCelltypeInfoTemp.getNAttr__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getAttrInfo( ith, desc ) \
	  (p_that)->cCelltypeInfoTemp.getAttrInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNVar( ) \
	  (p_that)->cCelltypeInfoTemp.getNVar__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getVarInfo( ith, desc ) \
	  (p_that)->cCelltypeInfoTemp.getVarInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNCall( ) \
	  (p_that)->cCelltypeInfoTemp.getNCall__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getCallInfo( ith, desc ) \
	  (p_that)->cCelltypeInfoTemp.getCallInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNEntry( ) \
	  (p_that)->cCelltypeInfoTemp.getNEntry__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getEntryInfo( ith, desc ) \
	  (p_that)->cCelltypeInfoTemp.getEntryInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_isSingleton( ) \
	  (p_that)->cCelltypeInfoTemp.isSingleton__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_isIDX_is_ID( ) \
	  (p_that)->cCelltypeInfoTemp.isIDX_is_ID__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_sizeOfCB( ) \
	  (p_that)->cCelltypeInfoTemp.sizeOfCB__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_sizeOfINIB( ) \
	  (p_that)->cCelltypeInfoTemp.sizeOfINIB__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getName( name, max_len ) \
	  (p_that)->cCellInfoTemp.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getNameLength( ) \
	  (p_that)->cCellInfoTemp.getNameLength__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getNRawEntryDescriptorInfo( ) \
	  (p_that)->cCellInfoTemp.getNRawEntryDescriptorInfo__T( \
 )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getRawEntryDescriptorInfo( index, desc ) \
	  (p_that)->cCellInfoTemp.getRawEntryDescriptorInfo__T( \
 (index), (desc) )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getCelltypeInfo( desc ) \
	  (p_that)->cCellInfoTemp.getCelltypeInfo__T( \
 (desc) )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getCBP( cbp ) \
	  (p_that)->cCellInfoTemp.getCBP__T( \
 (cbp) )
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp_getINIBP( inibp ) \
	  (p_that)->cCellInfoTemp.getINIBP__T( \
 (inibp) )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getName( name, max_len ) \
	  (p_that)->cEntryInfoTemp.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getNameLength( ) \
	  (p_that)->cEntryInfoTemp.getNameLength__T( \
 )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getSignatureInfo( desc ) \
	  (p_that)->cEntryInfoTemp.getSignatureInfo__T( \
 (desc) )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getArraySize( ) \
	  (p_that)->cEntryInfoTemp.getArraySize__T( \
 )
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp_isInline( ) \
	  (p_that)->cEntryInfoTemp.isInline__T( \
 )
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_getNRawEntryDescriptorInfo( ) \
	  (p_that)->cRawEntryDescriptorInfoTemp.getNRawEntryDescriptorInfo__T( \
 )
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_getRawDescriptor( subsc, rawDesc ) \
	  (p_that)->cRawEntryDescriptorInfoTemp.getRawDescriptor__T( \
 (subsc), (rawDesc) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTECSInfo */
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc);
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc);
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc);
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc);
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findCell_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc);
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc);
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_unsafe_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, uint32_t subsc, void** rawDesc);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cNamespaceInfo */
Inline Descriptor( nTECSInfo_sNamespaceInfo )
nTECSInfo_tTECSInfoSub_cNamespaceInfo_refer_to_descriptor(  )
{
    Descriptor( nTECSInfo_sNamespaceInfo )  des;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sNamespaceInfo_VDES *)nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo;
    return des;
}

/* [ref_desc] cRegionInfo */
Inline Descriptor( nTECSInfo_sRegionInfo )
nTECSInfo_tTECSInfoSub_cRegionInfo_refer_to_descriptor(  )
{
    Descriptor( nTECSInfo_sRegionInfo )  des;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sRegionInfo_VDES *)nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo;
    return des;
}

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cNamespaceInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_set_descriptor( Descriptor( nTECSInfo_sNamespaceInfo ) des )
{
    assert( des.vdes != NULL );
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp = des.vdes;
}

/* [dynamic,optional] cNamespaceInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_unjoin(  )
{
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp = NULL;
}

/* [dynamic] cRegionInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cRegionInfoTemp_set_descriptor( Descriptor( nTECSInfo_sRegionInfo ) des )
{
    assert( des.vdes != NULL );
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp = des.vdes;
}

/* [dynamic,optional] cRegionInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cRegionInfoTemp_unjoin(  )
{
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp = NULL;
}

/* [dynamic] cSignatureInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_set_descriptor( Descriptor( nTECSInfo_sSignatureInfo ) des )
{
    assert( des.vdes != NULL );
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp = des.vdes;
}

/* [dynamic,optional] cSignatureInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_unjoin(  )
{
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp = NULL;
}

/* [dynamic] cCelltypeInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_set_descriptor( Descriptor( nTECSInfo_sCelltypeInfo ) des )
{
    assert( des.vdes != NULL );
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp = des.vdes;
}

/* [dynamic,optional] cCelltypeInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_unjoin(  )
{
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp = NULL;
}

/* [dynamic] cCellInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cCellInfoTemp_set_descriptor( Descriptor( nTECSInfo_sCellInfo ) des )
{
    assert( des.vdes != NULL );
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp = des.vdes;
}

/* [dynamic,optional] cCellInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cCellInfoTemp_unjoin(  )
{
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp = NULL;
}

/* [dynamic] cEntryInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cEntryInfoTemp_set_descriptor( Descriptor( nTECSInfo_sEntryInfo ) des )
{
    assert( des.vdes != NULL );
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp = des.vdes;
}

/* [dynamic,optional] cEntryInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cEntryInfoTemp_unjoin(  )
{
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp = NULL;
}

/* [dynamic] cRawEntryDescriptorInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_set_descriptor( Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) des )
{
    assert( des.vdes != NULL );
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRawEntryDescriptorInfoTemp = des.vdes;
}

/* [dynamic,optional] cRawEntryDescriptorInfoTemp */
Inline void
nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_unjoin(  )
{
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRawEntryDescriptorInfoTemp = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tTECSInfoSub_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tTECSInfoSub_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tTECSInfoSub_IDX

#define tTECSInfoSub_IDX  nTECSInfo_tTECSInfoSub_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name_len        nTECSInfo_tTECSInfoSub_ATTR_name_len
#define ATTR_path_len        nTECSInfo_tTECSInfoSub_ATTR_path_len


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_name1            nTECSInfo_tTECSInfoSub_VAR_name1
#define VAR_name2            nTECSInfo_tTECSInfoSub_VAR_name2
#define VAR_path             nTECSInfo_tTECSInfoSub_VAR_path

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cNamespaceInfo_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getName( name, max_len )
#define cNamespaceInfo_getNameLength( ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNameLength( )
#define cNamespaceInfo_getNNamespace( ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNNamespace( )
#define cNamespaceInfo_getNamespaceInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNamespaceInfo( ith, des )
#define cNamespaceInfo_getNSignature( ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNSignature( )
#define cNamespaceInfo_getSignatureInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getSignatureInfo( ith, des )
#define cNamespaceInfo_getNCelltype( ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNCelltype( )
#define cNamespaceInfo_getCelltypeInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getCelltypeInfo( ith, des )
#define cRegionInfo_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getName( name, max_len )
#define cRegionInfo_getNameLength( ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getNameLength( )
#define cRegionInfo_getNCell( ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getNCell( )
#define cRegionInfo_getCellInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getCellInfo( ith, des )
#define cRegionInfo_getNRegion( ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getNRegion( )
#define cRegionInfo_getRegionInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getRegionInfo( ith, des )
#define cNamespaceInfoTemp_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getName( name, max_len )
#define cNamespaceInfoTemp_getNameLength( ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNameLength( )
#define cNamespaceInfoTemp_getNNamespace( ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNNamespace( )
#define cNamespaceInfoTemp_getNamespaceInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNamespaceInfo( ith, des )
#define cNamespaceInfoTemp_getNSignature( ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNSignature( )
#define cNamespaceInfoTemp_getSignatureInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getSignatureInfo( ith, des )
#define cNamespaceInfoTemp_getNCelltype( ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getNCelltype( )
#define cNamespaceInfoTemp_getCelltypeInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_getCelltypeInfo( ith, des )
#define cRegionInfoTemp_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getName( name, max_len )
#define cRegionInfoTemp_getNameLength( ) \
          nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNameLength( )
#define cRegionInfoTemp_getNCell( ) \
          nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNCell( )
#define cRegionInfoTemp_getCellInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getCellInfo( ith, des )
#define cRegionInfoTemp_getNRegion( ) \
          nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getNRegion( )
#define cRegionInfoTemp_getRegionInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cRegionInfoTemp_getRegionInfo( ith, des )
#define cSignatureInfoTemp_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getName( name, max_len )
#define cSignatureInfoTemp_getNameLength( ) \
          nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getNameLength( )
#define cSignatureInfoTemp_getNFunction( ) \
          nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getNFunction( )
#define cSignatureInfoTemp_getFunctionInfo( ith, desc ) \
          nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_getFunctionInfo( ith, desc )
#define cCelltypeInfoTemp_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getName( name, max_len )
#define cCelltypeInfoTemp_getNameLength( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNameLength( )
#define cCelltypeInfoTemp_getNAttr( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNAttr( )
#define cCelltypeInfoTemp_getAttrInfo( ith, desc ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getAttrInfo( ith, desc )
#define cCelltypeInfoTemp_getNVar( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNVar( )
#define cCelltypeInfoTemp_getVarInfo( ith, desc ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getVarInfo( ith, desc )
#define cCelltypeInfoTemp_getNCall( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNCall( )
#define cCelltypeInfoTemp_getCallInfo( ith, desc ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getCallInfo( ith, desc )
#define cCelltypeInfoTemp_getNEntry( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getNEntry( )
#define cCelltypeInfoTemp_getEntryInfo( ith, desc ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_getEntryInfo( ith, desc )
#define cCelltypeInfoTemp_isSingleton( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_isSingleton( )
#define cCelltypeInfoTemp_isIDX_is_ID( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_isIDX_is_ID( )
#define cCelltypeInfoTemp_sizeOfCB( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_sizeOfCB( )
#define cCelltypeInfoTemp_sizeOfINIB( ) \
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_sizeOfINIB( )
#define cCellInfoTemp_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_getName( name, max_len )
#define cCellInfoTemp_getNameLength( ) \
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_getNameLength( )
#define cCellInfoTemp_getNRawEntryDescriptorInfo( ) \
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_getNRawEntryDescriptorInfo( )
#define cCellInfoTemp_getRawEntryDescriptorInfo( index, desc ) \
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_getRawEntryDescriptorInfo( index, desc )
#define cCellInfoTemp_getCelltypeInfo( desc ) \
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_getCelltypeInfo( desc )
#define cCellInfoTemp_getCBP( cbp ) \
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_getCBP( cbp )
#define cCellInfoTemp_getINIBP( inibp ) \
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_getINIBP( inibp )
#define cEntryInfoTemp_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getName( name, max_len )
#define cEntryInfoTemp_getNameLength( ) \
          nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getNameLength( )
#define cEntryInfoTemp_getSignatureInfo( desc ) \
          nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getSignatureInfo( desc )
#define cEntryInfoTemp_getArraySize( ) \
          nTECSInfo_tTECSInfoSub_cEntryInfoTemp_getArraySize( )
#define cEntryInfoTemp_isInline( ) \
          nTECSInfo_tTECSInfoSub_cEntryInfoTemp_isInline( )
#define cRawEntryDescriptorInfoTemp_getNRawEntryDescriptorInfo( ) \
          nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_getNRawEntryDescriptorInfo( )
#define cRawEntryDescriptorInfoTemp_getRawDescriptor( subsc, rawDesc ) \
          nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_getRawDescriptor( subsc, rawDesc )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cNamespaceInfo_refer_to_descriptor()\
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_refer_to_descriptor(  )
#define cNamespaceInfo_ref_desc()\
          cNamespaceInfo_refer_to_descriptor()
#define cRegionInfo_refer_to_descriptor()\
          nTECSInfo_tTECSInfoSub_cRegionInfo_refer_to_descriptor(  )
#define cRegionInfo_ref_desc()\
          cRegionInfo_refer_to_descriptor()


/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cNamespaceInfoTemp_set_descriptor( desc )\
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_set_descriptor( desc )
#define cNamespaceInfoTemp_unjoin(  )\
          nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp_unjoin(  )
#define cRegionInfoTemp_set_descriptor( desc )\
          nTECSInfo_tTECSInfoSub_cRegionInfoTemp_set_descriptor( desc )
#define cRegionInfoTemp_unjoin(  )\
          nTECSInfo_tTECSInfoSub_cRegionInfoTemp_unjoin(  )
#define cSignatureInfoTemp_set_descriptor( desc )\
          nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_set_descriptor( desc )
#define cSignatureInfoTemp_unjoin(  )\
          nTECSInfo_tTECSInfoSub_cSignatureInfoTemp_unjoin(  )
#define cCelltypeInfoTemp_set_descriptor( desc )\
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_set_descriptor( desc )
#define cCelltypeInfoTemp_unjoin(  )\
          nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp_unjoin(  )
#define cCellInfoTemp_set_descriptor( desc )\
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_set_descriptor( desc )
#define cCellInfoTemp_unjoin(  )\
          nTECSInfo_tTECSInfoSub_cCellInfoTemp_unjoin(  )
#define cEntryInfoTemp_set_descriptor( desc )\
          nTECSInfo_tTECSInfoSub_cEntryInfoTemp_set_descriptor( desc )
#define cEntryInfoTemp_unjoin(  )\
          nTECSInfo_tTECSInfoSub_cEntryInfoTemp_unjoin(  )
#define cRawEntryDescriptorInfoTemp_set_descriptor( desc )\
          nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_set_descriptor( desc )
#define cRawEntryDescriptorInfoTemp_unjoin(  )\
          nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp_unjoin(  )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cNamespaceInfoTemp_joined()\
		nTECSInfo_tTECSInfoSub_is_cNamespaceInfoTemp_joined()
#define is_cRegionInfoTemp_joined()\
		nTECSInfo_tTECSInfoSub_is_cRegionInfoTemp_joined()
#define is_cSignatureInfoTemp_joined()\
		nTECSInfo_tTECSInfoSub_is_cSignatureInfoTemp_joined()
#define is_cCelltypeInfoTemp_joined()\
		nTECSInfo_tTECSInfoSub_is_cCelltypeInfoTemp_joined()
#define is_cCellInfoTemp_joined()\
		nTECSInfo_tTECSInfoSub_is_cCellInfoTemp_joined()
#define is_cEntryInfoTemp_joined()\
		nTECSInfo_tTECSInfoSub_is_cEntryInfoTemp_joined()
#define is_cRawEntryDescriptorInfoTemp_joined()\
		nTECSInfo_tTECSInfoSub_is_cRawEntryDescriptorInfoTemp_joined()

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTECSInfo_findNamespace nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace
#define eTECSInfo_findRegion nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion
#define eTECSInfo_findSignature nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature
#define eTECSInfo_findCelltype nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype
#define eTECSInfo_findCell nTECSInfo_tTECSInfoSub_eTECSInfo_findCell
#define eTECSInfo_findRawEntryDescriptor nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor
#define eTECSInfo_findRawEntryDescriptor_unsafe nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_unsafe

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cNamespaceInfoTemp = nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB._inib->cNamespaceInfoTemp_init_;\
	nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRegionInfoTemp = nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB._inib->cRegionInfoTemp_init_;\
	nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cSignatureInfoTemp = nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB._inib->cSignatureInfoTemp_init_;\
	nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCelltypeInfoTemp = nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB._inib->cCelltypeInfoTemp_init_;\
	nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cCellInfoTemp = nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB._inib->cCellInfoTemp_init_;\
	nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cEntryInfoTemp = nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB._inib->cEntryInfoTemp_init_;\
	nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB.cRawEntryDescriptorInfoTemp = nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB._inib->cRawEntryDescriptorInfoTemp_init_;

#define SET_CB_INIB_POINTER(i,p_that)\
	nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB._inib = &nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tTECSInfoSub_TECSGENH */
