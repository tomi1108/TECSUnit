/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTarget1_tecsgen.h"
#include "tTarget1_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTarget1 */
struct tag_tTarget1_eTarget1_DES {
    const struct tag_sTarget1_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTarget1 */
int            tTarget1_eTarget1_double_skel( const struct tag_sTarget1_VDES *epd, int arg)
{
    struct tag_tTarget1_eTarget1_DES *lepd
        = (struct tag_tTarget1_eTarget1_DES *)epd;
    return tTarget1_eTarget1_double( lepd->idx, arg );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTarget1 */
const struct tag_sTarget1_VMT tTarget1_eTarget1_MT_ = {
    tTarget1_eTarget1_double_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTarget1_eTarget1_DES Target1_eTarget1_des;
const struct tag_tTarget1_eTarget1_DES Target1_eTarget1_des = {
    &tTarget1_eTarget1_MT_,
    0,
};
