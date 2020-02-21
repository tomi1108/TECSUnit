/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tsColorSensor_TECSGEN_H
#define nMruby_tsColorSensor_TECSGEN_H

/*
 * celltype          :  tsColorSensor
 * global name       :  nMruby_tsColorSensor
 * multi-domain      :  yes
 * idx_is_id(actual) :  yes(yes)
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
typedef const struct tag_nMruby_tsColorSensor_INIB {
    /* call port #_TCP_# */
    const struct tag_tColorSensor_INIB * cTECS;
}  nMruby_tsColorSensor_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nMruby_tsColorSensor_CB_ptab           nMruby_tsColorSensor_INIB_ptab
#define nMruby_tsColorSensor_CB               nMruby_tsColorSensor_INIB
#define tag_nMruby_tsColorSensor_CB           tag_nMruby_tsColorSensor_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPP_# */
extern nMruby_tsColorSensor_INIB  *const nMruby_tsColorSensor_INIB_ptab[];
extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor1_INIB;
extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor2_INIB;
extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor3_INIB;
extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor4_INIB;

/* セルタイプのIDX型 #_CTIX_# */
typedef ID nMruby_tsColorSensor_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsColorSensor_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tColorSensor_tecsgen.h"
#ifdef  nMruby_tsColorSensor_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsColorSensor_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsColorSensor_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tsColorSensor_N_CELL        (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tsColorSensor_VALID_IDX(IDX) (nMruby_tsColorSensor_ID_BASE <= (IDX) && (IDX) < nMruby_tsColorSensor_ID_BASE+nMruby_tsColorSensor_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tsColorSensor_GET_CELLCB(idx) (nMruby_tsColorSensor_CB_ptab[(idx) - nMruby_tsColorSensor_ID_BASE])
#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nMruby_tsColorSensor_cTECS_getColor( p_that ) \
	  tColorSensor_eColorSensor_getColor( \
	   (p_that)->cTECS )
#define nMruby_tsColorSensor_cTECS_getReflect( p_that ) \
	  tColorSensor_eColorSensor_getReflect( \
	   (p_that)->cTECS )
#define nMruby_tsColorSensor_cTECS_getAmbient( p_that ) \
	  tColorSensor_eColorSensor_getAmbient( \
	   (p_that)->cTECS )
#define nMruby_tsColorSensor_cTECS_initializePort( p_that ) \
	  tColorSensor_eColorSensor_initializePort( \
	   (p_that)->cTECS )
#define nMruby_tsColorSensor_cTECS_getRGBRaw( p_that, r, g, b ) \
	  tColorSensor_eColorSensor_getRGBRaw( \
	   (p_that)->cTECS, (r), (g), (b) )

#else  /* TECSFLOW */
#define nMruby_tsColorSensor_cTECS_getColor( p_that ) \
	  (p_that)->cTECS.getColor__T( \
 )
#define nMruby_tsColorSensor_cTECS_getReflect( p_that ) \
	  (p_that)->cTECS.getReflect__T( \
 )
#define nMruby_tsColorSensor_cTECS_getAmbient( p_that ) \
	  (p_that)->cTECS.getAmbient__T( \
 )
#define nMruby_tsColorSensor_cTECS_initializePort( p_that ) \
	  (p_that)->cTECS.initializePort__T( \
 )
#define nMruby_tsColorSensor_cTECS_getRGBRaw( p_that, r, g, b ) \
	  (p_that)->cTECS.getRGBRaw__T( \
 (r), (g), (b) )

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
#define VALID_IDX(IDX)  nMruby_tsColorSensor_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsColorSensor_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tsColorSensor_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tsColorSensor_IDX

#define tsColorSensor_IDX  nMruby_tsColorSensor_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECS_getColor( ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_getColor( p_cellcb ))
#define cTECS_getReflect( ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_getReflect( p_cellcb ))
#define cTECS_getAmbient( ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_getAmbient( p_cellcb ))
#define cTECS_initializePort( ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_initializePort( p_cellcb ))
#define cTECS_getRGBRaw( r, g, b ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_getRGBRaw( p_cellcb, r, g, b ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsColorSensor_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsColorSensor_CB_ptab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsColorSensor_TECSGENH */
