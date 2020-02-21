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
#include "st.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

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
 extern void tTLSFMalloc_CB_initialize();
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
 extern void tCelltype_CB_initialize();
 extern void nMruby_tTECSInitializer_CB_initialize();
 extern void nMruby_tCharPointer_CB_initialize();
 extern void nMruby_tInt8Pointer_CB_initialize();
 extern void nMruby_tInt32Pointer_CB_initialize();
 extern void nMruby_tUInt16Pointer_CB_initialize();
 extern void nMruby_tIntPointer_CB_initialize();
 extern void nMruby_tULongPointer_CB_initialize();
 extern void nMruby_tMrubyVM_CB_initialize();
 extern void nMruby_tMrubyTaskBody_CB_initialize();

#define INITIALIZE_TECS() \
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
 	tTLSFMalloc_CB_initialize();\
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
 	tCelltype_CB_initialize();\
 	nMruby_tTECSInitializer_CB_initialize();\
 	nMruby_tCharPointer_CB_initialize();\
 	nMruby_tInt8Pointer_CB_initialize();\
 	nMruby_tInt32Pointer_CB_initialize();\
 	nMruby_tUInt16Pointer_CB_initialize();\
 	nMruby_tIntPointer_CB_initialize();\
 	nMruby_tULongPointer_CB_initialize();\
 	nMruby_tMrubyVM_CB_initialize();\
 	nMruby_tMrubyTaskBody_CB_initialize();\
/* INITIALIZE_TECS terminator */

#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define MRUBY_VM_STACK_SIZE ((const int32_t)81920)

#endif /* GLOBAL_TECSGEN_H */
