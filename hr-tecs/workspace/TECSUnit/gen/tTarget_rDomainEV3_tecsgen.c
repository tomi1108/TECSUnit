/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTarget_tecsgen.h"
#include "tTarget_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTarget */
struct tag_tTarget_eTarget_DES {
    const struct tag_sTarget_VMT *vmt;
    tTarget_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTarget */
int            tTarget_eTarget_main_skel( const struct tag_sTarget_VDES *epd, int8_t a, int8_t b)
{
    struct tag_tTarget_eTarget_DES *lepd
        = (struct tag_tTarget_eTarget_DES *)epd;
    return tTarget_eTarget_main( lepd->idx, a, b );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTarget */
const struct tag_sTarget_VMT tTarget_eTarget_MT_ = {
    tTarget_eTarget_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tTarget_CB tTarget_CB_tab[1];
extern const struct tag_sTarget_VMT tTarget_eTarget_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTarget_eTarget_DES rDomainEV3_Target_eTarget_des;
const struct tag_tTarget_eTarget_DES rDomainEV3_Target_eTarget_des = {
    &tTarget_eTarget_MT_,
    &tTarget_CB_tab[0],      /* CB 3 */
};
/* CB 初期化コード #_CIC_# */
void
tTarget_CB_initialize()
{
    tTarget_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
