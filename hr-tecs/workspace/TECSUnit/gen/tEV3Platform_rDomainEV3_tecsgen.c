/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tEV3Platform_tecsgen.h"
#include "tEV3Platform_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTaskBody */
struct tag_tEV3Platform_eTaskBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tEV3Platform_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTaskBody */
void           tEV3Platform_eTaskBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tEV3Platform_eTaskBody_DES *lepd
        = (struct tag_tEV3Platform_eTaskBody_DES *)epd;
    tEV3Platform_eTaskBody_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTaskBody */
const struct tag_sTaskBody_VMT tEV3Platform_eTaskBody_MT_ = {
    tEV3Platform_eTaskBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tEV3Platform_INIB tEV3Platform_INIB_tab[] = {
    /* cell: tEV3Platform_CB_tab[0]:  EV3Platform id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRiteVM (n_cRiteVM) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cTask (n_cTask) #_CCP6_# */
        /* entry port #_EP_# */ 
    },
};

extern const struct tag_sTaskBody_VMT tEV3Platform_eTaskBody_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tEV3Platform_eTaskBody_DES rDomainEV3_EV3Platform_eTaskBody_des;
const struct tag_tEV3Platform_eTaskBody_DES rDomainEV3_EV3Platform_eTaskBody_des = {
    &tEV3Platform_eTaskBody_MT_,
    &tEV3Platform_INIB_tab[0],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
tEV3Platform_CB_initialize()
{
    tEV3Platform_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
