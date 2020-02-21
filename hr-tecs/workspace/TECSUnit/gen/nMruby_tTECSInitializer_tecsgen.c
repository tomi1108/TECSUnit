/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tTECSInitializer_tecsgen.h"
#include "nMruby_tTECSInitializer_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eInitialize */
struct tag_nMruby_tTECSInitializer_eInitialize_DES {
    const struct tag_nMruby_sInitializeBridge_VMT *vmt;
    tTECSInitializer_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eInitialize */
void           nMruby_tTECSInitializer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeBridge_VDES *epd, const mrb_state* mrb)
{
    struct tag_nMruby_tTECSInitializer_eInitialize_DES *lepd
        = (struct tag_nMruby_tTECSInitializer_eInitialize_DES *)epd;
    nMruby_tTECSInitializer_eInitialize_initializeBridge( lepd->idx, mrb );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eInitialize */
const struct tag_nMruby_sInitializeBridge_VMT nMruby_tTECSInitializer_eInitialize_MT_ = {
    nMruby_tTECSInitializer_eInitialize_initializeBridge_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsKernel_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsMotor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsLCD_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsLED_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsButton_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsBattery_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsSpeaker_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsUltrasonicSensor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsGyroSensor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsColorSensor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsTouchSensor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsBalancer_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsSharedMemory_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtIntPointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtULongPointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtInt32Pointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtCharPointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtUInt16Pointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtInt8Pointer_eInitialize_des;

/* 呼び口配列 #_CPA_# */
struct tag_nMruby_sInitializeTECSBridge_VDES * const VM_TECSInitializer_cInitialize[] = {
    &VM_tsKernel_Initializer_eInitialize_des,
    &VM_tsMotor_Initializer_eInitialize_des,
    &VM_tsLCD_Initializer_eInitialize_des,
    &VM_tsLED_Initializer_eInitialize_des,
    &VM_tsButton_Initializer_eInitialize_des,
    &VM_tsBattery_Initializer_eInitialize_des,
    &VM_tsSpeaker_Initializer_eInitialize_des,
    &VM_tsUltrasonicSensor_Initializer_eInitialize_des,
    &VM_tsGyroSensor_Initializer_eInitialize_des,
    &VM_tsColorSensor_Initializer_eInitialize_des,
    &VM_tsTouchSensor_Initializer_eInitialize_des,
    &VM_tsBalancer_Initializer_eInitialize_des,
    &VM_tsSharedMemory_Initializer_eInitialize_des,
    &CtIntPointer_eInitialize_des,
    &CtULongPointer_eInitialize_des,
    &CtInt32Pointer_eInitialize_des,
    &CtCharPointer_eInitialize_des,
    &CtUInt16Pointer_eInitialize_des,
    &CtInt8Pointer_eInitialize_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nMruby_tTECSInitializer_INIB nMruby_tTECSInitializer_INIB_tab[] = {
    /* cell: nMruby_tTECSInitializer_CB_tab[0]:  VM_TECSInitializer id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        VM_TECSInitializer_cInitialize,          /* #_CCP3B_# */
        19,                                      /* length of cInitialize (n_cInitialize) #_CCP4_# */
        /* entry port #_EP_# */ 
    },
};

/* セル CB #_CB_# */
struct tag_nMruby_tTECSInitializer_CB nMruby_tTECSInitializer_CB_tab[1];
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nMruby_tTECSInitializer_eInitialize_DES VM_TECSInitializer_eInitialize_des;
const struct tag_nMruby_tTECSInitializer_eInitialize_DES VM_TECSInitializer_eInitialize_des = {
    &nMruby_tTECSInitializer_eInitialize_MT_,
    &nMruby_tTECSInitializer_CB_tab[0],      /* CB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nMruby_tTECSInitializer_CB_initialize()
{
    nMruby_tTECSInitializer_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
