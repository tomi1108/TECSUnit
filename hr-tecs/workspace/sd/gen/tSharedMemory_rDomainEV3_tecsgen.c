/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSharedMemory_tecsgen.h"
#include "tSharedMemory_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSharedMemory : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eSharedMemory : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSharedMemory : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
int32_t tSharedMemory_SharedMemory_CB_data_INIT[32];
/* セル INIB #_INIB_# */
tSharedMemory_INIB tSharedMemory_INIB_tab[] = {
    /* cell: tSharedMemory_CB_tab[0]:  SharedMemory id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        32,                                      /* size */
        tSharedMemory_SharedMemory_CB_data_INIT, /* data */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eSharedMemory : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tSharedMemory_CB_initialize()
{
    tSharedMemory_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
