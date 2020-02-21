/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tMrubyVM_TECSGEN_H
#define nMruby_tMrubyVM_TECSGEN_H

/*
 * celltype          :  tMrubyVM
 * global name       :  nMruby_tMrubyVM
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
#include "nMruby_sMrubyVM_tecsgen.h"
#include "nMruby_sInitializeBridge_tecsgen.h"
#include "sMalloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nMruby_tMrubyVM_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    const uint8_t* irep;
}  nMruby_tMrubyVM_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_nMruby_tMrubyVM_CB {
    nMruby_tMrubyVM_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    mrb_irep*      var_irep;
    mrb_state*     mrb;
    struct RProc*  rproc;
}  nMruby_tMrubyVM_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nMruby_tMrubyVM_CB  nMruby_tMrubyVM_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_nMruby_tMrubyVM_CB *nMruby_tMrubyVM_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nMruby_sMrubyVM */
bool_t       nMruby_tMrubyVM_eMrubyVM_initialize(nMruby_tMrubyVM_IDX idx);
bool_t       nMruby_tMrubyVM_eMrubyVM_run(nMruby_tMrubyVM_IDX idx);
void         nMruby_tMrubyVM_eMrubyVM_funcall(nMruby_tMrubyVM_IDX idx, const char_t* name);
void         nMruby_tMrubyVM_eMrubyVM_finalize(nMruby_tMrubyVM_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tMrubyVM_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nMruby_tTECSInitializer_tecsgen.h"
#include "tTLSFMalloc_tecsgen.h"
#ifdef  nMruby_tMrubyVM_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tMrubyVM_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tMrubyVM_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tMrubyVM_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tMrubyVM_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define nMruby_tMrubyVM_is_cInit_joined(p_that) \
	  (1)

/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tMrubyVM_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nMruby_tMrubyVM_ATTR_irep( p_that )	((p_that)->_inib->irep)

#define nMruby_tMrubyVM_GET_irep(p_that)	((p_that)->_inib->irep)


/* var アクセスマクロ #_VAM_# */
#define nMruby_tMrubyVM_VAR_var_irep(p_that)	((p_that)->var_irep)
#define nMruby_tMrubyVM_VAR_mrb(p_that)	((p_that)->mrb)
#define nMruby_tMrubyVM_VAR_rproc(p_that)	((p_that)->rproc)

#define nMruby_tMrubyVM_GET_var_irep(p_that)	((p_that)->var_irep)
#define nMruby_tMrubyVM_SET_var_irep(p_that,val)	((p_that)->var_irep=(val))
#define nMruby_tMrubyVM_GET_mrb(p_that)	((p_that)->mrb)
#define nMruby_tMrubyVM_SET_mrb(p_that,val)	((p_that)->mrb=(val))
#define nMruby_tMrubyVM_GET_rproc(p_that)	((p_that)->rproc)
#define nMruby_tMrubyVM_SET_rproc(p_that,val)	((p_that)->rproc=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nMruby_tMrubyVM_cInit_initializeBridge( p_that, mrb ) \
	  nMruby_tTECSInitializer_eInitialize_initializeBridge( \
	   &nMruby_tTECSInitializer_CB_tab[0], (mrb) )
#define nMruby_tMrubyVM_cMalloc_initializeMemoryPool( p_that ) \
	  tTLSFMalloc_eMalloc_initializeMemoryPool( \
	   &tTLSFMalloc_INIB_tab[0] )
#define nMruby_tMrubyVM_cMalloc_calloc( p_that, nelem, elem_size ) \
	  tTLSFMalloc_eMalloc_calloc( \
	   &tTLSFMalloc_INIB_tab[0], (nelem), (elem_size) )
#define nMruby_tMrubyVM_cMalloc_malloc( p_that, size ) \
	  tTLSFMalloc_eMalloc_malloc( \
	   &tTLSFMalloc_INIB_tab[0], (size) )
#define nMruby_tMrubyVM_cMalloc_realloc( p_that, ptr, new_size ) \
	  tTLSFMalloc_eMalloc_realloc( \
	   &tTLSFMalloc_INIB_tab[0], (ptr), (new_size) )
#define nMruby_tMrubyVM_cMalloc_free( p_that, ptr ) \
	  tTLSFMalloc_eMalloc_free( \
	   &tTLSFMalloc_INIB_tab[0], (ptr) )

#else  /* TECSFLOW */
#define nMruby_tMrubyVM_cInit_initializeBridge( p_that, mrb ) \
	  (p_that)->cInit.initializeBridge__T( \
 (mrb) )
#define nMruby_tMrubyVM_cMalloc_initializeMemoryPool( p_that ) \
	  (p_that)->cMalloc.initializeMemoryPool__T( \
 )
#define nMruby_tMrubyVM_cMalloc_calloc( p_that, nelem, elem_size ) \
	  (p_that)->cMalloc.calloc__T( \
 (nelem), (elem_size) )
#define nMruby_tMrubyVM_cMalloc_malloc( p_that, size ) \
	  (p_that)->cMalloc.malloc__T( \
 (size) )
#define nMruby_tMrubyVM_cMalloc_realloc( p_that, ptr, new_size ) \
	  (p_that)->cMalloc.realloc__T( \
 (ptr), (new_size) )
#define nMruby_tMrubyVM_cMalloc_free( p_that, ptr ) \
	  (p_that)->cMalloc.free__T( \
 (ptr) )

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
#define VALID_IDX(IDX)  nMruby_tMrubyVM_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tMrubyVM_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tMrubyVM_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tMrubyVM_IDX

#define tMrubyVM_IDX  nMruby_tMrubyVM_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_irep            nMruby_tMrubyVM_ATTR_irep( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_var_irep         nMruby_tMrubyVM_VAR_var_irep( p_cellcb )
#define VAR_mrb              nMruby_tMrubyVM_VAR_mrb( p_cellcb )
#define VAR_rproc            nMruby_tMrubyVM_VAR_rproc( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cInit_initializeBridge( mrb ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cInit_initializeBridge( p_cellcb, mrb ))
#define cMalloc_initializeMemoryPool( ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_initializeMemoryPool( p_cellcb ))
#define cMalloc_calloc( nelem, elem_size ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_calloc( p_cellcb, nelem, elem_size ))
#define cMalloc_malloc( size ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_malloc( p_cellcb, size ))
#define cMalloc_realloc( ptr, new_size ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_realloc( p_cellcb, ptr, new_size ))
#define cMalloc_free( ptr ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_free( p_cellcb, ptr ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cInit_joined()\
		nMruby_tMrubyVM_is_cInit_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMrubyVM_initialize nMruby_tMrubyVM_eMrubyVM_initialize
#define eMrubyVM_run     nMruby_tMrubyVM_eMrubyVM_run
#define eMrubyVM_funcall nMruby_tMrubyVM_eMrubyVM_funcall
#define eMrubyVM_finalize nMruby_tMrubyVM_eMrubyVM_finalize

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tMrubyVM_N_CELL; (i)++ ){ \
       (p_cb) = &nMruby_tMrubyVM_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &nMruby_tMrubyVM_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tMrubyVM_TECSGENH */
