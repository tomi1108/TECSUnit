/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tEV3Platform_TECSGEN_H
#define tEV3Platform_TECSGEN_H

/*
 * celltype          :  tEV3Platform
 * global name       :  tEV3Platform
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
#include "sTaskBody_tecsgen.h"
#include "sRiteVM_tecsgen.h"
#include "sTask_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tEV3Platform_INIB {
    /* call port #_TCP_# */
    struct tag_sRiteVM_VDES *const*cRiteVM;
    int_t n_cRiteVM;
    struct tag_sTask_VDES *const*cTask;
    int_t n_cTask;
    /* call port #_NEP_# */ 
}  tEV3Platform_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tEV3Platform_CB_tab           tEV3Platform_INIB_tab
#define tEV3Platform_CB               tEV3Platform_INIB
#define tag_tEV3Platform_CB           tag_tEV3Platform_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tEV3Platform_INIB  tEV3Platform_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tEV3Platform_INIB *tEV3Platform_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tEV3Platform_eTaskBody_main(tEV3Platform_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tEV3Platform_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tEV3Platform_N_CELL         (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tEV3Platform_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cRiteVM(p_that)  ((p_that)->n_cRiteVM)
#define NCP_cRiteVM           (N_CP_cRiteVM(p_cellcb))
#define N_CP_cTask(p_that)  ((p_that)->n_cTask)
#define NCP_cTask           (N_CP_cTask(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tEV3Platform_is_cRiteVM_joined(p_that,subscript) \
	  (((p_that)->cRiteVM!=0)\
	  &&((p_that)->cRiteVM[subscript]!=0))
#define tEV3Platform_is_cTask_joined(p_that,subscript) \
	  (((p_that)->cTask!=0)\
	  &&((p_that)->cTask[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define tEV3Platform_GET_CELLCB(idx) (idx)
#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tEV3Platform_cRiteVM_reset( p_that, subscript ) \
	  (p_that)->cRiteVM[subscript]->VMT->reset__T( \
	   (p_that)->cRiteVM[subscript] )
#define tEV3Platform_cTask_activate( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->activate__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_cancelActivate( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->cancelActivate__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_terminate( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->terminate__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_changePriority( p_that, subscript, priority ) \
	  (p_that)->cTask[subscript]->VMT->changePriority__T( \
	   (p_that)->cTask[subscript], (priority) )
#define tEV3Platform_cTask_getPriority( p_that, subscript, p_priority ) \
	  (p_that)->cTask[subscript]->VMT->getPriority__T( \
	   (p_that)->cTask[subscript], (p_priority) )
#define tEV3Platform_cTask_refer( p_that, subscript, pk_taskStatus ) \
	  (p_that)->cTask[subscript]->VMT->refer__T( \
	   (p_that)->cTask[subscript], (pk_taskStatus) )
#define tEV3Platform_cTask_wakeup( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->wakeup__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_cancelWakeup( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->cancelWakeup__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_releaseWait( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->releaseWait__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_suspend( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->suspend__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_resume( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->resume__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_raiseException( p_that, subscript, pattern ) \
	  (p_that)->cTask[subscript]->VMT->raiseException__T( \
	   (p_that)->cTask[subscript], (pattern) )
#define tEV3Platform_cTask_referException( p_that, subscript, pk_rtex ) \
	  (p_that)->cTask[subscript]->VMT->referException__T( \
	   (p_that)->cTask[subscript], (pk_rtex) )
#define tEV3Platform_cTask_startOverRunHandler( p_that, subscript, ovrtim ) \
	  (p_that)->cTask[subscript]->VMT->startOverRunHandler__T( \
	   (p_that)->cTask[subscript], (ovrtim) )
#define tEV3Platform_cTask_stopOverRunHandler( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->stopOverRunHandler__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_referOverRunHandler( p_that, subscript, pk_rovr ) \
	  (p_that)->cTask[subscript]->VMT->referOverRunHandler__T( \
	   (p_that)->cTask[subscript], (pk_rovr) )

#else  /* TECSFLOW */
#define tEV3Platform_cRiteVM_reset( p_that, subscript ) \
	  (p_that)->cRiteVM[subscript].reset__T( \
 )
#define tEV3Platform_cTask_activate( p_that, subscript ) \
	  (p_that)->cTask[subscript].activate__T( \
 )
#define tEV3Platform_cTask_cancelActivate( p_that, subscript ) \
	  (p_that)->cTask[subscript].cancelActivate__T( \
 )
#define tEV3Platform_cTask_terminate( p_that, subscript ) \
	  (p_that)->cTask[subscript].terminate__T( \
 )
#define tEV3Platform_cTask_changePriority( p_that, subscript, priority ) \
	  (p_that)->cTask[subscript].changePriority__T( \
 (priority) )
#define tEV3Platform_cTask_getPriority( p_that, subscript, p_priority ) \
	  (p_that)->cTask[subscript].getPriority__T( \
 (p_priority) )
#define tEV3Platform_cTask_refer( p_that, subscript, pk_taskStatus ) \
	  (p_that)->cTask[subscript].refer__T( \
 (pk_taskStatus) )
#define tEV3Platform_cTask_wakeup( p_that, subscript ) \
	  (p_that)->cTask[subscript].wakeup__T( \
 )
#define tEV3Platform_cTask_cancelWakeup( p_that, subscript ) \
	  (p_that)->cTask[subscript].cancelWakeup__T( \
 )
#define tEV3Platform_cTask_releaseWait( p_that, subscript ) \
	  (p_that)->cTask[subscript].releaseWait__T( \
 )
#define tEV3Platform_cTask_suspend( p_that, subscript ) \
	  (p_that)->cTask[subscript].suspend__T( \
 )
#define tEV3Platform_cTask_resume( p_that, subscript ) \
	  (p_that)->cTask[subscript].resume__T( \
 )
#define tEV3Platform_cTask_raiseException( p_that, subscript, pattern ) \
	  (p_that)->cTask[subscript].raiseException__T( \
 (pattern) )
#define tEV3Platform_cTask_referException( p_that, subscript, pk_rtex ) \
	  (p_that)->cTask[subscript].referException__T( \
 (pk_rtex) )
#define tEV3Platform_cTask_startOverRunHandler( p_that, subscript, ovrtim ) \
	  (p_that)->cTask[subscript].startOverRunHandler__T( \
 (ovrtim) )
#define tEV3Platform_cTask_stopOverRunHandler( p_that, subscript ) \
	  (p_that)->cTask[subscript].stopOverRunHandler__T( \
 )
#define tEV3Platform_cTask_referOverRunHandler( p_that, subscript, pk_rovr ) \
	  (p_that)->cTask[subscript].referOverRunHandler__T( \
 (pk_rovr) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTaskBody */
void           tEV3Platform_eTaskBody_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tEV3Platform_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tEV3Platform_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tEV3Platform_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tEV3Platform_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cRiteVM_reset( subscript ) \
          tEV3Platform_cRiteVM_reset( p_cellcb, subscript )
#define cTask_activate( subscript ) \
          tEV3Platform_cTask_activate( p_cellcb, subscript )
#define cTask_cancelActivate( subscript ) \
          tEV3Platform_cTask_cancelActivate( p_cellcb, subscript )
#define cTask_terminate( subscript ) \
          tEV3Platform_cTask_terminate( p_cellcb, subscript )
#define cTask_changePriority( subscript, priority ) \
          tEV3Platform_cTask_changePriority( p_cellcb, subscript, priority )
#define cTask_getPriority( subscript, p_priority ) \
          tEV3Platform_cTask_getPriority( p_cellcb, subscript, p_priority )
#define cTask_refer( subscript, pk_taskStatus ) \
          tEV3Platform_cTask_refer( p_cellcb, subscript, pk_taskStatus )
#define cTask_wakeup( subscript ) \
          tEV3Platform_cTask_wakeup( p_cellcb, subscript )
#define cTask_cancelWakeup( subscript ) \
          tEV3Platform_cTask_cancelWakeup( p_cellcb, subscript )
#define cTask_releaseWait( subscript ) \
          tEV3Platform_cTask_releaseWait( p_cellcb, subscript )
#define cTask_suspend( subscript ) \
          tEV3Platform_cTask_suspend( p_cellcb, subscript )
#define cTask_resume( subscript ) \
          tEV3Platform_cTask_resume( p_cellcb, subscript )
#define cTask_raiseException( subscript, pattern ) \
          tEV3Platform_cTask_raiseException( p_cellcb, subscript, pattern )
#define cTask_referException( subscript, pk_rtex ) \
          tEV3Platform_cTask_referException( p_cellcb, subscript, pk_rtex )
#define cTask_startOverRunHandler( subscript, ovrtim ) \
          tEV3Platform_cTask_startOverRunHandler( p_cellcb, subscript, ovrtim )
#define cTask_stopOverRunHandler( subscript ) \
          tEV3Platform_cTask_stopOverRunHandler( p_cellcb, subscript )
#define cTask_referOverRunHandler( subscript, pk_rovr ) \
          tEV3Platform_cTask_referOverRunHandler( p_cellcb, subscript, pk_rovr )



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cRiteVM_joined(subscript)\
		tEV3Platform_is_cRiteVM_joined(p_cellcb,subscript)
#define is_cTask_joined(subscript)\
		tEV3Platform_is_cTask_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTaskBody_main   tEV3Platform_eTaskBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tEV3Platform_N_CELL; (i)++ ){ \
       (p_cb) = &tEV3Platform_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tEV3Platform_TECSGENH */
