/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tDefinedTypeInfo_tecsgen.h"
#include "nTECSInfo_tDefinedTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tDefinedTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize( lepd->idx );
}
int8_t         nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind( lepd->idx );
}
uint32_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType( lepd->idx );
}
ER             nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNMember( lepd->idx );
}
ER             nTECSInfo_tDefinedTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getMemberInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNMember_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getMemberInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_signed__intTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_longTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__charTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_charTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_unsigned__charTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal__TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal__TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_unsigned__shortTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */






















































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tDefinedTypeInfo_INIB nTECSInfo_tDefinedTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[0]:  TEXPTNTypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TEXPTN",                                /* name */
        6,                                       /* typeKind */
        sizeof(TEXPTN),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[1]:  uint_tTypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint_t",                                /* name */
        6,                                       /* typeKind */
        sizeof(uint_t),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[2]:  ERTypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ER",                                    /* name */
        6,                                       /* typeKind */
        sizeof(ER),                              /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[3]:  int_tTypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_signed__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int_t",                                 /* name */
        6,                                       /* typeKind */
        sizeof(int_t),                           /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[4]:  ER_UINTTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ER_UINT",                               /* name */
        6,                                       /* typeKind */
        sizeof(ER_UINT),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[5]:  PRITypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "PRI",                                   /* name */
        6,                                       /* typeKind */
        sizeof(PRI),                             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[6]:  T_RTSKTypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RTSK",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RTSK),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[7]:  STATTypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STAT",                                  /* name */
        6,                                       /* typeKind */
        sizeof(STAT),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[8]:  IDTypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ID",                                    /* name */
        6,                                       /* typeKind */
        sizeof(ID),                              /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[9]:  TMOTypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TMO",                                   /* name */
        6,                                       /* typeKind */
        sizeof(TMO),                             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[10]:  bool_tTypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bool_t",                                /* name */
        6,                                       /* typeKind */
        sizeof(bool_t),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[11]:  T_RTEXTypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RTEX",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RTEX),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[12]:  OVRTIMTypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "OVRTIM",                                /* name */
        6,                                       /* typeKind */
        sizeof(OVRTIM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[13]:  ulong_tTypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ulong_t",                               /* name */
        6,                                       /* typeKind */
        sizeof(ulong_t),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[14]:  T_ROVRTypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_ROVR",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_ROVR),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[15]:  T_RCYCTypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RCYC",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RCYC),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[16]:  RELTIMTypeInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "RELTIM",                                /* name */
        6,                                       /* typeKind */
        sizeof(RELTIM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[17]:  T_RALMTypeInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RALM",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RALM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[18]:  T_RSEMTypeInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RSEM",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RSEM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[19]:  FLGPTNTypeInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FLGPTN",                                /* name */
        6,                                       /* typeKind */
        sizeof(FLGPTN),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[20]:  MODETypeInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "MODE",                                  /* name */
        6,                                       /* typeKind */
        sizeof(MODE),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[21]:  T_RFLGTypeInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RFLG",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RFLG),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[22]:  intptr_tTypeInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "intptr_t",                              /* name */
        6,                                       /* typeKind */
        sizeof(intptr_t),                        /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[23]:  __intptr_tTypeInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "__intptr_t",                            /* name */
        6,                                       /* typeKind */
        sizeof(__intptr_t),                      /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[24]:  T_RDTQTypeInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RDTQ",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RDTQ),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[25]:  T_RPDQTypeInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RPDQ",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RPDQ),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[26]:  T_RMPFTypeInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RMPF",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RMPF),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[27]:  SYSTIMTypeInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSTIM",                                /* name */
        6,                                       /* typeKind */
        sizeof(SYSTIM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[28]:  SYSUTMTypeInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSUTM",                                /* name */
        6,                                       /* typeKind */
        sizeof(SYSUTM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[29]:  T_RMBFTypeInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RMBF",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RMBF),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[30]:  SIZETypeInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SIZE",                                  /* name */
        6,                                       /* typeKind */
        sizeof(SIZE),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[31]:  uintptr_tTypeInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uintptr_t",                             /* name */
        6,                                       /* typeKind */
        sizeof(uintptr_t),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[32]:  __uintptr_tTypeInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "__uintptr_t",                           /* name */
        6,                                       /* typeKind */
        sizeof(__uintptr_t),                     /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[33]:  size_tTypeInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size_t",                                /* name */
        6,                                       /* typeKind */
        sizeof(size_t),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[34]:  colorid_tTypeInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "colorid_t",                             /* name */
        6,                                       /* typeKind */
        sizeof(colorid_t),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[35]:  int32_tTypeInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo___int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int32_t",                               /* name */
        6,                                       /* typeKind */
        sizeof(int32_t),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[36]:  __int32_tTypeInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "__int32_t",                             /* name */
        6,                                       /* typeKind */
        sizeof(__int32_t),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[37]:  button_tTypeInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "button_t",                              /* name */
        6,                                       /* typeKind */
        sizeof(button_t),                        /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[38]:  lcdfont_tTypeInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "lcdfont_t",                             /* name */
        6,                                       /* typeKind */
        sizeof(lcdfont_t),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[39]:  lcdcolor_tTypeInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "lcdcolor_t",                            /* name */
        6,                                       /* typeKind */
        sizeof(lcdcolor_t),                      /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[40]:  ledcolor_tTypeInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ledcolor_t",                            /* name */
        6,                                       /* typeKind */
        sizeof(ledcolor_t),                      /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[41]:  const__TCHARTypeInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__charTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const TCHAR",                           /* name */
        6,                                       /* typeKind */
        sizeof(const TCHAR),                     /* size */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[42]:  FRESULTTypeInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FRESULT",                               /* name */
        6,                                       /* typeKind */
        sizeof(FRESULT),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[43]:  TCHARTypeInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_charTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TCHAR",                                 /* name */
        6,                                       /* typeKind */
        sizeof(TCHAR),                           /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[44]:  UINTTypeInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "UINT",                                  /* name */
        6,                                       /* typeKind */
        sizeof(UINT),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[45]:  BYTETypeInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_unsigned__charTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "BYTE",                                  /* name */
        6,                                       /* typeKind */
        sizeof(BYTE),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[46]:  ATRTypeInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ATR",                                   /* name */
        6,                                       /* typeKind */
        sizeof(ATR),                             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[47]:  ACPTNTypeInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ACPTN",                                 /* name */
        6,                                       /* typeKind */
        sizeof(ACPTN),                           /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[48]:  FILTypeInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal__TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FIL",                                   /* name */
        6,                                       /* typeKind */
        sizeof(FIL),                             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[49]:  FATFSTypeInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal__TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FATFS",                                 /* name */
        6,                                       /* typeKind */
        sizeof(FATFS),                           /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[50]:  WORDTypeInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_unsigned__shortTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "WORD",                                  /* name */
        6,                                       /* typeKind */
        sizeof(WORD),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[51]:  DWORDTypeInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "DWORD",                                 /* name */
        6,                                       /* typeKind */
        sizeof(DWORD),                           /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[52]:  const__mrb_stateTypeInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const mrb_state",                       /* name */
        6,                                       /* typeKind */
        sizeof(const mrb_state),                 /* size */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[53]:  mrb_stateTypeInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "mrb_state",                             /* name */
        6,                                       /* typeKind */
        sizeof(mrb_state),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ERTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ERTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ER_UINTTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ER_UINTTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RTSKTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RTSKTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RTEXTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RTEXTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_ROVRTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_ROVRTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RCYCTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RCYCTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RALMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RALMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RPDQTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RPDQTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RMPFTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RMPFTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RMBFTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RMBFTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_colorid_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_colorid_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___int32_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo___int32_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_button_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_button_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_lcdcolor_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_lcdcolor_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ledcolor_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ledcolor_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__TCHARTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__TCHARTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FRESULTTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FRESULTTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[42],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_TCHARTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_TCHARTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[43],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_UINTTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_UINTTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[44],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[45],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[46],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ACPTNTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ACPTNTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[47],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FILTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FILTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[48],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FATFSTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FATFSTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[49],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_WORDTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_WORDTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[50],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[51],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__mrb_stateTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__mrb_stateTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[52],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_mrb_stateTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_mrb_stateTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[53],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tDefinedTypeInfo_CB_initialize()
{
    nTECSInfo_tDefinedTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
