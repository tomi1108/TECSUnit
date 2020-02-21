/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSingleEntry_TECSGEN_H
#define tSingleEntry_TECSGEN_H

/*
 * celltype          :  tSingleEntry
 * global name       :  tSingleEntry
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
#include "sSingleCall_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSingleEntry_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tSingleEntry_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSingleEntry_CB_tab           tSingleEntry_INIB_tab
#define tSingleEntry_CB               tSingleEntry_INIB
#define tag_tSingleEntry_CB           tag_tSingleEntry_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tSingleEntry_INIB  tSingleEntry_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSingleEntry_INIB *tSingleEntry_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSingleCall */
int32_t      tSingleEntry_eSingleCall_single(tSingleEntry_IDX idx, int32_t s);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tSingleEntry_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSingleEntry_N_CELL         (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSingleEntry_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSingleEntry_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSingleEntry_ATTR_a( p_that )	((p_that)->a)

#define tSingleEntry_GET_a(p_that)	((p_that)->a)



#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSingleEntry_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSingleEntry_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSingleEntry_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSingleEntry_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tSingleEntry_ATTR_a( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSingleCall_single tSingleEntry_eSingleCall_single

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSingleEntry_N_CELL; (i)++ ){ \
       //(p_cb) = &tSingleEntry_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSingleEntry_TECSGENH */
