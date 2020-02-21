/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tUltrasonicSensor_TECSGEN_H
#define tUltrasonicSensor_TECSGEN_H

/*
 * celltype          :  tUltrasonicSensor
 * global name       :  tUltrasonicSensor
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sUltrasonicSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tUltrasonicSensor_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        port;
}  tUltrasonicSensor_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tUltrasonicSensor_CB_tab           tUltrasonicSensor_INIB_tab
#define tUltrasonicSensor_CB               tUltrasonicSensor_INIB
#define tag_tUltrasonicSensor_CB           tag_tUltrasonicSensor_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tUltrasonicSensor_INIB  tUltrasonicSensor_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tUltrasonicSensor_INIB *tUltrasonicSensor_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sUltrasonicSensor */
int16_t      tUltrasonicSensor_eUltrasonicSensor_getDistance(tUltrasonicSensor_IDX idx);
bool_t       tUltrasonicSensor_eUltrasonicSensor_listen(tUltrasonicSensor_IDX idx);
void         tUltrasonicSensor_eUltrasonicSensor_initializePort(tUltrasonicSensor_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tUltrasonicSensor_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tUltrasonicSensor_N_CELL        (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tUltrasonicSensor_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tUltrasonicSensor_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tUltrasonicSensor_ATTR_port( p_that )	((p_that)->port)

#define tUltrasonicSensor_GET_port(p_that)	((p_that)->port)



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
#define VALID_IDX(IDX)  tUltrasonicSensor_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tUltrasonicSensor_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tUltrasonicSensor_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tUltrasonicSensor_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_port            tUltrasonicSensor_ATTR_port( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eUltrasonicSensor_getDistance tUltrasonicSensor_eUltrasonicSensor_getDistance
#define eUltrasonicSensor_listen tUltrasonicSensor_eUltrasonicSensor_listen
#define eUltrasonicSensor_initializePort tUltrasonicSensor_eUltrasonicSensor_initializePort

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tUltrasonicSensor_N_CELL; (i)++ ){ \
       (p_cb) = &tUltrasonicSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tUltrasonicSensor_TECSGENH */
