/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#include "nTECSInfo_tVarDeclInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eVarDeclInfo */
struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES {
    const struct tag_nTECSInfo_sVarDeclInfo_VMT *vmt;
    tVarDeclInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eVarDeclInfo */
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength( lepd->idx );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* offset, int8_t* place)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo( lepd->idx, offset, place );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo( lepd->idx, desc );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* expr_str, int32_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr( lepd->idx, expr_str, max_len );
}
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* size, const void* p_cb)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs( lepd->idx, size, p_cb );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eVarDeclInfo */
const struct tag_nTECSInfo_sVarDeclInfo_VMT nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_ = {
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Array8_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_pthread_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_pthread_cond_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int32_t_Array64__Array16_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_double64_t_Array32__Array16_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Array256__Array16_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */




















































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tVarDeclInfo_INIB nTECSInfo_tVarDeclInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[0]:  struct__t_rsem_wtskidVarDeclInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rsem_wtskid,          /* place */
        OFFSET_OF_struct__t_rsem_wtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[1]:  struct__t_rsem_semcntVarDeclInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "semcnt",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rsem_semcnt,          /* place */
        OFFSET_OF_struct__t_rsem_semcnt,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[2]:  struct__t_rflg_wtskidVarDeclInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rflg_wtskid,          /* place */
        OFFSET_OF_struct__t_rflg_wtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[3]:  struct__t_rflg_flgptnVarDeclInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "flgptn",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rflg_flgptn,          /* place */
        OFFSET_OF_struct__t_rflg_flgptn,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[4]:  struct__t_rdtq_stskidVarDeclInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_stskid,          /* place */
        OFFSET_OF_struct__t_rdtq_stskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[5]:  struct__t_rdtq_rtskidVarDeclInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_rtskid,          /* place */
        OFFSET_OF_struct__t_rdtq_rtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[6]:  struct__t_rdtq_sdtqcntVarDeclInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "sdtqcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_sdtqcnt,         /* place */
        OFFSET_OF_struct__t_rdtq_sdtqcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[7]:  struct__target_struct_numberVarDeclInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "number",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__target_struct_number,   /* place */
        OFFSET_OF_struct__target_struct_number,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[8]:  struct__target_struct_nameVarDeclInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Array8_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__target_struct_name,     /* place */
        OFFSET_OF_struct__target_struct_name,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[9]:  struct__tecsunit_obj_typeVarDeclInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "type",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__tecsunit_obj_type,      /* place */
        OFFSET_OF_struct__tecsunit_obj_type,     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[10]:  struct__tecsunit_obj_dataVarDeclInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__tecsunit_obj_data,      /* place */
        OFFSET_OF_struct__tecsunit_obj_data,     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[11]:  tTask_taskAttributeVarDeclInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskAttribute",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_taskAttribute,            /* place */
        OFFSET_OF_tTask_taskAttribute,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[12]:  tTask_exceptionAttributeVarDeclInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exceptionAttribute",                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_exceptionAttribute,       /* place */
        OFFSET_OF_tTask_exceptionAttribute,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[13]:  tTask_priorityVarDeclInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "priority",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_priority,                 /* place */
        OFFSET_OF_tTask_priority,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[14]:  tTask_stackSizeVarDeclInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stackSize",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_stackSize,                /* place */
        OFFSET_OF_tTask_stackSize,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[15]:  tTask_nameVarDeclInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_name,                     /* place */
        OFFSET_OF_tTask_name,                    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[16]:  tTask_my_threadVarDeclInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_pthread_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "my_thread",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTask_my_thread,                /* place */
        OFFSET_OF_tTask_my_thread,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[17]:  tTask_my_condVarDeclInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_pthread_cond_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "my_cond",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTask_my_cond,                  /* place */
        OFFSET_OF_tTask_my_cond,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[18]:  tTask_my_mutexVarDeclInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "my_mutex",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTask_my_mutex,                 /* place */
        OFFSET_OF_tTask_my_mutex,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[19]:  tTask_stateVarDeclInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "state",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTask_state,                    /* place */
        OFFSET_OF_tTask_state,                   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[20]:  tTaskMain_NAME_LENVarDeclInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "NAME_LEN",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTaskMain_NAME_LEN,             /* place */
        OFFSET_OF_tTaskMain_NAME_LEN,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[21]:  tTaskMain_ARG_NAME_LENVarDeclInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ARG_NAME_LEN",                          /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTaskMain_ARG_NAME_LEN,         /* place */
        OFFSET_OF_tTaskMain_ARG_NAME_LEN,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[22]:  tTaskMain_ARG_DIMVarDeclInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ARG_DIM",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTaskMain_ARG_DIM,              /* place */
        OFFSET_OF_tTaskMain_ARG_DIM,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[23]:  tTaskMain_TARGET_NUMVarDeclInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TARGET_NUM",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTaskMain_TARGET_NUM,           /* place */
        OFFSET_OF_tTaskMain_TARGET_NUM,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[24]:  tTaskMain_cell_pathVarDeclInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cell_path",                             /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_cell_path,            /* place */
        OFFSET_OF_tTaskMain_cell_path,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[25]:  tTaskMain_celltype_pathVarDeclInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "celltype_path",                         /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_celltype_path,        /* place */
        OFFSET_OF_tTaskMain_celltype_path,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[26]:  tTaskMain_entry_pathVarDeclInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entry_path",                            /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_entry_path,           /* place */
        OFFSET_OF_tTaskMain_entry_path,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[27]:  tTaskMain_entry_path_tmpVarDeclInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entry_path_tmp",                        /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_entry_path_tmp,       /* place */
        OFFSET_OF_tTaskMain_entry_path_tmp,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[28]:  tTaskMain_signature_pathVarDeclInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signature_path",                        /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_signature_path,       /* place */
        OFFSET_OF_tTaskMain_signature_path,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[29]:  tTaskMain_function_pathVarDeclInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "function_path",                         /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_function_path,        /* place */
        OFFSET_OF_tTaskMain_function_path,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[30]:  tTaskMain_function_path_tmpVarDeclInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "function_path_tmp",                     /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_function_path_tmp,    /* place */
        OFFSET_OF_tTaskMain_function_path_tmp,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[31]:  tTaskMain_arg_numVarDeclInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_num",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_arg_num,              /* place */
        OFFSET_OF_tTaskMain_arg_num,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[32]:  tTaskMain_exp_typeVarDeclInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exp_type",                              /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_exp_type,             /* place */
        OFFSET_OF_tTaskMain_exp_type,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[33]:  tTaskMain_argVarDeclInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_arg,                  /* place */
        OFFSET_OF_tTaskMain_arg,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[34]:  tTaskMain_arg_typeVarDeclInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_type",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_arg_type,             /* place */
        OFFSET_OF_tTaskMain_arg_type,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[35]:  tTaskMain_find_entryVarDeclInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "find_entry",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_find_entry,           /* place */
        OFFSET_OF_tTaskMain_find_entry,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[36]:  tTaskMain_find_funcVarDeclInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "find_func",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_find_func,            /* place */
        OFFSET_OF_tTaskMain_find_func,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[37]:  tTECSUnit_LENVarDeclInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LEN",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTECSUnit_LEN,                  /* place */
        OFFSET_OF_tTECSUnit_LEN,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[38]:  tTECSUnit_out_intVarDeclInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int32_t_Array64__Array16_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "out_int",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTECSUnit_out_int,              /* place */
        OFFSET_OF_tTECSUnit_out_int,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[39]:  tTECSUnit_out_doubleVarDeclInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_double64_t_Array32__Array16_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "out_double",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTECSUnit_out_double,           /* place */
        OFFSET_OF_tTECSUnit_out_double,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[40]:  tTECSUnit_out_charVarDeclInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Array256__Array16_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "out_char",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTECSUnit_out_char,             /* place */
        OFFSET_OF_tTECSUnit_out_char,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[41]:  tTECSUnit_cell_entryVarDeclInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cell_entry",                            /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTECSUnit_cell_entry,           /* place */
        OFFSET_OF_tTECSUnit_cell_entry,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[42]:  tJSMN_LENVarDeclInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LEN",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_LEN,                      /* place */
        OFFSET_OF_tJSMN_LEN,                     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[43]:  tJSMN_TMP_LENVarDeclInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TMP_LEN",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_TMP_LEN,                  /* place */
        OFFSET_OF_tJSMN_TMP_LEN,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[44]:  tJSMN_key_cellVarDeclInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_cell",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_cell,                 /* place */
        OFFSET_OF_tJSMN_key_cell,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[45]:  tJSMN_key_entryVarDeclInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_entry",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_entry,                /* place */
        OFFSET_OF_tJSMN_key_entry,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[46]:  tJSMN_key_functionVarDeclInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_function",                          /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_function,             /* place */
        OFFSET_OF_tJSMN_key_function,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[47]:  tJSMN_key_argVarDeclInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_arg",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_arg,                  /* place */
        OFFSET_OF_tJSMN_key_arg,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[48]:  tJSMN_key_expVarDeclInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_exp",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_exp,                  /* place */
        OFFSET_OF_tJSMN_key_exp,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[49]:  tJSMN_json_strVarDeclInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "json_str",                              /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tJSMN_json_str,                 /* place */
        OFFSET_OF_tJSMN_json_str,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[50]:  tJSMN_tmp_strVarDeclInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tmp_str",                               /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tJSMN_tmp_str,                  /* place */
        OFFSET_OF_tJSMN_tmp_str,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[51]:  tJSMN_counterVarDeclInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "counter",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tJSMN_counter,                  /* place */
        OFFSET_OF_tJSMN_counter,                 /* offset */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__target_struct_numberVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__target_struct_numberVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__target_struct_nameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__target_struct_nameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__tecsunit_obj_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__tecsunit_obj_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__tecsunit_obj_dataVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_struct__tecsunit_obj_dataVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_nameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_nameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_my_threadVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_my_threadVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_my_condVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_my_condVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_my_mutexVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_my_mutexVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_stateVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTask_stateVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_ARG_NAME_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_ARG_NAME_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_ARG_DIMVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_ARG_DIMVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_TARGET_NUMVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_TARGET_NUMVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_arg_numVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_arg_numVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_exp_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_exp_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_argVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_argVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_find_entryVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_find_entryVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_find_funcVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTaskMain_find_funcVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_out_intVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_out_intVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_out_doubleVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_out_doubleVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_out_charVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_out_charVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_cell_entryVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tTECSUnit_cell_entryVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[42],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_TMP_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_TMP_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[43],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_cellVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_cellVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[44],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_entryVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_entryVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[45],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_functionVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_functionVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[46],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_argVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_argVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[47],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_expVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_key_expVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[48],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_json_strVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_json_strVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[49],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_tmp_strVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_tmp_strVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[50],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_counterVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rTEMP_rTECSInfo_tJSMN_counterVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[51],      /* INIB 3 */
};
