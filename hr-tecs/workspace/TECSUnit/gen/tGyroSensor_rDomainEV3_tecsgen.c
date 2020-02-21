/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tGyroSensor_tecsgen.h"
#include "tGyroSensor_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eGyroSensor */
struct tag_tGyroSensor_eGyroSensor_DES {
    const struct tag_sGyroSensor_VMT *vmt;
    tGyroSensor_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eGyroSensor */
int16_t        tGyroSensor_eGyroSensor_getAngle_skel( const struct tag_sGyroSensor_VDES *epd)
{
    struct tag_tGyroSensor_eGyroSensor_DES *lepd
        = (struct tag_tGyroSensor_eGyroSensor_DES *)epd;
    return tGyroSensor_eGyroSensor_getAngle( lepd->idx );
}
int16_t        tGyroSensor_eGyroSensor_getRate_skel( const struct tag_sGyroSensor_VDES *epd)
{
    struct tag_tGyroSensor_eGyroSensor_DES *lepd
        = (struct tag_tGyroSensor_eGyroSensor_DES *)epd;
    return tGyroSensor_eGyroSensor_getRate( lepd->idx );
}
ER             tGyroSensor_eGyroSensor_reset_skel( const struct tag_sGyroSensor_VDES *epd)
{
    struct tag_tGyroSensor_eGyroSensor_DES *lepd
        = (struct tag_tGyroSensor_eGyroSensor_DES *)epd;
    return tGyroSensor_eGyroSensor_reset( lepd->idx );
}
float32_t      tGyroSensor_eGyroSensor_calibrate_skel( const struct tag_sGyroSensor_VDES *epd, int32_t times)
{
    struct tag_tGyroSensor_eGyroSensor_DES *lepd
        = (struct tag_tGyroSensor_eGyroSensor_DES *)epd;
    return tGyroSensor_eGyroSensor_calibrate( lepd->idx, times );
}
void           tGyroSensor_eGyroSensor_initializePort_skel( const struct tag_sGyroSensor_VDES *epd)
{
    struct tag_tGyroSensor_eGyroSensor_DES *lepd
        = (struct tag_tGyroSensor_eGyroSensor_DES *)epd;
    tGyroSensor_eGyroSensor_initializePort( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eGyroSensor */
const struct tag_sGyroSensor_VMT tGyroSensor_eGyroSensor_MT_ = {
    tGyroSensor_eGyroSensor_getAngle_skel,
    tGyroSensor_eGyroSensor_getRate_skel,
    tGyroSensor_eGyroSensor_reset_skel,
    tGyroSensor_eGyroSensor_calibrate_skel,
    tGyroSensor_eGyroSensor_initializePort_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */




/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tGyroSensor_INIB tGyroSensor_INIB_tab[] = {
    /* cell: tGyroSensor_CB_tab[0]:  GyroSensor1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_1,                              /* port */
    },
    /* cell: tGyroSensor_CB_tab[1]:  GyroSensor2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_2,                              /* port */
    },
    /* cell: tGyroSensor_CB_tab[2]:  GyroSensor3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_3,                              /* port */
    },
    /* cell: tGyroSensor_CB_tab[3]:  GyroSensor4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_4,                              /* port */
    },
};

extern const struct tag_sGyroSensor_VMT tGyroSensor_eGyroSensor_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tGyroSensor_eGyroSensor_DES rDomainEV3_GyroSensor1_eGyroSensor_des;
const struct tag_tGyroSensor_eGyroSensor_DES rDomainEV3_GyroSensor1_eGyroSensor_des = {
    &tGyroSensor_eGyroSensor_MT_,
    &tGyroSensor_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_tGyroSensor_eGyroSensor_DES rDomainEV3_GyroSensor2_eGyroSensor_des;
const struct tag_tGyroSensor_eGyroSensor_DES rDomainEV3_GyroSensor2_eGyroSensor_des = {
    &tGyroSensor_eGyroSensor_MT_,
    &tGyroSensor_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_tGyroSensor_eGyroSensor_DES rDomainEV3_GyroSensor3_eGyroSensor_des;
const struct tag_tGyroSensor_eGyroSensor_DES rDomainEV3_GyroSensor3_eGyroSensor_des = {
    &tGyroSensor_eGyroSensor_MT_,
    &tGyroSensor_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_tGyroSensor_eGyroSensor_DES rDomainEV3_GyroSensor4_eGyroSensor_des;
const struct tag_tGyroSensor_eGyroSensor_DES rDomainEV3_GyroSensor4_eGyroSensor_des = {
    &tGyroSensor_eGyroSensor_MT_,
    &tGyroSensor_INIB_tab[3],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
tGyroSensor_CB_initialize()
{
    tGyroSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
