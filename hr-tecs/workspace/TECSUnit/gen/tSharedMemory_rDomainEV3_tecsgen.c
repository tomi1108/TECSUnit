/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSharedMemory_tecsgen.h"
#include "tSharedMemory_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSharedMemory */
struct tag_tSharedMemory_eSharedMemory_DES {
    const struct tag_sSharedMemory_VMT *vmt;
    tSharedMemory_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSharedMemory */
void           tSharedMemory_eSharedMemory_putVal_skel( const struct tag_sSharedMemory_VDES *epd, int32_t index, int32_t val)
{
    struct tag_tSharedMemory_eSharedMemory_DES *lepd
        = (struct tag_tSharedMemory_eSharedMemory_DES *)epd;
    tSharedMemory_eSharedMemory_putVal( lepd->idx, index, val );
}
int32_t        tSharedMemory_eSharedMemory_getVal_skel( const struct tag_sSharedMemory_VDES *epd, int32_t index)
{
    struct tag_tSharedMemory_eSharedMemory_DES *lepd
        = (struct tag_tSharedMemory_eSharedMemory_DES *)epd;
    return tSharedMemory_eSharedMemory_getVal( lepd->idx, index );
}
int32_t        tSharedMemory_eSharedMemory_getSize_skel( const struct tag_sSharedMemory_VDES *epd)
{
    struct tag_tSharedMemory_eSharedMemory_DES *lepd
        = (struct tag_tSharedMemory_eSharedMemory_DES *)epd;
    return tSharedMemory_eSharedMemory_getSize( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSharedMemory */
const struct tag_sSharedMemory_VMT tSharedMemory_eSharedMemory_MT_ = {
    tSharedMemory_eSharedMemory_putVal_skel,
    tSharedMemory_eSharedMemory_getVal_skel,
    tSharedMemory_eSharedMemory_getSize_skel,
};

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

extern const struct tag_sSharedMemory_VMT tSharedMemory_eSharedMemory_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSharedMemory_eSharedMemory_DES rDomainEV3_SharedMemory_eSharedMemory_des;
const struct tag_tSharedMemory_eSharedMemory_DES rDomainEV3_SharedMemory_eSharedMemory_des = {
    &tSharedMemory_eSharedMemory_MT_,
    &tSharedMemory_INIB_tab[0],      /* INIB 3 */
};
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
