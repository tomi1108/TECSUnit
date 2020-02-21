/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tJSMN_tecsgen.h"
#include "tJSMN_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eJSMN */
struct tag_tJSMN_eJSMN_DES {
    const struct tag_sJSMN_VMT *vmt;
    tJSMN_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eJSMN */
ER             tJSMN_eJSMN_json_open_skel( const struct tag_sJSMN_VDES *epd)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_open( lepd->idx );
}
ER             tJSMN_eJSMN_json_parse_path_skel( const struct tag_sJSMN_VDES *epd, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_parse_path( lepd->idx, c_path, e_path, f_path, target_num, btr );
}
ER             tJSMN_eJSMN_json_parse_arg_skel( const struct tag_sJSMN_VDES *epd, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_parse_arg( lepd->idx, arguments, exp_val, arg_num, target_num, btr );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eJSMN */
const struct tag_sJSMN_VMT tJSMN_eJSMN_MT_ = {
    tJSMN_eJSMN_json_open_skel,
    tJSMN_eJSMN_json_parse_path_skel,
    tJSMN_eJSMN_json_parse_arg_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char_t tJSMN_JSMN_CB_json_str_INIT[1024];
char_t tJSMN_JSMN_CB_tmp_str_INIT[32];
/* セル INIB #_INIB_# */
tJSMN_INIB tJSMN_INIB_tab[] = {
    /* cell: tJSMN_CB_tab[0]:  JSMN id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1024,                                    /* LEN */
        32,                                      /* TMP_LEN */
        "cell",                                  /* key_cell */
        "entry",                                 /* key_entry */
        "function",                              /* key_function */
        "argument",                              /* key_arg */
        "exp_val",                               /* key_exp */
        tJSMN_JSMN_CB_json_str_INIT,             /* json_str */
        tJSMN_JSMN_CB_tmp_str_INIT,              /* tmp_str */
    },
};

/* セル CB #_CB_# */
struct tag_tJSMN_CB tJSMN_CB_tab[] = {
    /* cell: tJSMN_CB_tab[0]:  JSMN id=1 */
    {
        &tJSMN_INIB_tab[0],                      /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* counter */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tJSMN_eJSMN_DES rTEMP_JSMN_eJSMN_des;
const struct tag_tJSMN_eJSMN_DES rTEMP_JSMN_eJSMN_des = {
    &tJSMN_eJSMN_MT_,
    &tJSMN_CB_tab[0],      /* CB 3 */
};
