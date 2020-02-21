/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tIntTypeInfo_tecsgen.h"
#include "nTECSInfo_tIntTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tIntTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tIntTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getSize( lepd->idx );
}
int8_t         nTECSInfo_tIntTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getKind( lepd->idx );
}
uint32_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getNType( lepd->idx );
}
ER             nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getNMember( lepd->idx );
}
ER             nTECSInfo_tIntTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getMemberInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tIntTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tIntTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNMember_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getMemberInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


















/* 呼び口配列 #_CPA_# */


















/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tIntTypeInfo_INIB nTECSInfo_tIntTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[0]:  unsigned__intTypeInfo id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned int",                          /* name */
        2,                                       /* typeKind */
        sizeof(unsigned int),                    /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[1]:  signed__intTypeInfo id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signed int",                            /* name */
        2,                                       /* typeKind */
        sizeof(signed int),                      /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[2]:  intTypeInfo id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int",                                   /* name */
        2,                                       /* typeKind */
        sizeof(int),                             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[3]:  unsigned__longTypeInfo id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned long",                         /* name */
        2,                                       /* typeKind */
        sizeof(unsigned long),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[4]:  const__uint8_tTypeInfo id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const uint8_t",                         /* name */
        2,                                       /* typeKind */
        sizeof(const uint8_t),                   /* size */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[5]:  uint32_tTypeInfo id=6 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint32_t",                              /* name */
        2,                                       /* typeKind */
        sizeof(uint32_t),                        /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[6]:  uint8_tTypeInfo id=7 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint8_t",                               /* name */
        2,                                       /* typeKind */
        sizeof(uint8_t),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[7]:  int16_tTypeInfo id=8 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int16_t",                               /* name */
        2,                                       /* typeKind */
        sizeof(int16_t),                         /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[8]:  longTypeInfo id=9 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "long",                                  /* name */
        2,                                       /* typeKind */
        sizeof(long),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[9]:  uint16_tTypeInfo id=10 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint16_t",                              /* name */
        2,                                       /* typeKind */
        sizeof(uint16_t),                        /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[10]:  const__charTypeInfo id=11 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char",                            /* name */
        2,                                       /* typeKind */
        sizeof(const char),                      /* size */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[11]:  int8_tTypeInfo id=12 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t",                                /* name */
        2,                                       /* typeKind */
        sizeof(int8_t),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[12]:  charTypeInfo id=13 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char",                                  /* name */
        2,                                       /* typeKind */
        sizeof(char),                            /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[13]:  unsigned__charTypeInfo id=14 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned char",                         /* name */
        2,                                       /* typeKind */
        sizeof(unsigned char),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[14]:  char_tTypeInfo id=15 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t",                                /* name */
        2,                                       /* typeKind */
        sizeof(char_t),                          /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[15]:  const__char_tTypeInfo id=16 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char_t",                          /* name */
        2,                                       /* typeKind */
        sizeof(const char_t),                    /* size */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[16]:  unsigned__shortTypeInfo id=17 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned short",                        /* name */
        2,                                       /* typeKind */
        sizeof(unsigned short),                  /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[17]:  const__intTypeInfo id=18 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int",                             /* name */
        2,                                       /* typeKind */
        sizeof(const int),                       /* size */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tIntTypeInfo_eTypeInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_signed__intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_signed__intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__uint8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__uint8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_longTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_longTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__charTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__charTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_charTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_charTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__charTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__charTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__shortTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__shortTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[17],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tIntTypeInfo_CB_initialize()
{
    nTECSInfo_tIntTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
