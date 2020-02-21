/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tsColorSensor_tecsgen.h"
#include "nMruby_tsColorSensor_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sColorSensor_VDES rDomainEV3_ColorSensor1_eColorSensor_des;

extern struct tag_sColorSensor_VDES rDomainEV3_ColorSensor2_eColorSensor_des;

extern struct tag_sColorSensor_VDES rDomainEV3_ColorSensor3_eColorSensor_des;

extern struct tag_sColorSensor_VDES rDomainEV3_ColorSensor4_eColorSensor_des;

/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rDomainEV3_BridgeColorSensor1_CB:  BridgeColorSensor1 id=1 */
const nMruby_tsColorSensor_INIB rDomainEV3_BridgeColorSensor1_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tColorSensor_INIB_tab[0],               /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeColorSensor2_CB:  BridgeColorSensor2 id=2 */
const nMruby_tsColorSensor_INIB rDomainEV3_BridgeColorSensor2_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tColorSensor_INIB_tab[1],               /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeColorSensor3_CB:  BridgeColorSensor3 id=3 */
const nMruby_tsColorSensor_INIB rDomainEV3_BridgeColorSensor3_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tColorSensor_INIB_tab[2],               /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeColorSensor4_CB:  BridgeColorSensor4 id=4 */
const nMruby_tsColorSensor_INIB rDomainEV3_BridgeColorSensor4_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tColorSensor_INIB_tab[3],               /* cTECS #_CCP2_# */
};

/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor1_INIB;
    extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor2_INIB;
    extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor3_INIB;
    extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor4_INIB;
nMruby_tsColorSensor_INIB *const nMruby_tsColorSensor_INIB_ptab[] ={
    &rDomainEV3_BridgeColorSensor1_INIB,
    &rDomainEV3_BridgeColorSensor2_INIB,
    &rDomainEV3_BridgeColorSensor3_INIB,
    &rDomainEV3_BridgeColorSensor4_INIB,
};
/* CB 初期化コード #_CIC_# */
void
nMruby_tsColorSensor_CB_initialize()
{
    nMruby_tsColorSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
