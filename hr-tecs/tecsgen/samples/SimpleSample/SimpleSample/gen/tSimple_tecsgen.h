/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSimple_TECSGEN_H
#define tSimple_TECSGEN_H

/*
 * celltype          :  tSimple
 * global name       :  tSimple
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSample_tecsgen.h"
#include "sTaskBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSimple_CB {
    int  dummy;
} tSimple_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSimple_eBody_main();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSample_tecsgen.h"
#ifdef  tSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSimple_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tSimple_cCall_sayHello( times ) \
	  tSample_eEnt_sayHello( \
	   (tSample_IDX)0, (times) )
#define tSimple_cCall_howAreYou( buf, len ) \
	  tSample_eEnt_howAreYou( \
	   (tSample_IDX)0, (buf), (len) )

#else  /* TECSFLOW */
#define tSimple_cCall_sayHello( times ) \
	  (p_that)->cCall.sayHello__T( \
 (times) )
#define tSimple_cCall_howAreYou( buf, len ) \
	  (p_that)->cCall.howAreYou__T( \
 (buf), (len) )

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
#define GET_CELLCB(idx)  tSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSimple_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_sayHello( times ) \
          tSimple_cCall_sayHello( times )
#define cCall_howAreYou( buf, len ) \
          tSimple_cCall_howAreYou( buf, len )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tSimple_eBody_main

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimple_TECSGENH */
