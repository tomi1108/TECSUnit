/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tDescriptorTypeInfo_tecsgen.h"
#include "nTECSInfo_tDescriptorTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tDescriptorTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getSize( lepd->idx );
}
int8_t         nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getKind( lepd->idx );
}
uint32_t       nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNType( lepd->idx );
}
ER             nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNMember( lepd->idx );
}
ER             nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getMemberInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getTypeInfo_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNMember_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getMemberInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCallInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */












/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tDescriptorTypeInfo_INIB nTECSInfo_tDescriptorTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[0]:  Descriptor_of_nTECSInfo_sTypeInfoTypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sTypeInfo )",     /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sTypeInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[1]:  Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sVarDeclInfo )",  /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sVarDeclInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[2]:  Descriptor_of_nTECSInfo_sParamInfoTypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sParamInfo )",    /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sParamInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[3]:  Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sFunctionInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sFunctionInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[4]:  Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sSignatureInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sSignatureInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[5]:  Descriptor_of_nTECSInfo_sCallInfoTypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sCallInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCallInfo )",     /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCallInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[6]:  Descriptor_of_nTECSInfo_sEntryInfoTypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sEntryInfo )",    /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sEntryInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[7]:  Descriptor_of_nTECSInfo_sRawEntryDescriptorInfoTypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sRawEntryDescriptorInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sRawEntryDescriptorInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[8]:  Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCelltypeInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCelltypeInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[9]:  Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sNamespaceInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sNamespaceInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[10]:  Descriptor_of_nTECSInfo_sCellInfoTypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCellInfo )",     /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCellInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[11]:  Descriptor_of_nTECSInfo_sRegionInfoTypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sRegionInfo )",   /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sRegionInfo )), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[11],      /* INIB 3 */
};
