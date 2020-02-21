/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTECSUnit_tecsgen.h"
#include "tTECSUnit_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eUnit */
struct tag_tTECSUnit_eUnit_DES {
    const struct tag_sTECSUnit_VMT *vmt;
    tTECSUnit_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eUnit */
void           tTECSUnit_eUnit_main_skel( const struct tag_sTECSUnit_VDES *epd, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val)
{
    struct tag_tTECSUnit_eUnit_DES *lepd
        = (struct tag_tTECSUnit_eUnit_DES *)epd;
    tTECSUnit_eUnit_main( lepd->idx, cell_path, entry_path, signature_path, function_path, arguments, exp_val );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eUnit */
const struct tag_sTECSUnit_VMT tTECSUnit_eUnit_MT_ = {
    tTECSUnit_eUnit_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char tTECSUnit_TECSUnit_CB_cell_entry_INIT[256];
/* セル INIB #_INIB_# */
tTECSUnit_INIB tTECSUnit_INIB_tab[] = {
    /* cell: tTECSUnit_CB_tab[0]:  TECSUnit id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        256,                                     /* LEN */
        tTECSUnit_TECSUnit_CB_cell_entry_INIT,   /* cell_entry */
    },
};

/* セル CB #_CB_# */
struct tag_tTECSUnit_CB tTECSUnit_CB_tab[] = {
    /* cell: tTECSUnit_CB_tab[0]:  TECSUnit id=1 */
    {
        &tTECSUnit_INIB_tab[0],                  /* _inib */
        /* call port (CB_DYNAMIC) #_CP_# */ 
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
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        /* entry port #_EP_# */ 
        /* var */ 
        {},                                      /* out_int */
        {},                                      /* out_double */
        {},                                      /* out_char */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTECSUnit_eUnit_DES rTEMP_TECSUnit_eUnit_des;
const struct tag_tTECSUnit_eUnit_DES rTEMP_TECSUnit_eUnit_des = {
    &tTECSUnit_eUnit_MT_,
    &tTECSUnit_CB_tab[0],      /* CB 3 */
};
