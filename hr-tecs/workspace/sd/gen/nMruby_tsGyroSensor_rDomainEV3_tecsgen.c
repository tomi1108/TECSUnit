/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tsGyroSensor_tecsgen.h"
#include "nMruby_tsGyroSensor_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sGyroSensor_VDES rDomainEV3_GyroSensor1_eGyroSensor_des;

extern struct tag_sGyroSensor_VDES rDomainEV3_GyroSensor2_eGyroSensor_des;

extern struct tag_sGyroSensor_VDES rDomainEV3_GyroSensor3_eGyroSensor_des;

extern struct tag_sGyroSensor_VDES rDomainEV3_GyroSensor4_eGyroSensor_des;

/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rDomainEV3_BridgeGyroSensor1_CB:  BridgeGyroSensor1 id=1 */
const nMruby_tsGyroSensor_INIB rDomainEV3_BridgeGyroSensor1_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tGyroSensor_INIB_tab[0],                /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeGyroSensor2_CB:  BridgeGyroSensor2 id=2 */
const nMruby_tsGyroSensor_INIB rDomainEV3_BridgeGyroSensor2_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tGyroSensor_INIB_tab[1],                /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeGyroSensor3_CB:  BridgeGyroSensor3 id=3 */
const nMruby_tsGyroSensor_INIB rDomainEV3_BridgeGyroSensor3_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tGyroSensor_INIB_tab[2],                /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeGyroSensor4_CB:  BridgeGyroSensor4 id=4 */
const nMruby_tsGyroSensor_INIB rDomainEV3_BridgeGyroSensor4_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tGyroSensor_INIB_tab[3],                /* cTECS #_CCP2_# */
};

/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsGyroSensor_INIB  rDomainEV3_BridgeGyroSensor1_INIB;
    extern nMruby_tsGyroSensor_INIB  rDomainEV3_BridgeGyroSensor2_INIB;
    extern nMruby_tsGyroSensor_INIB  rDomainEV3_BridgeGyroSensor3_INIB;
    extern nMruby_tsGyroSensor_INIB  rDomainEV3_BridgeGyroSensor4_INIB;
nMruby_tsGyroSensor_INIB *const nMruby_tsGyroSensor_INIB_ptab[] ={
    &rDomainEV3_BridgeGyroSensor1_INIB,
    &rDomainEV3_BridgeGyroSensor2_INIB,
    &rDomainEV3_BridgeGyroSensor3_INIB,
    &rDomainEV3_BridgeGyroSensor4_INIB,
};
/* CB 初期化コード #_CIC_# */
void
nMruby_tsGyroSensor_CB_initialize()
{
    nMruby_tsGyroSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
