/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tEntryInfo_tecsgen.h"
#include "nTECSInfo_tEntryInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntryInfo */
struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES {
    const struct tag_nTECSInfo_sEntryInfo_VMT *vmt;
    tEntryInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntryInfo */
ER             nTECSInfo_tEntryInfo_eEntryInfo_getName_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    return nTECSInfo_tEntryInfo_eEntryInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    return nTECSInfo_tEntryInfo_eEntryInfo_getNameLength( lepd->idx );
}
void           nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    return nTECSInfo_tEntryInfo_eEntryInfo_getArraySize( lepd->idx );
}
bool_t         nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    return nTECSInfo_tEntryInfo_eEntryInfo_isInline( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntryInfo */
const struct tag_nTECSInfo_sEntryInfo_VMT nTECSInfo_tEntryInfo_eEntryInfo_MT_ = {
    nTECSInfo_tEntryInfo_eEntryInfo_getName_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des;

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

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTargetSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */











































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tEntryInfo_INIB nTECSInfo_tEntryInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tEntryInfo_CB_tab[0]:  tTask_eTaskEntryInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTask",                                 /* name */
        true,                                    /* b_inline */
        tTask_eTask__array_size,                 /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[1]:  tTask_eiTaskEntryInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_siTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eiTask",                                /* name */
        true,                                    /* b_inline */
        tTask_eiTask__array_size,                /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[2]:  tKernel_eKernelEntryInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eKernel",                               /* name */
        true,                                    /* b_inline */
        tKernel_eKernel__array_size,             /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[3]:  tKernel_eiKernelEntryInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eiKernel",                              /* name */
        true,                                    /* b_inline */
        tKernel_eiKernel__array_size,            /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[4]:  tUltrasonicSensor_eUltrasonicSensorEntryInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eUltrasonicSensor",                     /* name */
        false,                                   /* b_inline */
        tUltrasonicSensor_eUltrasonicSensor__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[5]:  tColorSensor_eColorSensorEntryInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eColorSensor",                          /* name */
        false,                                   /* b_inline */
        tColorSensor_eColorSensor__array_size,   /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[6]:  tTouchSensor_eTouchSensorEntryInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTouchSensor",                          /* name */
        false,                                   /* b_inline */
        tTouchSensor_eTouchSensor__array_size,   /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[7]:  tGyroSensor_eGyroSensorEntryInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eGyroSensor",                           /* name */
        false,                                   /* b_inline */
        tGyroSensor_eGyroSensor__array_size,     /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[8]:  tMotor_eMotorEntryInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eMotor",                                /* name */
        false,                                   /* b_inline */
        tMotor_eMotor__array_size,               /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[9]:  tButton_eButtonEntryInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eButton",                               /* name */
        false,                                   /* b_inline */
        tButton_eButton__array_size,             /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[10]:  tLCD_eLCDEntryInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eLCD",                                  /* name */
        false,                                   /* b_inline */
        tLCD_eLCD__array_size,                   /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[11]:  tLED_eLEDEntryInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eLED",                                  /* name */
        false,                                   /* b_inline */
        tLED_eLED__array_size,                   /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[12]:  tBattery_eBatteryEntryInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eBattery",                              /* name */
        false,                                   /* b_inline */
        tBattery_eBattery__array_size,           /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[13]:  tSpeaker_eSpeakerEntryInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eSpeaker",                              /* name */
        false,                                   /* b_inline */
        tSpeaker_eSpeaker__array_size,           /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[14]:  tEV3Platform_eTaskBodyEntryInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTaskBody",                             /* name */
        false,                                   /* b_inline */
        tEV3Platform_eTaskBody__array_size,      /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[15]:  tBalancer_eBalancerEntryInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eBalancer",                             /* name */
        false,                                   /* b_inline */
        tBalancer_eBalancer__array_size,         /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[16]:  tSharedMemory_eSharedMemoryEntryInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eSharedMemory",                         /* name */
        false,                                   /* b_inline */
        tSharedMemory_eSharedMemory__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[17]:  tFatFile_eFatFileEntryInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eFatFile",                              /* name */
        false,                                   /* b_inline */
        tFatFile_eFatFile__array_size,           /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[18]:  tTarget_eTargetEntryInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTargetSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTarget",                               /* name */
        false,                                   /* b_inline */
        tTarget_eTarget__array_size,             /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[19]:  tTaskMain_eBodyEntryInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eBody",                                 /* name */
        false,                                   /* b_inline */
        tTaskMain_eBody__array_size,             /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[20]:  tJSMN_eJSMNEntryInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eJSMN",                                 /* name */
        false,                                   /* b_inline */
        tJSMN_eJSMN__array_size,                 /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[21]:  tTECSUnit_eUnitEntryInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eUnit",                                 /* name */
        false,                                   /* b_inline */
        tTECSUnit_eUnit__array_size,             /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[22]:  nMruby_tTECSInitializer_eInitializeEntryInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tTECSInitializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[23]:  nMruby_tCharPointer_eInitializeEntryInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tCharPointer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[24]:  nMruby_tInt8Pointer_eInitializeEntryInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tInt8Pointer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[25]:  nMruby_tInt32Pointer_eInitializeEntryInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tInt32Pointer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[26]:  nMruby_tUInt16Pointer_eInitializeEntryInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tUInt16Pointer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[27]:  nMruby_tIntPointer_eInitializeEntryInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tIntPointer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[28]:  nMruby_tULongPointer_eInitializeEntryInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tULongPointer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[29]:  nMruby_tsKernel_Initializer_eInitializeEntryInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsKernel_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[30]:  nMruby_tsMotor_Initializer_eInitializeEntryInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsMotor_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[31]:  nMruby_tsLCD_Initializer_eInitializeEntryInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsLCD_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[32]:  nMruby_tsLED_Initializer_eInitializeEntryInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsLED_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[33]:  nMruby_tsButton_Initializer_eInitializeEntryInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsButton_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[34]:  nMruby_tsBattery_Initializer_eInitializeEntryInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsBattery_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[35]:  nMruby_tsSpeaker_Initializer_eInitializeEntryInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsSpeaker_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[36]:  nMruby_tsUltrasonicSensor_Initializer_eInitializeEntryInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsUltrasonicSensor_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[37]:  nMruby_tsGyroSensor_Initializer_eInitializeEntryInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsGyroSensor_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[38]:  nMruby_tsColorSensor_Initializer_eInitializeEntryInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsColorSensor_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[39]:  nMruby_tsTouchSensor_Initializer_eInitializeEntryInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsTouchSensor_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[40]:  nMruby_tsBalancer_Initializer_eInitializeEntryInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsBalancer_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[41]:  nMruby_tsSharedMemory_Initializer_eInitializeEntryInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eInitialize",                           /* name */
        false,                                   /* b_inline */
        nMruby_tsSharedMemory_Initializer_eInitialize__array_size, /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[42]:  nTECSInfo_tTECSInfo_eTECSInfoEntryInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTECSInfo",                             /* name */
        true,                                    /* b_inline */
        nTECSInfo_tTECSInfo_eTECSInfo__array_size, /* array_size */
    },
};

extern const struct tag_nTECSInfo_sEntryInfo_VMT nTECSInfo_tEntryInfo_eEntryInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTask_eiTaskEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTask_eiTaskEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_eUltrasonicSensorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_eUltrasonicSensorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tColorSensor_eColorSensorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tColorSensor_eColorSensorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_eTouchSensorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_eTouchSensorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_eGyroSensorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_eGyroSensorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tMotor_eMotorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tMotor_eMotorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tButton_eButtonEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tButton_eButtonEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tLCD_eLCDEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tLCD_eLCDEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tLED_eLEDEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tLED_eLEDEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tBattery_eBatteryEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tBattery_eBatteryEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tSpeaker_eSpeakerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tSpeaker_eSpeakerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_eTaskBodyEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_eTaskBodyEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tBalancer_eBalancerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tBalancer_eBalancerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_eSharedMemoryEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_eSharedMemoryEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tFatFile_eFatFileEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tFatFile_eFatFileEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTarget_eTargetEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTarget_eTargetEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tJSMN_eJSMNEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tJSMN_eJSMNEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_eUnitEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_eUnitEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tCharPointer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tCharPointer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tInt8Pointer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tInt8Pointer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tInt32Pointer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tInt32Pointer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tUInt16Pointer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tUInt16Pointer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tIntPointer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tIntPointer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tULongPointer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tULongPointer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_Initializer_eInitializeEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_Initializer_eInitializeEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[42],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tEntryInfo_CB_initialize()
{
    nTECSInfo_tEntryInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
