/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tCellInfo_tecsgen.h"
#include "nTECSInfo_tCellInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eCellInfo */
struct tag_nTECSInfo_tCellInfo_eCellInfo_DES {
    const struct tag_nTECSInfo_sCellInfo_VMT *vmt;
    tCellInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eCellInfo */
ER             nTECSInfo_tCellInfo_eCellInfo_getName_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    return nTECSInfo_tCellInfo_eCellInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tCellInfo_eCellInfo_getNameLength_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    return nTECSInfo_tCellInfo_eCellInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    return nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo( lepd->idx );
}
ER             nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, int_t index, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* desc)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    return nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo( lepd->idx, index, desc );
}
void           nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, Descriptor( nTECSInfo_sCelltypeInfo )* desc)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo( lepd->idx, desc );
}
void           nTECSInfo_tCellInfo_eCellInfo_getCBP_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, void** cbp)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    nTECSInfo_tCellInfo_eCellInfo_getCBP( lepd->idx, cbp );
}
void           nTECSInfo_tCellInfo_eCellInfo_getINIBP_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, void** inibp)
{
    struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *lepd
        = (struct tag_nTECSInfo_tCellInfo_eCellInfo_DES *)epd;
    nTECSInfo_tCellInfo_eCellInfo_getINIBP( lepd->idx, inibp );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eCellInfo */
const struct tag_nTECSInfo_sCellInfo_VMT nTECSInfo_tCellInfo_eCellInfo_MT_ = {
    nTECSInfo_tCellInfo_eCellInfo_getName_skel,
    nTECSInfo_tCellInfo_eCellInfo_getNameLength_skel,
    nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo_skel,
    nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo_skel,
    nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo_skel,
    nTECSInfo_tCellInfo_eCellInfo_getCBP_skel,
    nTECSInfo_tCellInfo_eCellInfo_getINIBP_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTarget1CelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rTEMP_rTECSInfo_Target1_eTarget1RawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTarget2CelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rTEMP_rTECSInfo_Target2_eTarget2RawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTarget3CelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rTEMP_rTECSInfo_Target3_eTarget3RawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rTEMP_rTECSInfo_Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rTEMP_rTECSInfo_rTEMP_TaskMain_eBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rTEMP_rTECSInfo_rTEMP_TECSUnit_eUnitRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rTEMP_rTECSInfo_rTEMP_JSMN_eJSMNRawEntryDescriptorInfo_eRawEntryDescriptor_des;

extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES rTEMP_rTECSInfo_rTEMP_TECSInfo_eTECSInfoRawEntryDescriptorInfo_eRawEntryDescriptor_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rTEMP_rTECSInfo_Target1CellInfo_cRawEntryDescriptor[] = {
    &rTEMP_rTECSInfo_Target1_eTarget1RawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rTEMP_rTECSInfo_Target2CellInfo_cRawEntryDescriptor[] = {
    &rTEMP_rTECSInfo_Target2_eTarget2RawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rTEMP_rTECSInfo_Target3CellInfo_cRawEntryDescriptor[] = {
    &rTEMP_rTECSInfo_Target3_eTarget3RawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rTEMP_rTECSInfo_TaskCellInfo_cRawEntryDescriptor[] = {
    &rTEMP_rTECSInfo_Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rTEMP_rTECSInfo_rTEMP_TaskMainCellInfo_cRawEntryDescriptor[] = {
    &rTEMP_rTECSInfo_rTEMP_TaskMain_eBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rTEMP_rTECSInfo_rTEMP_TECSUnitCellInfo_cRawEntryDescriptor[] = {
    &rTEMP_rTECSInfo_rTEMP_TECSUnit_eUnitRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rTEMP_rTECSInfo_rTEMP_JSMNCellInfo_cRawEntryDescriptor[] = {
    &rTEMP_rTECSInfo_rTEMP_JSMN_eJSMNRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES * const rTEMP_rTECSInfo_rTEMP_TECSInfoCellInfo_cRawEntryDescriptor[] = {
    &rTEMP_rTECSInfo_rTEMP_TECSInfo_eTECSInfoRawEntryDescriptorInfo_eRawEntryDescriptor_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCellInfo_INIB nTECSInfo_tCellInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCellInfo_CB_tab[0]:  Target1CellInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_tTarget1CelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rTEMP_rTECSInfo_Target1CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Target1",                               /* name */
        Target1__CBP,                            /* cbp */
        Target1__INIBP,                          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[1]:  Target2CellInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_tTarget2CelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rTEMP_rTECSInfo_Target2CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Target2",                               /* name */
        Target2__CBP,                            /* cbp */
        Target2__INIBP,                          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[2]:  Target3CellInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_tTarget3CelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rTEMP_rTECSInfo_Target3CellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Target3",                               /* name */
        Target3__CBP,                            /* cbp */
        Target3__INIBP,                          /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[3]:  TaskCellInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rTEMP_rTECSInfo_TaskCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Task",                                  /* name */
        Task__CBP,                               /* cbp */
        Task__INIBP,                             /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[4]:  rTEMP_TaskMainCellInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rTEMP_rTECSInfo_rTEMP_TaskMainCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TaskMain",                              /* name */
        rTEMP_TaskMain__CBP,                     /* cbp */
        rTEMP_TaskMain__INIBP,                   /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[5]:  rTEMP_TECSUnitCellInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rTEMP_rTECSInfo_rTEMP_TECSUnitCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TECSUnit",                              /* name */
        rTEMP_TECSUnit__CBP,                     /* cbp */
        rTEMP_TECSUnit__INIBP,                   /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[6]:  rTEMP_JSMNCellInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rTEMP_rTECSInfo_rTEMP_JSMNCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "JSMN",                                  /* name */
        rTEMP_JSMN__CBP,                         /* cbp */
        rTEMP_JSMN__INIBP,                       /* inibp */
    },
    /* cell: nTECSInfo_tCellInfo_CB_tab[7]:  rTEMP_TECSInfoCellInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des, /* cCelltypeInfo #_CCP1_# */
        rTEMP_rTECSInfo_rTEMP_TECSInfoCellInfo_cRawEntryDescriptor, /* #_CCP3B_# */
        1,                                       /* length of cRawEntryDescriptor (n_cRawEntryDescriptor) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TECSInfo",                              /* name */
        rTEMP_TECSInfo__CBP,                     /* cbp */
        rTEMP_TECSInfo__INIBP,                   /* inibp */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_Target1CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_Target1CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_Target2CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_Target2CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_Target3CellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_Target3CellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_TaskCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_TaskCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_rTEMP_TaskMainCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_rTEMP_TaskMainCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_rTEMP_TECSUnitCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_rTEMP_TECSUnitCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_rTEMP_JSMNCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_rTEMP_JSMNCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_rTEMP_TECSInfoCellInfo_eCellInfo_des;
const struct tag_nTECSInfo_tCellInfo_eCellInfo_DES rTEMP_rTECSInfo_rTEMP_TECSInfoCellInfo_eCellInfo_des = {
    &nTECSInfo_tCellInfo_eCellInfo_MT_,
    &nTECSInfo_tCellInfo_INIB_tab[7],      /* INIB 3 */
};
