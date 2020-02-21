/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tMrubyVM_tecsgen.h"
#include "nMruby_tMrubyVM_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMrubyVM : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eMrubyVM : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMrubyVM : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nMruby_tMrubyVM_INIB nMruby_tMrubyVM_INIB_tab[] = {
    /* cell: nMruby_tMrubyVM_CB_tab[0]:  Mruby_MrubyVM id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        rDomainEV3_Mruby_MrubyVM_irep,           /* irep */
    },
};

/* セル CB #_CB_# */
struct tag_nMruby_tMrubyVM_CB nMruby_tMrubyVM_CB_tab[1];
/* 受け口ディスクリプタ #_EPD_# */
/* eMrubyVM : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
nMruby_tMrubyVM_CB_initialize()
{
    nMruby_tMrubyVM_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
