/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tNamespaceInfo_tecsgen.h"
#include "nTECSInfo_tNamespaceInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eNamespaceInfo */
struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES {
    const struct tag_nTECSInfo_sNamespaceInfo_VMT *vmt;
    tNamespaceInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eNamespaceInfo */
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace( lepd->idx );
}
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo( lepd->idx, ith, des );
}
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature( lepd->idx );
}
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo( lepd->idx, ith, des );
}
uint32_t       nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype( lepd->idx );
}
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des)
{
    struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *lepd
        = (struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES *)epd;
    return nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo( lepd->idx, ith, des );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eNamespaceInfo */
const struct tag_nTECSInfo_sNamespaceInfo_VMT nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_ = {
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype_skel,
    nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sSemaphoreSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_siSemaphoreSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sEventflagSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_siEventflagSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sDataqueueSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_siDataqueueSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget1SignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget2SignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTarget3SignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTarget1CelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTarget2CelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTarget3CelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des;
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rTEMP_rTECSInfo_nTECSInfoNamespaceInfo_eNamespaceInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCallInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sSignatureInfo_VDES rTEMP_rTECSInfo_nTECSInfo_sAccessorSignatureInfo_eSignatureInfo_des;
extern struct tag_nTECSInfo_sCelltypeInfo_VDES rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sSignatureInfo_VDES * const rTEMP_rTECSInfo__RootNamespaceInfo_cSignatureInfo[] = {
    &rTEMP_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sSemaphoreSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_siSemaphoreSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sEventflagSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_siEventflagSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sDataqueueSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_siDataqueueSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sTarget1SignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sTarget2SignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sTarget3SignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sJSMNSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_sTECSUnitSignatureInfo_eSignatureInfo_des,
};
struct tag_nTECSInfo_sCelltypeInfo_VDES * const rTEMP_rTECSInfo__RootNamespaceInfo_cCelltypeInfo[] = {
    &rTEMP_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des,
    &rTEMP_rTECSInfo_tTarget1CelltypeInfo_eCelltypeInfo_des,
    &rTEMP_rTECSInfo_tTarget2CelltypeInfo_eCelltypeInfo_des,
    &rTEMP_rTECSInfo_tTarget3CelltypeInfo_eCelltypeInfo_des,
    &rTEMP_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des,
    &rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des,
    &rTEMP_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des,
};
struct tag_nTECSInfo_sNamespaceInfo_VDES * const rTEMP_rTECSInfo__RootNamespaceInfo_cNamespaceInfo[] = {
    (struct tag_nTECSInfo_sNamespaceInfo_VDES *)&rTEMP_rTECSInfo_nTECSInfoNamespaceInfo_eNamespaceInfo_des,
};

struct tag_nTECSInfo_sSignatureInfo_VDES * const rTEMP_rTECSInfo_nTECSInfoNamespaceInfo_cSignatureInfo[] = {
    &rTEMP_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sCallInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des,
    &rTEMP_rTECSInfo_nTECSInfo_sAccessorSignatureInfo_eSignatureInfo_des,
};
struct tag_nTECSInfo_sCelltypeInfo_VDES * const rTEMP_rTECSInfo_nTECSInfoNamespaceInfo_cCelltypeInfo[] = {
    &rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tNamespaceInfo_INIB nTECSInfo_tNamespaceInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tNamespaceInfo_CB_tab[0]:  _RootNamespaceInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo__RootNamespaceInfo_cSignatureInfo, /* #_CCP3B_# */
        16,                                      /* length of cSignatureInfo (n_cSignatureInfo) #_CCP4_# */
        rTEMP_rTECSInfo__RootNamespaceInfo_cCelltypeInfo, /* #_CCP3B_# */
        7,                                       /* length of cCelltypeInfo (n_cCelltypeInfo) #_CCP4_# */
        rTEMP_rTECSInfo__RootNamespaceInfo_cNamespaceInfo, /* #_CCP3B_# */
        1,                                       /* length of cNamespaceInfo (n_cNamespaceInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "::",                                    /* name */
    },
    /* cell: nTECSInfo_tNamespaceInfo_CB_tab[1]:  nTECSInfoNamespaceInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_nTECSInfoNamespaceInfo_cSignatureInfo, /* #_CCP3B_# */
        14,                                      /* length of cSignatureInfo (n_cSignatureInfo) #_CCP4_# */
        rTEMP_rTECSInfo_nTECSInfoNamespaceInfo_cCelltypeInfo, /* #_CCP3B_# */
        1,                                       /* length of cCelltypeInfo (n_cCelltypeInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cNamespaceInfo (n_cNamespaceInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nTECSInfo",                             /* name */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rTEMP_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des;
const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rTEMP_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des = {
    &nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_,
    &nTECSInfo_tNamespaceInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rTEMP_rTECSInfo_nTECSInfoNamespaceInfo_eNamespaceInfo_des;
const struct tag_nTECSInfo_tNamespaceInfo_eNamespaceInfo_DES rTEMP_rTECSInfo_nTECSInfoNamespaceInfo_eNamespaceInfo_des = {
    &nTECSInfo_tNamespaceInfo_eNamespaceInfo_MT_,
    &nTECSInfo_tNamespaceInfo_INIB_tab[1],      /* INIB 3 */
};
