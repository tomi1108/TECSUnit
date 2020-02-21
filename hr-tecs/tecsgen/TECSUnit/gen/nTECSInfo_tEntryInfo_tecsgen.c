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
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget1SignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget2SignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget3SignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */








/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tEntryInfo_INIB nTECSInfo_tEntryInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tEntryInfo_CB_tab[0]:  tTask_eTaskEntryInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTask",                                 /* name */
        true,                                    /* b_inline */
        tTask_eTask__array_size,                 /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[1]:  tTarget1_eTarget1EntryInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTarget1SignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTarget1",                              /* name */
        false,                                   /* b_inline */
        tTarget1_eTarget1__array_size,           /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[2]:  tTarget2_eTarget2EntryInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTarget2SignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTarget2",                              /* name */
        false,                                   /* b_inline */
        tTarget2_eTarget2__array_size,           /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[3]:  tTarget3_eTarget3EntryInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTarget3SignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTarget3",                              /* name */
        false,                                   /* b_inline */
        tTarget3_eTarget3__array_size,           /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[4]:  tTaskMain_eBodyEntryInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eBody",                                 /* name */
        false,                                   /* b_inline */
        tTaskMain_eBody__array_size,             /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[5]:  tTECSUnit_eUnitEntryInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eUnit",                                 /* name */
        false,                                   /* b_inline */
        tTECSUnit_eUnit__array_size,             /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[6]:  tJSMN_eJSMNEntryInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eJSMN",                                 /* name */
        false,                                   /* b_inline */
        tJSMN_eJSMN__array_size,                 /* array_size */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[7]:  nTECSInfo_tTECSInfo_eTECSInfoEntryInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTECSInfo",                             /* name */
        true,                                    /* b_inline */
        nTECSInfo_tTECSInfo_eTECSInfo__array_size, /* array_size */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTarget1_eTarget1EntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTarget1_eTarget1EntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTarget2_eTarget2EntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTarget2_eTarget2EntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTarget3_eTarget3EntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTarget3_eTarget3EntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTECSUnit_eUnitEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tTECSUnit_eUnitEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tJSMN_eJSMNEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_tJSMN_eJSMNEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rTEMP_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[7],      /* INIB 3 */
};
