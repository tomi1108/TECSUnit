/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSpeaker_tecsgen.h"
#include "tSpeaker_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSpeaker */
struct tag_tSpeaker_eSpeaker_DES {
    const struct tag_sSpeaker_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSpeaker */
ER             tSpeaker_eSpeaker_setVolume_skel( const struct tag_sSpeaker_VDES *epd, uint8_t volume)
{
    return tSpeaker_eSpeaker_setVolume( volume );
}
ER             tSpeaker_eSpeaker_playTone_skel( const struct tag_sSpeaker_VDES *epd, uint16_t frequency, int32_t duration)
{
    return tSpeaker_eSpeaker_playTone( frequency, duration );
}
ER             tSpeaker_eSpeaker_stop_skel( const struct tag_sSpeaker_VDES *epd)
{
    return tSpeaker_eSpeaker_stop( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSpeaker */
const struct tag_sSpeaker_VMT tSpeaker_eSpeaker_MT_ = {
    tSpeaker_eSpeaker_setVolume_skel,
    tSpeaker_eSpeaker_playTone_skel,
    tSpeaker_eSpeaker_stop_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
extern const struct tag_sSpeaker_VMT tSpeaker_eSpeaker_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSpeaker_eSpeaker_DES rDomainEV3_Speaker_eSpeaker_des;
const struct tag_tSpeaker_eSpeaker_DES rDomainEV3_Speaker_eSpeaker_des = {
    &tSpeaker_eSpeaker_MT_,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tSpeaker_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
