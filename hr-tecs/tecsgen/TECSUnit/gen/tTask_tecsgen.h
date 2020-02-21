/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTask_TECSGEN_H
#define tTask_TECSGEN_H

/*
 * celltype          :  tTask
 * global name       :  tTask
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTask_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sTaskExceptionBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTask_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ATR            taskAttribute;
    ATR            exceptionAttribute;
    PRI            priority;
    SIZE           stackSize;
    char_t*        name;
}  tTask_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tTask_CB {
    tTask_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    pthread_t      my_thread;
    pthread_cond_t my_cond;
    pthread_mutex_t my_mutex;
    int_t          state;
}  tTask_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tTask_CB  tTask_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tTask_CB *tTask_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTask */
Inline ER           tTask_eTask_activate(tTask_IDX idx);
Inline ER           tTask_eTask_suspend(tTask_IDX idx);
Inline ER           tTask_eTask_resume(tTask_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTask_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTaskMain_tecsgen.h"
#ifdef  tTask_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTask_CB_TYPE_ONLY */
#define tTask_ID_BASE               (1)  /* ID のベース  #_NIDB_# */
#define tTask_N_CELL                (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTask_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tTask_is_cExceptionBody_joined(p_that) \
	  (0)    /* not joined */

/* セルCBを得るマクロ #_GCB_# */
#define tTask_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTask_ATTR_taskAttribute( p_that )	((p_that)->_inib->taskAttribute)
#define tTask_ATTR_exceptionAttribute( p_that )	((p_that)->_inib->exceptionAttribute)
#define tTask_ATTR_priority( p_that )	((p_that)->_inib->priority)
#define tTask_ATTR_stackSize( p_that )	((p_that)->_inib->stackSize)
#define tTask_ATTR_name( p_that )	((p_that)->_inib->name)

#define tTask_GET_taskAttribute(p_that)	((p_that)->_inib->taskAttribute)
#define tTask_GET_exceptionAttribute(p_that)	((p_that)->_inib->exceptionAttribute)
#define tTask_GET_priority(p_that)	((p_that)->_inib->priority)
#define tTask_GET_stackSize(p_that)	((p_that)->_inib->stackSize)
#define tTask_GET_name(p_that)	((p_that)->_inib->name)


/* var アクセスマクロ #_VAM_# */
#define tTask_VAR_my_thread(p_that)	((p_that)->my_thread)
#define tTask_VAR_my_cond(p_that)	((p_that)->my_cond)
#define tTask_VAR_my_mutex(p_that)	((p_that)->my_mutex)
#define tTask_VAR_state(p_that)	((p_that)->state)

#define tTask_GET_my_thread(p_that)	((p_that)->my_thread)
#define tTask_SET_my_thread(p_that,val)	((p_that)->my_thread=(val))
#define tTask_GET_my_cond(p_that)	((p_that)->my_cond)
#define tTask_SET_my_cond(p_that,val)	((p_that)->my_cond=(val))
#define tTask_GET_my_mutex(p_that)	((p_that)->my_mutex)
#define tTask_SET_my_mutex(p_that,val)	((p_that)->my_mutex=(val))
#define tTask_GET_state(p_that)	((p_that)->state)
#define tTask_SET_state(p_that,val)	((p_that)->state=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tTask_cBody_main( p_that ) \
	  tTaskMain_eBody_main( \
	   &tTaskMain_CB_tab[0] )
#define tTask_cExceptionBody_main( p_that, pattern ) \
	  ((void (*)())0)()
	  /* optional no entry port joined */

#else  /* TECSFLOW */
#define tTask_cBody_main( p_that ) \
	  (p_that)->cBody.main__T( \
 )
#define tTask_cExceptionBody_main( p_that, pattern ) \
	  (p_that)->cExceptionBody.main__T( \
 (pattern) )

#endif /* TECSFLOW */
#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTask */
ER             tTask_eTask_activate_skel( const struct tag_sTask_VDES *epd);
ER             tTask_eTask_suspend_skel( const struct tag_sTask_VDES *epd);
ER             tTask_eTask_resume_skel( const struct tag_sTask_VDES *epd);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTask_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTask_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTask_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTask_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_taskAttribute   tTask_ATTR_taskAttribute( p_cellcb )
#define ATTR_exceptionAttribute tTask_ATTR_exceptionAttribute( p_cellcb )
#define ATTR_priority        tTask_ATTR_priority( p_cellcb )
#define ATTR_stackSize       tTask_ATTR_stackSize( p_cellcb )
#define ATTR_name            tTask_ATTR_name( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_my_thread        tTask_VAR_my_thread( p_cellcb )
#define VAR_my_cond          tTask_VAR_my_cond( p_cellcb )
#define VAR_my_mutex         tTask_VAR_my_mutex( p_cellcb )
#define VAR_state            tTask_VAR_state( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cBody_main( ) \
          ((void)p_cellcb, tTask_cBody_main( p_cellcb ))
#define cExceptionBody_main( pattern ) \
          ((void)p_cellcb, tTask_cExceptionBody_main( p_cellcb, pattern ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cExceptionBody_joined()\
		tTask_is_cExceptionBody_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTask_activate   tTask_eTask_activate
#define eTask_suspend    tTask_eTask_suspend
#define eTask_resume     tTask_eTask_resume

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTask_N_CELL; (i)++ ){ \
       (p_cb) = &tTask_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->state = TASK_STATE_0;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tTask_INIB_tab[(i)];

#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tTask_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tTask_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_taskAttribute
#undef tTask_ATTR_taskAttribute
#undef tTask_GET_taskAttribute
#undef ATTR_exceptionAttribute
#undef tTask_ATTR_exceptionAttribute
#undef tTask_GET_exceptionAttribute
#undef ATTR_priority
#undef tTask_ATTR_priority
#undef tTask_GET_priority
#undef ATTR_stackSize
#undef tTask_ATTR_stackSize
#undef tTask_GET_stackSize
#undef ATTR_name
#undef tTask_ATTR_name
#undef tTask_GET_name
#undef VAR_my_thread
#undef VAR_my_thread
#undef tTask_VAR_my_thread
#undef tTask_GET_my_thread
#undef tTask_SET_my_thread
#undef VAR_my_cond
#undef VAR_my_cond
#undef tTask_VAR_my_cond
#undef tTask_GET_my_cond
#undef tTask_SET_my_cond
#undef VAR_my_mutex
#undef VAR_my_mutex
#undef tTask_VAR_my_mutex
#undef tTask_GET_my_mutex
#undef tTask_SET_my_mutex
#undef VAR_state
#undef VAR_state
#undef tTask_VAR_state
#undef tTask_GET_state
#undef tTask_SET_state
#undef tTask_cBody_main
#undef cBody_main
#undef is_cExceptionBody_joined
#undef tTask_cExceptionBody_main
#undef cExceptionBody_main
#undef eTask_activate
#undef eTask_suspend
#undef eTask_resume
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tTask_TECSGENH */
