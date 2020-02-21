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
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_signed__intTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_longTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_charTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */


























/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tDefinedTypeInfo_INIB nTECSInfo_tDefinedTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[0]:  TEXPTNTypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
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
        &rTEMP_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
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
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
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
        &rTEMP_rTECSInfo_signed__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int_t",                                 /* name */
        6,                                       /* typeKind */
        sizeof(int_t),                           /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[4]:  RELTIMTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "RELTIM",                                /* name */
        6,                                       /* typeKind */
        sizeof(RELTIM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[5]:  SYSTIMTypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSTIM",                                /* name */
        6,                                       /* typeKind */
        sizeof(SYSTIM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[6]:  ulong_tTypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ulong_t",                               /* name */
        6,                                       /* typeKind */
        sizeof(ulong_t),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[7]:  SYSUTMTypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSUTM",                                /* name */
        6,                                       /* typeKind */
        sizeof(SYSUTM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[8]:  TMOTypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TMO",                                   /* name */
        6,                                       /* typeKind */
        sizeof(TMO),                             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[9]:  T_RSEMTypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RSEM",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RSEM),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[10]:  IDTypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ID",                                    /* name */
        6,                                       /* typeKind */
        sizeof(ID),                              /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[11]:  FLGPTNTypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FLGPTN",                                /* name */
        6,                                       /* typeKind */
        sizeof(FLGPTN),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[12]:  MODETypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "MODE",                                  /* name */
        6,                                       /* typeKind */
        sizeof(MODE),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[13]:  T_RFLGTypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RFLG",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RFLG),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[14]:  intptr_tTypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "intptr_t",                              /* name */
        6,                                       /* typeKind */
        sizeof(intptr_t),                        /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[15]:  __intptr_tTypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "__intptr_t",                            /* name */
        6,                                       /* typeKind */
        sizeof(__intptr_t),                      /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[16]:  T_RDTQTypeInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RDTQ",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RDTQ),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[17]:  char_tTypeInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_charTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t",                                /* name */
        6,                                       /* typeKind */
        sizeof(char_t),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[18]:  ATRTypeInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ATR",                                   /* name */
        6,                                       /* typeKind */
        sizeof(ATR),                             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[19]:  PRITypeInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "PRI",                                   /* name */
        6,                                       /* typeKind */
        sizeof(PRI),                             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[20]:  SIZETypeInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SIZE",                                  /* name */
        6,                                       /* typeKind */
        sizeof(SIZE),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[21]:  uintptr_tTypeInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uintptr_t",                             /* name */
        6,                                       /* typeKind */
        sizeof(uintptr_t),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[22]:  __uintptr_tTypeInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "__uintptr_t",                           /* name */
        6,                                       /* typeKind */
        sizeof(__uintptr_t),                     /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[23]:  pthread_tTypeInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pthread_t",                             /* name */
        6,                                       /* typeKind */
        sizeof(pthread_t),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[24]:  pthread_cond_tTypeInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pthread_cond_t",                        /* name */
        6,                                       /* typeKind */
        sizeof(pthread_cond_t),                  /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[25]:  pthread_mutex_tTypeInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pthread_mutex_t",                       /* name */
        6,                                       /* typeKind */
        sizeof(pthread_mutex_t),                 /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_ERTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_ERTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_MODETypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_MODETypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_char_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_char_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_ATRTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_ATRTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_PRITypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_PRITypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SIZETypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SIZETypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_pthread_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_pthread_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_pthread_cond_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_pthread_cond_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[25],      /* INIB 3 */
};
