/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTarget_TECSGEN_H
#define tTarget_TECSGEN_H

/*
 * celltype          :  tTarget
 * global name       :  tTarget
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTarget_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tTarget_CB {
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int8_t         data1;
    int8_t         data2;
}  tTarget_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tTarget_CB  tTarget_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tTarget_CB *tTarget_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTarget */
int          tTarget_eTarget_main(tTarget_IDX idx, int8_t a, int8_t b);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTarget_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tTarget_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTarget_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTarget_GET_CELLCB(idx) (idx)



/* var アクセスマクロ #_VAM_# */
#define tTarget_VAR_data1(p_that)	((p_that)->data1)
#define tTarget_VAR_data2(p_that)	((p_that)->data2)

#define tTarget_GET_data1(p_that)	((p_that)->data1)
#define tTarget_SET_data1(p_that,val)	((p_that)->data1=(val))
#define tTarget_GET_data2(p_that)	((p_that)->data2)
#define tTarget_SET_data2(p_that,val)	((p_that)->data2=(val))

#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTarget */
int            tTarget_eTarget_main_skel( const struct tag_sTarget_VDES *epd, int8_t a, int8_t b);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTarget_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTarget_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTarget_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTarget_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_data1            tTarget_VAR_data1( p_cellcb )
#define VAR_data2            tTarget_VAR_data2( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTarget_main     tTarget_eTarget_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTarget_N_CELL; (i)++ ){ \
       (p_cb) = &tTarget_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->data1 = 0;\
	(p_that)->data2 = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTarget_TECSGENH */
