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
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget1SignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget2SignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget3SignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */





























/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCallInfo_INIB nTECSInfo_tCallInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCallInfo_CB_tab[0]:  tTask_cBodyCallInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
        &rTEMP_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[2]:  tTaskMain_cUnitCallInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[3]:  tTaskMain_cJSMNCallInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[4]:  tTaskMain_cTECSInfoCallInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[5]:  tTaskMain_cNSInfoCallInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[6]:  tTaskMain_cRegionInfoCallInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[7]:  tTaskMain_cCellInfoCallInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[8]:  tTaskMain_cSignatureInfoCallInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[9]:  tTaskMain_cCelltypeInfoCallInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[10]:  tTaskMain_cVarDeclInfoCallInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[11]:  tTaskMain_cTypeInfoCallInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[12]:  tTaskMain_cFunctionInfoCallInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[13]:  tTaskMain_cParamInfoCallInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[14]:  tTaskMain_cEntryInfoCallInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[15]:  tTECSUnit_cTECSInfoCallInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[16]:  tTECSUnit_cNSInfoCallInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[17]:  tTECSUnit_cRegionInfoCallInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[18]:  tTECSUnit_cCellInfoCallInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[19]:  tTECSUnit_cSignatureInfoCallInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[20]:  tTECSUnit_cCelltypeInfoCallInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[21]:  tTECSUnit_cVarDeclInfoCallInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[22]:  tTECSUnit_cTypeInfoCallInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[23]:  tTECSUnit_cREDInfoCallInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[24]:  tTECSUnit_cEntryInfoCallInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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
    /* cell: nTECSInfo_tCallInfo_CB_tab[25]:  tTECSUnit_cTarget1CallInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTarget1SignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTarget1",                              /* name */
        tTECSUnit_cTarget1__offset,              /* offset */
        tTECSUnit_cTarget1__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cTarget1__place,               /* place */
        tTECSUnit_cTarget1__b_VMT_useless,       /* b_VMT_useless */
        tTECSUnit_cTarget1__b_skelton_useless,   /* b_skelton_useless */
        tTECSUnit_cTarget1__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[26]:  tTECSUnit_cTarget2CallInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTarget2SignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTarget2",                              /* name */
        tTECSUnit_cTarget2__offset,              /* offset */
        tTECSUnit_cTarget2__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cTarget2__place,               /* place */
        tTECSUnit_cTarget2__b_VMT_useless,       /* b_VMT_useless */
        tTECSUnit_cTarget2__b_skelton_useless,   /* b_skelton_useless */
        tTECSUnit_cTarget2__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[27]:  tTECSUnit_cTarget3CallInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTarget3SignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTarget3",                              /* name */
        tTECSUnit_cTarget3__offset,              /* offset */
        tTECSUnit_cTarget3__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTECSUnit_cTarget3__place,               /* place */
        tTECSUnit_cTarget3__b_VMT_useless,       /* b_VMT_useless */
        tTECSUnit_cTarget3__b_skelton_useless,   /* b_skelton_useless */
        tTECSUnit_cTarget3__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[28]:  nTECSInfo_tTECSInfo_cTECSInfoCallInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
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

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cUnitCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cUnitCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cJSMNCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cJSMNCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cNSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cNSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cRegionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cRegionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cCellInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cCellInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cSignatureInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cSignatureInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cCelltypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cCelltypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cVarDeclInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cVarDeclInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cREDInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cREDInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cEntryInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cEntryInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTarget1CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTarget1CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTarget2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTarget2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTarget3CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_tTECSUnit_cTarget3CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rTEMP_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[28],      /* INIB 3 */
};
