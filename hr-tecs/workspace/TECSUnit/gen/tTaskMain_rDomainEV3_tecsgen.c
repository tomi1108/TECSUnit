/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTaskMain_tecsgen.h"
#include "tTaskMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tTaskMain_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tTaskMain_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tTaskMain_eBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tTaskMain_eBody_DES *lepd
        = (struct tag_tTaskMain_eBody_DES *)epd;
    tTaskMain_eBody_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
const struct tag_sTaskBody_VMT tTaskMain_eBody_MT_ = {
    tTaskMain_eBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char_t tTaskMain_TaskMain_CB_target_path_INIT[64];
char_t tTaskMain_TaskMain_CB_cell_path_INIT[64];
char_t tTaskMain_TaskMain_CB_region_path_INIT[64];
char_t tTaskMain_TaskMain_CB_region_cell_path_INIT[64];
char_t tTaskMain_TaskMain_CB_celltype_path_INIT[64];
char_t tTaskMain_TaskMain_CB_var_path_INIT[64];
char_t tTaskMain_TaskMain_CB_entry_path_INIT[64];
char_t tTaskMain_TaskMain_CB_entry_path_tmp_INIT[64];
char_t tTaskMain_TaskMain_CB_signature_path_INIT[64];
char_t tTaskMain_TaskMain_CB_function_path_INIT[64];
char_t tTaskMain_TaskMain_CB_function_path_tmp_INIT[64];
char_t tTaskMain_TaskMain_CB_return_type_INIT[64];
struct tecsunit_obj tTaskMain_TaskMain_CB_arg_struct_INIT[8];
struct cond_obj tTaskMain_TaskMain_CB_pre_cond_INIT[8];
struct cond_obj tTaskMain_TaskMain_CB_post_cond_INIT[8];
/* セル INIB #_INIB_# */
tTaskMain_INIB tTaskMain_INIB_tab[] = {
    /* cell: tTaskMain_CB_tab[0]:  TaskMain id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        64,                                      /* NAME_LEN */
        8,                                       /* DIM */
        100,                                     /* N_TARGET */
        tTaskMain_TaskMain_CB_target_path_INIT,  /* target_path */
        tTaskMain_TaskMain_CB_cell_path_INIT,    /* cell_path */
        tTaskMain_TaskMain_CB_region_path_INIT,  /* region_path */
        tTaskMain_TaskMain_CB_region_cell_path_INIT, /* region_cell_path */
        tTaskMain_TaskMain_CB_celltype_path_INIT, /* celltype_path */
        tTaskMain_TaskMain_CB_var_path_INIT,     /* var_path */
        tTaskMain_TaskMain_CB_entry_path_INIT,   /* entry_path */
        tTaskMain_TaskMain_CB_entry_path_tmp_INIT, /* entry_path_tmp */
        tTaskMain_TaskMain_CB_signature_path_INIT, /* signature_path */
        tTaskMain_TaskMain_CB_function_path_INIT, /* function_path */
        tTaskMain_TaskMain_CB_function_path_tmp_INIT, /* function_path_tmp */
        tTaskMain_TaskMain_CB_return_type_INIT,  /* return_type */
        tTaskMain_TaskMain_CB_arg_struct_INIT,   /* arg_struct */
        tTaskMain_TaskMain_CB_pre_cond_INIT,     /* pre_cond */
        tTaskMain_TaskMain_CB_post_cond_INIT,    /* post_cond */
    },
};

/* セル CB #_CB_# */
struct tag_tTaskMain_CB tTaskMain_CB_tab[1];
extern const struct tag_sTaskBody_VMT tTaskMain_eBody_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTaskMain_eBody_DES rDomainEV3_TaskMain_eBody_des;
const struct tag_tTaskMain_eBody_DES rDomainEV3_TaskMain_eBody_des = {
    &tTaskMain_eBody_MT_,
    &tTaskMain_CB_tab[0],      /* CB 3 */
};
/* CB 初期化コード #_CIC_# */
void
tTaskMain_CB_initialize()
{
    tTaskMain_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
