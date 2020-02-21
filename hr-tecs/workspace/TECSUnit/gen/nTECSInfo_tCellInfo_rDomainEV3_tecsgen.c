/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tCellInfo_tecsgen.h"
#include "nTECSInfo_tCellInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eCellInfo */
struct tag_nTECSInfo_tCellInfo_eCellInfo_DES {
    const struct tag_nTECSInfo_sCellInfo_VMT *vmt;
    tCellInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eCellInfo */
ER             nTECSInfo_tCellInfo_eCellInfo_getName_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    return nTECSInfo_tCellInfo_eCellInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tCellInfo_eCellInfo_getNameLength_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    return nTECSInfo_tCellInfo_eCellInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    return nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo( lepd->idx );
}
ER             nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, int_t index, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* desc)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    return nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo( lepd->idx, index, desc );
}
void           nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, Descriptor( nTECSInfo_sCelltypeInfo )* desc)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo( lepd->idx, desc );
}
void           nTECSInfo_tCellInfo_eCellInfo_getCBP_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, void** cbp)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    nTECSInfo_tCellInfo_eCellInfo_getCBP( lepd->idx, cbp );
}
void           nTECSInfo_tCellInfo_eCellInfo_getINIBP_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, void** inibp)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    nTECSInfo_tCellInfo_eCellInfo_getINIBP( lepd->idx, inibp );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eCellInfo */
const struct tag_nTECSInfo_sCellInfo_VMT nTECSInfo_tCellInfo_eCellInfo_MT_ = {
    nTECSInfo_tCellInfo_eCellInfo_getName_skel,
    nTECSInfo_tCellInfo_eCellInfo_getNameLength_skel,
    nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo_skel,
    nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo_skel,
    nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo_skel,
    nTECSInfo_tCellInfo_eCellInfo_getCBP_skel,
    nTECSInfo_tCellInfo_eCellInfo_getINIBP_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tKernelCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_HRP2Kernel_eKernelRawEntryDescriptorInfo_eRawEntryDescriptor_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_HRP2Kernel_eiKernelRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_MotorA_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_MotorB_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_MotorC_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_MotorD_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tLCDCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_LCD_eLCDRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tLEDCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_LED_eLEDRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tButtonCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_Button_eButtonRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_Battery_eBatteryRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_Speaker_eSpeakerRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_Balancer_eBalancerRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_SharedMemory_eSharedMemoryRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_EV3Platform_eTaskBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_EV3Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_EV3Task_eiTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTargetCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_Target_eTargetRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_Task_eiTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TaskMain_eBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_JSMN_eJSMNRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TECSUnit_eUnitRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tFatFileCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_FatFile_eFatFileRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TECSInfo_eTECSInfoRawEntryDescriptorInfo_eRawEntryDescriptor_des;

/* 呼び口配列 #_CPA_# */




























struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_HRP2KernelCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_HRP2Kernel_eKernelRawEntryDescriptorInfo_eRawEntryDescriptor_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_HRP2Kernel_eiKernelRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_MotorACellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_MotorA_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_MotorBCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_MotorB_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_MotorCCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_MotorC_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_MotorDCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_MotorD_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_LCDCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_LCD_eLCDRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_LEDCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_LED_eLEDRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_ButtonCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_Button_eButtonRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_BatteryCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_Battery_eBatteryRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_SpeakerCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_Speaker_eSpeakerRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4CellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_BalancerCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_Balancer_eBalancerRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_SharedMemoryCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_SharedMemory_eSharedMemoryRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_EV3PlatformCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_EV3Platform_eTaskBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_EV3TaskCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_EV3Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_EV3Task_eiTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TargetCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_Target_eTargetRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TaskCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_Task_eiTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TaskMainCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_TaskMain_eBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_JSMNCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_JSMN_eJSMNRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TECSUnitCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_TECSUnit_eUnitRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_FatFileCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_FatFile_eFatFileRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3_TECSInfoCellInfo_cRawEntryDescriptor[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_TECSInfo_eTECSInfoRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCellInfo_INIB nTECSInfo_tCellInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCellInfo_CB_tab[0]:  rDomainEV3_BridgeKernelCellInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeKernel",                          /* name */
        rDomainEV3_BridgeKernel__CBP,            /* cbp */
        rDomainEV3_BridgeKernel__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[1]:  rDomainEV3_BridgeMotorACellInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeMotorA",                          /* name */
        rDomainEV3_BridgeMotorA__CBP,            /* cbp */
        rDomainEV3_BridgeMotorA__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[2]:  rDomainEV3_BridgeMotorBCellInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeMotorB",                          /* name */
        rDomainEV3_BridgeMotorB__CBP,            /* cbp */
        rDomainEV3_BridgeMotorB__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[3]:  rDomainEV3_BridgeMotorCCellInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeMotorC",                          /* name */
        rDomainEV3_BridgeMotorC__CBP,            /* cbp */
        rDomainEV3_BridgeMotorC__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[4]:  rDomainEV3_BridgeMotorDCellInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeMotorD",                          /* name */
        rDomainEV3_BridgeMotorD__CBP,            /* cbp */
        rDomainEV3_BridgeMotorD__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[5]:  rDomainEV3_BridgeLCDCellInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeLCD",                             /* name */
        rDomainEV3_BridgeLCD__CBP,               /* cbp */
        rDomainEV3_BridgeLCD__INIBP,             /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[6]:  rDomainEV3_BridgeLEDCellInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeLED",                             /* name */
        rDomainEV3_BridgeLED__CBP,               /* cbp */
        rDomainEV3_BridgeLED__INIBP,             /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[7]:  rDomainEV3_BridgeButtonCellInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeButton",                          /* name */
        rDomainEV3_BridgeButton__CBP,            /* cbp */
        rDomainEV3_BridgeButton__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[8]:  rDomainEV3_BridgeBatteryCellInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeBattery",                         /* name */
        rDomainEV3_BridgeBattery__CBP,           /* cbp */
        rDomainEV3_BridgeBattery__INIBP,         /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[9]:  rDomainEV3_BridgeSpeakerCellInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeSpeaker",                         /* name */
        rDomainEV3_BridgeSpeaker__CBP,           /* cbp */
        rDomainEV3_BridgeSpeaker__INIBP,         /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[10]:  rDomainEV3_BridgeUltrasonicSensor1CellInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeUltrasonicSensor1",               /* name */
        rDomainEV3_BridgeUltrasonicSensor1__CBP, /* cbp */
        rDomainEV3_BridgeUltrasonicSensor1__INIBP, /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[11]:  rDomainEV3_BridgeUltrasonicSensor2CellInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeUltrasonicSensor2",               /* name */
        rDomainEV3_BridgeUltrasonicSensor2__CBP, /* cbp */
        rDomainEV3_BridgeUltrasonicSensor2__INIBP, /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[12]:  rDomainEV3_BridgeUltrasonicSensor3CellInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeUltrasonicSensor3",               /* name */
        rDomainEV3_BridgeUltrasonicSensor3__CBP, /* cbp */
        rDomainEV3_BridgeUltrasonicSensor3__INIBP, /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[13]:  rDomainEV3_BridgeUltrasonicSensor4CellInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeUltrasonicSensor4",               /* name */
        rDomainEV3_BridgeUltrasonicSensor4__CBP, /* cbp */
        rDomainEV3_BridgeUltrasonicSensor4__INIBP, /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[14]:  rDomainEV3_BridgeGyroSensor1CellInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeGyroSensor1",                     /* name */
        rDomainEV3_BridgeGyroSensor1__CBP,       /* cbp */
        rDomainEV3_BridgeGyroSensor1__INIBP,     /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[15]:  rDomainEV3_BridgeGyroSensor2CellInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeGyroSensor2",                     /* name */
        rDomainEV3_BridgeGyroSensor2__CBP,       /* cbp */
        rDomainEV3_BridgeGyroSensor2__INIBP,     /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[16]:  rDomainEV3_BridgeGyroSensor3CellInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeGyroSensor3",                     /* name */
        rDomainEV3_BridgeGyroSensor3__CBP,       /* cbp */
        rDomainEV3_BridgeGyroSensor3__INIBP,     /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[17]:  rDomainEV3_BridgeGyroSensor4CellInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeGyroSensor4",                     /* name */
        rDomainEV3_BridgeGyroSensor4__CBP,       /* cbp */
        rDomainEV3_BridgeGyroSensor4__INIBP,     /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[18]:  rDomainEV3_BridgeColorSensor1CellInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeColorSensor1",                    /* name */
        rDomainEV3_BridgeColorSensor1__CBP,      /* cbp */
        rDomainEV3_BridgeColorSensor1__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[19]:  rDomainEV3_BridgeColorSensor2CellInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeColorSensor2",                    /* name */
        rDomainEV3_BridgeColorSensor2__CBP,      /* cbp */
        rDomainEV3_BridgeColorSensor2__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[20]:  rDomainEV3_BridgeColorSensor3CellInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeColorSensor3",                    /* name */
        rDomainEV3_BridgeColorSensor3__CBP,      /* cbp */
        rDomainEV3_BridgeColorSensor3__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[21]:  rDomainEV3_BridgeColorSensor4CellInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeColorSensor4",                    /* name */
        rDomainEV3_BridgeColorSensor4__CBP,      /* cbp */
        rDomainEV3_BridgeColorSensor4__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[22]:  rDomainEV3_BridgeTouchSensor1CellInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeTouchSensor1",                    /* name */
        rDomainEV3_BridgeTouchSensor1__CBP,      /* cbp */
        rDomainEV3_BridgeTouchSensor1__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[23]:  rDomainEV3_BridgeTouchSensor2CellInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeTouchSensor2",                    /* name */
        rDomainEV3_BridgeTouchSensor2__CBP,      /* cbp */
        rDomainEV3_BridgeTouchSensor2__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[24]:  rDomainEV3_BridgeTouchSensor3CellInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeTouchSensor3",                    /* name */
        rDomainEV3_BridgeTouchSensor3__CBP,      /* cbp */
        rDomainEV3_BridgeTouchSensor3__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[25]:  rDomainEV3_BridgeTouchSensor4CellInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeTouchSensor4",                    /* name */
        rDomainEV3_BridgeTouchSensor4__CBP,      /* cbp */
        rDomainEV3_BridgeTouchSensor4__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[26]:  rDomainEV3_BridgeBalancerCellInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeBalancer",                        /* name */
        rDomainEV3_BridgeBalancer__CBP,          /* cbp */
        rDomainEV3_BridgeBalancer__INIBP,        /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[27]:  rDomainEV3_BridgeSharedMemoryCellInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BridgeSharedMemory",                    /* name */
        rDomainEV3_BridgeSharedMemory__CBP,      /* cbp */
        rDomainEV3_BridgeSharedMemory__INIBP,    /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[28]:  rDomainEV3_HRP2KernelCellInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tKernelCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_HRP2KernelCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        2,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "HRP2Kernel",                            /* name */
        rDomainEV3_HRP2Kernel__CBP,              /* cbp */
        rDomainEV3_HRP2Kernel__INIBP,            /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[29]:  rDomainEV3_MotorACellInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_MotorACellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "MotorA",                                /* name */
        rDomainEV3_MotorA__CBP,                  /* cbp */
        rDomainEV3_MotorA__INIBP,                /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[30]:  rDomainEV3_MotorBCellInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_MotorBCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "MotorB",                                /* name */
        rDomainEV3_MotorB__CBP,                  /* cbp */
        rDomainEV3_MotorB__INIBP,                /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[31]:  rDomainEV3_MotorCCellInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_MotorCCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "MotorC",                                /* name */
        rDomainEV3_MotorC__CBP,                  /* cbp */
        rDomainEV3_MotorC__INIBP,                /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[32]:  rDomainEV3_MotorDCellInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_MotorDCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "MotorD",                                /* name */
        rDomainEV3_MotorD__CBP,                  /* cbp */
        rDomainEV3_MotorD__INIBP,                /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[33]:  rDomainEV3_LCDCellInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tLCDCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_LCDCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LCD",                                   /* name */
        rDomainEV3_LCD__CBP,                     /* cbp */
        rDomainEV3_LCD__INIBP,                   /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[34]:  rDomainEV3_LEDCellInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tLEDCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_LEDCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LED",                                   /* name */
        rDomainEV3_LED__CBP,                     /* cbp */
        rDomainEV3_LED__INIBP,                   /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[35]:  rDomainEV3_ButtonCellInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tButtonCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_ButtonCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Button",                                /* name */
        rDomainEV3_Button__CBP,                  /* cbp */
        rDomainEV3_Button__INIBP,                /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[36]:  rDomainEV3_BatteryCellInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_BatteryCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Battery",                               /* name */
        rDomainEV3_Battery__CBP,                 /* cbp */
        rDomainEV3_Battery__INIBP,               /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[37]:  rDomainEV3_SpeakerCellInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_SpeakerCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Speaker",                               /* name */
        rDomainEV3_Speaker__CBP,                 /* cbp */
        rDomainEV3_Speaker__INIBP,               /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[38]:  rDomainEV3_UltrasonicSensor1CellInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "UltrasonicSensor1",                     /* name */
        rDomainEV3_UltrasonicSensor1__CBP,       /* cbp */
        rDomainEV3_UltrasonicSensor1__INIBP,     /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[39]:  rDomainEV3_UltrasonicSensor2CellInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "UltrasonicSensor2",                     /* name */
        rDomainEV3_UltrasonicSensor2__CBP,       /* cbp */
        rDomainEV3_UltrasonicSensor2__INIBP,     /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[40]:  rDomainEV3_UltrasonicSensor3CellInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "UltrasonicSensor3",                     /* name */
        rDomainEV3_UltrasonicSensor3__CBP,       /* cbp */
        rDomainEV3_UltrasonicSensor3__INIBP,     /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[41]:  rDomainEV3_UltrasonicSensor4CellInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "UltrasonicSensor4",                     /* name */
        rDomainEV3_UltrasonicSensor4__CBP,       /* cbp */
        rDomainEV3_UltrasonicSensor4__INIBP,     /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[42]:  rDomainEV3_GyroSensor1CellInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "GyroSensor1",                           /* name */
        rDomainEV3_GyroSensor1__CBP,             /* cbp */
        rDomainEV3_GyroSensor1__INIBP,           /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[43]:  rDomainEV3_GyroSensor2CellInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "GyroSensor2",                           /* name */
        rDomainEV3_GyroSensor2__CBP,             /* cbp */
        rDomainEV3_GyroSensor2__INIBP,           /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[44]:  rDomainEV3_GyroSensor3CellInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "GyroSensor3",                           /* name */
        rDomainEV3_GyroSensor3__CBP,             /* cbp */
        rDomainEV3_GyroSensor3__INIBP,           /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[45]:  rDomainEV3_GyroSensor4CellInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "GyroSensor4",                           /* name */
        rDomainEV3_GyroSensor4__CBP,             /* cbp */
        rDomainEV3_GyroSensor4__INIBP,           /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[46]:  rDomainEV3_ColorSensor1CellInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ColorSensor1",                          /* name */
        rDomainEV3_ColorSensor1__CBP,            /* cbp */
        rDomainEV3_ColorSensor1__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[47]:  rDomainEV3_ColorSensor2CellInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ColorSensor2",                          /* name */
        rDomainEV3_ColorSensor2__CBP,            /* cbp */
        rDomainEV3_ColorSensor2__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[48]:  rDomainEV3_ColorSensor3CellInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ColorSensor3",                          /* name */
        rDomainEV3_ColorSensor3__CBP,            /* cbp */
        rDomainEV3_ColorSensor3__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[49]:  rDomainEV3_ColorSensor4CellInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ColorSensor4",                          /* name */
        rDomainEV3_ColorSensor4__CBP,            /* cbp */
        rDomainEV3_ColorSensor4__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[50]:  rDomainEV3_TouchSensor1CellInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TouchSensor1",                          /* name */
        rDomainEV3_TouchSensor1__CBP,            /* cbp */
        rDomainEV3_TouchSensor1__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[51]:  rDomainEV3_TouchSensor2CellInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TouchSensor2",                          /* name */
        rDomainEV3_TouchSensor2__CBP,            /* cbp */
        rDomainEV3_TouchSensor2__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[52]:  rDomainEV3_TouchSensor3CellInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TouchSensor3",                          /* name */
        rDomainEV3_TouchSensor3__CBP,            /* cbp */
        rDomainEV3_TouchSensor3__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[53]:  rDomainEV3_TouchSensor4CellInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TouchSensor4",                          /* name */
        rDomainEV3_TouchSensor4__CBP,            /* cbp */
        rDomainEV3_TouchSensor4__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[54]:  rDomainEV3_BalancerCellInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_BalancerCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Balancer",                              /* name */
        rDomainEV3_Balancer__CBP,                /* cbp */
        rDomainEV3_Balancer__INIBP,              /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[55]:  rDomainEV3_SharedMemoryCellInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_SharedMemoryCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SharedMemory",                          /* name */
        rDomainEV3_SharedMemory__CBP,            /* cbp */
        rDomainEV3_SharedMemory__INIBP,          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[56]:  rDomainEV3_EV3PlatformCellInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_EV3PlatformCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "EV3Platform",                           /* name */
        rDomainEV3_EV3Platform__CBP,             /* cbp */
        rDomainEV3_EV3Platform__INIBP,           /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[57]:  rDomainEV3_EV3TaskCellInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_EV3TaskCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        2,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "EV3Task",                               /* name */
        rDomainEV3_EV3Task__CBP,                 /* cbp */
        rDomainEV3_EV3Task__INIBP,               /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[58]:  rDomainEV3_TargetCellInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTargetCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TargetCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Target",                                /* name */
        rDomainEV3_Target__CBP,                  /* cbp */
        rDomainEV3_Target__INIBP,                /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[59]:  rDomainEV3_TaskCellInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TaskCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        2,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Task",                                  /* name */
        rDomainEV3_Task__CBP,                    /* cbp */
        rDomainEV3_Task__INIBP,                  /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[60]:  rDomainEV3_TaskMainCellInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TaskMainCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TaskMain",                              /* name */
        rDomainEV3_TaskMain__CBP,                /* cbp */
        rDomainEV3_TaskMain__INIBP,              /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[61]:  rDomainEV3_JSMNCellInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_JSMNCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "JSMN",                                  /* name */
        rDomainEV3_JSMN__CBP,                    /* cbp */
        rDomainEV3_JSMN__INIBP,                  /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[62]:  rDomainEV3_TECSUnitCellInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TECSUnitCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TECSUnit",                              /* name */
        rDomainEV3_TECSUnit__CBP,                /* cbp */
        rDomainEV3_TECSUnit__INIBP,              /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[63]:  rDomainEV3_FatFileCellInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_tFatFileCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_FatFileCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FatFile",                               /* name */
        rDomainEV3_FatFile__CBP,                 /* cbp */
        rDomainEV3_FatFile__INIBP,               /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[64]:  rDomainEV3_TECSInfoCellInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rDomainEV3_rTECSInfo_rDomainEV3_TECSInfoCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TECSInfo",                              /* name */
        rDomainEV3_TECSInfo__CBP,                /* cbp */
        rDomainEV3_TECSInfo__INIBP,              /* inibp */
    },
};

extern const struct tag_nTECSInfo_sCellInfo_VMT nTECSInfo_tCellInfo_eCellInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeKernelCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeKernelCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorACellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorACellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorBCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorBCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorCCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorCCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorDCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorDCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeLCDCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeLCDCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeLEDCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeLEDCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeButtonCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeButtonCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeBatteryCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeBatteryCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeSpeakerCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeSpeakerCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor4CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor4CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor4CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor4CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor4CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor4CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor4CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor4CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeBalancerCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeBalancerCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeSharedMemoryCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BridgeSharedMemoryCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_HRP2KernelCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_HRP2KernelCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorACellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorACellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorBCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorBCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorCCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorCCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorDCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorDCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_LCDCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_LCDCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_LEDCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_LEDCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ButtonCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ButtonCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BatteryCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BatteryCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_SpeakerCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_SpeakerCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[42],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[43],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[44],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[45],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[46],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[47],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[48],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[49],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[50],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[51],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[52],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[53],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BalancerCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_BalancerCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[54],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_SharedMemoryCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_SharedMemoryCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[55],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3PlatformCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3PlatformCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[56],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3TaskCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3TaskCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[57],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TargetCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TargetCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[58],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TaskCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TaskCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[59],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TaskMainCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TaskMainCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[60],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_JSMNCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_JSMNCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[61],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TECSUnitCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TECSUnitCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[62],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_FatFileCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_FatFileCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[63],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TECSInfoCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_TECSInfoCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[64],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tCellInfo_CB_initialize()
{
    nTECSInfo_tCellInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
