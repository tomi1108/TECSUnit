/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tNamespaceInfo_TECSGEN_H
#define nTECSInfo_tNamespaceInfo_TECSGEN_H

/*
 * celltype          :  tNamespaceInfo
 * global name       :  nTECSInfo_tNamespaceInfo
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
#include "nTECSInfo_sNamespaceInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tNamespaceInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sSignatureInfo_VDES *const*cSignatureInfo;
    int_t n_cSignatureInfo;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *const*cCelltypeInfo;
    int_t n_cCelltypeInfo;
    struct tag_nTECSInfo_sNamespaceInfo_VDES *const*cNamespaceInfo;
    int_t n_cNamespaceInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char*          name;
}  nTECSInfo_tNamespaceInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tNamespaceInfo_CB_tab           nTECSInfo_tNamespaceInfo_INIB_tab
#define nTECSInfo_tNamespaceInfo_CB               nTECSInfo_tNamespaceInfo_INIB
#define tag_nTECSInfo_tNamespaceInfo_CB           tag_nTECSInfo_tNamespaceInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tNamespaceInfo_INIB  nTECSInfo_tNamespaceInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tNamespaceInfo_INIB *nTECSInfo_tNamespaceInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sNamespaceInfo */
ER           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName(nTECSInfo_tNamespaceInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength(nTECSInfo_tNamespaceInfo_IDX idx);
uint32_t     nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace(nTECSInfo_tNamespaceInfo_IDX idx);
ER           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo(nTECSInfo_tNamespaceInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des);
uint32_t     nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature(nTECSInfo_tNamespaceInfo_IDX idx);
ER           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo(nTECSInfo_tNamespaceInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des);
uint32_t     nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype(nTECSInfo_tNamespaceInfo_IDX idx);
ER           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo(nTECSInfo_tNamespaceInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tNamespaceInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tNamespaceInfo_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tNamespaceInfo_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cSignatureInfo(p_that)  ((p_that)->n_cSignatureInfo)
#define NCP_cSignatureInfo           (N_CP_cSignatureInfo(p_cellcb))
#define N_CP_cCelltypeInfo(p_that)  ((p_that)->n_cCelltypeInfo)
#define NCP_cCelltypeInfo           (N_CP_cCelltypeInfo(p_cellcb))
#define N_CP_cNamespaceInfo(p_that)  ((p_that)->n_cNamespaceInfo)
#define NCP_cNamespaceInfo           (N_CP_cNamespaceInfo(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define nTECSInfo_tNamespaceInfo_is_cSignatureInfo_joined(p_that,subscript) \
	  (((p_that)->cSignatureInfo!=0)\
	  &&((p_that)->cSignatureInfo[subscript]!=0))
#define nTECSInfo_tNamespaceInfo_is_cCelltypeInfo_joined(p_that,subscript) \
	  (((p_that)->cCelltypeInfo!=0)\
	  &&((p_that)->cCelltypeInfo[subscript]!=0))
#define nTECSInfo_tNamespaceInfo_is_cNamespaceInfo_joined(p_that,subscript) \
	  (((p_that)->cNamespaceInfo!=0)\
	  &&((p_that)->cNamespaceInfo[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tNamespaceInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tNamespaceInfo_ATTR_name( p_that )	((p_that)->name)

#define nTECSInfo_tNamespaceInfo_GET_name(p_that)	((p_that)->name)



#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cSignatureInfo[subscript]->VMT->getName__T( \
	   (p_that)->cSignatureInfo[subscript], (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cSignatureInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getNFunction( p_that, subscript ) \
	  (p_that)->cSignatureInfo[subscript]->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getFunctionInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cSignatureInfo[subscript]->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getName__T( \
	   (p_that)->cCelltypeInfo[subscript], (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNAttr( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNAttr__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getAttrInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getAttrInfo__T( \
	   (p_that)->cCelltypeInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNVar( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNVar__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getVarInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getVarInfo__T( \
	   (p_that)->cCelltypeInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNCall( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNCall__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getCallInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getCallInfo__T( \
	   (p_that)->cCelltypeInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNEntry( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNEntry__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getEntryInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getEntryInfo__T( \
	   (p_that)->cCelltypeInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_isSingleton( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->isSingleton__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_isIDX_is_ID( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->isIDX_is_ID__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_sizeOfCB( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->sizeOfCB__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_sizeOfINIB( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->sizeOfINIB__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getName__T( \
	   (p_that)->cNamespaceInfo[subscript], (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cNamespaceInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNNamespace( p_that, subscript ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNNamespace__T( \
	   (p_that)->cNamespaceInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNamespaceInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNamespaceInfo__T( \
	   (p_that)->cNamespaceInfo[subscript], (ith), (des) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNSignature( p_that, subscript ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNSignature__T( \
	   (p_that)->cNamespaceInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getSignatureInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getSignatureInfo__T( \
	   (p_that)->cNamespaceInfo[subscript], (ith), (des) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNCelltype( p_that, subscript ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNCelltype__T( \
	   (p_that)->cNamespaceInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getCelltypeInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getCelltypeInfo__T( \
	   (p_that)->cNamespaceInfo[subscript], (ith), (des) )

#else  /* TECSFLOW */
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cSignatureInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cSignatureInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getNFunction( p_that, subscript ) \
	  (p_that)->cSignatureInfo[subscript].getNFunction__T( \
 )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getFunctionInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cSignatureInfo[subscript].getFunctionInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCelltypeInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNAttr( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].getNAttr__T( \
 )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getAttrInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript].getAttrInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNVar( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].getNVar__T( \
 )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getVarInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript].getVarInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNCall( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].getNCall__T( \
 )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getCallInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript].getCallInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNEntry( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].getNEntry__T( \
 )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getEntryInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript].getEntryInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_isSingleton( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].isSingleton__T( \
 )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_isIDX_is_ID( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].isIDX_is_ID__T( \
 )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_sizeOfCB( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].sizeOfCB__T( \
 )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_sizeOfINIB( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript].sizeOfINIB__T( \
 )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cNamespaceInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cNamespaceInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNNamespace( p_that, subscript ) \
	  (p_that)->cNamespaceInfo[subscript].getNNamespace__T( \
 )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNamespaceInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript].getNamespaceInfo__T( \
 (ith), (des) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNSignature( p_that, subscript ) \
	  (p_that)->cNamespaceInfo[subscript].getNSignature__T( \
 )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getSignatureInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript].getSignatureInfo__T( \
 (ith), (des) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNCelltype( p_that, subscript ) \
	  (p_that)->cNamespaceInfo[subscript].getNCelltype__T( \
 )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getCelltypeInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript].getCelltypeInfo__T( \
 (ith), (des) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eNamespaceInfo */
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd);
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd);
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des);
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd);
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des);
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd);
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cSignatureInfo */
Inline Descriptor( nTECSInfo_sSignatureInfo )
nTECSInfo_tNamespaceInfo_cSignatureInfo_refer_to_descriptor( nTECSInfo_tNamespaceInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sSignatureInfo )  des;
    nTECSInfo_tNamespaceInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cSignatureInfo );
    des.vdes = (struct tag_nTECSInfo_sSignatureInfo_VDES *)p_cellcb->cSignatureInfo[ i ];
    return des;
}

/* [ref_desc] cCelltypeInfo */
Inline Descriptor( nTECSInfo_sCelltypeInfo )
nTECSInfo_tNamespaceInfo_cCelltypeInfo_refer_to_descriptor( nTECSInfo_tNamespaceInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sCelltypeInfo )  des;
    nTECSInfo_tNamespaceInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cCelltypeInfo );
    des.vdes = (struct tag_nTECSInfo_sCelltypeInfo_VDES *)p_cellcb->cCelltypeInfo[ i ];
    return des;
}

/* [ref_desc] cNamespaceInfo */
Inline Descriptor( nTECSInfo_sNamespaceInfo )
nTECSInfo_tNamespaceInfo_cNamespaceInfo_refer_to_descriptor( nTECSInfo_tNamespaceInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sNamespaceInfo )  des;
    nTECSInfo_tNamespaceInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cNamespaceInfo );
    des.vdes = (struct tag_nTECSInfo_sNamespaceInfo_VDES *)p_cellcb->cNamespaceInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tNamespaceInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tNamespaceInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tNamespaceInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tNamespaceInfo_IDX

#define tNamespaceInfo_IDX  nTECSInfo_tNamespaceInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tNamespaceInfo_ATTR_name( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSignatureInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tNamespaceInfo_cSignatureInfo_getName( p_cellcb, subscript, name, max_len )
#define cSignatureInfo_getNameLength( subscript ) \
          nTECSInfo_tNamespaceInfo_cSignatureInfo_getNameLength( p_cellcb, subscript )
#define cSignatureInfo_getNFunction( subscript ) \
          nTECSInfo_tNamespaceInfo_cSignatureInfo_getNFunction( p_cellcb, subscript )
#define cSignatureInfo_getFunctionInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cSignatureInfo_getFunctionInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getName( p_cellcb, subscript, name, max_len )
#define cCelltypeInfo_getNameLength( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNameLength( p_cellcb, subscript )
#define cCelltypeInfo_getNAttr( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNAttr( p_cellcb, subscript )
#define cCelltypeInfo_getAttrInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getAttrInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_getNVar( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNVar( p_cellcb, subscript )
#define cCelltypeInfo_getVarInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getVarInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_getNCall( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNCall( p_cellcb, subscript )
#define cCelltypeInfo_getCallInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getCallInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_getNEntry( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNEntry( p_cellcb, subscript )
#define cCelltypeInfo_getEntryInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getEntryInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_isSingleton( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_isSingleton( p_cellcb, subscript )
#define cCelltypeInfo_isIDX_is_ID( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_isIDX_is_ID( p_cellcb, subscript )
#define cCelltypeInfo_sizeOfCB( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_sizeOfCB( p_cellcb, subscript )
#define cCelltypeInfo_sizeOfINIB( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_sizeOfINIB( p_cellcb, subscript )
#define cNamespaceInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getName( p_cellcb, subscript, name, max_len )
#define cNamespaceInfo_getNameLength( subscript ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNameLength( p_cellcb, subscript )
#define cNamespaceInfo_getNNamespace( subscript ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNNamespace( p_cellcb, subscript )
#define cNamespaceInfo_getNamespaceInfo( subscript, ith, des ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNamespaceInfo( p_cellcb, subscript, ith, des )
#define cNamespaceInfo_getNSignature( subscript ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNSignature( p_cellcb, subscript )
#define cNamespaceInfo_getSignatureInfo( subscript, ith, des ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getSignatureInfo( p_cellcb, subscript, ith, des )
#define cNamespaceInfo_getNCelltype( subscript ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNCelltype( p_cellcb, subscript )
#define cNamespaceInfo_getCelltypeInfo( subscript, ith, des ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getCelltypeInfo( p_cellcb, subscript, ith, des )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cSignatureInfo_refer_to_descriptor( i )\
          nTECSInfo_tNamespaceInfo_cSignatureInfo_refer_to_descriptor( p_cellcb, i )
#define cSignatureInfo_ref_desc( i )\
          cSignatureInfo_refer_to_descriptor( i )
#define cCelltypeInfo_refer_to_descriptor( i )\
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_refer_to_descriptor( p_cellcb, i )
#define cCelltypeInfo_ref_desc( i )\
          cCelltypeInfo_refer_to_descriptor( i )
#define cNamespaceInfo_refer_to_descriptor( i )\
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_refer_to_descriptor( p_cellcb, i )
#define cNamespaceInfo_ref_desc( i )\
          cNamespaceInfo_refer_to_descriptor( i )


/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cSignatureInfo_joined(subscript)\
		nTECSInfo_tNamespaceInfo_is_cSignatureInfo_joined(p_cellcb,subscript)
#define is_cCelltypeInfo_joined(subscript)\
		nTECSInfo_tNamespaceInfo_is_cCelltypeInfo_joined(p_cellcb,subscript)
#define is_cNamespaceInfo_joined(subscript)\
		nTECSInfo_tNamespaceInfo_is_cNamespaceInfo_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eNamespaceInfo_getName nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName
#define eNamespaceInfo_getNameLength nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength
#define eNamespaceInfo_getNNamespace nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace
#define eNamespaceInfo_getNamespaceInfo nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo
#define eNamespaceInfo_getNSignature nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature
#define eNamespaceInfo_getSignatureInfo nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo
#define eNamespaceInfo_getNCelltype nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype
#define eNamespaceInfo_getCelltypeInfo nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tNamespaceInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tNamespaceInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tNamespaceInfo_TECSGENH */
