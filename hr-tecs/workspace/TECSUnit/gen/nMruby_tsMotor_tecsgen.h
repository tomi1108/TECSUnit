/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tsMotor_TECSGEN_H
#define nMruby_tsMotor_TECSGEN_H

/*
 * celltype          :  tsMotor
 * global name       :  nMruby_tsMotor
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
#include "sMotor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nMruby_tsMotor_INIB {
    /* call port #_TCP_# */
    const struct tag_tMotor_INIB * cTECS;
}  nMruby_tsMotor_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nMruby_tsMotor_CB_ptab           nMruby_tsMotor_INIB_ptab
#define nMruby_tsMotor_CB               nMruby_tsMotor_INIB
#define tag_nMruby_tsMotor_CB           tag_nMruby_tsMotor_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPP_# */
extern nMruby_tsMotor_INIB  *const nMruby_tsMotor_INIB_ptab[];
extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorA_INIB;
extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorB_INIB;
extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorC_INIB;
extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorD_INIB;

/* セルタイプのIDX型 #_CTIX_# */
typedef ID nMruby_tsMotor_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsMotor_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tMotor_tecsgen.h"
#ifdef  nMruby_tsMotor_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsMotor_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsMotor_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tsMotor_N_CELL        (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tsMotor_VALID_IDX(IDX) (nMruby_tsMotor_ID_BASE <= (IDX) && (IDX) < nMruby_tsMotor_ID_BASE+nMruby_tsMotor_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tsMotor_GET_CELLCB(idx) (nMruby_tsMotor_CB_ptab[(idx) - nMruby_tsMotor_ID_BASE])
#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nMruby_tsMotor_cTECS_getType( p_that ) \
	  tMotor_eMotor_getType( \
	   (p_that)->cTECS )
#define nMruby_tsMotor_cTECS_getCounts( p_that ) \
	  tMotor_eMotor_getCounts( \
	   (p_that)->cTECS )
#define nMruby_tsMotor_cTECS_getPower( p_that ) \
	  tMotor_eMotor_getPower( \
	   (p_that)->cTECS )
#define nMruby_tsMotor_cTECS_resetCounts( p_that ) \
	  tMotor_eMotor_resetCounts( \
	   (p_that)->cTECS )
#define nMruby_tsMotor_cTECS_setPower( p_that, power ) \
	  tMotor_eMotor_setPower( \
	   (p_that)->cTECS, (power) )
#define nMruby_tsMotor_cTECS_stop( p_that, brake ) \
	  tMotor_eMotor_stop( \
	   (p_that)->cTECS, (brake) )
#define nMruby_tsMotor_cTECS_rotate( p_that, degrees, speed_abs, blocking ) \
	  tMotor_eMotor_rotate( \
	   (p_that)->cTECS, (degrees), (speed_abs), (blocking) )
#define nMruby_tsMotor_cTECS_initializePort( p_that, type ) \
	  tMotor_eMotor_initializePort( \
	   (p_that)->cTECS, (type) )

#else  /* TECSFLOW */
#define nMruby_tsMotor_cTECS_getType( p_that ) \
	  (p_that)->cTECS.getType__T( \
 )
#define nMruby_tsMotor_cTECS_getCounts( p_that ) \
	  (p_that)->cTECS.getCounts__T( \
 )
#define nMruby_tsMotor_cTECS_getPower( p_that ) \
	  (p_that)->cTECS.getPower__T( \
 )
#define nMruby_tsMotor_cTECS_resetCounts( p_that ) \
	  (p_that)->cTECS.resetCounts__T( \
 )
#define nMruby_tsMotor_cTECS_setPower( p_that, power ) \
	  (p_that)->cTECS.setPower__T( \
 (power) )
#define nMruby_tsMotor_cTECS_stop( p_that, brake ) \
	  (p_that)->cTECS.stop__T( \
 (brake) )
#define nMruby_tsMotor_cTECS_rotate( p_that, degrees, speed_abs, blocking ) \
	  (p_that)->cTECS.rotate__T( \
 (degrees), (speed_abs), (blocking) )
#define nMruby_tsMotor_cTECS_initializePort( p_that, type ) \
	  (p_that)->cTECS.initializePort__T( \
 (type) )

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
#define VALID_IDX(IDX)  nMruby_tsMotor_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsMotor_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tsMotor_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tsMotor_IDX

#define tsMotor_IDX  nMruby_tsMotor_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECS_getType( ) \
          ((void)p_cellcb, nMruby_tsMotor_cTECS_getType( p_cellcb ))
#define cTECS_getCounts( ) \
          ((void)p_cellcb, nMruby_tsMotor_cTECS_getCounts( p_cellcb ))
#define cTECS_getPower( ) \
          ((void)p_cellcb, nMruby_tsMotor_cTECS_getPower( p_cellcb ))
#define cTECS_resetCounts( ) \
          ((void)p_cellcb, nMruby_tsMotor_cTECS_resetCounts( p_cellcb ))
#define cTECS_setPower( power ) \
          ((void)p_cellcb, nMruby_tsMotor_cTECS_setPower( p_cellcb, power ))
#define cTECS_stop( brake ) \
          ((void)p_cellcb, nMruby_tsMotor_cTECS_stop( p_cellcb, brake ))
#define cTECS_rotate( degrees, speed_abs, blocking ) \
          ((void)p_cellcb, nMruby_tsMotor_cTECS_rotate( p_cellcb, degrees, speed_abs, blocking ))
#define cTECS_initializePort( type ) \
          ((void)p_cellcb, nMruby_tsMotor_cTECS_initializePort( p_cellcb, type ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsMotor_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsMotor_CB_ptab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsMotor_TECSGENH */
