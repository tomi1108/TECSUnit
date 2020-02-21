/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTarget2_tecsgen.h"
#include "tTarget2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTarget2 */
struct tag_tTarget2_eTarget2_DES {
    const struct tag_sTarget2_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTarget2 */
int            tTarget2_eTarget2_add_skel( const struct tag_sTarget2_VDES *epd, int arg1, int arg2)
{
    struct tag_tTarget2_eTarget2_DES *lepd
        = (struct tag_tTarget2_eTarget2_DES *)epd;
    return tTarget2_eTarget2_add( lepd->idx, arg1, arg2 );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTarget2 */
const struct tag_sTarget2_VMT tTarget2_eTarget2_MT_ = {
    tTarget2_eTarget2_add_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTarget2_eTarget2_DES Target2_eTarget2_des;
const struct tag_tTarget2_eTarget2_DES Target2_eTarget2_des = {
    &tTarget2_eTarget2_MT_,
    0,
};
