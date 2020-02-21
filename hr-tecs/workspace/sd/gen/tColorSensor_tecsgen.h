/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tColorSensor_TECSGEN_H
#define tColorSensor_TECSGEN_H

/*
 * celltype          :  tColorSensor
 * global name       :  tColorSensor
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
#include "sColorSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tColorSensor_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        port;
}  tColorSensor_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tColorSensor_CB_tab           tColorSensor_INIB_tab
#define tColorSensor_CB               tColorSensor_INIB
#define tag_tColorSensor_CB           tag_tColorSensor_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tColorSensor_INIB  tColorSensor_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tColorSensor_INIB *tColorSensor_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sColorSensor */
colorid_t    tColorSensor_eColorSensor_getColor(tColorSensor_IDX idx);
uint8_t      tColorSensor_eColorSensor_getReflect(tColorSensor_IDX idx);
uint8_t      tColorSensor_eColorSensor_getAmbient(tColorSensor_IDX idx);
void         tColorSensor_eColorSensor_initializePort(tColorSensor_IDX idx);
void         tColorSensor_eColorSensor_getRGBRaw(tColorSensor_IDX idx, uint16_t* r, uint16_t* g, uint16_t* b);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tColorSensor_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tColorSensor_N_CELL         (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tColorSensor_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tColorSensor_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tColorSensor_ATTR_port( p_that )	((p_that)->port)

#define tColorSensor_GET_port(p_that)	((p_that)->port)



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
#define VALID_IDX(IDX)  tColorSensor_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tColorSensor_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tColorSensor_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tColorSensor_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_port            tColorSensor_ATTR_port( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eColorSensor_getColor tColorSensor_eColorSensor_getColor
#define eColorSensor_getReflect tColorSensor_eColorSensor_getReflect
#define eColorSensor_getAmbient tColorSensor_eColorSensor_getAmbient
#define eColorSensor_initializePort tColorSensor_eColorSensor_initializePort
#define eColorSensor_getRGBRaw tColorSensor_eColorSensor_getRGBRaw

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tColorSensor_N_CELL; (i)++ ){ \
       (p_cb) = &tColorSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tColorSensor_TECSGENH */
