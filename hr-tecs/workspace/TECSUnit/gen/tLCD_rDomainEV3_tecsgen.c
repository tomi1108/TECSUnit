/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tLCD_tecsgen.h"
#include "tLCD_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eLCD */
struct tag_tLCD_eLCD_DES {
    const struct tag_sLCD_VMT *vmt;
    tLCD_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eLCD */
ER             tLCD_eLCD_setFont_skel( const struct tag_sLCD_VDES *epd, lcdfont_t font)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_setFont( lepd->idx, font );
}
ER             tLCD_eLCD_getFontSize_skel( const struct tag_sLCD_VDES *epd, lcdfont_t font, int32_t* p_width, int32_t* p_height)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_getFontSize( lepd->idx, font, p_width, p_height );
}
ER             tLCD_eLCD_drawString_skel( const struct tag_sLCD_VDES *epd, const char* str, int32_t x, int32_t y)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_drawString( lepd->idx, str, x, y );
}
ER             tLCD_eLCD_fillRect_skel( const struct tag_sLCD_VDES *epd, int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_fillRect( lepd->idx, x, y, w, h, color );
}
ER             tLCD_eLCD_drawLine_skel( const struct tag_sLCD_VDES *epd, int32_t x0, int32_t y0, int32_t x1, int32_t y1)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_drawLine( lepd->idx, x0, y0, x1, y1 );
}
void           tLCD_eLCD_print_skel( const struct tag_sLCD_VDES *epd, const char* str)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    tLCD_eLCD_print( lepd->idx, str );
}
void           tLCD_eLCD_puts_skel( const struct tag_sLCD_VDES *epd, const char* str)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    tLCD_eLCD_puts( lepd->idx, str );
}
void           tLCD_eLCD_clear_skel( const struct tag_sLCD_VDES *epd)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    tLCD_eLCD_clear( lepd->idx );
}
void           tLCD_eLCD_showMessageBox_skel( const struct tag_sLCD_VDES *epd, const char* title, const char* msg)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    tLCD_eLCD_showMessageBox( lepd->idx, title, msg );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eLCD */
const struct tag_sLCD_VMT tLCD_eLCD_MT_ = {
    tLCD_eLCD_setFont_skel,
    tLCD_eLCD_getFontSize_skel,
    tLCD_eLCD_drawString_skel,
    tLCD_eLCD_fillRect_skel,
    tLCD_eLCD_drawLine_skel,
    tLCD_eLCD_print_skel,
    tLCD_eLCD_puts_skel,
    tLCD_eLCD_clear_skel,
    tLCD_eLCD_showMessageBox_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tLCD_CB tLCD_CB_tab[1];
extern const struct tag_sLCD_VMT tLCD_eLCD_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tLCD_eLCD_DES rDomainEV3_LCD_eLCD_des;
const struct tag_tLCD_eLCD_DES rDomainEV3_LCD_eLCD_des = {
    &tLCD_eLCD_MT_,
    &tLCD_CB_tab[0],      /* CB 3 */
};
/* CB 初期化コード #_CIC_# */
void
tLCD_CB_initialize()
{
    tLCD_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
