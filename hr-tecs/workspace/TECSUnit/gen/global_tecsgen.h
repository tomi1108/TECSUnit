/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "tecs_kernel.h"
#include "tecs_mruby.h"
#include "t_stddef.h"
#include "ev3api_sensor.h"
#include "ev3api_motor.h"
#include "ev3api_button.h"
#include "ev3api_fs.h"
#include "ev3api_lcd.h"
#include "ev3api_led.h"
#include "ev3api_battery.h"
#include "tEV3Platform.h"
#include "ff.h"
#include "t_syslog.h"
#include "src/unit_struct.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

 extern void tJSMN_CB_initialize();
 extern void tTECSUnit_CB_initialize();
 extern void nMruby_tsKernel_CB_initialize();
 extern void nMruby_tsKernel_Initializer_CB_initialize();
 extern void nMruby_tsMotor_CB_initialize();
 extern void nMruby_tsMotor_Initializer_CB_initialize();
 extern void nMruby_tsLCD_CB_initialize();
 extern void nMruby_tsLCD_Initializer_CB_initialize();
 extern void nMruby_tsLED_CB_initialize();
 extern void nMruby_tsLED_Initializer_CB_initialize();
 extern void nMruby_tsButton_CB_initialize();
 extern void nMruby_tsButton_Initializer_CB_initialize();
 extern void nMruby_tsBattery_CB_initialize();
 extern void nMruby_tsBattery_Initializer_CB_initialize();
 extern void nMruby_tsSpeaker_CB_initialize();
 extern void nMruby_tsSpeaker_Initializer_CB_initialize();
 extern void nMruby_tsUltrasonicSensor_CB_initialize();
 extern void nMruby_tsUltrasonicSensor_Initializer_CB_initialize();
 extern void nMruby_tsGyroSensor_CB_initialize();
 extern void nMruby_tsGyroSensor_Initializer_CB_initialize();
 extern void nMruby_tsColorSensor_CB_initialize();
 extern void nMruby_tsColorSensor_Initializer_CB_initialize();
 extern void nMruby_tsTouchSensor_CB_initialize();
 extern void nMruby_tsTouchSensor_Initializer_CB_initialize();
 extern void nMruby_tsBalancer_CB_initialize();
 extern void nMruby_tsBalancer_Initializer_CB_initialize();
 extern void nMruby_tsSharedMemory_CB_initialize();
 extern void nMruby_tsSharedMemory_Initializer_CB_initialize();
 extern void tTask_CB_initialize();
 extern void tKernel_CB_initialize();
 extern void tUltrasonicSensor_CB_initialize();
 extern void tColorSensor_CB_initialize();
 extern void tTouchSensor_CB_initialize();
 extern void tGyroSensor_CB_initialize();
 extern void tMotor_CB_initialize();
 extern void tButton_CB_initialize();
 extern void tLCD_CB_initialize();
 extern void tLED_CB_initialize();
 extern void tBattery_CB_initialize();
 extern void tSpeaker_CB_initialize();
 extern void tEV3Platform_CB_initialize();
 extern void tBalancer_CB_initialize();
 extern void tSharedMemory_CB_initialize();
 extern void tFatFile_CB_initialize();
 extern void tTarget_CB_initialize();
 extern void tTaskMain_CB_initialize();
 extern void nMruby_tTECSInitializer_CB_initialize();
 extern void nMruby_tCharPointer_CB_initialize();
 extern void nMruby_tInt8Pointer_CB_initialize();
 extern void nMruby_tInt32Pointer_CB_initialize();
 extern void nMruby_tUInt16Pointer_CB_initialize();
 extern void nMruby_tIntPointer_CB_initialize();
 extern void nMruby_tULongPointer_CB_initialize();
 extern void nTECSInfo_tTECSInfo_CB_initialize();
 extern void nTECSInfo_tTECSInfoSub_CB_initialize();
 extern void nTECSInfo_tNamespaceInfo_CB_initialize();
 extern void nTECSInfo_tSignatureInfo_CB_initialize();
 extern void nTECSInfo_tFunctionInfo_CB_initialize();
 extern void nTECSInfo_tParamInfo_CB_initialize();
 extern void nTECSInfo_tCelltypeInfo_CB_initialize();
 extern void nTECSInfo_tCallInfo_CB_initialize();
 extern void nTECSInfo_tEntryInfo_CB_initialize();
 extern void nTECSInfo_tVarDeclInfo_CB_initialize();
 extern void nTECSInfo_tRegionInfo_CB_initialize();
 extern void nTECSInfo_tCellInfo_CB_initialize();
 extern void nTECSInfo_tRawEntryDescriptorInfo_CB_initialize();
 extern void nTECSInfo_tVoidTypeInfo_CB_initialize();
 extern void nTECSInfo_tIntTypeInfo_CB_initialize();
 extern void nTECSInfo_tFloatTypeInfo_CB_initialize();
 extern void nTECSInfo_tStructTypeInfo_CB_initialize();
 extern void nTECSInfo_tPtrTypeInfo_CB_initialize();
 extern void nTECSInfo_tArrayTypeInfo_CB_initialize();
 extern void nTECSInfo_tDefinedTypeInfo_CB_initialize();
 extern void nTECSInfo_tDescriptorTypeInfo_CB_initialize();

#define INITIALIZE_TECS() \
 	tJSMN_CB_initialize();\
 	tTECSUnit_CB_initialize();\
 	nMruby_tsKernel_CB_initialize();\
 	nMruby_tsKernel_Initializer_CB_initialize();\
 	nMruby_tsMotor_CB_initialize();\
 	nMruby_tsMotor_Initializer_CB_initialize();\
 	nMruby_tsLCD_CB_initialize();\
 	nMruby_tsLCD_Initializer_CB_initialize();\
 	nMruby_tsLED_CB_initialize();\
 	nMruby_tsLED_Initializer_CB_initialize();\
 	nMruby_tsButton_CB_initialize();\
 	nMruby_tsButton_Initializer_CB_initialize();\
 	nMruby_tsBattery_CB_initialize();\
 	nMruby_tsBattery_Initializer_CB_initialize();\
 	nMruby_tsSpeaker_CB_initialize();\
 	nMruby_tsSpeaker_Initializer_CB_initialize();\
 	nMruby_tsUltrasonicSensor_CB_initialize();\
 	nMruby_tsUltrasonicSensor_Initializer_CB_initialize();\
 	nMruby_tsGyroSensor_CB_initialize();\
 	nMruby_tsGyroSensor_Initializer_CB_initialize();\
 	nMruby_tsColorSensor_CB_initialize();\
 	nMruby_tsColorSensor_Initializer_CB_initialize();\
 	nMruby_tsTouchSensor_CB_initialize();\
 	nMruby_tsTouchSensor_Initializer_CB_initialize();\
 	nMruby_tsBalancer_CB_initialize();\
 	nMruby_tsBalancer_Initializer_CB_initialize();\
 	nMruby_tsSharedMemory_CB_initialize();\
 	nMruby_tsSharedMemory_Initializer_CB_initialize();\
 	tTask_CB_initialize();\
 	tKernel_CB_initialize();\
 	tUltrasonicSensor_CB_initialize();\
 	tColorSensor_CB_initialize();\
 	tTouchSensor_CB_initialize();\
 	tGyroSensor_CB_initialize();\
 	tMotor_CB_initialize();\
 	tButton_CB_initialize();\
 	tLCD_CB_initialize();\
 	tLED_CB_initialize();\
 	tBattery_CB_initialize();\
 	tSpeaker_CB_initialize();\
 	tEV3Platform_CB_initialize();\
 	tBalancer_CB_initialize();\
 	tSharedMemory_CB_initialize();\
 	tFatFile_CB_initialize();\
 	tTarget_CB_initialize();\
 	tTaskMain_CB_initialize();\
 	nMruby_tTECSInitializer_CB_initialize();\
 	nMruby_tCharPointer_CB_initialize();\
 	nMruby_tInt8Pointer_CB_initialize();\
 	nMruby_tInt32Pointer_CB_initialize();\
 	nMruby_tUInt16Pointer_CB_initialize();\
 	nMruby_tIntPointer_CB_initialize();\
 	nMruby_tULongPointer_CB_initialize();\
 	nTECSInfo_tTECSInfo_CB_initialize();\
 	nTECSInfo_tTECSInfoSub_CB_initialize();\
 	nTECSInfo_tNamespaceInfo_CB_initialize();\
 	nTECSInfo_tSignatureInfo_CB_initialize();\
 	nTECSInfo_tFunctionInfo_CB_initialize();\
 	nTECSInfo_tParamInfo_CB_initialize();\
 	nTECSInfo_tCelltypeInfo_CB_initialize();\
 	nTECSInfo_tCallInfo_CB_initialize();\
 	nTECSInfo_tEntryInfo_CB_initialize();\
 	nTECSInfo_tVarDeclInfo_CB_initialize();\
 	nTECSInfo_tRegionInfo_CB_initialize();\
 	nTECSInfo_tCellInfo_CB_initialize();\
 	nTECSInfo_tRawEntryDescriptorInfo_CB_initialize();\
 	nTECSInfo_tVoidTypeInfo_CB_initialize();\
 	nTECSInfo_tIntTypeInfo_CB_initialize();\
 	nTECSInfo_tFloatTypeInfo_CB_initialize();\
 	nTECSInfo_tStructTypeInfo_CB_initialize();\
 	nTECSInfo_tPtrTypeInfo_CB_initialize();\
 	nTECSInfo_tArrayTypeInfo_CB_initialize();\
 	nTECSInfo_tDefinedTypeInfo_CB_initialize();\
 	nTECSInfo_tDescriptorTypeInfo_CB_initialize();\
/* INITIALIZE_TECS terminator */

#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define MRUBY_VM_STACK_SIZE ((const int32_t)81920)
#define TECSTypeKind_BoolType ((const int8_t)1)
#define TECSTypeKind_IntType ((const int8_t)2)
#define TECSTypeKind_FloatType ((const int8_t)3)
#define TECSTypeKind_PtrType ((const int8_t)4)
#define TECSTypeKind_ArrayType ((const int8_t)5)
#define TECSTypeKind_DefinedType ((const int8_t)6)
#define TECSTypeKind_StructType ((const int8_t)7)
#define TECSTypeKind_EnumType ((const int8_t)8)
#define TECSTypeKind_VoidType ((const int8_t)9)
#define TECSTypeKind_DescriptorType ((const int8_t)10)
#define PARAM_DIR_IN   ((const int8_t)1)
#define PARAM_DIR_OUT  ((const int8_t)2)
#define PARAM_DIR_INOUT ((const int8_t)3)
#define PARAM_DIR_SEND ((const int8_t)4)
#define PARAM_DIR_RECEIVE ((const int8_t)5)
#define DECLTYPE_STMEMBER ((const int8_t)1)
#define DECLTYPE_ATTR  ((const int8_t)2)
#define DECLTYPE_VAR   ((const int8_t)3)
#define VARDECL_PLACE_STRUCT ((const int8_t)1)
#define VARDECL_PLACE_NON ((const int8_t)2)
#define VARDECL_PLACE_CB ((const int8_t)3)
#define VARDECL_PLACE_INIB ((const int8_t)4)
#define CALL_PLACE_NON ((const int8_t)1)
#define CALL_PLACE_INIB_DES ((const int8_t)2)
#define CALL_PLACE_CB_DES ((const int8_t)3)
#define CALL_PLACE_INIB_IDX ((const int8_t)4)
#define CALL_PLACE_CB_IDX ((const int8_t)5)
#define setRawEntryDescriptor( callDesc, callPortSignature, rawEntryDesc )   (callDesc).vdes = (struct tag_ ## callPortSignature ## _VDES *) rawEntryDesc

#endif /* GLOBAL_TECSGEN_H */
