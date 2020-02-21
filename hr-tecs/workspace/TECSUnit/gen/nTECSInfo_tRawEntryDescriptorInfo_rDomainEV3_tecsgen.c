/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tRawEntryDescriptorInfo_tecsgen.h"
#include "nTECSInfo_tRawEntryDescriptorInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eRawEntryDescriptor */
struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES {
    const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT *vmt;
    tRawEntryDescriptorInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eRawEntryDescriptor */
uint16_t       nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *epd)
{
    struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES *lepd
        = (struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES *)epd;
    return nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo( lepd->idx );
}
ER             nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor_skel( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *epd, int_t subsc, void** rawDesc)
{
    struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES *lepd
        = (struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES *)epd;
    return nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor( lepd->idx, subsc, rawDesc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eRawEntryDescriptor */
const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_ = {
    nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo_skel,
    nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */








































/* 呼び口配列 #_CPA_# */








































/* 属性・変数の配列 #_AVAI_# */
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_HRP2Kernel_eKernelRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_HRP2Kernel_eKernel_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_HRP2Kernel_eiKernelRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_HRP2Kernel_eiKernel_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_MotorA_eMotorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_MotorA_eMotor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_MotorB_eMotorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_MotorB_eMotor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_MotorC_eMotorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_MotorC_eMotor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_MotorD_eMotorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_MotorD_eMotor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_LCD_eLCDRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_LCD_eLCD_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_LED_eLEDRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_LED_eLED_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Button_eButtonRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_Button_eButton_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Battery_eBatteryRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_Battery_eBattery_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Speaker_eSpeakerRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_Speaker_eSpeaker_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_UltrasonicSensor1_eUltrasonicSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_UltrasonicSensor1_eUltrasonicSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_UltrasonicSensor2_eUltrasonicSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_UltrasonicSensor2_eUltrasonicSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_UltrasonicSensor3_eUltrasonicSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_UltrasonicSensor3_eUltrasonicSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_UltrasonicSensor4_eUltrasonicSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_UltrasonicSensor4_eUltrasonicSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_GyroSensor1_eGyroSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_GyroSensor1_eGyroSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_GyroSensor2_eGyroSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_GyroSensor2_eGyroSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_GyroSensor3_eGyroSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_GyroSensor3_eGyroSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_GyroSensor4_eGyroSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_GyroSensor4_eGyroSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_ColorSensor1_eColorSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_ColorSensor1_eColorSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_ColorSensor2_eColorSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_ColorSensor2_eColorSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_ColorSensor3_eColorSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_ColorSensor3_eColorSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_ColorSensor4_eColorSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_ColorSensor4_eColorSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TouchSensor1_eTouchSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_TouchSensor1_eTouchSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TouchSensor2_eTouchSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_TouchSensor2_eTouchSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TouchSensor3_eTouchSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_TouchSensor3_eTouchSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TouchSensor4_eTouchSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_TouchSensor4_eTouchSensor_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Balancer_eBalancerRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_Balancer_eBalancer_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_SharedMemory_eSharedMemoryRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_SharedMemory_eSharedMemory_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_EV3Platform_eTaskBodyRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_EV3Platform_eTaskBody_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_EV3Task_eTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_EV3Task_eTask_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_EV3Task_eiTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_EV3Task_eiTask_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Target_eTargetRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_Target_eTarget_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Task_eTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_Task_eTask_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Task_eiTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_Task_eiTask_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TaskMain_eBodyRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_TaskMain_eBody_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_JSMN_eJSMNRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_JSMN_eJSMN_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TECSUnit_eUnitRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_TECSUnit_eUnit_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_FatFile_eFatFileRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_FatFile_eFatFile_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TECSInfo_eTECSInfoRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rDomainEV3_TECSInfo_eTECSInfo_des, };
/* セル INIB #_INIB_# */
nTECSInfo_tRawEntryDescriptorInfo_INIB nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[0]:  rDomainEV3_HRP2Kernel_eKernelRawEntryDescriptorInfo id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_HRP2Kernel_eKernelRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[1]:  rDomainEV3_HRP2Kernel_eiKernelRawEntryDescriptorInfo id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_HRP2Kernel_eiKernelRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[2]:  rDomainEV3_MotorA_eMotorRawEntryDescriptorInfo id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_MotorA_eMotorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[3]:  rDomainEV3_MotorB_eMotorRawEntryDescriptorInfo id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_MotorB_eMotorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[4]:  rDomainEV3_MotorC_eMotorRawEntryDescriptorInfo id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_MotorC_eMotorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[5]:  rDomainEV3_MotorD_eMotorRawEntryDescriptorInfo id=6 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_MotorD_eMotorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[6]:  rDomainEV3_LCD_eLCDRawEntryDescriptorInfo id=7 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_LCD_eLCDRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[7]:  rDomainEV3_LED_eLEDRawEntryDescriptorInfo id=8 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_LED_eLEDRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[8]:  rDomainEV3_Button_eButtonRawEntryDescriptorInfo id=9 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Button_eButtonRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[9]:  rDomainEV3_Battery_eBatteryRawEntryDescriptorInfo id=10 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Battery_eBatteryRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[10]:  rDomainEV3_Speaker_eSpeakerRawEntryDescriptorInfo id=11 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Speaker_eSpeakerRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[11]:  rDomainEV3_UltrasonicSensor1_eUltrasonicSensorRawEntryDescriptorInfo id=12 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_UltrasonicSensor1_eUltrasonicSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[12]:  rDomainEV3_UltrasonicSensor2_eUltrasonicSensorRawEntryDescriptorInfo id=13 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_UltrasonicSensor2_eUltrasonicSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[13]:  rDomainEV3_UltrasonicSensor3_eUltrasonicSensorRawEntryDescriptorInfo id=14 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_UltrasonicSensor3_eUltrasonicSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[14]:  rDomainEV3_UltrasonicSensor4_eUltrasonicSensorRawEntryDescriptorInfo id=15 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_UltrasonicSensor4_eUltrasonicSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[15]:  rDomainEV3_GyroSensor1_eGyroSensorRawEntryDescriptorInfo id=16 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_GyroSensor1_eGyroSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[16]:  rDomainEV3_GyroSensor2_eGyroSensorRawEntryDescriptorInfo id=17 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_GyroSensor2_eGyroSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[17]:  rDomainEV3_GyroSensor3_eGyroSensorRawEntryDescriptorInfo id=18 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_GyroSensor3_eGyroSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[18]:  rDomainEV3_GyroSensor4_eGyroSensorRawEntryDescriptorInfo id=19 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_GyroSensor4_eGyroSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[19]:  rDomainEV3_ColorSensor1_eColorSensorRawEntryDescriptorInfo id=20 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_ColorSensor1_eColorSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[20]:  rDomainEV3_ColorSensor2_eColorSensorRawEntryDescriptorInfo id=21 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_ColorSensor2_eColorSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[21]:  rDomainEV3_ColorSensor3_eColorSensorRawEntryDescriptorInfo id=22 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_ColorSensor3_eColorSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[22]:  rDomainEV3_ColorSensor4_eColorSensorRawEntryDescriptorInfo id=23 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_ColorSensor4_eColorSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[23]:  rDomainEV3_TouchSensor1_eTouchSensorRawEntryDescriptorInfo id=24 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TouchSensor1_eTouchSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[24]:  rDomainEV3_TouchSensor2_eTouchSensorRawEntryDescriptorInfo id=25 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TouchSensor2_eTouchSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[25]:  rDomainEV3_TouchSensor3_eTouchSensorRawEntryDescriptorInfo id=26 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TouchSensor3_eTouchSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[26]:  rDomainEV3_TouchSensor4_eTouchSensorRawEntryDescriptorInfo id=27 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TouchSensor4_eTouchSensorRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[27]:  rDomainEV3_Balancer_eBalancerRawEntryDescriptorInfo id=28 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Balancer_eBalancerRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[28]:  rDomainEV3_SharedMemory_eSharedMemoryRawEntryDescriptorInfo id=29 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_SharedMemory_eSharedMemoryRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[29]:  rDomainEV3_EV3Platform_eTaskBodyRawEntryDescriptorInfo id=30 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_EV3Platform_eTaskBodyRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[30]:  rDomainEV3_EV3Task_eTaskRawEntryDescriptorInfo id=31 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_EV3Task_eTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[31]:  rDomainEV3_EV3Task_eiTaskRawEntryDescriptorInfo id=32 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_EV3Task_eiTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[32]:  rDomainEV3_Target_eTargetRawEntryDescriptorInfo id=33 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Target_eTargetRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[33]:  rDomainEV3_Task_eTaskRawEntryDescriptorInfo id=34 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Task_eTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[34]:  rDomainEV3_Task_eiTaskRawEntryDescriptorInfo id=35 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_Task_eiTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[35]:  rDomainEV3_TaskMain_eBodyRawEntryDescriptorInfo id=36 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TaskMain_eBodyRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[36]:  rDomainEV3_JSMN_eJSMNRawEntryDescriptorInfo id=37 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_JSMN_eJSMNRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[37]:  rDomainEV3_TECSUnit_eUnitRawEntryDescriptorInfo id=38 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TECSUnit_eUnitRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[38]:  rDomainEV3_FatFile_eFatFileRawEntryDescriptorInfo id=39 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_FatFile_eFatFileRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[39]:  rDomainEV3_TECSInfo_eTECSInfoRawEntryDescriptorInfo id=40 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_TECSInfo_eTECSInfoRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
};

extern const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_HRP2Kernel_eKernelRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_HRP2Kernel_eKernelRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_HRP2Kernel_eiKernelRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_HRP2Kernel_eiKernelRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorA_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorA_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorB_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorB_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorC_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorC_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorD_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_MotorD_eMotorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_LCD_eLCDRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_LCD_eLCDRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_LED_eLEDRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_LED_eLEDRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Button_eButtonRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Button_eButtonRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Battery_eBatteryRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Battery_eBatteryRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Speaker_eSpeakerRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Speaker_eSpeakerRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor1_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor2_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor3_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_UltrasonicSensor4_eUltrasonicSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor1_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor2_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor3_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_GyroSensor4_eGyroSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor1_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor2_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor3_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_ColorSensor4_eColorSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor1_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor2_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor3_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TouchSensor4_eTouchSensorRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Balancer_eBalancerRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Balancer_eBalancerRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_SharedMemory_eSharedMemoryRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_SharedMemory_eSharedMemoryRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3Platform_eTaskBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3Platform_eTaskBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3Task_eiTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_EV3Task_eiTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Target_eTargetRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Target_eTargetRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Task_eiTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_Task_eiTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TaskMain_eBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TaskMain_eBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_JSMN_eJSMNRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_JSMN_eJSMNRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TECSUnit_eUnitRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TECSUnit_eUnitRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_FatFile_eFatFileRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_FatFile_eFatFileRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TECSInfo_eTECSInfoRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rDomainEV3_rTECSInfo_rDomainEV3_TECSInfo_eTECSInfoRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[39],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tRawEntryDescriptorInfo_CB_initialize()
{
    nTECSInfo_tRawEntryDescriptorInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
