/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tRawEntryDescriptorInfo_tecsgen.h"
#include "nTECSInfo_tRawEntryDescriptorInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eRawEntryDescriptor */
struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES {
    const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT *vmt;
    tRawEntryDescriptorInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eRawEntryDescriptor */
uint16_t       nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *epd)
{
    struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES *lepd
        = (struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES *)epd;
    return nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo( lepd->idx );
}
ER             nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor_skel( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *epd, int_t subsc, void** rawDesc)
{
    struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES *lepd
        = (struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES *)epd;
    return nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor( lepd->idx, subsc, rawDesc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eRawEntryDescriptor */
const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_ = {
    nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo_skel,
    nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */








/* 呼び口配列 #_CPA_# */








/* 属性・変数の配列 #_AVAI_# */
const void* nTECSInfo_tRawEntryDescriptorInfo_Target1_eTarget1RawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &Target1_eTarget1_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_Target2_eTarget2RawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &Target2_eTarget2_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_Target3_eTarget3RawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &Target3_eTarget3_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_Task_eTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &Task_eTask_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rTEMP_TaskMain_eBodyRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rTEMP_TaskMain_eBody_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rTEMP_TECSUnit_eUnitRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rTEMP_TECSUnit_eUnit_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rTEMP_JSMN_eJSMNRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rTEMP_JSMN_eJSMN_des, };
const void* nTECSInfo_tRawEntryDescriptorInfo_rTEMP_TECSInfo_eTECSInfoRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT[1] = { &rTEMP_TECSInfo_eTECSInfo_des, };
/* セル INIB #_INIB_# */
nTECSInfo_tRawEntryDescriptorInfo_INIB nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[0]:  Target1_eTarget1RawEntryDescriptorInfo id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_Target1_eTarget1RawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[1]:  Target2_eTarget2RawEntryDescriptorInfo id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_Target2_eTarget2RawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[2]:  Target3_eTarget3RawEntryDescriptorInfo id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_Target3_eTarget3RawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[3]:  Task_eTaskRawEntryDescriptorInfo id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_Task_eTaskRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[4]:  rTEMP_TaskMain_eBodyRawEntryDescriptorInfo id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rTEMP_TaskMain_eBodyRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[5]:  rTEMP_TECSUnit_eUnitRawEntryDescriptorInfo id=6 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rTEMP_TECSUnit_eUnitRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[6]:  rTEMP_JSMN_eJSMNRawEntryDescriptorInfo id=7 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rTEMP_JSMN_eJSMNRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
    /* cell: nTECSInfo_tRawEntryDescriptorInfo_CB_tab[7]:  rTEMP_TECSInfo_eTECSInfoRawEntryDescriptorInfo id=8 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* size */
        nTECSInfo_tRawEntryDescriptorInfo_rTEMP_TECSInfo_eTECSInfoRawEntryDescriptorInfo_CB_rawEntryDescriptor_INIT, /* rawEntryDescriptor */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_Target1_eTarget1RawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_Target1_eTarget1RawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_Target2_eTarget2RawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_Target2_eTarget2RawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_Target3_eTarget3RawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_Target3_eTarget3RawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_Task_eTaskRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_rTEMP_TaskMain_eBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_rTEMP_TaskMain_eBodyRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_rTEMP_TECSUnit_eUnitRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_rTEMP_TECSUnit_eUnitRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_rTEMP_JSMN_eJSMNRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_rTEMP_JSMN_eJSMNRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_rTEMP_TECSInfo_eTECSInfoRawEntryDescriptorInfo_eRawEntryDescriptor_des;
const struct tag_nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_DES rTEMP_rTECSInfo_rTEMP_TECSInfo_eTECSInfoRawEntryDescriptorInfo_eRawEntryDescriptor_des = {
    &nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_MT_,
    &nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[7],      /* INIB 3 */
};
