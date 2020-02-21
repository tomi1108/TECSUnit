/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tBalancer_tecsgen.h"
#include "tBalancer_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBalancer */
struct tag_tBalancer_eBalancer_DES {
    const struct tag_sBalancer_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBalancer */
void           tBalancer_eBalancer_control_skel( const struct tag_sBalancer_VDES *epd, int16_t forward, int16_t turn, int16_t gyro, int16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, int16_t battery, int8_t* pwm_l, int8_t* pwm_r, int32_t backlashhalf)
{
    tBalancer_eBalancer_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf );
}
void           tBalancer_eBalancer_init_skel( const struct tag_sBalancer_VDES *epd)
{
    tBalancer_eBalancer_init( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBalancer */
const struct tag_sBalancer_VMT tBalancer_eBalancer_MT_ = {
    tBalancer_eBalancer_control_skel,
    tBalancer_eBalancer_init_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
extern const struct tag_sBalancer_VMT tBalancer_eBalancer_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tBalancer_eBalancer_DES rDomainEV3_Balancer_eBalancer_des;
const struct tag_tBalancer_eBalancer_DES rDomainEV3_Balancer_eBalancer_des = {
    &tBalancer_eBalancer_MT_,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tBalancer_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
