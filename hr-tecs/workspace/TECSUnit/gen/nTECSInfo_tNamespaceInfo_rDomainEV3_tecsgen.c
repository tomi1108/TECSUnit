/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tNamespaceInfo_tecsgen.h"
#include "nTECSInfo_tNamespaceInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eNamespaceInfo */
struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES {
    const struct tag_nTECSInfo_sNamespaceInfo_VMT *vmt;
    tNamespaceInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eNamespaceInfo */
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace( lepd->idx );
}
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo( lepd->idx, ith, des );
}
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature( lepd->idx );
}
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo( lepd->idx, ith, des );
}
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype( lepd->idx );
}
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo( lepd->idx, ith, des );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eNamespaceInfo */
const struct tag_nTECSInfo_sNamespaceInfo_VMT nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_ = {
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siTaskSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sInitializeRoutineBodySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTerminateRoutineBodySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siHandlerBodySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sConfigInterruptSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sCyclicSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sAlarmSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siAlarmSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSemaphoreSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siSemaphoreSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sEventflagSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siEventflagSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sDataqueueSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siDataqueueSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sPriorityDataqueueSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siPriorityDataqueueSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sFixedSizeMemoryPoolSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sMessageBufferSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sMallocSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sRiteVMSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTargetSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tKernelCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tButtonCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tLCDCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tLEDCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tFatFileCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTargetCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des;
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nMrubyNamespaceInfo_eNamespaceInfo_des;
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nPosixNamespaceInfo_eNamespaceInfo_des;
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nTECSInfoNamespaceInfo_eNamespaceInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeBridgeSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sMrubyVMSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tCharPointerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tInt8PointerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tInt32PointerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tUInt16PointerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tIntPointerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tULongPointerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernel_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotor_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCD_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLED_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButton_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBattery_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancer_InitializerCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_InitializerCelltypeInfo_eCelltypeInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nPosix_sMainSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sSignatureInfo_VDES * const rDomainEV3_rTECSInfo__RootNamespaceInfo_cSignatureInfo[] = {
    &rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_siTaskSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sInitializeRoutineBodySignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sTerminateRoutineBodySignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_siHandlerBodySignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sConfigInterruptSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sCyclicSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sAlarmSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_siAlarmSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sSemaphoreSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_siSemaphoreSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sEventflagSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_siEventflagSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sDataqueueSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_siDataqueueSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sPriorityDataqueueSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_siPriorityDataqueueSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sFixedSizeMemoryPoolSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sMessageBufferSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sMallocSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sRiteVMSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sTargetSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des,
};
struct tag_nTECSInfo_sCelltypeInfo_VDES * const rDomainEV3_rTECSInfo__RootNamespaceInfo_cCelltypeInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tKernelCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tButtonCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tLCDCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tLEDCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tFatFileCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tTargetCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des,
};
struct tag_nTECSInfo_sNamespaceInfo_VDES * const rDomainEV3_rTECSInfo__RootNamespaceInfo_cNamespaceInfo[] = {
    (struct tag_nTECSInfo_sNamespaceInfo_VDES *)&rDomainEV3_rTECSInfo_nMrubyNamespaceInfo_eNamespaceInfo_des,
    (struct tag_nTECSInfo_sNamespaceInfo_VDES *)&rDomainEV3_rTECSInfo_nPosixNamespaceInfo_eNamespaceInfo_des,
    (struct tag_nTECSInfo_sNamespaceInfo_VDES *)&rDomainEV3_rTECSInfo_nTECSInfoNamespaceInfo_eNamespaceInfo_des,
};

struct tag_nTECSInfo_sSignatureInfo_VDES * const rDomainEV3_rTECSInfo_nMrubyNamespaceInfo_cSignatureInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_sInitializeBridgeSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_sMrubyVMSignatureInfo_eSignatureInfo_des,
};
struct tag_nTECSInfo_sCelltypeInfo_VDES * const rDomainEV3_rTECSInfo_nMrubyNamespaceInfo_cCelltypeInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tCharPointerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tInt8PointerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tInt32PointerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tUInt16PointerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tIntPointerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tULongPointerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsKernel_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsMotor_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsLCD_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsLED_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsButton_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsBattery_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsSpeaker_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensor_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsBalancer_InitializerCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_eCelltypeInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_InitializerCelltypeInfo_eCelltypeInfo_des,
};

struct tag_nTECSInfo_sSignatureInfo_VDES * const rDomainEV3_rTECSInfo_nPosixNamespaceInfo_cSignatureInfo[] = {
    &rDomainEV3_rTECSInfo_nPosix_sMainSignatureInfo_eSignatureInfo_des,
};

struct tag_nTECSInfo_sSignatureInfo_VDES * const rDomainEV3_rTECSInfo_nTECSInfoNamespaceInfo_cSignatureInfo[] = {
    &rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sCallInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des,
    &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des,
};
struct tag_nTECSInfo_sCelltypeInfo_VDES * const rDomainEV3_rTECSInfo_nTECSInfoNamespaceInfo_cCelltypeInfo[] = {
    &rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tNamespaceInfo_INIB nTECSInfo_tNamespaceInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tNamespaceInfo_CB_tab[0]:  _RootNamespaceInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo__RootNamespaceInfo_cSignatureInfo, /* #_CCP3B_# */
        41,                                      /* length of cSignatureInfo (n_cSignatureInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo__RootNamespaceInfo_cCelltypeInfo, /* #_CCP3B_# */
        20,                                      /* length of cCelltypeInfo (n_cCelltypeInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo__RootNamespaceInfo_cNamespaceInfo, /* #_CCP3B_# */
        3,                                       /* length of cNamespaceInfo (n_cNamespaceInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "::",                                    /* name */
    },
    /* cell: nTECSInfo_tNamespaceInfo_CB_tab[1]:  nMrubyNamespaceInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMrubyNamespaceInfo_cSignatureInfo, /* #_CCP3B_# */
        3,                                       /* length of cSignatureInfo (n_cSignatureInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMrubyNamespaceInfo_cCelltypeInfo, /* #_CCP3B_# */
        33,                                      /* length of cCelltypeInfo (n_cCelltypeInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cNamespaceInfo (n_cNamespaceInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nMruby",                                /* name */
    },
    /* cell: nTECSInfo_tNamespaceInfo_CB_tab[2]:  nPosixNamespaceInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nPosixNamespaceInfo_cSignatureInfo, /* #_CCP3B_# */
        1,                                       /* length of cSignatureInfo (n_cSignatureInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCelltypeInfo (n_cCelltypeInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cNamespaceInfo (n_cNamespaceInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nPosix",                                /* name */
    },
    /* cell: nTECSInfo_tNamespaceInfo_CB_tab[3]:  nTECSInfoNamespaceInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nTECSInfoNamespaceInfo_cSignatureInfo, /* #_CCP3B_# */
        13,                                      /* length of cSignatureInfo (n_cSignatureInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nTECSInfoNamespaceInfo_cCelltypeInfo, /* #_CCP3B_# */
        1,                                       /* length of cCelltypeInfo (n_cCelltypeInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cNamespaceInfo (n_cNamespaceInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nTECSInfo",                             /* name */
    },
};

extern const struct tag_nTECSInfo_sNamespaceInfo_VMT nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des;
const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des = {
    &nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_,
    &nTECSInfo_tNamespaceInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nMrubyNamespaceInfo_eNamespaceInfo_des;
const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nMrubyNamespaceInfo_eNamespaceInfo_des = {
    &nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_,
    &nTECSInfo_tNamespaceInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nPosixNamespaceInfo_eNamespaceInfo_des;
const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nPosixNamespaceInfo_eNamespaceInfo_des = {
    &nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_,
    &nTECSInfo_tNamespaceInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nTECSInfoNamespaceInfo_eNamespaceInfo_des;
const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rDomainEV3_rTECSInfo_nTECSInfoNamespaceInfo_eNamespaceInfo_des = {
    &nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_,
    &nTECSInfo_tNamespaceInfo_INIB_tab[3],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tNamespaceInfo_CB_initialize()
{
    nTECSInfo_tNamespaceInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
