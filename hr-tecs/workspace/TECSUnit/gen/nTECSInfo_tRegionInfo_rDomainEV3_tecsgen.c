/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tRegionInfo_tecsgen.h"
#include "nTECSInfo_tRegionInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eRegionInfo */
struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES {
    const struct tag_nTECSInfo_sRegionInfo_VMT *vmt;
    tRegionInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eRegionInfo */
ER             nTECSInfo_tRegionInfo_eRegionInfo_getName_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    return nTECSInfo_tRegionInfo_eRegionInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tRegionInfo_eRegionInfo_getNameLength_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    return nTECSInfo_tRegionInfo_eRegionInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tRegionInfo_eRegionInfo_getNCell_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    return nTECSInfo_tRegionInfo_eRegionInfo_getNCell( lepd->idx );
}
ER             nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sCellInfo )* des)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    return nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo( lepd->idx, ith, des );
}
uint32_t       nTECSInfo_tRegionInfo_eRegionInfo_getNRegion_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    return nTECSInfo_tRegionInfo_eRegionInfo_getNRegion( lepd->idx );
}
ER             nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    return nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo( lepd->idx, ith, des );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eRegionInfo */
const struct tag_nTECSInfo_sRegionInfo_VMT nTECSInfo_tRegionInfo_eRegionInfo_MT_ = {
    nTECSInfo_tRegionInfo_eRegionInfo_getName_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getNameLength_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getNCell_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getNRegion_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_eRegionInfo_des;

extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeKernelCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorACellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorBCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorCCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorDCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeLCDCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeLEDCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeButtonCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeBatteryCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeSpeakerCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor1CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor2CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor3CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor4CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor1CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor2CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor3CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor4CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor1CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor2CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor3CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor4CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor1CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor2CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor3CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor4CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeBalancerCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BridgeSharedMemoryCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_HRP2KernelCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_MotorACellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_MotorBCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_MotorCCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_MotorDCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_LCDCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_LEDCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ButtonCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BatteryCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_SpeakerCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4CellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_BalancerCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_SharedMemoryCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_EV3PlatformCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_EV3TaskCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TargetCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TaskCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TaskMainCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_JSMNCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TECSUnitCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_FatFileCellInfo_eCellInfo_des;
extern struct tag_nTECSInfo_sCellInfo_VDES rDomainEV3_rTECSInfo_rDomainEV3_TECSInfoCellInfo_eCellInfo_des;
extern const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_rTECSInfoRegionInfo_eRegionInfo_des;


/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sRegionInfo_VDES * const rDomainEV3_rTECSInfo__LinkRootRegionInfo_cRegionInfo[] = {
    (struct tag_nTECSInfo_sRegionInfo_VDES *)&rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_eRegionInfo_des,
};

struct tag_nTECSInfo_sCellInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_cCellInfo[] = {
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeKernelCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorACellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorBCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorCCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeMotorDCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeLCDCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeLEDCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeButtonCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeBatteryCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeSpeakerCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor1CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor2CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor3CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeUltrasonicSensor4CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor1CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor2CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor3CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeGyroSensor4CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor1CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor2CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor3CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeColorSensor4CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor1CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor2CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor3CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeTouchSensor4CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeBalancerCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BridgeSharedMemoryCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_HRP2KernelCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_MotorACellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_MotorBCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_MotorCCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_MotorDCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_LCDCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_LEDCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_ButtonCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BatteryCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_SpeakerCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4CellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_BalancerCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_SharedMemoryCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_EV3PlatformCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_EV3TaskCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TargetCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TaskCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TaskMainCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_JSMNCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TECSUnitCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_FatFileCellInfo_eCellInfo_des,
    &rDomainEV3_rTECSInfo_rDomainEV3_TECSInfoCellInfo_eCellInfo_des,
};
struct tag_nTECSInfo_sRegionInfo_VDES * const rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_cRegionInfo[] = {
    (struct tag_nTECSInfo_sRegionInfo_VDES *)&rDomainEV3_rTECSInfo_rDomainEV3_rTECSInfoRegionInfo_eRegionInfo_des,
};


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tRegionInfo_INIB nTECSInfo_tRegionInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tRegionInfo_CB_tab[0]:  _LinkRootRegionInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCellInfo (n_cCellInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo__LinkRootRegionInfo_cRegionInfo, /* #_CCP3B_# */
        1,                                       /* length of cRegionInfo (n_cRegionInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "::",                                    /* name */
    },
    /* cell: nTECSInfo_tRegionInfo_CB_tab[1]:  rDomainEV3RegionInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_cCellInfo, /* #_CCP3B_# */
        65,                                      /* length of cCellInfo (n_cCellInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_cRegionInfo, /* #_CCP3B_# */
        1,                                       /* length of cRegionInfo (n_cRegionInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rDomainEV3",                            /* name */
    },
    /* cell: nTECSInfo_tRegionInfo_CB_tab[2]:  rDomainEV3_rTECSInfoRegionInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCellInfo (n_cCellInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRegionInfo (n_cRegionInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rTECSInfo",                             /* name */
    },
};

extern const struct tag_nTECSInfo_sRegionInfo_VMT nTECSInfo_tRegionInfo_eRegionInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des;
const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des = {
    &nTECSInfo_tRegionInfo_eRegionInfo_MT_,
    &nTECSInfo_tRegionInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_eRegionInfo_des;
const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_eRegionInfo_des = {
    &nTECSInfo_tRegionInfo_eRegionInfo_MT_,
    &nTECSInfo_tRegionInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_rTECSInfoRegionInfo_eRegionInfo_des;
const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_rTECSInfoRegionInfo_eRegionInfo_des = {
    &nTECSInfo_tRegionInfo_eRegionInfo_MT_,
    &nTECSInfo_tRegionInfo_INIB_tab[2],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tRegionInfo_CB_initialize()
{
    nTECSInfo_tRegionInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
