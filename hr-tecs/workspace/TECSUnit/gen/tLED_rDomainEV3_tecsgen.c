/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tLED_tecsgen.h"
#include "tLED_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eLED */
struct tag_tLED_eLED_DES {
    const struct tag_sLED_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eLED */
ER             tLED_eLED_setColor_skel( const struct tag_sLED_VDES *epd, ledcolor_t color)
{
    struct tag_tLED_eLED_DES *lepd
        = (struct tag_tLED_eLED_DES *)epd;
    return tLED_eLED_setColor( lepd->idx, color );
}
ER             tLED_eLED_off_skel( const struct tag_sLED_VDES *epd)
{
    struct tag_tLED_eLED_DES *lepd
        = (struct tag_tLED_eLED_DES *)epd;
    return tLED_eLED_off( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eLED */
const struct tag_sLED_VMT tLED_eLED_MT_ = {
    tLED_eLED_setColor_skel,
    tLED_eLED_off_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
extern const struct tag_sLED_VMT tLED_eLED_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tLED_eLED_DES rDomainEV3_LED_eLED_des;
const struct tag_tLED_eLED_DES rDomainEV3_LED_eLED_des = {
    &tLED_eLED_MT_,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tLED_CB_initialize()
{
    tLED_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
