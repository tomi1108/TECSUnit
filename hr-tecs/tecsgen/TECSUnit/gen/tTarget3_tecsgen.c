/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTarget3_tecsgen.h"
#include "tTarget3_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTarget3 */
struct tag_tTarget3_eTarget3_DES {
    const struct tag_sTarget3_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTarget3 */
ER             tTarget3_eTarget3_send_skel( const struct tag_sTarget3_VDES *epd, const int8_t* buf, int8_t len)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_send( lepd->idx, buf, len );
}
ER             tTarget3_eTarget3_sendMessage_skel( const struct tag_sTarget3_VDES *epd, const char_t* buf, int8_t len)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_sendMessage( lepd->idx, buf, len );
}
ER             tTarget3_eTarget3_sendStruct_skel( const struct tag_sTarget3_VDES *epd, const struct target_struct* data)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_sendStruct( lepd->idx, data );
}
ER             tTarget3_eTarget3_receiveMessage_skel( const struct tag_sTarget3_VDES *epd, char_t* buf, int8_t len)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_receiveMessage( lepd->idx, buf, len );
}
ER             tTarget3_eTarget3_checkER_skel( const struct tag_sTarget3_VDES *epd, ER eroor)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_checkER( lepd->idx, eroor );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTarget3 */
const struct tag_sTarget3_VMT tTarget3_eTarget3_MT_ = {
    tTarget3_eTarget3_send_skel,
    tTarget3_eTarget3_sendMessage_skel,
    tTarget3_eTarget3_sendStruct_skel,
    tTarget3_eTarget3_receiveMessage_skel,
    tTarget3_eTarget3_checkER_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTarget3_eTarget3_DES Target3_eTarget3_des;
const struct tag_tTarget3_eTarget3_DES Target3_eTarget3_des = {
    &tTarget3_eTarget3_MT_,
    0,
};
