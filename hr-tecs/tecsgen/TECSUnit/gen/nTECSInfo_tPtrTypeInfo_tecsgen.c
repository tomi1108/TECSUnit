/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tPtrTypeInfo_tecsgen.h"
#include "nTECSInfo_tPtrTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tPtrTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tPtrTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize( lepd->idx );
}
int8_t         nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind( lepd->idx );
}
uint32_t       nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType( lepd->idx );
}
ER             nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tPtrTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getNMember( lepd->idx );
}
ER             nTECSInfo_tPtrTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getMemberInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNMember_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getMemberInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__target_structTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__tecsunit_objTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_charTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */

































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tPtrTypeInfo_INIB nTECSInfo_tPtrTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[0]:  SYSTIM_Ptr_TypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSTIM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(SYSTIM*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[1]:  SYSUTM_Ptr_TypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSUTM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(SYSUTM*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[2]:  T_RSEM_Ptr_TypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RSEM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RSEM*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[3]:  FLGPTN_Ptr_TypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FLGPTN*",                               /* name */
        4,                                       /* typeKind */
        sizeof(FLGPTN*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[4]:  T_RFLG_Ptr_TypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RFLG*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RFLG*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[5]:  intptr_t_Ptr_TypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "intptr_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(intptr_t*),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[6]:  T_RDTQ_Ptr_TypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RDTQ*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RDTQ*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[7]:  const__int8_t_Ptr_TypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int8_t*",                         /* name */
        4,                                       /* typeKind */
        sizeof(const int8_t*),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[8]:  const__char_t_Ptr_TypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char_t*",                         /* name */
        4,                                       /* typeKind */
        sizeof(const char_t*),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[9]:  struct__target_struct_Ptr_TypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__target_structTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const struct target_struct*",           /* name */
        4,                                       /* typeKind */
        sizeof(const struct target_struct*),     /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[10]:  char_t_Ptr_TypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(char_t*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[11]:  struct__tecsunit_obj_Ptr_TypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__tecsunit_objTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct tecsunit_obj*",                  /* name */
        4,                                       /* typeKind */
        sizeof(struct tecsunit_obj*),            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[12]:  int_Ptr_TypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int*",                                  /* name */
        4,                                       /* typeKind */
        sizeof(int*),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[13]:  char_Ptr_TypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_charTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char*",                                 /* name */
        4,                                       /* typeKind */
        sizeof(char*),                           /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[14]:  Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sTypeInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sTypeInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[15]:  Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sVarDeclInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sVarDeclInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[16]:  uint32_t_Ptr_TypeInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint32_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(uint32_t*),                       /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[17]:  int8_t_Ptr_TypeInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(int8_t*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[18]:  const__void_Ptr_TypeInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const void*",                           /* name */
        4,                                       /* typeKind */
        sizeof(const void*),                     /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[19]:  Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sParamInfo )*",   /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sParamInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[20]:  Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sFunctionInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sFunctionInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[21]:  Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sSignatureInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sSignatureInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[22]:  bool_t_Ptr_TypeInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bool_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(bool_t*),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[23]:  Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCallInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCallInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[24]:  Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sEntryInfo )*",   /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sEntryInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[25]:  Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sRawEntryDescriptorInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sRawEntryDescriptorInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[26]:  Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCelltypeInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCelltypeInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[27]:  void_Ptr__Ptr_TypeInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rTEMP_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "void**",                                /* name */
        4,                                       /* typeKind */
        sizeof(void**),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[28]:  void_Ptr_TypeInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "void*",                                 /* name */
        4,                                       /* typeKind */
        sizeof(void*),                           /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[29]:  Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sNamespaceInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sNamespaceInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[30]:  Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCellInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCellInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[31]:  Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sRegionInfo )*",  /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sRegionInfo )*), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[32]:  int_t_Ptr_TypeInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int_t*",                                /* name */
        4,                                       /* typeKind */
        sizeof(int_t*),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_const__int8_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_const__int8_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__target_struct_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__target_struct_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_char_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_char_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[32],      /* INIB 3 */
};
