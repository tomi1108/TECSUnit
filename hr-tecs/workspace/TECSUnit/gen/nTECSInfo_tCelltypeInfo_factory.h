#ifndef tCelltypeInfo_FACTORY_H
#define tCelltypeInfo_FACTORY_H
#undef N_CP_cEntryInfo
#undef NCP_cEntryInfo
#undef N_CP_cCallInfo
#undef NCP_cCallInfo
#undef N_CP_cAttrInfo
#undef NCP_cAttrInfo
#undef N_CP_cVarInfo
#undef NCP_cVarInfo
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef ATTR_name
#undef ATTR_b_singleton
#undef ATTR_b_IDX_is_ID_act
#undef ATTR_sizeOfCB
#undef ATTR_sizeOfINIB
#undef ATTR_n_cellInLinUnit
#undef ATTR_n_cellInSystem
#undef cEntryInfo_getName
#undef cEntryInfo_getNameLength
#undef cEntryInfo_getSignatureInfo
#undef cEntryInfo_getArraySize
#undef cEntryInfo_isInline
#undef cCallInfo_getName
#undef cCallInfo_getNameLength
#undef cCallInfo_getSignatureInfo
#undef cCallInfo_getArraySize
#undef cCallInfo_getSpecifierInfo
#undef cCallInfo_getInternalInfo
#undef cCallInfo_getLocationInfo
#undef cCallInfo_getOptimizeInfo
#undef cAttrInfo_getName
#undef cAttrInfo_getOffset
#undef cAttrInfo_getTypeInfo
#undef cAttrInfo_getSizeIsExpr
#undef cAttrInfo_getSizeIs
#undef cVarInfo_getName
#undef cVarInfo_getOffset
#undef cVarInfo_getTypeInfo
#undef cVarInfo_getSizeIsExpr
#undef cVarInfo_getSizeIs
#undef cEntryInfo_refer_to_descriptor
#undef cEntryInfo_ref_desc
#undef cCallInfo_refer_to_descriptor
#undef cCallInfo_ref_desc
#undef cAttrInfo_refer_to_descriptor
#undef cAttrInfo_ref_desc
#undef cVarInfo_refer_to_descriptor
#undef cVarInfo_ref_desc
#undef is_cEntryInfo_joined
#undef is_cCallInfo_joined
#undef is_cAttrInfo_joined
#undef is_cVarInfo_joined
#undef eCelltypeInfo_getName
#undef eCelltypeInfo_getNameLength
#undef eCelltypeInfo_getNAttr
#undef eCelltypeInfo_getAttrInfo
#undef eCelltypeInfo_getNVar
#undef eCelltypeInfo_getVarInfo
#undef eCelltypeInfo_getNCall
#undef eCelltypeInfo_getCallInfo
#undef eCelltypeInfo_getNEntry
#undef eCelltypeInfo_getEntryInfo
#undef eCelltypeInfo_isSingleton
#undef eCelltypeInfo_isIDX_is_ID
#undef eCelltypeInfo_hasCB
#undef eCelltypeInfo_hasINIB
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#define TOPPERS_CB_TYPE_ONLY

#include "tTask_tecsgen.h"
#define tTask__IDX_is_ID_act                               (false)
#define tTask__sizeOfCB                                    ((0))
#define tTask__sizeOfINIB                                  ((sizeof(tTask_INIB)))
#define tTask__NCELLINLINKUNIT         (2)

#include "tKernel_tecsgen.h"
#define tKernel__IDX_is_ID_act                             (false)
#define tKernel__sizeOfCB                                  ((0))
#define tKernel__sizeOfINIB                                ((0))
#define tKernel__NCELLINLINKUNIT       (1)

#include "tUltrasonicSensor_tecsgen.h"
#define tUltrasonicSensor__IDX_is_ID_act                   (false)
#define tUltrasonicSensor__sizeOfCB                        ((0))
#define tUltrasonicSensor__sizeOfINIB                      ((sizeof(tUltrasonicSensor_INIB)))
#define tUltrasonicSensor__NCELLINLINKUNIT (4)

#include "tColorSensor_tecsgen.h"
#define tColorSensor__IDX_is_ID_act                        (false)
#define tColorSensor__sizeOfCB                             ((0))
#define tColorSensor__sizeOfINIB                           ((sizeof(tColorSensor_INIB)))
#define tColorSensor__NCELLINLINKUNIT  (4)

#include "tTouchSensor_tecsgen.h"
#define tTouchSensor__IDX_is_ID_act                        (false)
#define tTouchSensor__sizeOfCB                             ((0))
#define tTouchSensor__sizeOfINIB                           ((sizeof(tTouchSensor_INIB)))
#define tTouchSensor__NCELLINLINKUNIT  (4)

#include "tGyroSensor_tecsgen.h"
#define tGyroSensor__IDX_is_ID_act                         (false)
#define tGyroSensor__sizeOfCB                              ((0))
#define tGyroSensor__sizeOfINIB                            ((sizeof(tGyroSensor_INIB)))
#define tGyroSensor__NCELLINLINKUNIT   (4)

#include "tMotor_tecsgen.h"
#define tMotor__IDX_is_ID_act                              (false)
#define tMotor__sizeOfCB                                   ((0))
#define tMotor__sizeOfINIB                                 ((sizeof(tMotor_INIB)))
#define tMotor__NCELLINLINKUNIT        (4)

#include "tButton_tecsgen.h"
#define tButton__IDX_is_ID_act                             (false)
#define tButton__sizeOfCB                                  ((0))
#define tButton__sizeOfINIB                                ((0))
#define tButton__NCELLINLINKUNIT       (1)

#include "tLCD_tecsgen.h"
#define tLCD__IDX_is_ID_act                                (false)
#define tLCD__sizeOfCB                                     ((sizeof(tLCD_CB)))
#define tLCD__sizeOfINIB                                   ((0))
#define tLCD__NCELLINLINKUNIT          (1)

#include "tLED_tecsgen.h"
#define tLED__IDX_is_ID_act                                (false)
#define tLED__sizeOfCB                                     ((0))
#define tLED__sizeOfINIB                                   ((0))
#define tLED__NCELLINLINKUNIT          (1)

#include "tBattery_tecsgen.h"
#define tBattery__IDX_is_ID_act                            (false)
#define tBattery__sizeOfCB                                 ((0))
#define tBattery__sizeOfINIB                               ((0))
#define tBattery__NCELLINLINKUNIT      (1)

#include "tSpeaker_tecsgen.h"
#define tSpeaker__IDX_is_ID_act                            (false)
#define tSpeaker__sizeOfCB                                 ((0))
#define tSpeaker__sizeOfINIB                               ((0))
#define tSpeaker__NCELLINLINKUNIT      (1)

#include "tEV3Platform_tecsgen.h"
#define tEV3Platform__IDX_is_ID_act                        (false)
#define tEV3Platform__sizeOfCB                             ((0))
#define tEV3Platform__sizeOfINIB                           ((sizeof(tEV3Platform_INIB)))
#define tEV3Platform__NCELLINLINKUNIT  (1)

#include "tBalancer_tecsgen.h"
#define tBalancer__IDX_is_ID_act                           (false)
#define tBalancer__sizeOfCB                                ((0))
#define tBalancer__sizeOfINIB                              ((0))
#define tBalancer__NCELLINLINKUNIT     (1)

#include "tSharedMemory_tecsgen.h"
#define tSharedMemory__IDX_is_ID_act                       (false)
#define tSharedMemory__sizeOfCB                            ((0))
#define tSharedMemory__sizeOfINIB                          ((sizeof(tSharedMemory_INIB)))
#define tSharedMemory__NCELLINLINKUNIT (1)

#include "tFatFile_tecsgen.h"
#define tFatFile__IDX_is_ID_act                            (false)
#define tFatFile__sizeOfCB                                 ((sizeof(tFatFile_CB)))
#define tFatFile__sizeOfINIB                               ((0))
#define tFatFile__NCELLINLINKUNIT      (1)

#include "tTarget_tecsgen.h"
#define tTarget__IDX_is_ID_act                             (false)
#define tTarget__sizeOfCB                                  ((sizeof(tTarget_CB)))
#define tTarget__sizeOfINIB                                ((0))
#define tTarget__NCELLINLINKUNIT       (1)

#include "tTaskMain_tecsgen.h"
#define tTaskMain__IDX_is_ID_act                           (false)
#define tTaskMain__sizeOfCB                                ((sizeof(tTaskMain_CB)))
#define tTaskMain__sizeOfINIB                              ((sizeof(tTaskMain_INIB)))
#define tTaskMain__NCELLINLINKUNIT     (1)

#include "tJSMN_tecsgen.h"
#define tJSMN__IDX_is_ID_act                               (false)
#define tJSMN__sizeOfCB                                    ((sizeof(tJSMN_CB)))
#define tJSMN__sizeOfINIB                                  ((sizeof(tJSMN_INIB)))
#define tJSMN__NCELLINLINKUNIT         (1)

#include "tTECSUnit_tecsgen.h"
#define tTECSUnit__IDX_is_ID_act                           (false)
#define tTECSUnit__sizeOfCB                                ((sizeof(tTECSUnit_CB)))
#define tTECSUnit__sizeOfINIB                              ((sizeof(tTECSUnit_INIB)))
#define tTECSUnit__NCELLINLINKUNIT     (1)

#include "nMruby_tTECSInitializer_tecsgen.h"
#define nMruby_tTECSInitializer__IDX_is_ID_act             (false)
#define nMruby_tTECSInitializer__sizeOfCB                  ((sizeof(nMruby_tTECSInitializer_CB)))
#define nMruby_tTECSInitializer__sizeOfINIB                ((sizeof(nMruby_tTECSInitializer_INIB)))
#define nMruby_tTECSInitializer__NCELLINLINKUNIT (1)

#include "nMruby_tCharPointer_tecsgen.h"
#define nMruby_tCharPointer__IDX_is_ID_act                 (false)
#define nMruby_tCharPointer__sizeOfCB                      ((0))
#define nMruby_tCharPointer__sizeOfINIB                    ((0))
#define nMruby_tCharPointer__NCELLINLINKUNIT (1)

#include "nMruby_tInt8Pointer_tecsgen.h"
#define nMruby_tInt8Pointer__IDX_is_ID_act                 (false)
#define nMruby_tInt8Pointer__sizeOfCB                      ((0))
#define nMruby_tInt8Pointer__sizeOfINIB                    ((0))
#define nMruby_tInt8Pointer__NCELLINLINKUNIT (1)

#include "nMruby_tInt32Pointer_tecsgen.h"
#define nMruby_tInt32Pointer__IDX_is_ID_act                (false)
#define nMruby_tInt32Pointer__sizeOfCB                     ((0))
#define nMruby_tInt32Pointer__sizeOfINIB                   ((0))
#define nMruby_tInt32Pointer__NCELLINLINKUNIT (1)

#include "nMruby_tUInt16Pointer_tecsgen.h"
#define nMruby_tUInt16Pointer__IDX_is_ID_act               (false)
#define nMruby_tUInt16Pointer__sizeOfCB                    ((0))
#define nMruby_tUInt16Pointer__sizeOfINIB                  ((0))
#define nMruby_tUInt16Pointer__NCELLINLINKUNIT (1)

#include "nMruby_tIntPointer_tecsgen.h"
#define nMruby_tIntPointer__IDX_is_ID_act                  (false)
#define nMruby_tIntPointer__sizeOfCB                       ((0))
#define nMruby_tIntPointer__sizeOfINIB                     ((0))
#define nMruby_tIntPointer__NCELLINLINKUNIT (1)

#include "nMruby_tULongPointer_tecsgen.h"
#define nMruby_tULongPointer__IDX_is_ID_act                (false)
#define nMruby_tULongPointer__sizeOfCB                     ((0))
#define nMruby_tULongPointer__sizeOfINIB                   ((0))
#define nMruby_tULongPointer__NCELLINLINKUNIT (1)

#include "nMruby_tsKernel_tecsgen.h"
#define nMruby_tsKernel__IDX_is_ID_act                     (true)
#define nMruby_tsKernel__sizeOfCB                          ((0))
#define nMruby_tsKernel__sizeOfINIB                        ((0))
#define nMruby_tsKernel__NCELLINLINKUNIT (1)

#include "nMruby_tsKernel_Initializer_tecsgen.h"
#define nMruby_tsKernel_Initializer__IDX_is_ID_act         (false)
#define nMruby_tsKernel_Initializer__sizeOfCB              ((0))
#define nMruby_tsKernel_Initializer__sizeOfINIB            ((0))
#define nMruby_tsKernel_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsMotor_tecsgen.h"
#define nMruby_tsMotor__IDX_is_ID_act                      (true)
#define nMruby_tsMotor__sizeOfCB                           ((0))
#define nMruby_tsMotor__sizeOfINIB                         ((sizeof(nMruby_tsMotor_INIB)))
#define nMruby_tsMotor__NCELLINLINKUNIT (4)

#include "nMruby_tsMotor_Initializer_tecsgen.h"
#define nMruby_tsMotor_Initializer__IDX_is_ID_act          (false)
#define nMruby_tsMotor_Initializer__sizeOfCB               ((0))
#define nMruby_tsMotor_Initializer__sizeOfINIB             ((0))
#define nMruby_tsMotor_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsLCD_tecsgen.h"
#define nMruby_tsLCD__IDX_is_ID_act                        (true)
#define nMruby_tsLCD__sizeOfCB                             ((0))
#define nMruby_tsLCD__sizeOfINIB                           ((0))
#define nMruby_tsLCD__NCELLINLINKUNIT  (1)

#include "nMruby_tsLCD_Initializer_tecsgen.h"
#define nMruby_tsLCD_Initializer__IDX_is_ID_act            (false)
#define nMruby_tsLCD_Initializer__sizeOfCB                 ((0))
#define nMruby_tsLCD_Initializer__sizeOfINIB               ((0))
#define nMruby_tsLCD_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsLED_tecsgen.h"
#define nMruby_tsLED__IDX_is_ID_act                        (true)
#define nMruby_tsLED__sizeOfCB                             ((0))
#define nMruby_tsLED__sizeOfINIB                           ((0))
#define nMruby_tsLED__NCELLINLINKUNIT  (1)

#include "nMruby_tsLED_Initializer_tecsgen.h"
#define nMruby_tsLED_Initializer__IDX_is_ID_act            (false)
#define nMruby_tsLED_Initializer__sizeOfCB                 ((0))
#define nMruby_tsLED_Initializer__sizeOfINIB               ((0))
#define nMruby_tsLED_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsButton_tecsgen.h"
#define nMruby_tsButton__IDX_is_ID_act                     (true)
#define nMruby_tsButton__sizeOfCB                          ((0))
#define nMruby_tsButton__sizeOfINIB                        ((0))
#define nMruby_tsButton__NCELLINLINKUNIT (1)

#include "nMruby_tsButton_Initializer_tecsgen.h"
#define nMruby_tsButton_Initializer__IDX_is_ID_act         (false)
#define nMruby_tsButton_Initializer__sizeOfCB              ((0))
#define nMruby_tsButton_Initializer__sizeOfINIB            ((0))
#define nMruby_tsButton_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsBattery_tecsgen.h"
#define nMruby_tsBattery__IDX_is_ID_act                    (true)
#define nMruby_tsBattery__sizeOfCB                         ((0))
#define nMruby_tsBattery__sizeOfINIB                       ((0))
#define nMruby_tsBattery__NCELLINLINKUNIT (1)

#include "nMruby_tsBattery_Initializer_tecsgen.h"
#define nMruby_tsBattery_Initializer__IDX_is_ID_act        (false)
#define nMruby_tsBattery_Initializer__sizeOfCB             ((0))
#define nMruby_tsBattery_Initializer__sizeOfINIB           ((0))
#define nMruby_tsBattery_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsSpeaker_tecsgen.h"
#define nMruby_tsSpeaker__IDX_is_ID_act                    (true)
#define nMruby_tsSpeaker__sizeOfCB                         ((0))
#define nMruby_tsSpeaker__sizeOfINIB                       ((0))
#define nMruby_tsSpeaker__NCELLINLINKUNIT (1)

#include "nMruby_tsSpeaker_Initializer_tecsgen.h"
#define nMruby_tsSpeaker_Initializer__IDX_is_ID_act        (false)
#define nMruby_tsSpeaker_Initializer__sizeOfCB             ((0))
#define nMruby_tsSpeaker_Initializer__sizeOfINIB           ((0))
#define nMruby_tsSpeaker_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsUltrasonicSensor_tecsgen.h"
#define nMruby_tsUltrasonicSensor__IDX_is_ID_act           (true)
#define nMruby_tsUltrasonicSensor__sizeOfCB                ((0))
#define nMruby_tsUltrasonicSensor__sizeOfINIB              ((sizeof(nMruby_tsUltrasonicSensor_INIB)))
#define nMruby_tsUltrasonicSensor__NCELLINLINKUNIT (4)

#include "nMruby_tsUltrasonicSensor_Initializer_tecsgen.h"
#define nMruby_tsUltrasonicSensor_Initializer__IDX_is_ID_act (false)
#define nMruby_tsUltrasonicSensor_Initializer__sizeOfCB    ((0))
#define nMruby_tsUltrasonicSensor_Initializer__sizeOfINIB  ((0))
#define nMruby_tsUltrasonicSensor_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsGyroSensor_tecsgen.h"
#define nMruby_tsGyroSensor__IDX_is_ID_act                 (true)
#define nMruby_tsGyroSensor__sizeOfCB                      ((0))
#define nMruby_tsGyroSensor__sizeOfINIB                    ((sizeof(nMruby_tsGyroSensor_INIB)))
#define nMruby_tsGyroSensor__NCELLINLINKUNIT (4)

#include "nMruby_tsGyroSensor_Initializer_tecsgen.h"
#define nMruby_tsGyroSensor_Initializer__IDX_is_ID_act     (false)
#define nMruby_tsGyroSensor_Initializer__sizeOfCB          ((0))
#define nMruby_tsGyroSensor_Initializer__sizeOfINIB        ((0))
#define nMruby_tsGyroSensor_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsColorSensor_tecsgen.h"
#define nMruby_tsColorSensor__IDX_is_ID_act                (true)
#define nMruby_tsColorSensor__sizeOfCB                     ((0))
#define nMruby_tsColorSensor__sizeOfINIB                   ((sizeof(nMruby_tsColorSensor_INIB)))
#define nMruby_tsColorSensor__NCELLINLINKUNIT (4)

#include "nMruby_tsColorSensor_Initializer_tecsgen.h"
#define nMruby_tsColorSensor_Initializer__IDX_is_ID_act    (false)
#define nMruby_tsColorSensor_Initializer__sizeOfCB         ((0))
#define nMruby_tsColorSensor_Initializer__sizeOfINIB       ((0))
#define nMruby_tsColorSensor_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsTouchSensor_tecsgen.h"
#define nMruby_tsTouchSensor__IDX_is_ID_act                (true)
#define nMruby_tsTouchSensor__sizeOfCB                     ((0))
#define nMruby_tsTouchSensor__sizeOfINIB                   ((sizeof(nMruby_tsTouchSensor_INIB)))
#define nMruby_tsTouchSensor__NCELLINLINKUNIT (4)

#include "nMruby_tsTouchSensor_Initializer_tecsgen.h"
#define nMruby_tsTouchSensor_Initializer__IDX_is_ID_act    (false)
#define nMruby_tsTouchSensor_Initializer__sizeOfCB         ((0))
#define nMruby_tsTouchSensor_Initializer__sizeOfINIB       ((0))
#define nMruby_tsTouchSensor_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsBalancer_tecsgen.h"
#define nMruby_tsBalancer__IDX_is_ID_act                   (true)
#define nMruby_tsBalancer__sizeOfCB                        ((0))
#define nMruby_tsBalancer__sizeOfINIB                      ((0))
#define nMruby_tsBalancer__NCELLINLINKUNIT (1)

#include "nMruby_tsBalancer_Initializer_tecsgen.h"
#define nMruby_tsBalancer_Initializer__IDX_is_ID_act       (false)
#define nMruby_tsBalancer_Initializer__sizeOfCB            ((0))
#define nMruby_tsBalancer_Initializer__sizeOfINIB          ((0))
#define nMruby_tsBalancer_Initializer__NCELLINLINKUNIT (1)

#include "nMruby_tsSharedMemory_tecsgen.h"
#define nMruby_tsSharedMemory__IDX_is_ID_act               (true)
#define nMruby_tsSharedMemory__sizeOfCB                    ((0))
#define nMruby_tsSharedMemory__sizeOfINIB                  ((0))
#define nMruby_tsSharedMemory__NCELLINLINKUNIT (1)

#include "nMruby_tsSharedMemory_Initializer_tecsgen.h"
#define nMruby_tsSharedMemory_Initializer__IDX_is_ID_act   (false)
#define nMruby_tsSharedMemory_Initializer__sizeOfCB        ((0))
#define nMruby_tsSharedMemory_Initializer__sizeOfINIB      ((0))
#define nMruby_tsSharedMemory_Initializer__NCELLINLINKUNIT (1)

#include "nTECSInfo_tTECSInfo_tecsgen.h"
#define nTECSInfo_tTECSInfo__IDX_is_ID_act                 (false)
#define nTECSInfo_tTECSInfo__sizeOfCB                      ((0))
#define nTECSInfo_tTECSInfo__sizeOfINIB                    ((0))
#define nTECSInfo_tTECSInfo__NCELLINLINKUNIT (1)

#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#define nTECSInfo_tTECSInfoSub__IDX_is_ID_act              (false)
#define nTECSInfo_tTECSInfoSub__sizeOfCB                   ((sizeof(nTECSInfo_tTECSInfoSub_CB)))
#define nTECSInfo_tTECSInfoSub__sizeOfINIB                 ((sizeof(nTECSInfo_tTECSInfoSub_INIB)))
#define nTECSInfo_tTECSInfoSub__NCELLINLINKUNIT (1)

#include "nTECSInfo_tNamespaceInfo_tecsgen.h"
#define nTECSInfo_tNamespaceInfo__IDX_is_ID_act            (false)
#define nTECSInfo_tNamespaceInfo__sizeOfCB                 ((0))
#define nTECSInfo_tNamespaceInfo__sizeOfINIB               ((sizeof(nTECSInfo_tNamespaceInfo_INIB)))
#define nTECSInfo_tNamespaceInfo__NCELLINLINKUNIT (4)

#include "nTECSInfo_tSignatureInfo_tecsgen.h"
#define nTECSInfo_tSignatureInfo__IDX_is_ID_act            (false)
#define nTECSInfo_tSignatureInfo__sizeOfCB                 ((0))
#define nTECSInfo_tSignatureInfo__sizeOfINIB               ((sizeof(nTECSInfo_tSignatureInfo_INIB)))
#define nTECSInfo_tSignatureInfo__NCELLINLINKUNIT (58)

#include "nTECSInfo_tFunctionInfo_tecsgen.h"
#define nTECSInfo_tFunctionInfo__IDX_is_ID_act             (false)
#define nTECSInfo_tFunctionInfo__sizeOfCB                  ((0))
#define nTECSInfo_tFunctionInfo__sizeOfINIB                ((sizeof(nTECSInfo_tFunctionInfo_INIB)))
#define nTECSInfo_tFunctionInfo__NCELLINLINKUNIT (278)

#include "nTECSInfo_tParamInfo_tecsgen.h"
#define nTECSInfo_tParamInfo__IDX_is_ID_act                (false)
#define nTECSInfo_tParamInfo__sizeOfCB                     ((0))
#define nTECSInfo_tParamInfo__sizeOfINIB                   ((sizeof(nTECSInfo_tParamInfo_INIB)))
#define nTECSInfo_tParamInfo__NCELLINLINKUNIT (280)

#include "nTECSInfo_tCelltypeInfo_tecsgen.h"
#define nTECSInfo_tCelltypeInfo__IDX_is_ID_act             (false)
#define nTECSInfo_tCelltypeInfo__sizeOfCB                  ((0))
#define nTECSInfo_tCelltypeInfo__sizeOfINIB                ((sizeof(nTECSInfo_tCelltypeInfo_INIB)))
#define nTECSInfo_tCelltypeInfo__NCELLINLINKUNIT (54)

#include "nTECSInfo_tCallInfo_tecsgen.h"
#define nTECSInfo_tCallInfo__IDX_is_ID_act                 (false)
#define nTECSInfo_tCallInfo__sizeOfCB                      ((0))
#define nTECSInfo_tCallInfo__sizeOfINIB                    ((sizeof(nTECSInfo_tCallInfo_INIB)))
#define nTECSInfo_tCallInfo__NCELLINLINKUNIT (69)

#include "nTECSInfo_tEntryInfo_tecsgen.h"
#define nTECSInfo_tEntryInfo__IDX_is_ID_act                (false)
#define nTECSInfo_tEntryInfo__sizeOfCB                     ((0))
#define nTECSInfo_tEntryInfo__sizeOfINIB                   ((sizeof(nTECSInfo_tEntryInfo_INIB)))
#define nTECSInfo_tEntryInfo__NCELLINLINKUNIT (43)

#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#define nTECSInfo_tVarDeclInfo__IDX_is_ID_act              (false)
#define nTECSInfo_tVarDeclInfo__sizeOfCB                   ((0))
#define nTECSInfo_tVarDeclInfo__sizeOfINIB                 ((sizeof(nTECSInfo_tVarDeclInfo_INIB)))
#define nTECSInfo_tVarDeclInfo__NCELLINLINKUNIT (167)

#include "nTECSInfo_tRegionInfo_tecsgen.h"
#define nTECSInfo_tRegionInfo__IDX_is_ID_act               (false)
#define nTECSInfo_tRegionInfo__sizeOfCB                    ((0))
#define nTECSInfo_tRegionInfo__sizeOfINIB                  ((sizeof(nTECSInfo_tRegionInfo_INIB)))
#define nTECSInfo_tRegionInfo__NCELLINLINKUNIT (3)

#include "nTECSInfo_tCellInfo_tecsgen.h"
#define nTECSInfo_tCellInfo__IDX_is_ID_act                 (false)
#define nTECSInfo_tCellInfo__sizeOfCB                      ((0))
#define nTECSInfo_tCellInfo__sizeOfINIB                    ((sizeof(nTECSInfo_tCellInfo_INIB)))
#define nTECSInfo_tCellInfo__NCELLINLINKUNIT (65)

#include "nTECSInfo_tRawEntryDescriptorInfo_tecsgen.h"
#define nTECSInfo_tRawEntryDescriptorInfo__IDX_is_ID_act   (false)
#define nTECSInfo_tRawEntryDescriptorInfo__sizeOfCB        ((0))
#define nTECSInfo_tRawEntryDescriptorInfo__sizeOfINIB      ((sizeof(nTECSInfo_tRawEntryDescriptorInfo_INIB)))
#define nTECSInfo_tRawEntryDescriptorInfo__NCELLINLINKUNIT (40)

#include "nTECSInfo_tVoidTypeInfo_tecsgen.h"
#define nTECSInfo_tVoidTypeInfo__IDX_is_ID_act             (false)
#define nTECSInfo_tVoidTypeInfo__sizeOfCB                  ((0))
#define nTECSInfo_tVoidTypeInfo__sizeOfINIB                ((sizeof(nTECSInfo_tVoidTypeInfo_INIB)))
#define nTECSInfo_tVoidTypeInfo__NCELLINLINKUNIT (2)

#include "nTECSInfo_tIntTypeInfo_tecsgen.h"
#define nTECSInfo_tIntTypeInfo__IDX_is_ID_act              (false)
#define nTECSInfo_tIntTypeInfo__sizeOfCB                   ((0))
#define nTECSInfo_tIntTypeInfo__sizeOfINIB                 ((sizeof(nTECSInfo_tIntTypeInfo_INIB)))
#define nTECSInfo_tIntTypeInfo__NCELLINLINKUNIT (18)

#include "nTECSInfo_tFloatTypeInfo_tecsgen.h"
#define nTECSInfo_tFloatTypeInfo__IDX_is_ID_act            (false)
#define nTECSInfo_tFloatTypeInfo__sizeOfCB                 ((0))
#define nTECSInfo_tFloatTypeInfo__sizeOfINIB               ((sizeof(nTECSInfo_tFloatTypeInfo_INIB)))
#define nTECSInfo_tFloatTypeInfo__NCELLINLINKUNIT (1)

#include "nTECSInfo_tStructTypeInfo_tecsgen.h"
#define nTECSInfo_tStructTypeInfo__IDX_is_ID_act           (false)
#define nTECSInfo_tStructTypeInfo__sizeOfCB                ((0))
#define nTECSInfo_tStructTypeInfo__sizeOfINIB              ((sizeof(nTECSInfo_tStructTypeInfo_INIB)))
#define nTECSInfo_tStructTypeInfo__NCELLINLINKUNIT (16)

#include "nTECSInfo_tPtrTypeInfo_tecsgen.h"
#define nTECSInfo_tPtrTypeInfo__IDX_is_ID_act              (false)
#define nTECSInfo_tPtrTypeInfo__sizeOfCB                   ((0))
#define nTECSInfo_tPtrTypeInfo__sizeOfINIB                 ((sizeof(nTECSInfo_tPtrTypeInfo_INIB)))
#define nTECSInfo_tPtrTypeInfo__NCELLINLINKUNIT (55)

#include "nTECSInfo_tArrayTypeInfo_tecsgen.h"
#define nTECSInfo_tArrayTypeInfo__IDX_is_ID_act            (false)
#define nTECSInfo_tArrayTypeInfo__sizeOfCB                 ((0))
#define nTECSInfo_tArrayTypeInfo__sizeOfINIB               ((sizeof(nTECSInfo_tArrayTypeInfo_INIB)))
#define nTECSInfo_tArrayTypeInfo__NCELLINLINKUNIT (6)

#include "nTECSInfo_tDefinedTypeInfo_tecsgen.h"
#define nTECSInfo_tDefinedTypeInfo__IDX_is_ID_act          (false)
#define nTECSInfo_tDefinedTypeInfo__sizeOfCB               ((0))
#define nTECSInfo_tDefinedTypeInfo__sizeOfINIB             ((sizeof(nTECSInfo_tDefinedTypeInfo_INIB)))
#define nTECSInfo_tDefinedTypeInfo__NCELLINLINKUNIT (54)

#include "nTECSInfo_tDescriptorTypeInfo_tecsgen.h"
#define nTECSInfo_tDescriptorTypeInfo__IDX_is_ID_act       (false)
#define nTECSInfo_tDescriptorTypeInfo__sizeOfCB            ((0))
#define nTECSInfo_tDescriptorTypeInfo__sizeOfINIB          ((sizeof(nTECSInfo_tDescriptorTypeInfo_INIB)))
#define nTECSInfo_tDescriptorTypeInfo__NCELLINLINKUNIT (12)
/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tCelltypeInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tCelltypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */

#endif /* tCelltypeInfo_FACTORY_H */
