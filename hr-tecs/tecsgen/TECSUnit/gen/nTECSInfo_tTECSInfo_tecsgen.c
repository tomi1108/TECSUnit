/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tTECSInfo_tecsgen.h"
#include "nTECSInfo_tTECSInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTECSInfo */
struct tag_nTECSInfo_tTECSInfo_eTECSInfo_DES {
    const struct tag_nTECSInfo_sTECSInfo_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTECSInfo */
ER             nTECSInfo_tTECSInfo_eTECSInfo_findNamespace_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( namespace_path, nsDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRegion_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findRegion( namespace_path, regionDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findSignature_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findSignature( namespace_path, signatureDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findCelltype_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( namespace_path, celltypeDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findCell_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findCell( namespace_path, cellDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, uint32_t subsc, void** rawDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTECSInfo */
const struct tag_nTECSInfo_sTECSInfo_VMT nTECSInfo_tTECSInfo_eTECSInfo_MT_ = {
    nTECSInfo_tTECSInfo_eTECSInfo_findNamespace_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findRegion_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findSignature_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findCelltype_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findCell_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tTECSInfo_eTECSInfo_DES rTEMP_TECSInfo_eTECSInfo_des;
const struct tag_nTECSInfo_tTECSInfo_eTECSInfo_DES rTEMP_TECSInfo_eTECSInfo_des = {
    &nTECSInfo_tTECSInfo_eTECSInfo_MT_,
    0,
};
