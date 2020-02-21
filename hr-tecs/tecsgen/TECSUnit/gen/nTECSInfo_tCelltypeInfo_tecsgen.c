/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tCelltypeInfo_tecsgen.h"
#include "nTECSInfo_tCelltypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eCelltypeInfo */
struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES {
    const struct tag_nTECSInfo_sCelltypeInfo_VMT *vmt;
    tCelltypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eCelltypeInfo */
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr( lepd->idx );
}
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo( lepd->idx, ith, desc );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar( lepd->idx );
}
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo( lepd->idx, ith, desc );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall( lepd->idx );
}
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo( lepd->idx, ith, desc );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry( lepd->idx );
}
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo( lepd->idx, ith, desc );
}
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton( lepd->idx );
}
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID( lepd->idx );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB( lepd->idx );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eCelltypeInfo */
const struct tag_nTECSInfo_sCelltypeInfo_VMT nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_ = {
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sEntryInfo_VDES rTEMP_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_nameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_my_threadVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_my_condVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_my_mutexVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTask_stateVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rTEMP_rTECSInfo_tTarget1_eTarget1EntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rTEMP_rTECSInfo_tTarget2_eTarget2EntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rTEMP_rTECSInfo_tTarget3_eTarget3EntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rTEMP_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cUnitCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cJSMNCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_ARG_NAME_LENVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_ARG_DIMVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_TARGET_NUMVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_arg_numVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_exp_typeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_argVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_find_entryVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTaskMain_find_funcVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rTEMP_rTECSInfo_tTECSUnit_eUnitEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cTECSInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cNSInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cRegionInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cCellInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cSignatureInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cCelltypeInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cVarDeclInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cTypeInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cREDInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cEntryInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cTarget1CallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cTarget2CallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cTarget3CallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTECSUnit_LENVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTECSUnit_out_intVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTECSUnit_out_doubleVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTECSUnit_out_charVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tTECSUnit_cell_entryVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rTEMP_rTECSInfo_tJSMN_eJSMNEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_LENVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_TMP_LENVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_key_cellVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_key_entryVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_key_functionVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_key_argVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_key_expVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_json_strVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_tmp_strVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rTEMP_rTECSInfo_tJSMN_counterVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rTEMP_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rTEMP_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sEntryInfo_VDES * const rTEMP_rTECSInfo_tTaskCelltypeInfo_cEntryInfo[] = {
    &rTEMP_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rTEMP_rTECSInfo_tTaskCelltypeInfo_cCallInfo[] = {
    &rTEMP_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_tTaskCelltypeInfo_cAttrInfo[] = {
    &rTEMP_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTask_nameVarDeclInfo_eVarDeclInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_tTaskCelltypeInfo_cVarInfo[] = {
    &rTEMP_rTECSInfo_tTask_my_threadVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTask_my_condVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTask_my_mutexVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTask_stateVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rTEMP_rTECSInfo_tTarget1CelltypeInfo_cEntryInfo[] = {
    &rTEMP_rTECSInfo_tTarget1_eTarget1EntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rTEMP_rTECSInfo_tTarget2CelltypeInfo_cEntryInfo[] = {
    &rTEMP_rTECSInfo_tTarget2_eTarget2EntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rTEMP_rTECSInfo_tTarget3CelltypeInfo_cEntryInfo[] = {
    &rTEMP_rTECSInfo_tTarget3_eTarget3EntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rTEMP_rTECSInfo_tTaskMainCelltypeInfo_cEntryInfo[] = {
    &rTEMP_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rTEMP_rTECSInfo_tTaskMainCelltypeInfo_cCallInfo[] = {
    &rTEMP_rTECSInfo_tTaskMain_cUnitCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cJSMNCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_tTaskMainCelltypeInfo_cAttrInfo[] = {
    &rTEMP_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_ARG_NAME_LENVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_ARG_DIMVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_TARGET_NUMVarDeclInfo_eVarDeclInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_tTaskMainCelltypeInfo_cVarInfo[] = {
    &rTEMP_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_arg_numVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_exp_typeVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_argVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_find_entryVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTaskMain_find_funcVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_cEntryInfo[] = {
    &rTEMP_rTECSInfo_tTECSUnit_eUnitEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_cCallInfo[] = {
    &rTEMP_rTECSInfo_tTECSUnit_cTECSInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cNSInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cRegionInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cCellInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cSignatureInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cCelltypeInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cVarDeclInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cTypeInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cREDInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cEntryInfoCallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cTarget1CallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cTarget2CallInfo_eCallInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cTarget3CallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_cAttrInfo[] = {
    &rTEMP_rTECSInfo_tTECSUnit_LENVarDeclInfo_eVarDeclInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_cVarInfo[] = {
    &rTEMP_rTECSInfo_tTECSUnit_out_intVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_out_doubleVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_out_charVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tTECSUnit_cell_entryVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rTEMP_rTECSInfo_tJSMNCelltypeInfo_cEntryInfo[] = {
    &rTEMP_rTECSInfo_tJSMN_eJSMNEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_tJSMNCelltypeInfo_cAttrInfo[] = {
    &rTEMP_rTECSInfo_tJSMN_LENVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tJSMN_TMP_LENVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tJSMN_key_cellVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tJSMN_key_entryVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tJSMN_key_functionVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tJSMN_key_argVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tJSMN_key_expVarDeclInfo_eVarDeclInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rTEMP_rTECSInfo_tJSMNCelltypeInfo_cVarInfo[] = {
    &rTEMP_rTECSInfo_tJSMN_json_strVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tJSMN_tmp_strVarDeclInfo_eVarDeclInfo_des,
    &rTEMP_rTECSInfo_tJSMN_counterVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cEntryInfo[] = {
    &rTEMP_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cCallInfo[] = {
    &rTEMP_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCelltypeInfo_INIB nTECSInfo_tCelltypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[0]:  tTaskCelltypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_tTaskCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTaskCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        2,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTaskCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        5,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTaskCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        4,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTask",                                 /* name */
        false,                                   /* b_singleton */
        tTask__IDX_is_ID_act,                    /* b_IDX_is_ID_act */
        tTask__sizeOfCB,                         /* sizeOfCB */
        tTask__sizeOfINIB,                       /* sizeOfINIB */
        tTask__NCELLINLINKUNIT,                  /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[1]:  tTarget1CelltypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_tTarget1CelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTarget1",                              /* name */
        false,                                   /* b_singleton */
        tTarget1__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tTarget1__sizeOfCB,                      /* sizeOfCB */
        tTarget1__sizeOfINIB,                    /* sizeOfINIB */
        tTarget1__NCELLINLINKUNIT,               /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[2]:  tTarget2CelltypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_tTarget2CelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTarget2",                              /* name */
        false,                                   /* b_singleton */
        tTarget2__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tTarget2__sizeOfCB,                      /* sizeOfCB */
        tTarget2__sizeOfINIB,                    /* sizeOfINIB */
        tTarget2__NCELLINLINKUNIT,               /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[3]:  tTarget3CelltypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_tTarget3CelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTarget3",                              /* name */
        false,                                   /* b_singleton */
        tTarget3__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tTarget3__sizeOfCB,                      /* sizeOfCB */
        tTarget3__sizeOfINIB,                    /* sizeOfINIB */
        tTarget3__NCELLINLINKUNIT,               /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[4]:  tTaskMainCelltypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_tTaskMainCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTaskMainCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        13,                                      /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTaskMainCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        4,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTaskMainCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        13,                                      /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTaskMain",                             /* name */
        false,                                   /* b_singleton */
        tTaskMain__IDX_is_ID_act,                /* b_IDX_is_ID_act */
        tTaskMain__sizeOfCB,                     /* sizeOfCB */
        tTaskMain__sizeOfINIB,                   /* sizeOfINIB */
        tTaskMain__NCELLINLINKUNIT,              /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[5]:  tTECSUnitCelltypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        13,                                      /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        4,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTECSUnit",                             /* name */
        false,                                   /* b_singleton */
        tTECSUnit__IDX_is_ID_act,                /* b_IDX_is_ID_act */
        tTECSUnit__sizeOfCB,                     /* sizeOfCB */
        tTECSUnit__sizeOfINIB,                   /* sizeOfINIB */
        tTECSUnit__NCELLINLINKUNIT,              /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[6]:  tJSMNCelltypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_tJSMNCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rTEMP_rTECSInfo_tJSMNCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        7,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        rTEMP_rTECSInfo_tJSMNCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        3,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tJSMN",                                 /* name */
        false,                                   /* b_singleton */
        tJSMN__IDX_is_ID_act,                    /* b_IDX_is_ID_act */
        tJSMN__sizeOfCB,                         /* sizeOfCB */
        tJSMN__sizeOfINIB,                       /* sizeOfINIB */
        tJSMN__NCELLINLINKUNIT,                  /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[7]:  nTECSInfo_tTECSInfoCelltypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTECSInfo",                             /* name */
        true,                                    /* b_singleton */
        nTECSInfo_tTECSInfo__IDX_is_ID_act,      /* b_IDX_is_ID_act */
        nTECSInfo_tTECSInfo__sizeOfCB,           /* sizeOfCB */
        nTECSInfo_tTECSInfo__sizeOfINIB,         /* sizeOfINIB */
        nTECSInfo_tTECSInfo__NCELLINLINKUNIT,    /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTarget1CelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTarget1CelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTarget2CelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTarget2CelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTarget3CelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTarget3CelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tTECSUnitCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_tJSMNCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rTEMP_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[7],      /* INIB 3 */
};
