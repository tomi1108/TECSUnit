/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSingleCall_TECSGEN_H
#define tSingleCall_TECSGEN_H

/*
 * celltype          :  tSingleCall
 * global name       :  tSingleCall
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSingleEntry_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSingleCall_CB {
    int  dummy;
} tSingleCall_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSingleCall_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSingleCall_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSingle_tecsgen.h"
#ifdef  tSingleCall_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSingleCall_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSingleCall_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tSingleCall_N_CELL          (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSingleCall_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSingleCall_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tSingleCall_cSingleEntry_single( p_that, s ) \
	  tSingle_eEntry_single( \
	    (s) )

#else  /* TECSFLOW */
#define tSingleCall_cSingleEntry_single( p_that, s ) \
	  (p_that)->cSingleEntry.single__T( \
 (s) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSingleCall_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSingleCall_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSingleCall_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSingleCall_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSingleEntry_single( s ) \
          ((void)p_cellcb, tSingleCall_cSingleEntry_single( p_cellcb, s ))



/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSingleCall_TECSGENH */
