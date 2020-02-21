/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltype_TECSGEN_H
#define tCelltype_TECSGEN_H

/*
 * celltype          :  tCelltype
 * global name       :  tCelltype
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCelltype_INIB {
    /* attribute(RO) #_ATO_# */ 
    struct obj     inst;
}  tCelltype_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCelltype_CB_tab           tCelltype_INIB_tab
#define tCelltype_CB               tCelltype_INIB
#define tag_tCelltype_CB           tag_tCelltype_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tCelltype_INIB  tCelltype_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCelltype_INIB *tCelltype_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltype_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tCelltype_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCelltype_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCelltype_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCelltype_ATTR_inst( p_that )	((p_that)->inst)

#define tCelltype_GET_inst(p_that)	((p_that)->inst)



#ifndef TECSFLOW
#else  /* TECSFLOW */
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
#define VALID_IDX(IDX)  tCelltype_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltype_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltype_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltype_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_inst            tCelltype_ATTR_inst( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCelltype_N_CELL; (i)++ ){ \
       (p_cb) = &tCelltype_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype_TECSGENH */
