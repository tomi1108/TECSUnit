/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTask */
struct tag_tTask_eTask_DES {
    const struct tag_sTask_VMT *vmt;
    tTask_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTask */
ER             tTask_eTask_activate_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_activate( lepd->idx );
}
ER             tTask_eTask_suspend_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_suspend( lepd->idx );
}
ER             tTask_eTask_resume_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_resume( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTask */
const struct tag_sTask_VMT tTask_eTask_MT_ = {
    tTask_eTask_activate_skel,
    tTask_eTask_suspend_skel,
    tTask_eTask_resume_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  Task id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TA_ACT,                                  /* taskAttribute */
        TA_NULL,                                 /* exceptionAttribute */
        11,                                      /* priority */
        4096,                                    /* stackSize */
        "tTask_Task",                            /* name */
    },
};

/* セル CB #_CB_# */
struct tag_tTask_CB tTask_CB_tab[] = {
    /* cell: tTask_CB_tab[0]:  Task id=1 */
    {
        &tTask_INIB_tab[0],                      /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* my_thread */
        0,                                       /* my_cond */
        0,                                       /* my_mutex */
        0,                                       /* state */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTask_eTask_DES Task_eTask_des;
const struct tag_tTask_eTask_DES Task_eTask_des = {
    &tTask_eTask_MT_,
    &tTask_CB_tab[0],      /* CB 3 */
};
