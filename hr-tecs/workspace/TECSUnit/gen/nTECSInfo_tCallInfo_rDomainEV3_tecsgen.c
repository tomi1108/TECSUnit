/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tCallInfo_tecsgen.h"
#include "nTECSInfo_tCallInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eCallInfo */
struct tag_nTECSInfo_tCallInfo_eCallInfo_DES {
    const struct tag_nTECSInfo_sCallInfo_VMT *vmt;
    tCallInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eCallInfo */
ER             nTECSInfo_tCallInfo_eCallInfo_getName_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    return nTECSInfo_tCallInfo_eCallInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    return nTECSInfo_tCallInfo_eCallInfo_getNameLength( lepd->idx );
}
void           nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    return nTECSInfo_tCallInfo_eCallInfo_getArraySize( lepd->idx );
}
void           nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo( lepd->idx, b_optional, b_dynamic, b_ref_desc, b_omit );
}
void           nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_allocator_port, bool_t* b_require_port)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getInternalInfo( lepd->idx, b_allocator_port, b_require_port );
}
void           nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint32_t* offset, int8_t* place)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getLocationInfo( lepd->idx, offset, place );
}
void           nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo( lepd->idx, b_VMT_useless, b_skelton_useless, b_cell_unique );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eCallInfo */
const struct tag_nTECSInfo_sCallInfo_VMT nTECSInfo_tCallInfo_eCallInfo_MT_ = {
    nTECSInfo_tCallInfo_eCallInfo_getName_skel,
    nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel,
    nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel,
    nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sRiteVMSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;

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

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTargetSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */





































































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCallInfo_INIB nTECSInfo_tCallInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCallInfo_CB_tab[0]:  tTask_cBodyCallInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cBody",                                 /* name */
        tTask_cBody__offset,                     /* offset */
        tTask_cBody__array_size,                 /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTask_cBody__place,                      /* place */
        tTask_cBody__b_VMT_useless,              /* b_VMT_useless */
        tTask_cBody__b_skelton_useless,          /* b_skelton_useless */
        tTask_cBody__b_cell_unique,              /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[1]:  tTask_cExceptionBodyCallInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cExceptionBody",                        /* name */
        tTask_cExceptionBody__offset,            /* offset */
        tTask_cExceptionBody__array_size,        /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTask_cExceptionBody__place,             /* place */
        tTask_cExceptionBody__b_VMT_useless,     /* b_VMT_useless */
        tTask_cExceptionBody__b_skelton_useless, /* b_skelton_useless */
        tTask_cExceptionBody__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[2]:  tLCD_cButtonCallInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tLCD_cButton__offset,                    /* offset */
        tLCD_cButton__array_size,                /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tLCD_cButton__place,                     /* place */
        tLCD_cButton__b_VMT_useless,             /* b_VMT_useless */
        tLCD_cButton__b_skelton_useless,         /* b_skelton_useless */
        tLCD_cButton__b_cell_unique,             /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[3]:  tEV3Platform_cRiteVMCallInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sRiteVMSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cRiteVM",                               /* name */
        tEV3Platform_cRiteVM__offset,            /* offset */
        tEV3Platform_cRiteVM__array_size,        /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tEV3Platform_cRiteVM__place,             /* place */
        tEV3Platform_cRiteVM__b_VMT_useless,     /* b_VMT_useless */
        tEV3Platform_cRiteVM__b_skelton_useless, /* b_skelton_useless */
        tEV3Platform_cRiteVM__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[4]:  tEV3Platform_cTaskCallInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTask",                                 /* name */
        tEV3Platform_cTask__offset,              /* offset */
        tEV3Platform_cTask__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tEV3Platform_cTask__place,               /* place */
        tEV3Platform_cTask__b_VMT_useless,       /* b_VMT_useless */
        tEV3Platform_cTask__b_skelton_useless,   /* b_skelton_useless */
        tEV3Platform_cTask__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[5]:  tTaskMain_cUnitCallInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cUnit",                                 /* name */
        tTaskMain_cUnit__offset,                 /* offset */
        tTaskMain_cUnit__array_size,             /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cUnit__place,                  /* place */
        tTaskMain_cUnit__b_VMT_useless,          /* b_VMT_useless */
        tTaskMain_cUnit__b_skelton_useless,      /* b_skelton_useless */
        tTaskMain_cUnit__b_cell_unique,          /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[6]:  tTaskMain_cJSMNCallInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cJSMN",                                 /* name */
        tTaskMain_cJSMN__offset,                 /* offset */
        tTaskMain_cJSMN__array_size,             /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cJSMN__place,                  /* place */
        tTaskMain_cJSMN__b_VMT_useless,          /* b_VMT_useless */
        tTaskMain_cJSMN__b_skelton_useless,      /* b_skelton_useless */
        tTaskMain_cJSMN__b_cell_unique,          /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[7]:  tTaskMain_cKernelCallInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cKernel",                               /* name */
        tTaskMain_cKernel__offset,               /* offset */
        tTaskMain_cKernel__array_size,           /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cKernel__place,                /* place */
        tTaskMain_cKernel__b_VMT_useless,        /* b_VMT_useless */
        tTaskMain_cKernel__b_skelton_useless,    /* b_skelton_useless */
        tTaskMain_cKernel__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[8]:  tTaskMain_cLCDCallInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD",                                  /* name */
        tTaskMain_cLCD__offset,                  /* offset */
        tTaskMain_cLCD__array_size,              /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cLCD__place,                   /* place */
        tTaskMain_cLCD__b_VMT_useless,           /* b_VMT_useless */
        tTaskMain_cLCD__b_skelton_useless,       /* b_skelton_useless */
        tTaskMain_cLCD__b_cell_unique,           /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[9]:  tTaskMain_cButtonCallInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tTaskMain_cButton__offset,               /* offset */
        tTaskMain_cButton__array_size,           /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cButton__place,                /* place */
        tTaskMain_cButton__b_VMT_useless,        /* b_VMT_useless */
        tTaskMain_cButton__b_skelton_useless,    /* b_skelton_useless */
        tTaskMain_cButton__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[10]:  tTaskMain_cFatFileCallInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cFatFile",                              /* name */
        tTaskMain_cFatFile__offset,              /* offset */
        tTaskMain_cFatFile__array_size,          /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cFatFile__place,               /* place */
        tTaskMain_cFatFile__b_VMT_useless,       /* b_VMT_useless */
        tTaskMain_cFatFile__b_skelton_useless,   /* b_skelton_useless */
        tTaskMain_cFatFile__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[11]:  tTaskMain_cTECSInfoCallInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECSInfo",                             /* name */
        tTaskMain_cTECSInfo__offset,             /* offset */
        tTaskMain_cTECSInfo__array_size,         /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cTECSInfo__place,              /* place */
        tTaskMain_cTECSInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cTECSInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cTECSInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[12]:  tTaskMain_cNSInfoCallInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cNSInfo",                               /* name */
        tTaskMain_cNSInfo__offset,               /* offset */
        tTaskMain_cNSInfo__array_size,           /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cNSInfo__place,                /* place */
        tTaskMain_cNSInfo__b_VMT_useless,        /* b_VMT_useless */
        tTaskMain_cNSInfo__b_skelton_useless,    /* b_skelton_useless */
        tTaskMain_cNSInfo__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[13]:  tTaskMain_cRegionInfoCallInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cRegionInfo",                           /* name */
        tTaskMain_cRegionInfo__offset,           /* offset */
        tTaskMain_cRegionInfo__array_size,       /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cRegionInfo__place,            /* place */
        tTaskMain_cRegionInfo__b_VMT_useless,    /* b_VMT_useless */
        tTaskMain_cRegionInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cRegionInfo__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[14]:  tTaskMain_cCellInfoCallInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCellInfo",                             /* name */
        tTaskMain_cCellInfo__offset,             /* offset */
        tTaskMain_cCellInfo__array_size,         /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cCellInfo__place,              /* place */
        tTaskMain_cCellInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cCellInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cCellInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[15]:  tTaskMain_cSignatureInfoCallInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cSignatureInfo",                        /* name */
        tTaskMain_cSignatureInfo__offset,        /* offset */
        tTaskMain_cSignatureInfo__array_size,    /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cSignatureInfo__place,         /* place */
        tTaskMain_cSignatureInfo__b_VMT_useless, /* b_VMT_useless */
        tTaskMain_cSignatureInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cSignatureInfo__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[16]:  tTaskMain_cCelltypeInfoCallInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCelltypeInfo",                         /* name */
        tTaskMain_cCelltypeInfo__offset,         /* offset */
        tTaskMain_cCelltypeInfo__array_size,     /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cCelltypeInfo__place,          /* place */
        tTaskMain_cCelltypeInfo__b_VMT_useless,  /* b_VMT_useless */
        tTaskMain_cCelltypeInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cCelltypeInfo__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[17]:  tTaskMain_cVarDeclInfoCallInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cVarDeclInfo",                          /* name */
        tTaskMain_cVarDeclInfo__offset,          /* offset */
        tTaskMain_cVarDeclInfo__array_size,      /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cVarDeclInfo__place,           /* place */
        tTaskMain_cVarDeclInfo__b_VMT_useless,   /* b_VMT_useless */
        tTaskMain_cVarDeclInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cVarDeclInfo__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[18]:  tTaskMain_cTypeInfoCallInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTypeInfo",                             /* name */
        tTaskMain_cTypeInfo__offset,             /* offset */
        tTaskMain_cTypeInfo__array_size,         /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cTypeInfo__place,              /* place */
        tTaskMain_cTypeInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cTypeInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cTypeInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[19]:  tTaskMain_cFunctionInfoCallInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cFunctionInfo",                         /* name */
        tTaskMain_cFunctionInfo__offset,         /* offset */
        tTaskMain_cFunctionInfo__array_size,     /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cFunctionInfo__place,          /* place */
        tTaskMain_cFunctionInfo__b_VMT_useless,  /* b_VMT_useless */
        tTaskMain_cFunctionInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cFunctionInfo__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[20]:  tTaskMain_cParamInfoCallInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cParamInfo",                            /* name */
        tTaskMain_cParamInfo__offset,            /* offset */
        tTaskMain_cParamInfo__array_size,        /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cParamInfo__place,             /* place */
        tTaskMain_cParamInfo__b_VMT_useless,     /* b_VMT_useless */
        tTaskMain_cParamInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cParamInfo__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[21]:  tTaskMain_cEntryInfoCallInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cEntryInfo",                            /* name */
        tTaskMain_cEntryInfo__offset,            /* offset */
        tTaskMain_cEntryInfo__array_size,        /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cEntryInfo__place,             /* place */
        tTaskMain_cEntryInfo__b_VMT_useless,     /* b_VMT_useless */
        tTaskMain_cEntryInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cEntryInfo__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[22]:  tJSMN_cLCDCallInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD",                                  /* name */
        tJSMN_cLCD__offset,                      /* offset */
        tJSMN_cLCD__array_size,                  /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tJSMN_cLCD__place,                       /* place */
        tJSMN_cLCD__b_VMT_useless,               /* b_VMT_useless */
        tJSMN_cLCD__b_skelton_useless,           /* b_skelton_useless */
        tJSMN_cLCD__b_cell_unique,               /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[23]:  tJSMN_cFatFileCallInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cFatFile",                              /* name */
        tJSMN_cFatFile__offset,                  /* offset */
        tJSMN_cFatFile__array_size,              /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tJSMN_cFatFile__place,                   /* place */
        tJSMN_cFatFile__b_VMT_useless,           /* b_VMT_useless */
        tJSMN_cFatFile__b_skelton_useless,       /* b_skelton_useless */
        tJSMN_cFatFile__b_cell_unique,           /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[24]:  tJSMN_cButtonCallInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tJSMN_cButton__offset,                   /* offset */
        tJSMN_cButton__array_size,               /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tJSMN_cButton__place,                    /* place */
        tJSMN_cButton__b_VMT_useless,            /* b_VMT_useless */
        tJSMN_cButton__b_skelton_useless,        /* b_skelton_useless */
        tJSMN_cButton__b_cell_unique,            /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[25]:  tJSMN_cKernelCallInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cKernel",                               /* name */
        tJSMN_cKernel__offset,                   /* offset */
        tJSMN_cKernel__array_size,               /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tJSMN_cKernel__place,                    /* place */
        tJSMN_cKernel__b_VMT_useless,            /* b_VMT_useless */
        tJSMN_cKernel__b_skelton_useless,        /* b_skelton_useless */
        tJSMN_cKernel__b_cell_unique,            /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[26]:  tTECSUnit_cLCD_tmpCallInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD_tmp",                              /* name */
        tTECSUnit_cLCD_tmp__offset,              /* offset */
        tTECSUnit_cLCD_tmp__array_size,          /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cLCD_tmp__place,               /* place */
        tTECSUnit_cLCD_tmp__b_VMT_useless,       /* b_VMT_useless */
        tTECSUnit_cLCD_tmp__b_skelton_useless,   /* b_skelton_useless */
        tTECSUnit_cLCD_tmp__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[27]:  tTECSUnit_cButton_tmpCallInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton_tmp",                           /* name */
        tTECSUnit_cButton_tmp__offset,           /* offset */
        tTECSUnit_cButton_tmp__array_size,       /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cButton_tmp__place,            /* place */
        tTECSUnit_cButton_tmp__b_VMT_useless,    /* b_VMT_useless */
        tTECSUnit_cButton_tmp__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cButton_tmp__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[28]:  tTECSUnit_cKernel_tmpCallInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cKernel_tmp",                           /* name */
        tTECSUnit_cKernel_tmp__offset,           /* offset */
        tTECSUnit_cKernel_tmp__array_size,       /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cKernel_tmp__place,            /* place */
        tTECSUnit_cKernel_tmp__b_VMT_useless,    /* b_VMT_useless */
        tTECSUnit_cKernel_tmp__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cKernel_tmp__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[29]:  tTECSUnit_cFatFile_tmpCallInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cFatFile_tmp",                          /* name */
        tTECSUnit_cFatFile_tmp__offset,          /* offset */
        tTECSUnit_cFatFile_tmp__array_size,      /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cFatFile_tmp__place,           /* place */
        tTECSUnit_cFatFile_tmp__b_VMT_useless,   /* b_VMT_useless */
        tTECSUnit_cFatFile_tmp__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cFatFile_tmp__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[30]:  tTECSUnit_cTECSInfoCallInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECSInfo",                             /* name */
        tTECSUnit_cTECSInfo__offset,             /* offset */
        tTECSUnit_cTECSInfo__array_size,         /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cTECSInfo__place,              /* place */
        tTECSUnit_cTECSInfo__b_VMT_useless,      /* b_VMT_useless */
        tTECSUnit_cTECSInfo__b_skelton_useless,  /* b_skelton_useless */
        tTECSUnit_cTECSInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[31]:  tTECSUnit_cNSInfoCallInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cNSInfo",                               /* name */
        tTECSUnit_cNSInfo__offset,               /* offset */
        tTECSUnit_cNSInfo__array_size,           /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cNSInfo__place,                /* place */
        tTECSUnit_cNSInfo__b_VMT_useless,        /* b_VMT_useless */
        tTECSUnit_cNSInfo__b_skelton_useless,    /* b_skelton_useless */
        tTECSUnit_cNSInfo__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[32]:  tTECSUnit_cRegionInfoCallInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cRegionInfo",                           /* name */
        tTECSUnit_cRegionInfo__offset,           /* offset */
        tTECSUnit_cRegionInfo__array_size,       /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cRegionInfo__place,            /* place */
        tTECSUnit_cRegionInfo__b_VMT_useless,    /* b_VMT_useless */
        tTECSUnit_cRegionInfo__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cRegionInfo__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[33]:  tTECSUnit_cCellInfoCallInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCellInfo",                             /* name */
        tTECSUnit_cCellInfo__offset,             /* offset */
        tTECSUnit_cCellInfo__array_size,         /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cCellInfo__place,              /* place */
        tTECSUnit_cCellInfo__b_VMT_useless,      /* b_VMT_useless */
        tTECSUnit_cCellInfo__b_skelton_useless,  /* b_skelton_useless */
        tTECSUnit_cCellInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[34]:  tTECSUnit_cSignatureInfoCallInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cSignatureInfo",                        /* name */
        tTECSUnit_cSignatureInfo__offset,        /* offset */
        tTECSUnit_cSignatureInfo__array_size,    /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cSignatureInfo__place,         /* place */
        tTECSUnit_cSignatureInfo__b_VMT_useless, /* b_VMT_useless */
        tTECSUnit_cSignatureInfo__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cSignatureInfo__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[35]:  tTECSUnit_cCelltypeInfoCallInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCelltypeInfo",                         /* name */
        tTECSUnit_cCelltypeInfo__offset,         /* offset */
        tTECSUnit_cCelltypeInfo__array_size,     /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cCelltypeInfo__place,          /* place */
        tTECSUnit_cCelltypeInfo__b_VMT_useless,  /* b_VMT_useless */
        tTECSUnit_cCelltypeInfo__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cCelltypeInfo__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[36]:  tTECSUnit_cVarDeclInfoCallInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cVarDeclInfo",                          /* name */
        tTECSUnit_cVarDeclInfo__offset,          /* offset */
        tTECSUnit_cVarDeclInfo__array_size,      /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cVarDeclInfo__place,           /* place */
        tTECSUnit_cVarDeclInfo__b_VMT_useless,   /* b_VMT_useless */
        tTECSUnit_cVarDeclInfo__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cVarDeclInfo__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[37]:  tTECSUnit_cTypeInfoCallInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTypeInfo",                             /* name */
        tTECSUnit_cTypeInfo__offset,             /* offset */
        tTECSUnit_cTypeInfo__array_size,         /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cTypeInfo__place,              /* place */
        tTECSUnit_cTypeInfo__b_VMT_useless,      /* b_VMT_useless */
        tTECSUnit_cTypeInfo__b_skelton_useless,  /* b_skelton_useless */
        tTECSUnit_cTypeInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[38]:  tTECSUnit_cREDInfoCallInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cREDInfo",                              /* name */
        tTECSUnit_cREDInfo__offset,              /* offset */
        tTECSUnit_cREDInfo__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cREDInfo__place,               /* place */
        tTECSUnit_cREDInfo__b_VMT_useless,       /* b_VMT_useless */
        tTECSUnit_cREDInfo__b_skelton_useless,   /* b_skelton_useless */
        tTECSUnit_cREDInfo__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[39]:  tTECSUnit_cEntryInfoCallInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cEntryInfo",                            /* name */
        tTECSUnit_cEntryInfo__offset,            /* offset */
        tTECSUnit_cEntryInfo__array_size,        /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cEntryInfo__place,             /* place */
        tTECSUnit_cEntryInfo__b_VMT_useless,     /* b_VMT_useless */
        tTECSUnit_cEntryInfo__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cEntryInfo__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[40]:  tTECSUnit_cUltrasonicSensorCallInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cUltrasonicSensor",                     /* name */
        tTECSUnit_cUltrasonicSensor__offset,     /* offset */
        tTECSUnit_cUltrasonicSensor__array_size, /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cUltrasonicSensor__place,      /* place */
        tTECSUnit_cUltrasonicSensor__b_VMT_useless, /* b_VMT_useless */
        tTECSUnit_cUltrasonicSensor__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cUltrasonicSensor__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[41]:  tTECSUnit_cColorSensorCallInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cColorSensor",                          /* name */
        tTECSUnit_cColorSensor__offset,          /* offset */
        tTECSUnit_cColorSensor__array_size,      /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cColorSensor__place,           /* place */
        tTECSUnit_cColorSensor__b_VMT_useless,   /* b_VMT_useless */
        tTECSUnit_cColorSensor__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cColorSensor__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[42]:  tTECSUnit_cTouchSensorCallInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTouchSensor",                          /* name */
        tTECSUnit_cTouchSensor__offset,          /* offset */
        tTECSUnit_cTouchSensor__array_size,      /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cTouchSensor__place,           /* place */
        tTECSUnit_cTouchSensor__b_VMT_useless,   /* b_VMT_useless */
        tTECSUnit_cTouchSensor__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cTouchSensor__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[43]:  tTECSUnit_cGyroSensorCallInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cGyroSensor",                           /* name */
        tTECSUnit_cGyroSensor__offset,           /* offset */
        tTECSUnit_cGyroSensor__array_size,       /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cGyroSensor__place,            /* place */
        tTECSUnit_cGyroSensor__b_VMT_useless,    /* b_VMT_useless */
        tTECSUnit_cGyroSensor__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cGyroSensor__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[44]:  tTECSUnit_cMotorCallInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cMotor",                                /* name */
        tTECSUnit_cMotor__offset,                /* offset */
        tTECSUnit_cMotor__array_size,            /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cMotor__place,                 /* place */
        tTECSUnit_cMotor__b_VMT_useless,         /* b_VMT_useless */
        tTECSUnit_cMotor__b_skelton_useless,     /* b_skelton_useless */
        tTECSUnit_cMotor__b_cell_unique,         /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[45]:  tTECSUnit_cButtonCallInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tTECSUnit_cButton__offset,               /* offset */
        tTECSUnit_cButton__array_size,           /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cButton__place,                /* place */
        tTECSUnit_cButton__b_VMT_useless,        /* b_VMT_useless */
        tTECSUnit_cButton__b_skelton_useless,    /* b_skelton_useless */
        tTECSUnit_cButton__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[46]:  tTECSUnit_cLCDCallInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD",                                  /* name */
        tTECSUnit_cLCD__offset,                  /* offset */
        tTECSUnit_cLCD__array_size,              /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cLCD__place,                   /* place */
        tTECSUnit_cLCD__b_VMT_useless,           /* b_VMT_useless */
        tTECSUnit_cLCD__b_skelton_useless,       /* b_skelton_useless */
        tTECSUnit_cLCD__b_cell_unique,           /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[47]:  tTECSUnit_cLEDCallInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLED",                                  /* name */
        tTECSUnit_cLED__offset,                  /* offset */
        tTECSUnit_cLED__array_size,              /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cLED__place,                   /* place */
        tTECSUnit_cLED__b_VMT_useless,           /* b_VMT_useless */
        tTECSUnit_cLED__b_skelton_useless,       /* b_skelton_useless */
        tTECSUnit_cLED__b_cell_unique,           /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[48]:  tTECSUnit_cBatteryCallInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cBattery",                              /* name */
        tTECSUnit_cBattery__offset,              /* offset */
        tTECSUnit_cBattery__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cBattery__place,               /* place */
        tTECSUnit_cBattery__b_VMT_useless,       /* b_VMT_useless */
        tTECSUnit_cBattery__b_skelton_useless,   /* b_skelton_useless */
        tTECSUnit_cBattery__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[49]:  tTECSUnit_cSpeakerCallInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cSpeaker",                              /* name */
        tTECSUnit_cSpeaker__offset,              /* offset */
        tTECSUnit_cSpeaker__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cSpeaker__place,               /* place */
        tTECSUnit_cSpeaker__b_VMT_useless,       /* b_VMT_useless */
        tTECSUnit_cSpeaker__b_skelton_useless,   /* b_skelton_useless */
        tTECSUnit_cSpeaker__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[50]:  tTECSUnit_cBalancerCallInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cBalancer",                             /* name */
        tTECSUnit_cBalancer__offset,             /* offset */
        tTECSUnit_cBalancer__array_size,         /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cBalancer__place,              /* place */
        tTECSUnit_cBalancer__b_VMT_useless,      /* b_VMT_useless */
        tTECSUnit_cBalancer__b_skelton_useless,  /* b_skelton_useless */
        tTECSUnit_cBalancer__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[51]:  tTECSUnit_cSharedMemoryCallInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cSharedMemory",                         /* name */
        tTECSUnit_cSharedMemory__offset,         /* offset */
        tTECSUnit_cSharedMemory__array_size,     /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cSharedMemory__place,          /* place */
        tTECSUnit_cSharedMemory__b_VMT_useless,  /* b_VMT_useless */
        tTECSUnit_cSharedMemory__b_skelton_useless, /* b_skelton_useless */
        tTECSUnit_cSharedMemory__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[52]:  tTECSUnit_cFatFileCallInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sFatFileSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cFatFile",                              /* name */
        tTECSUnit_cFatFile__offset,              /* offset */
        tTECSUnit_cFatFile__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cFatFile__place,               /* place */
        tTECSUnit_cFatFile__b_VMT_useless,       /* b_VMT_useless */
        tTECSUnit_cFatFile__b_skelton_useless,   /* b_skelton_useless */
        tTECSUnit_cFatFile__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[53]:  tTECSUnit_cTargetCallInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTargetSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTarget",                               /* name */
        tTECSUnit_cTarget__offset,               /* offset */
        tTECSUnit_cTarget__array_size,           /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cTarget__place,                /* place */
        tTECSUnit_cTarget__b_VMT_useless,        /* b_VMT_useless */
        tTECSUnit_cTarget__b_skelton_useless,    /* b_skelton_useless */
        tTECSUnit_cTarget__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[54]:  nMruby_tTECSInitializer_cInitializeCallInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cInitialize",                           /* name */
        nMruby_tTECSInitializer_cInitialize__offset, /* offset */
        nMruby_tTECSInitializer_cInitialize__array_size, /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tTECSInitializer_cInitialize__place, /* place */
        nMruby_tTECSInitializer_cInitialize__b_VMT_useless, /* b_VMT_useless */
        nMruby_tTECSInitializer_cInitialize__b_skelton_useless, /* b_skelton_useless */
        nMruby_tTECSInitializer_cInitialize__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[55]:  nMruby_tsKernel_cTECSCallInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsKernel_cTECS__offset,           /* offset */
        nMruby_tsKernel_cTECS__array_size,       /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsKernel_cTECS__place,            /* place */
        nMruby_tsKernel_cTECS__b_VMT_useless,    /* b_VMT_useless */
        nMruby_tsKernel_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsKernel_cTECS__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[56]:  nMruby_tsMotor_cTECSCallInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsMotor_cTECS__offset,            /* offset */
        nMruby_tsMotor_cTECS__array_size,        /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsMotor_cTECS__place,             /* place */
        nMruby_tsMotor_cTECS__b_VMT_useless,     /* b_VMT_useless */
        nMruby_tsMotor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsMotor_cTECS__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[57]:  nMruby_tsLCD_cTECSCallInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsLCD_cTECS__offset,              /* offset */
        nMruby_tsLCD_cTECS__array_size,          /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsLCD_cTECS__place,               /* place */
        nMruby_tsLCD_cTECS__b_VMT_useless,       /* b_VMT_useless */
        nMruby_tsLCD_cTECS__b_skelton_useless,   /* b_skelton_useless */
        nMruby_tsLCD_cTECS__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[58]:  nMruby_tsLED_cTECSCallInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsLED_cTECS__offset,              /* offset */
        nMruby_tsLED_cTECS__array_size,          /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsLED_cTECS__place,               /* place */
        nMruby_tsLED_cTECS__b_VMT_useless,       /* b_VMT_useless */
        nMruby_tsLED_cTECS__b_skelton_useless,   /* b_skelton_useless */
        nMruby_tsLED_cTECS__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[59]:  nMruby_tsButton_cTECSCallInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsButton_cTECS__offset,           /* offset */
        nMruby_tsButton_cTECS__array_size,       /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsButton_cTECS__place,            /* place */
        nMruby_tsButton_cTECS__b_VMT_useless,    /* b_VMT_useless */
        nMruby_tsButton_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsButton_cTECS__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[60]:  nMruby_tsBattery_cTECSCallInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsBattery_cTECS__offset,          /* offset */
        nMruby_tsBattery_cTECS__array_size,      /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsBattery_cTECS__place,           /* place */
        nMruby_tsBattery_cTECS__b_VMT_useless,   /* b_VMT_useless */
        nMruby_tsBattery_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsBattery_cTECS__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[61]:  nMruby_tsSpeaker_cTECSCallInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsSpeaker_cTECS__offset,          /* offset */
        nMruby_tsSpeaker_cTECS__array_size,      /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsSpeaker_cTECS__place,           /* place */
        nMruby_tsSpeaker_cTECS__b_VMT_useless,   /* b_VMT_useless */
        nMruby_tsSpeaker_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsSpeaker_cTECS__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[62]:  nMruby_tsUltrasonicSensor_cTECSCallInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsUltrasonicSensor_cTECS__offset, /* offset */
        nMruby_tsUltrasonicSensor_cTECS__array_size, /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsUltrasonicSensor_cTECS__place,  /* place */
        nMruby_tsUltrasonicSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsUltrasonicSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsUltrasonicSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[63]:  nMruby_tsGyroSensor_cTECSCallInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsGyroSensor_cTECS__offset,       /* offset */
        nMruby_tsGyroSensor_cTECS__array_size,   /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsGyroSensor_cTECS__place,        /* place */
        nMruby_tsGyroSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsGyroSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsGyroSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[64]:  nMruby_tsColorSensor_cTECSCallInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsColorSensor_cTECS__offset,      /* offset */
        nMruby_tsColorSensor_cTECS__array_size,  /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsColorSensor_cTECS__place,       /* place */
        nMruby_tsColorSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsColorSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsColorSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[65]:  nMruby_tsTouchSensor_cTECSCallInfo id=66 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsTouchSensor_cTECS__offset,      /* offset */
        nMruby_tsTouchSensor_cTECS__array_size,  /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsTouchSensor_cTECS__place,       /* place */
        nMruby_tsTouchSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsTouchSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsTouchSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[66]:  nMruby_tsBalancer_cTECSCallInfo id=67 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsBalancer_cTECS__offset,         /* offset */
        nMruby_tsBalancer_cTECS__array_size,     /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsBalancer_cTECS__place,          /* place */
        nMruby_tsBalancer_cTECS__b_VMT_useless,  /* b_VMT_useless */
        nMruby_tsBalancer_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsBalancer_cTECS__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[67]:  nMruby_tsSharedMemory_cTECSCallInfo id=68 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsSharedMemory_cTECS__offset,     /* offset */
        nMruby_tsSharedMemory_cTECS__array_size, /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsSharedMemory_cTECS__place,      /* place */
        nMruby_tsSharedMemory_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsSharedMemory_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsSharedMemory_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[68]:  nTECSInfo_tTECSInfo_cTECSInfoCallInfo id=69 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECSInfo",                             /* name */
        nTECSInfo_tTECSInfo_cTECSInfo__offset,   /* offset */
        nTECSInfo_tTECSInfo_cTECSInfo__array_size, /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nTECSInfo_tTECSInfo_cTECSInfo__place,    /* place */
        nTECSInfo_tTECSInfo_cTECSInfo__b_VMT_useless, /* b_VMT_useless */
        nTECSInfo_tTECSInfo_cTECSInfo__b_skelton_useless, /* b_skelton_useless */
        nTECSInfo_tTECSInfo_cTECSInfo__b_cell_unique, /* b_cell_unique */
    },
};

extern const struct tag_nTECSInfo_sCallInfo_VMT nTECSInfo_tCallInfo_eCallInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cUnitCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cUnitCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cJSMNCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cJSMNCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cKernelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cKernelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cFatFileCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cFatFileCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tJSMN_cLCDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tJSMN_cLCDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tJSMN_cFatFileCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tJSMN_cFatFileCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tJSMN_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tJSMN_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tJSMN_cKernelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tJSMN_cKernelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cLCD_tmpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cLCD_tmpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cButton_tmpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cButton_tmpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cKernel_tmpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cKernel_tmpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cFatFile_tmpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cFatFile_tmpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cNSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cNSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cRegionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cRegionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cCellInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cCellInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cSignatureInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cSignatureInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cCelltypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cCelltypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cVarDeclInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cVarDeclInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cTypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cTypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cREDInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cREDInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cEntryInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cEntryInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cUltrasonicSensorCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cUltrasonicSensorCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cColorSensorCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cColorSensorCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cTouchSensorCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cTouchSensorCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[42],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cGyroSensorCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cGyroSensorCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[43],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cMotorCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cMotorCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[44],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[45],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cLCDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cLCDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[46],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cLEDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cLEDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[47],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cBatteryCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cBatteryCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[48],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cSpeakerCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cSpeakerCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[49],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cBalancerCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cBalancerCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[50],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cSharedMemoryCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cSharedMemoryCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[51],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cFatFileCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cFatFileCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[52],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cTargetCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cTargetCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[53],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_cInitializeCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_cInitializeCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[54],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[55],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[56],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[57],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[58],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[59],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[60],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[61],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[62],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[63],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[64],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[65],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[66],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[67],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[68],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tCallInfo_CB_initialize()
{
    nTECSInfo_tCallInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
