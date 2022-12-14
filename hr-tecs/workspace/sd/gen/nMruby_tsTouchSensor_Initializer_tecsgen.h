/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tsTouchSensor_Initializer_TECSGEN_H
#define nMruby_tsTouchSensor_Initializer_TECSGEN_H

/*
 * celltype          :  tsTouchSensor_Initializer
 * global name       :  nMruby_tsTouchSensor_Initializer
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "nMruby_sInitializeTECSBridge_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nMruby_tsTouchSensor_Initializer_CB {
    int  dummy;
} nMruby_tsTouchSensor_Initializer_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */

/* セルタイプのIDX型 #_CTIX_# */
typedef int   nMruby_tsTouchSensor_Initializer_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nMruby_sInitializeTECSBridge */
void         nMruby_tsTouchSensor_Initializer_eInitialize_initializeBridge(nMruby_tsTouchSensor_Initializer_IDX idx, mrb_state* mrb, struct RClass* TECS);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsTouchSensor_Initializer_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tsTouchSensor_Initializer_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tsTouchSensor_Initializer_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tsTouchSensor_Initializer_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eInitialize */
void           nMruby_tsTouchSensor_Initializer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsTouchSensor_Initializer_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsTouchSensor_Initializer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tsTouchSensor_Initializer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tsTouchSensor_Initializer_IDX

#define tsTouchSensor_Initializer_IDX  nMruby_tsTouchSensor_Initializer_IDX



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eInitialize_initializeBridge nMruby_tsTouchSensor_Initializer_eInitialize_initializeBridge

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsTouchSensor_Initializer_TECSGENH */
