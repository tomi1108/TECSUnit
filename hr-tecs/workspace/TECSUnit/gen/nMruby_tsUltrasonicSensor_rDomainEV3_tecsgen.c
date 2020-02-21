/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tsUltrasonicSensor_tecsgen.h"
#include "nMruby_tsUltrasonicSensor_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sUltrasonicSensor_VDES rDomainEV3_UltrasonicSensor1_eUltrasonicSensor_des;

extern struct tag_sUltrasonicSensor_VDES rDomainEV3_UltrasonicSensor2_eUltrasonicSensor_des;

extern struct tag_sUltrasonicSensor_VDES rDomainEV3_UltrasonicSensor3_eUltrasonicSensor_des;

extern struct tag_sUltrasonicSensor_VDES rDomainEV3_UltrasonicSensor4_eUltrasonicSensor_des;

/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rDomainEV3_BridgeUltrasonicSensor1_CB:  BridgeUltrasonicSensor1 id=1 */
const nMruby_tsUltrasonicSensor_INIB rDomainEV3_BridgeUltrasonicSensor1_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tUltrasonicSensor_INIB_tab[0],          /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeUltrasonicSensor2_CB:  BridgeUltrasonicSensor2 id=2 */
const nMruby_tsUltrasonicSensor_INIB rDomainEV3_BridgeUltrasonicSensor2_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tUltrasonicSensor_INIB_tab[1],          /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeUltrasonicSensor3_CB:  BridgeUltrasonicSensor3 id=3 */
const nMruby_tsUltrasonicSensor_INIB rDomainEV3_BridgeUltrasonicSensor3_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tUltrasonicSensor_INIB_tab[2],          /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeUltrasonicSensor4_CB:  BridgeUltrasonicSensor4 id=4 */
const nMruby_tsUltrasonicSensor_INIB rDomainEV3_BridgeUltrasonicSensor4_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tUltrasonicSensor_INIB_tab[3],          /* cTECS #_CCP2_# */
};

/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsUltrasonicSensor_INIB  rDomainEV3_BridgeUltrasonicSensor1_INIB;
    extern nMruby_tsUltrasonicSensor_INIB  rDomainEV3_BridgeUltrasonicSensor2_INIB;
    extern nMruby_tsUltrasonicSensor_INIB  rDomainEV3_BridgeUltrasonicSensor3_INIB;
    extern nMruby_tsUltrasonicSensor_INIB  rDomainEV3_BridgeUltrasonicSensor4_INIB;
nMruby_tsUltrasonicSensor_INIB *const nMruby_tsUltrasonicSensor_INIB_ptab[] ={
    &rDomainEV3_BridgeUltrasonicSensor1_INIB,
    &rDomainEV3_BridgeUltrasonicSensor2_INIB,
    &rDomainEV3_BridgeUltrasonicSensor3_INIB,
    &rDomainEV3_BridgeUltrasonicSensor4_INIB,
};
/* CB 初期化コード #_CIC_# */
void
nMruby_tsUltrasonicSensor_CB_initialize()
{
    nMruby_tsUltrasonicSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
