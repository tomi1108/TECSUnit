/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tSignatureInfo_TECSGEN_H
#define nTECSInfo_tSignatureInfo_TECSGEN_H

/*
 * celltype          :  tSignatureInfo
 * global name       :  nTECSInfo_tSignatureInfo
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
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sFunctionInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tSignatureInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sFunctionInfo_VDES *const*cFunctionInfo;
    int_t n_cFunctionInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char*          name;
}  nTECSInfo_tSignatureInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tSignatureInfo_CB_tab           nTECSInfo_tSignatureInfo_INIB_tab
#define nTECSInfo_tSignatureInfo_CB               nTECSInfo_tSignatureInfo_INIB
#define tag_nTECSInfo_tSignatureInfo_CB           tag_nTECSInfo_tSignatureInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tSignatureInfo_INIB  nTECSInfo_tSignatureInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tSignatureInfo_INIB *nTECSInfo_tSignatureInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sSignatureInfo */
ER           nTECSInfo_tSignatureInfo_eSignatureInfo_getName(nTECSInfo_tSignatureInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tSignatureInfo_eSignatureInfo_getNameLength(nTECSInfo_tSignatureInfo_IDX idx);
uint32_t     nTECSInfo_tSignatureInfo_eSignatureInfo_getNFunction(nTECSInfo_tSignatureInfo_IDX idx);
ER           nTECSInfo_tSignatureInfo_eSignatureInfo_getFunctionInfo(nTECSInfo_tSignatureInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sFunctionInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tSignatureInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tSignatureInfo_N_CELL       (30)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tSignatureInfo_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cFunctionInfo(p_that)  ((p_that)->n_cFunctionInfo)
#define NCP_cFunctionInfo           (N_CP_cFunctionInfo(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define nTECSInfo_tSignatureInfo_is_cFunctionInfo_joined(p_that,subscript) \
	  (((p_that)->cFunctionInfo!=0)\
	  &&((p_that)->cFunctionInfo[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tSignatureInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tSignatureInfo_ATTR_name( p_that )	((p_that)->name)

#define nTECSInfo_tSignatureInfo_GET_name(p_that)	((p_that)->name)



#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getName__T( \
	   (p_that)->cFunctionInfo[subscript], (name), (max_len) )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cFunctionInfo[subscript] )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getReturnTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getReturnTypeInfo__T( \
	   (p_that)->cFunctionInfo[subscript], (desc) )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getNParam( p_that, subscript ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getNParam__T( \
	   (p_that)->cFunctionInfo[subscript] )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getParamInfo( p_that, subscript, ith, param ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getParamInfo__T( \
	   (p_that)->cFunctionInfo[subscript], (ith), (param) )

#else  /* TECSFLOW */
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cFunctionInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cFunctionInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getReturnTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cFunctionInfo[subscript].getReturnTypeInfo__T( \
 (desc) )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getNParam( p_that, subscript ) \
	  (p_that)->cFunctionInfo[subscript].getNParam__T( \
 )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getParamInfo( p_that, subscript, ith, param ) \
	  (p_that)->cFunctionInfo[subscript].getParamInfo__T( \
 (ith), (param) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eSignatureInfo */
ER             nTECSInfo_tSignatureInfo_eSignatureInfo_getName_skel( const struct tag_nTECSInfo_sSignatureInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tSignatureInfo_eSignatureInfo_getNameLength_skel( const struct tag_nTECSInfo_sSignatureInfo_VDES *epd);
uint32_t       nTECSInfo_tSignatureInfo_eSignatureInfo_getNFunction_skel( const struct tag_nTECSInfo_sSignatureInfo_VDES *epd);
ER             nTECSInfo_tSignatureInfo_eSignatureInfo_getFunctionInfo_skel( const struct tag_nTECSInfo_sSignatureInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sFunctionInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cFunctionInfo */
Inline Descriptor( nTECSInfo_sFunctionInfo )
nTECSInfo_tSignatureInfo_cFunctionInfo_refer_to_descriptor( nTECSInfo_tSignatureInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sFunctionInfo )  des;
    nTECSInfo_tSignatureInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cFunctionInfo );
    des.vdes = (struct tag_nTECSInfo_sFunctionInfo_VDES *)p_cellcb->cFunctionInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tSignatureInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tSignatureInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tSignatureInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tSignatureInfo_IDX

#define tSignatureInfo_IDX  nTECSInfo_tSignatureInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tSignatureInfo_ATTR_name( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cFunctionInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getName( p_cellcb, subscript, name, max_len )
#define cFunctionInfo_getNameLength( subscript ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getNameLength( p_cellcb, subscript )
#define cFunctionInfo_getReturnTypeInfo( subscript, desc ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getReturnTypeInfo( p_cellcb, subscript, desc )
#define cFunctionInfo_getNParam( subscript ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getNParam( p_cellcb, subscript )
#define cFunctionInfo_getParamInfo( subscript, ith, param ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getParamInfo( p_cellcb, subscript, ith, param )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cFunctionInfo_refer_to_descriptor( i )\
          nTECSInfo_tSignatureInfo_cFunctionInfo_refer_to_descriptor( p_cellcb, i )
#define cFunctionInfo_ref_desc( i )\
          cFunctionInfo_refer_to_descriptor( i )


/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cFunctionInfo_joined(subscript)\
		nTECSInfo_tSignatureInfo_is_cFunctionInfo_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSignatureInfo_getName nTECSInfo_tSignatureInfo_eSignatureInfo_getName
#define eSignatureInfo_getNameLength nTECSInfo_tSignatureInfo_eSignatureInfo_getNameLength
#define eSignatureInfo_getNFunction nTECSInfo_tSignatureInfo_eSignatureInfo_getNFunction
#define eSignatureInfo_getFunctionInfo nTECSInfo_tSignatureInfo_eSignatureInfo_getFunctionInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tSignatureInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tSignatureInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tSignatureInfo_TECSGENH */
