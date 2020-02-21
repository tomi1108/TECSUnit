/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#include "nTECSInfo_tTECSInfoSub_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTECSInfo */
struct tag_nTECSInfo_tTECSInfoSub_eTECSInfo_DES {
    const struct tag_nTECSInfo_sTECSInfo_VMT *vmt;
    tTECSInfoSub_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTECSInfo */
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc)
{
    return nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace( namespace_path, nsDesc );
}
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc)
{
    return nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion( namespace_path, regionDesc );
}
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc)
{
    return nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature( namespace_path, signatureDesc );
}
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc)
{
    return nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype( namespace_path, celltypeDesc );
}
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findCell_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc)
{
    return nTECSInfo_tTECSInfoSub_eTECSInfo_findCell( namespace_path, cellDesc );
}
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc)
{
    return nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc );
}
ER             nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_unsafe_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, uint32_t subsc, void** rawDesc)
{
    return nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTECSInfo */
const struct tag_nTECSInfo_sTECSInfo_VMT nTECSInfo_tTECSInfoSub_eTECSInfo_MT_ = {
    nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace_skel,
    nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion_skel,
    nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature_skel,
    nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype_skel,
    nTECSInfo_tTECSInfoSub_eTECSInfo_findCell_skel,
    nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_skel,
    nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_unsafe_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sNamespaceInfo_VDES rDomainEV3_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des;
extern struct tag_nTECSInfo_sRegionInfo_VDES rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char_t nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB_name1_INIT[256];
char_t nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB_name2_INIT[256];
char_t nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB_path_INIT[1024];
/* セル INIB #_INIB_# */
nTECSInfo_tTECSInfoSub_INIB nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    &rDomainEV3_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des, /* cNamespaceInfo #_CCP1_# */
    &rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des, /* cRegionInfo #_CCP1_# */
    0,                                       /* #_CCP5_# */
    0,                                       /* #_CCP5_# */
    0,                                       /* #_CCP5_# */
    0,                                       /* #_CCP5_# */
    0,                                       /* #_CCP5_# */
    0,                                       /* #_CCP5_# */
    0,                                       /* #_CCP5_# */
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    256,                                     /* name_len */
    1024,                                    /* path_len */
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB_name1_INIT, /* name1 */
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB_name2_INIT, /* name2 */
    nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB_path_INIT, /* path */
};

/* セル CB #_CB_# */
struct tag_nTECSInfo_tTECSInfoSub_CB nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB;
extern const struct tag_nTECSInfo_sTECSInfo_VMT nTECSInfo_tTECSInfoSub_eTECSInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tTECSInfoSub_eTECSInfo_DES rDomainEV3_rTECSInfo_TECSInfoSub_eTECSInfo_des;
const struct tag_nTECSInfo_tTECSInfoSub_eTECSInfo_DES rDomainEV3_rTECSInfo_TECSInfoSub_eTECSInfo_des = {
    &nTECSInfo_tTECSInfoSub_eTECSInfo_MT_,
    &nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB,      /* CB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tTECSInfoSub_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
