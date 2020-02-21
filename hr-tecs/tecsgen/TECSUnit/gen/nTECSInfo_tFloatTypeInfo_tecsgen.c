/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tFloatTypeInfo_tecsgen.h"
#include "nTECSInfo_tFloatTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tFloatTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tFloatTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tFloatTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tFloatTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getSize( lepd->idx );
}
int8_t         nTECSInfo_tFloatTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getKind( lepd->idx );
}
uint32_t       nTECSInfo_tFloatTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getNType( lepd->idx );
}
ER             nTECSInfo_tFloatTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tFloatTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getNMember( lepd->idx );
}
ER             nTECSInfo_tFloatTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getMemberInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tFloatTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getTypeInfo_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getNMember_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getMemberInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tFloatTypeInfo_INIB nTECSInfo_tFloatTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tFloatTypeInfo_CB_tab[0]:  double64_tTypeInfo id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "double64_t",                            /* name */
        3,                                       /* typeKind */
        sizeof(double64_t),                      /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_double64_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES rTEMP_rTECSInfo_double64_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tFloatTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tFloatTypeInfo_INIB_tab[0],      /* INIB 3 */
};
