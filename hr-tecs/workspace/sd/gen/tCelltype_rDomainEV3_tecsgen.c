/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype_tecsgen.h"
#include "tCelltype_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype_INIB tCelltype_INIB_tab[] = {
    /* cell: tCelltype_CB_tab[0]:  CellA id=1 */
    {
        /* attribute(RO) */ 
        {                                        /* inst */
            1,                                       /* data */
            "hoge",                                  /* name */
        },
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* CB 初期化コード #_CIC_# */
void
tCelltype_CB_initialize()
{
    tCelltype_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
