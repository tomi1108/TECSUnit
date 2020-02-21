/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tJSMN_TECSGEN_H
#define tJSMN_TECSGEN_H

/*
 * celltype          :  tJSMN
 * global name       :  tJSMN
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
#include "sJSMN_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tJSMN_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        LEN;
    int16_t        TMP_LEN;
    char_t*        key_cell;
    char_t*        key_entry;
    char_t*        key_function;
    char_t*        key_arg;
    char_t*        key_exp;
    char_t*        json_str;
    char_t*        tmp_str;
}  tJSMN_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tJSMN_CB {
    tJSMN_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int            counter;
}  tJSMN_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tJSMN_CB  tJSMN_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tJSMN_CB *tJSMN_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sJSMN */
ER           tJSMN_eJSMN_json_open(tJSMN_IDX idx);
ER           tJSMN_eJSMN_json_parse_path(tJSMN_IDX idx, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr);
ER           tJSMN_eJSMN_json_parse_arg(tJSMN_IDX idx, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tJSMN_ID_BASE               (1)  /* ID のベース  #_NIDB_# */
#define tJSMN_N_CELL                (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tJSMN_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tJSMN_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tJSMN_ATTR_LEN( p_that )	((p_that)->_inib->LEN)
#define tJSMN_ATTR_TMP_LEN( p_that )	((p_that)->_inib->TMP_LEN)
#define tJSMN_ATTR_key_cell( p_that )	((p_that)->_inib->key_cell)
#define tJSMN_ATTR_key_entry( p_that )	((p_that)->_inib->key_entry)
#define tJSMN_ATTR_key_function( p_that )	((p_that)->_inib->key_function)
#define tJSMN_ATTR_key_arg( p_that )	((p_that)->_inib->key_arg)
#define tJSMN_ATTR_key_exp( p_that )	((p_that)->_inib->key_exp)

#define tJSMN_GET_LEN(p_that)	((p_that)->_inib->LEN)
#define tJSMN_GET_TMP_LEN(p_that)	((p_that)->_inib->TMP_LEN)
#define tJSMN_GET_key_cell(p_that)	((p_that)->_inib->key_cell)
#define tJSMN_GET_key_entry(p_that)	((p_that)->_inib->key_entry)
#define tJSMN_GET_key_function(p_that)	((p_that)->_inib->key_function)
#define tJSMN_GET_key_arg(p_that)	((p_that)->_inib->key_arg)
#define tJSMN_GET_key_exp(p_that)	((p_that)->_inib->key_exp)


/* var アクセスマクロ #_VAM_# */
#define tJSMN_VAR_json_str(p_that)	((p_that)->_inib->json_str)
#define tJSMN_VAR_tmp_str(p_that)	((p_that)->_inib->tmp_str)
#define tJSMN_VAR_counter(p_that)	((p_that)->counter)

#define tJSMN_GET_json_str(p_that)	((p_that)->json_str)
#define tJSMN_SET_json_str(p_that,val)	((p_that)->json_str=(val))
#define tJSMN_GET_tmp_str(p_that)	((p_that)->tmp_str)
#define tJSMN_SET_tmp_str(p_that,val)	((p_that)->tmp_str=(val))
#define tJSMN_GET_counter(p_that)	((p_that)->counter)
#define tJSMN_SET_counter(p_that,val)	((p_that)->counter=(val))

#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eJSMN */
ER             tJSMN_eJSMN_json_open_skel( const struct tag_sJSMN_VDES *epd);
ER             tJSMN_eJSMN_json_parse_path_skel( const struct tag_sJSMN_VDES *epd, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr);
ER             tJSMN_eJSMN_json_parse_arg_skel( const struct tag_sJSMN_VDES *epd, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tJSMN_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tJSMN_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tJSMN_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tJSMN_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_LEN             tJSMN_ATTR_LEN( p_cellcb )
#define ATTR_TMP_LEN         tJSMN_ATTR_TMP_LEN( p_cellcb )
#define ATTR_key_cell        tJSMN_ATTR_key_cell( p_cellcb )
#define ATTR_key_entry       tJSMN_ATTR_key_entry( p_cellcb )
#define ATTR_key_function    tJSMN_ATTR_key_function( p_cellcb )
#define ATTR_key_arg         tJSMN_ATTR_key_arg( p_cellcb )
#define ATTR_key_exp         tJSMN_ATTR_key_exp( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_json_str         tJSMN_VAR_json_str( p_cellcb )
#define VAR_tmp_str          tJSMN_VAR_tmp_str( p_cellcb )
#define VAR_counter          tJSMN_VAR_counter( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eJSMN_json_open  tJSMN_eJSMN_json_open
#define eJSMN_json_parse_path tJSMN_eJSMN_json_parse_path
#define eJSMN_json_parse_arg tJSMN_eJSMN_json_parse_arg

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tJSMN_N_CELL; (i)++ ){ \
       (p_cb) = &tJSMN_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->counter = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tJSMN_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tJSMN_TECSGENH */
