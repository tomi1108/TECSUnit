/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tBattery_tecsgen.h"
#include "tBattery_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBattery */
struct tag_tBattery_eBattery_DES {
    const struct tag_sBattery_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBattery */
int            tBattery_eBattery_current_mA_skel( const struct tag_sBattery_VDES *epd)
{
    struct tag_tBattery_eBattery_DES *lepd
        = (struct tag_tBattery_eBattery_DES *)epd;
    return tBattery_eBattery_current_mA( lepd->idx );
}
int            tBattery_eBattery_voltage_mV_skel( const struct tag_sBattery_VDES *epd)
{
    struct tag_tBattery_eBattery_DES *lepd
        = (struct tag_tBattery_eBattery_DES *)epd;
    return tBattery_eBattery_voltage_mV( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBattery */
const struct tag_sBattery_VMT tBattery_eBattery_MT_ = {
    tBattery_eBattery_current_mA_skel,
    tBattery_eBattery_voltage_mV_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
extern const struct tag_sBattery_VMT tBattery_eBattery_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tBattery_eBattery_DES rDomainEV3_Battery_eBattery_des;
const struct tag_tBattery_eBattery_DES rDomainEV3_Battery_eBattery_des = {
    &tBattery_eBattery_MT_,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tBattery_CB_initialize()
{
    tBattery_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
