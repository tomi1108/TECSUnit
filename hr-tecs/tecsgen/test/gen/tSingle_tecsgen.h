/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSingle_TECSGEN_H
#define tSingle_TECSGEN_H

/*
 * celltype          :  tSingle
 * global name       :  tSingle
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
#include "sSingleCall_tecsgen.h"
#include "sSingleEntry_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSingle_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        single;
}  tSingle_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tSingle_CB {
    tSingle_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        single_var;
}  tSingle_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSingle_CB  tSingle_SINGLE_CELL_CB;
extern  tSingle_INIB  tSingle_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSingle_CB *tSingle_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSingleEntry */
int32_t      tSingle_eEntry_single( int32_t s);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSingle_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSingleEntry_tecsgen.h"
#ifdef  tSingle_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSingle_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSingle_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tSingle_ATTR_single 	(tSingle_SINGLE_CELL_INIB.single)

#define tSingle_GET_single()	(tSingle_SINGLE_CELL_INIB.single)


/* var アクセスマクロ #_VAM_# */
#define tSingle_VAR_single_var	(tSingle_SINGLE_CELL_CB.single_var)

#define tSingle_GET_single_var()	(tSingle_SINGLE_CELL_CB.single_var)
#define tSingle_SET_single_var(val)	(tSingle_SINGLE_CELL_CB.single_var=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tSingle_cCall_single( s ) \
	  tSingleEntry_eSingleCall_single( \
	   &tSingleEntry_INIB_tab[0], (s) )

#else  /* TECSFLOW */
#define tSingle_cCall_single( s ) \
	  (p_that)->cCall.single__T( \
 (s) )

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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSingle_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSingle_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSingle_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_single          tSingle_ATTR_single


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_single_var       tSingle_VAR_single_var

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_single( s ) \
          tSingle_cCall_single( s )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry_single    tSingle_eEntry_single

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tSingle_SINGLE_CELL_CB.single_var = 10;
#define SET_CB_INIB_POINTER(i,p_that)\
	tSingle_SINGLE_CELL_CB._inib = &tSingle_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSingle_TECSGENH */
