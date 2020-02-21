/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tButton_tecsgen.h"
#include "tButton_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eButton */
struct tag_tButton_eButton_DES {
    const struct tag_sButton_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eButton */
bool_t         tButton_eButton_isPressed_skel( const struct tag_sButton_VDES *epd, button_t button)
{
    struct tag_tButton_eButton_DES *lepd
        = (struct tag_tButton_eButton_DES *)epd;
    return tButton_eButton_isPressed( lepd->idx, button );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eButton */
const struct tag_sButton_VMT tButton_eButton_MT_ = {
    tButton_eButton_isPressed_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
extern const struct tag_sButton_VMT tButton_eButton_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tButton_eButton_DES rDomainEV3_Button_eButton_des;
const struct tag_tButton_eButton_DES rDomainEV3_Button_eButton_des = {
    &tButton_eButton_MT_,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tButton_CB_initialize()
{
    tButton_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
