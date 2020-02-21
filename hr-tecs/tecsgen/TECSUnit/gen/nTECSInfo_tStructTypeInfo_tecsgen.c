/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tStructTypeInfo_tecsgen.h"
#include "nTECSInfo_tStructTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tStructTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getSize( lepd->idx );
}
int8_t         nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getKind( lepd->idx );
}
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getNType( lepd->idx );
}
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember( lepd->idx );
}
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tStructTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__target_struct_numberVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__target_struct_nameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__tecsunit_obj_typeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_struct__tecsunit_obj_dataVarDeclInfo_eVarDeclInfo_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_struct__t_rsemTypeInfo_cVarDeclInfo[] = {
    &rTEMP_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_struct__t_rflgTypeInfo_cVarDeclInfo[] = {
    &rTEMP_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_struct__t_rdtqTypeInfo_cVarDeclInfo[] = {
    &rTEMP_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_struct__target_structTypeInfo_cVarDeclInfo[] = {
    &rTEMP_rTECSInfo_struct__target_struct_numberVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_struct__target_struct_nameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_struct__tecsunit_objTypeInfo_cVarDeclInfo[] = {
    &rTEMP_rTECSInfo_struct__tecsunit_obj_typeVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_struct__tecsunit_obj_dataVarDeclInfo_eVarDeclInfo_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tStructTypeInfo_INIB nTECSInfo_tStructTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[0]:  struct__t_rsemTypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_struct__t_rsemTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rsem",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rsem),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[1]:  struct__t_rflgTypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_struct__t_rflgTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rflg",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rflg),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[2]:  struct__t_rdtqTypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_struct__t_rdtqTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        3,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rdtq",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rdtq),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[3]:  struct__target_structTypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_struct__target_structTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const struct target_struct",            /* name */
        7,                                       /* typeKind */
        sizeof(const struct target_struct),      /* size */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[4]:  struct__tecsunit_objTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_struct__tecsunit_objTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct tecsunit_obj",                   /* name */
        7,                                       /* typeKind */
        sizeof(struct tecsunit_obj),             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__target_structTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__target_structTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__tecsunit_objTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_struct__tecsunit_objTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[4],      /* INIB 3 */
};
