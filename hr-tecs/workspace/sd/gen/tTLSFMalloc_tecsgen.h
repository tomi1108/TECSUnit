/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTLSFMalloc_TECSGEN_H
#define tTLSFMalloc_TECSGEN_H

/*
 * celltype          :  tTLSFMalloc
 * global name       :  tTLSFMalloc
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
#include "sMalloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTLSFMalloc_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    size_t         memoryPoolSize;
    uint64_t*      pool;
}  tTLSFMalloc_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTLSFMalloc_CB_tab           tTLSFMalloc_INIB_tab
#define tTLSFMalloc_CB               tTLSFMalloc_INIB
#define tag_tTLSFMalloc_CB           tag_tTLSFMalloc_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tTLSFMalloc_INIB  tTLSFMalloc_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTLSFMalloc_INIB *tTLSFMalloc_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMalloc */
Inline int          tTLSFMalloc_eMalloc_initializeMemoryPool(tTLSFMalloc_IDX idx);
Inline void*        tTLSFMalloc_eMalloc_calloc(tTLSFMalloc_IDX idx, size_t nelem, size_t elem_size);
Inline void*        tTLSFMalloc_eMalloc_malloc(tTLSFMalloc_IDX idx, size_t size);
Inline void*        tTLSFMalloc_eMalloc_realloc(tTLSFMalloc_IDX idx, const void* ptr, size_t new_size);
Inline void         tTLSFMalloc_eMalloc_free(tTLSFMalloc_IDX idx, const void* ptr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#define tTLSFMalloc_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tTLSFMalloc_N_CELL          (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTLSFMalloc_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTLSFMalloc_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTLSFMalloc_ATTR_memoryPoolSize( p_that )	((p_that)->memoryPoolSize)

#define tTLSFMalloc_GET_memoryPoolSize(p_that)	((p_that)->memoryPoolSize)


/* var アクセスマクロ #_VAM_# */
#define tTLSFMalloc_VAR_pool(p_that)	((p_that)->pool)

#define tTLSFMalloc_GET_pool(p_that)	((p_that)->pool)
#define tTLSFMalloc_SET_pool(p_that,val)	((p_that)->pool=(val))

#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTLSFMalloc_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTLSFMalloc_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTLSFMalloc_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTLSFMalloc_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_memoryPoolSize  tTLSFMalloc_ATTR_memoryPoolSize( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_pool             tTLSFMalloc_VAR_pool( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMalloc_initializeMemoryPool tTLSFMalloc_eMalloc_initializeMemoryPool
#define eMalloc_calloc   tTLSFMalloc_eMalloc_calloc
#define eMalloc_malloc   tTLSFMalloc_eMalloc_malloc
#define eMalloc_realloc  tTLSFMalloc_eMalloc_realloc
#define eMalloc_free     tTLSFMalloc_eMalloc_free

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTLSFMalloc_N_CELL; (i)++ ){ \
       (p_cb) = &tTLSFMalloc_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tTLSFMalloc_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tTLSFMalloc_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_memoryPoolSize
#undef tTLSFMalloc_ATTR_memoryPoolSize
#undef tTLSFMalloc_GET_memoryPoolSize
#undef VAR_pool
#undef VAR_pool
#undef tTLSFMalloc_VAR_pool
#undef tTLSFMalloc_GET_pool
#undef tTLSFMalloc_SET_pool
#undef eMalloc_initializeMemoryPool
#undef eMalloc_calloc
#undef eMalloc_malloc
#undef eMalloc_realloc
#undef eMalloc_free
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tTLSFMalloc_TECSGENH */
