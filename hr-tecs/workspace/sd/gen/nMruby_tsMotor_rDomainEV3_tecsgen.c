/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tsMotor_tecsgen.h"
#include "nMruby_tsMotor_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sMotor_VDES rDomainEV3_MotorA_eMotor_des;

extern struct tag_sMotor_VDES rDomainEV3_MotorB_eMotor_des;

extern struct tag_sMotor_VDES rDomainEV3_MotorC_eMotor_des;

extern struct tag_sMotor_VDES rDomainEV3_MotorD_eMotor_des;

/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rDomainEV3_BridgeMotorA_CB:  BridgeMotorA id=1 */
const nMruby_tsMotor_INIB rDomainEV3_BridgeMotorA_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tMotor_INIB_tab[0],                     /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeMotorB_CB:  BridgeMotorB id=2 */
const nMruby_tsMotor_INIB rDomainEV3_BridgeMotorB_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tMotor_INIB_tab[1],                     /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeMotorC_CB:  BridgeMotorC id=3 */
const nMruby_tsMotor_INIB rDomainEV3_BridgeMotorC_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tMotor_INIB_tab[2],                     /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeMotorD_CB:  BridgeMotorD id=4 */
const nMruby_tsMotor_INIB rDomainEV3_BridgeMotorD_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tMotor_INIB_tab[3],                     /* cTECS #_CCP2_# */
};

/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorA_INIB;
    extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorB_INIB;
    extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorC_INIB;
    extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorD_INIB;
nMruby_tsMotor_INIB *const nMruby_tsMotor_INIB_ptab[] ={
    &rDomainEV3_BridgeMotorA_INIB,
    &rDomainEV3_BridgeMotorB_INIB,
    &rDomainEV3_BridgeMotorC_INIB,
    &rDomainEV3_BridgeMotorD_INIB,
};
/* CB 初期化コード #_CIC_# */
void
nMruby_tsMotor_CB_initialize()
{
    nMruby_tsMotor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
