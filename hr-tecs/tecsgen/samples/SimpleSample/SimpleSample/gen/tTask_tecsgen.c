/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTask : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eTask : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTask : omitted by entry port optimize */

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
        1024,                                    /* stackSize */
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
/* eTask : omitted by entry port optimize */
