/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tUltrasonicSensor_tecsgen.h"
#include "tUltrasonicSensor_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eUltrasonicSensor */
struct tag_tUltrasonicSensor_eUltrasonicSensor_DES {
    const struct tag_sUltrasonicSensor_VMT *vmt;
    tUltrasonicSensor_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eUltrasonicSensor */
int16_t        tUltrasonicSensor_eUltrasonicSensor_getDistance_skel( const struct tag_sUltrasonicSensor_VDES *epd)
{
    struct tag_tUltrasonicSensor_eUltrasonicSensor_DES *lepd
        = (struct tag_tUltrasonicSensor_eUltrasonicSensor_DES *)epd;
    return tUltrasonicSensor_eUltrasonicSensor_getDistance( lepd->idx );
}
bool_t         tUltrasonicSensor_eUltrasonicSensor_listen_skel( const struct tag_sUltrasonicSensor_VDES *epd)
{
    struct tag_tUltrasonicSensor_eUltrasonicSensor_DES *lepd
        = (struct tag_tUltrasonicSensor_eUltrasonicSensor_DES *)epd;
    return tUltrasonicSensor_eUltrasonicSensor_listen( lepd->idx );
}
void           tUltrasonicSensor_eUltrasonicSensor_initializePort_skel( const struct tag_sUltrasonicSensor_VDES *epd)
{
    struct tag_tUltrasonicSensor_eUltrasonicSensor_DES *lepd
        = (struct tag_tUltrasonicSensor_eUltrasonicSensor_DES *)epd;
    tUltrasonicSensor_eUltrasonicSensor_initializePort( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eUltrasonicSensor */
const struct tag_sUltrasonicSensor_VMT tUltrasonicSensor_eUltrasonicSensor_MT_ = {
    tUltrasonicSensor_eUltrasonicSensor_getDistance_skel,
    tUltrasonicSensor_eUltrasonicSensor_listen_skel,
    tUltrasonicSensor_eUltrasonicSensor_initializePort_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */




/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tUltrasonicSensor_INIB tUltrasonicSensor_INIB_tab[] = {
    /* cell: tUltrasonicSensor_CB_tab[0]:  UltrasonicSensor1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_1,                              /* port */
    },
    /* cell: tUltrasonicSensor_CB_tab[1]:  UltrasonicSensor2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_2,                              /* port */
    },
    /* cell: tUltrasonicSensor_CB_tab[2]:  UltrasonicSensor3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_3,                              /* port */
    },
    /* cell: tUltrasonicSensor_CB_tab[3]:  UltrasonicSensor4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_4,                              /* port */
    },
};

extern const struct tag_sUltrasonicSensor_VMT tUltrasonicSensor_eUltrasonicSensor_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tUltrasonicSensor_eUltrasonicSensor_DES rDomainEV3_UltrasonicSensor1_eUltrasonicSensor_des;
const struct tag_tUltrasonicSensor_eUltrasonicSensor_DES rDomainEV3_UltrasonicSensor1_eUltrasonicSensor_des = {
    &tUltrasonicSensor_eUltrasonicSensor_MT_,
    &tUltrasonicSensor_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_tUltrasonicSensor_eUltrasonicSensor_DES rDomainEV3_UltrasonicSensor2_eUltrasonicSensor_des;
const struct tag_tUltrasonicSensor_eUltrasonicSensor_DES rDomainEV3_UltrasonicSensor2_eUltrasonicSensor_des = {
    &tUltrasonicSensor_eUltrasonicSensor_MT_,
    &tUltrasonicSensor_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_tUltrasonicSensor_eUltrasonicSensor_DES rDomainEV3_UltrasonicSensor3_eUltrasonicSensor_des;
const struct tag_tUltrasonicSensor_eUltrasonicSensor_DES rDomainEV3_UltrasonicSensor3_eUltrasonicSensor_des = {
    &tUltrasonicSensor_eUltrasonicSensor_MT_,
    &tUltrasonicSensor_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_tUltrasonicSensor_eUltrasonicSensor_DES rDomainEV3_UltrasonicSensor4_eUltrasonicSensor_des;
const struct tag_tUltrasonicSensor_eUltrasonicSensor_DES rDomainEV3_UltrasonicSensor4_eUltrasonicSensor_des = {
    &tUltrasonicSensor_eUltrasonicSensor_MT_,
    &tUltrasonicSensor_INIB_tab[3],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
tUltrasonicSensor_CB_initialize()
{
    tUltrasonicSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
