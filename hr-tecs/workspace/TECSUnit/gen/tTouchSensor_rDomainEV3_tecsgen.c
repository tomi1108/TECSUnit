/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTouchSensor_tecsgen.h"
#include "tTouchSensor_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTouchSensor */
struct tag_tTouchSensor_eTouchSensor_DES {
    const struct tag_sTouchSensor_VMT *vmt;
    tTouchSensor_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTouchSensor */
bool_t         tTouchSensor_eTouchSensor_isPressed_skel( const struct tag_sTouchSensor_VDES *epd)
{
    struct tag_tTouchSensor_eTouchSensor_DES *lepd
        = (struct tag_tTouchSensor_eTouchSensor_DES *)epd;
    return tTouchSensor_eTouchSensor_isPressed( lepd->idx );
}
void           tTouchSensor_eTouchSensor_initializePort_skel( const struct tag_sTouchSensor_VDES *epd)
{
    struct tag_tTouchSensor_eTouchSensor_DES *lepd
        = (struct tag_tTouchSensor_eTouchSensor_DES *)epd;
    tTouchSensor_eTouchSensor_initializePort( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTouchSensor */
const struct tag_sTouchSensor_VMT tTouchSensor_eTouchSensor_MT_ = {
    tTouchSensor_eTouchSensor_isPressed_skel,
    tTouchSensor_eTouchSensor_initializePort_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */




/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTouchSensor_INIB tTouchSensor_INIB_tab[] = {
    /* cell: tTouchSensor_CB_tab[0]:  TouchSensor1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_1,                              /* port */
    },
    /* cell: tTouchSensor_CB_tab[1]:  TouchSensor2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_2,                              /* port */
    },
    /* cell: tTouchSensor_CB_tab[2]:  TouchSensor3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_3,                              /* port */
    },
    /* cell: tTouchSensor_CB_tab[3]:  TouchSensor4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_4,                              /* port */
    },
};

extern const struct tag_sTouchSensor_VMT tTouchSensor_eTouchSensor_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTouchSensor_eTouchSensor_DES rDomainEV3_TouchSensor1_eTouchSensor_des;
const struct tag_tTouchSensor_eTouchSensor_DES rDomainEV3_TouchSensor1_eTouchSensor_des = {
    &tTouchSensor_eTouchSensor_MT_,
    &tTouchSensor_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_tTouchSensor_eTouchSensor_DES rDomainEV3_TouchSensor2_eTouchSensor_des;
const struct tag_tTouchSensor_eTouchSensor_DES rDomainEV3_TouchSensor2_eTouchSensor_des = {
    &tTouchSensor_eTouchSensor_MT_,
    &tTouchSensor_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_tTouchSensor_eTouchSensor_DES rDomainEV3_TouchSensor3_eTouchSensor_des;
const struct tag_tTouchSensor_eTouchSensor_DES rDomainEV3_TouchSensor3_eTouchSensor_des = {
    &tTouchSensor_eTouchSensor_MT_,
    &tTouchSensor_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_tTouchSensor_eTouchSensor_DES rDomainEV3_TouchSensor4_eTouchSensor_des;
const struct tag_tTouchSensor_eTouchSensor_DES rDomainEV3_TouchSensor4_eTouchSensor_des = {
    &tTouchSensor_eTouchSensor_MT_,
    &tTouchSensor_INIB_tab[3],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
tTouchSensor_CB_initialize()
{
    tTouchSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
