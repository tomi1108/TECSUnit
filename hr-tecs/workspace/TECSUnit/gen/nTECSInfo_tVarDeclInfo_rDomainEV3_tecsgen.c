/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#include "nTECSInfo_tVarDeclInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eVarDeclInfo */
struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES {
    const struct tag_nTECSInfo_sVarDeclInfo_VMT *vmt;
    tVarDeclInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eVarDeclInfo */
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength( lepd->idx );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* offset, int8_t* place)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo( lepd->idx, offset, place );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo( lepd->idx, desc );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* expr_str, int32_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr( lepd->idx, expr_str, max_len );
}
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* size, const void* p_cb)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs( lepd->idx, size, p_cb );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eVarDeclInfo */
const struct tag_nTECSInfo_sVarDeclInfo_VMT nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_ = {
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FILTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FATFS_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_WORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_WORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTE_Array512_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_WORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTE_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_BYTE_Array512_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_UINTTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TCHAR_Array100_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FATFSTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Array64__Array8_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Array64__Array8_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__tecsunit_objTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__cond_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__cond_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */







































































































































































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tVarDeclInfo_INIB nTECSInfo_tVarDeclInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[0]:  struct__t_rtsk_tskstatVarDeclInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tskstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_tskstat,         /* place */
        OFFSET_OF_struct__t_rtsk_tskstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[1]:  struct__t_rtsk_tskpriVarDeclInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tskpri",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_tskpri,          /* place */
        OFFSET_OF_struct__t_rtsk_tskpri,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[2]:  struct__t_rtsk_tskbpriVarDeclInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tskbpri",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_tskbpri,         /* place */
        OFFSET_OF_struct__t_rtsk_tskbpri,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[3]:  struct__t_rtsk_tskwaitVarDeclInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tskwait",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_tskwait,         /* place */
        OFFSET_OF_struct__t_rtsk_tskwait,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[4]:  struct__t_rtsk_wobjidVarDeclInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wobjid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_wobjid,          /* place */
        OFFSET_OF_struct__t_rtsk_wobjid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[5]:  struct__t_rtsk_lefttmoVarDeclInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "lefttmo",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_lefttmo,         /* place */
        OFFSET_OF_struct__t_rtsk_lefttmo,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[6]:  struct__t_rtsk_actcntVarDeclInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "actcnt",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_actcnt,          /* place */
        OFFSET_OF_struct__t_rtsk_actcnt,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[7]:  struct__t_rtsk_wupcntVarDeclInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wupcnt",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_wupcnt,          /* place */
        OFFSET_OF_struct__t_rtsk_wupcnt,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[8]:  struct__t_rtsk_texmskVarDeclInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "texmsk",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_texmsk,          /* place */
        OFFSET_OF_struct__t_rtsk_texmsk,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[9]:  struct__t_rtsk_waifbdVarDeclInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waifbd",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_waifbd,          /* place */
        OFFSET_OF_struct__t_rtsk_waifbd,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[10]:  struct__t_rtsk_svclevelVarDeclInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "svclevel",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_svclevel,        /* place */
        OFFSET_OF_struct__t_rtsk_svclevel,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[11]:  struct__t_rtex_texstatVarDeclInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "texstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtex_texstat,         /* place */
        OFFSET_OF_struct__t_rtex_texstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[12]:  struct__t_rtex_pndptnVarDeclInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pndptn",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtex_pndptn,          /* place */
        OFFSET_OF_struct__t_rtex_pndptn,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[13]:  struct__t_rovr_ovrstatVarDeclInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ovrstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rovr_ovrstat,         /* place */
        OFFSET_OF_struct__t_rovr_ovrstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[14]:  struct__t_rovr_leftotmVarDeclInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "leftotm",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rovr_leftotm,         /* place */
        OFFSET_OF_struct__t_rovr_leftotm,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[15]:  struct__t_rcyc_cycstatVarDeclInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cycstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rcyc_cycstat,         /* place */
        OFFSET_OF_struct__t_rcyc_cycstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[16]:  struct__t_rcyc_lefttimVarDeclInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "lefttim",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rcyc_lefttim,         /* place */
        OFFSET_OF_struct__t_rcyc_lefttim,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[17]:  struct__t_ralm_almstatVarDeclInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "almstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_ralm_almstat,         /* place */
        OFFSET_OF_struct__t_ralm_almstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[18]:  struct__t_ralm_lefttimVarDeclInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "lefttim",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_ralm_lefttim,         /* place */
        OFFSET_OF_struct__t_ralm_lefttim,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[19]:  struct__t_rsem_wtskidVarDeclInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rsem_wtskid,          /* place */
        OFFSET_OF_struct__t_rsem_wtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[20]:  struct__t_rsem_semcntVarDeclInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "semcnt",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rsem_semcnt,          /* place */
        OFFSET_OF_struct__t_rsem_semcnt,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[21]:  struct__t_rflg_wtskidVarDeclInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rflg_wtskid,          /* place */
        OFFSET_OF_struct__t_rflg_wtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[22]:  struct__t_rflg_flgptnVarDeclInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "flgptn",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rflg_flgptn,          /* place */
        OFFSET_OF_struct__t_rflg_flgptn,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[23]:  struct__t_rdtq_stskidVarDeclInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_stskid,          /* place */
        OFFSET_OF_struct__t_rdtq_stskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[24]:  struct__t_rdtq_rtskidVarDeclInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_rtskid,          /* place */
        OFFSET_OF_struct__t_rdtq_rtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[25]:  struct__t_rdtq_sdtqcntVarDeclInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "sdtqcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_sdtqcnt,         /* place */
        OFFSET_OF_struct__t_rdtq_sdtqcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[26]:  struct__t_rpdq_stskidVarDeclInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rpdq_stskid,          /* place */
        OFFSET_OF_struct__t_rpdq_stskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[27]:  struct__t_rpdq_rtskidVarDeclInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rpdq_rtskid,          /* place */
        OFFSET_OF_struct__t_rpdq_rtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[28]:  struct__t_rpdq_spdqcntVarDeclInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "spdqcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rpdq_spdqcnt,         /* place */
        OFFSET_OF_struct__t_rpdq_spdqcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[29]:  struct__t_rmpf_wtskidVarDeclInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmpf_wtskid,          /* place */
        OFFSET_OF_struct__t_rmpf_wtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[30]:  struct__t_rmpf_fblkcntVarDeclInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fblkcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmpf_fblkcnt,         /* place */
        OFFSET_OF_struct__t_rmpf_fblkcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[31]:  struct__t_rmbf_stskidVarDeclInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmbf_stskid,          /* place */
        OFFSET_OF_struct__t_rmbf_stskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[32]:  struct__t_rmbf_rtskidVarDeclInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmbf_rtskid,          /* place */
        OFFSET_OF_struct__t_rmbf_rtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[33]:  struct__t_rmbf_smbfcntVarDeclInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "smbfcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmbf_smbfcnt,         /* place */
        OFFSET_OF_struct__t_rmbf_smbfcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[34]:  struct__t_rmbf_fmbfszVarDeclInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fmbfsz",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmbf_fmbfsz,          /* place */
        OFFSET_OF_struct__t_rmbf_fmbfsz,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[35]:  struct__tecsunit_obj_typeVarDeclInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "type",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__tecsunit_obj_type,      /* place */
        OFFSET_OF_struct__tecsunit_obj_type,     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[36]:  struct__tecsunit_obj_dataVarDeclInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__tecsunit_obj_data,      /* place */
        OFFSET_OF_struct__tecsunit_obj_data,     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[37]:  struct__cond_obj_nameVarDeclInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__cond_obj_name,          /* place */
        OFFSET_OF_struct__cond_obj_name,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[38]:  struct__cond_obj_typeVarDeclInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "type",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__cond_obj_type,          /* place */
        OFFSET_OF_struct__cond_obj_type,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[39]:  struct__cond_obj_dataVarDeclInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__cond_obj_data,          /* place */
        OFFSET_OF_struct__cond_obj_data,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[40]:  tTask_idVarDeclInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "id",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_id,                       /* place */
        OFFSET_OF_tTask_id,                      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[41]:  tTask_taskAttributeVarDeclInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskAttribute",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_taskAttribute,            /* place */
        OFFSET_OF_tTask_taskAttribute,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[42]:  tTask_exceptionAttributeVarDeclInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exceptionAttribute",                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_exceptionAttribute,       /* place */
        OFFSET_OF_tTask_exceptionAttribute,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[43]:  tTask_priorityVarDeclInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "priority",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_priority,                 /* place */
        OFFSET_OF_tTask_priority,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[44]:  tTask_stackSizeVarDeclInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stackSize",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_stackSize,                /* place */
        OFFSET_OF_tTask_stackSize,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[45]:  tTask_systemStackSizeVarDeclInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "systemStackSize",                       /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_systemStackSize,          /* place */
        OFFSET_OF_tTask_systemStackSize,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[46]:  tTask_userStackSizeVarDeclInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "userStackSize",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_userStackSize,            /* place */
        OFFSET_OF_tTask_userStackSize,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[47]:  tTask_accessPatternVarDeclInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "accessPattern",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_accessPattern,            /* place */
        OFFSET_OF_tTask_accessPattern,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[48]:  tKernel_accessPatternVarDeclInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "accessPattern",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tKernel_accessPattern,          /* place */
        OFFSET_OF_tKernel_accessPattern,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[49]:  tUltrasonicSensor_portVarDeclInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tUltrasonicSensor_port,         /* place */
        OFFSET_OF_tUltrasonicSensor_port,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[50]:  tColorSensor_portVarDeclInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tColorSensor_port,              /* place */
        OFFSET_OF_tColorSensor_port,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[51]:  tTouchSensor_portVarDeclInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTouchSensor_port,              /* place */
        OFFSET_OF_tTouchSensor_port,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[52]:  tGyroSensor_portVarDeclInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tGyroSensor_port,               /* place */
        OFFSET_OF_tGyroSensor_port,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[53]:  tMotor_portVarDeclInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tMotor_port,                    /* place */
        OFFSET_OF_tMotor_port,                   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[54]:  tLCD_currentFontVarDeclInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "currentFont",                           /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tLCD_currentFont,               /* place */
        OFFSET_OF_tLCD_currentFont,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[55]:  tSharedMemory_sizeVarDeclInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tSharedMemory_size,             /* place */
        OFFSET_OF_tSharedMemory_size,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[56]:  tSharedMemory_dataVarDeclInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tSharedMemory_data,             /* place */
        OFFSET_OF_tSharedMemory_data,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[57]:  tFatFile_fsVarDeclInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FILTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fs",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tFatFile_fs,                    /* place */
        OFFSET_OF_tFatFile_fs,                   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[58]:  struct__TAG_7_TECS_internal___fsVarDeclInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FATFS_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fs",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___fs, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___fs, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[59]:  struct__TAG_6_TECS_internal___fs_typeVarDeclInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fs_type",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___fs_type, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___fs_type, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[60]:  struct__TAG_6_TECS_internal___drvVarDeclInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "drv",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___drv, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___drv, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[61]:  struct__TAG_6_TECS_internal___csizeVarDeclInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "csize",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___csize, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___csize, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[62]:  struct__TAG_6_TECS_internal___n_fatsVarDeclInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_fats",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___n_fats, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___n_fats, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[63]:  struct__TAG_6_TECS_internal___wflagVarDeclInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wflag",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___wflag, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___wflag, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[64]:  struct__TAG_6_TECS_internal___fsi_flagVarDeclInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fsi_flag",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___fsi_flag, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___fsi_flag, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[65]:  struct__TAG_6_TECS_internal___idVarDeclInfo id=66 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_WORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "id",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___id, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___id, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[66]:  struct__TAG_6_TECS_internal___n_rootdirVarDeclInfo id=67 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_WORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_rootdir",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___n_rootdir, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___n_rootdir, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[67]:  struct__TAG_6_TECS_internal___sobjVarDeclInfo id=68 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "sobj",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___sobj, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___sobj, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[68]:  struct__TAG_6_TECS_internal___last_clustVarDeclInfo id=69 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "last_clust",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___last_clust, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___last_clust, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[69]:  struct__TAG_6_TECS_internal___free_clustVarDeclInfo id=70 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "free_clust",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___free_clust, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___free_clust, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[70]:  struct__TAG_6_TECS_internal___n_fatentVarDeclInfo id=71 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_fatent",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___n_fatent, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___n_fatent, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[71]:  struct__TAG_6_TECS_internal___fsizeVarDeclInfo id=72 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fsize",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___fsize, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___fsize, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[72]:  struct__TAG_6_TECS_internal___volbaseVarDeclInfo id=73 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "volbase",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___volbase, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___volbase, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[73]:  struct__TAG_6_TECS_internal___fatbaseVarDeclInfo id=74 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fatbase",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___fatbase, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___fatbase, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[74]:  struct__TAG_6_TECS_internal___dirbaseVarDeclInfo id=75 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dirbase",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___dirbase, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___dirbase, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[75]:  struct__TAG_6_TECS_internal___databaseVarDeclInfo id=76 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "database",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___database, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___database, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[76]:  struct__TAG_6_TECS_internal___winsectVarDeclInfo id=77 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "winsect",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___winsect, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___winsect, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[77]:  struct__TAG_6_TECS_internal___winVarDeclInfo id=78 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTE_Array512_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "win",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_6_TECS_internal___win, /* place */
        OFFSET_OF_struct__TAG_6_TECS_internal___win, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[78]:  struct__TAG_7_TECS_internal___idVarDeclInfo id=79 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_WORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "id",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___id, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___id, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[79]:  struct__TAG_7_TECS_internal___flagVarDeclInfo id=80 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "flag",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___flag, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___flag, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[80]:  struct__TAG_7_TECS_internal___errVarDeclInfo id=81 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "err",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___err, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___err, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[81]:  struct__TAG_7_TECS_internal___fptrVarDeclInfo id=82 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fptr",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___fptr, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___fptr, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[82]:  struct__TAG_7_TECS_internal___fsizeVarDeclInfo id=83 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fsize",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___fsize, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___fsize, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[83]:  struct__TAG_7_TECS_internal___sclustVarDeclInfo id=84 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "sclust",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___sclust, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___sclust, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[84]:  struct__TAG_7_TECS_internal___clustVarDeclInfo id=85 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "clust",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___clust, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___clust, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[85]:  struct__TAG_7_TECS_internal___dsectVarDeclInfo id=86 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dsect",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___dsect, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___dsect, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[86]:  struct__TAG_7_TECS_internal___dir_sectVarDeclInfo id=87 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_DWORDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dir_sect",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___dir_sect, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___dir_sect, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[87]:  struct__TAG_7_TECS_internal___dir_ptrVarDeclInfo id=88 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTE_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dir_ptr",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___dir_ptr, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___dir_ptr, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[88]:  struct__TAG_7_TECS_internal___bufVarDeclInfo id=89 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_BYTE_Array512_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__TAG_7_TECS_internal___buf, /* place */
        OFFSET_OF_struct__TAG_7_TECS_internal___buf, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[89]:  tFatFile_brVarDeclInfo id=90 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_UINTTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "br",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tFatFile_br,                    /* place */
        OFFSET_OF_tFatFile_br,                   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[90]:  tFatFile_read_buffVarDeclInfo id=91 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TCHAR_Array100_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "read_buff",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tFatFile_read_buff,             /* place */
        OFFSET_OF_tFatFile_read_buff,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[91]:  tFatFile_fatfsVarDeclInfo id=92 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FATFSTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fatfs",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tFatFile_fatfs,                 /* place */
        OFFSET_OF_tFatFile_fatfs,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[92]:  tTarget_data1VarDeclInfo id=93 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data1",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTarget_data1,                  /* place */
        OFFSET_OF_tTarget_data1,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[93]:  tTarget_data2VarDeclInfo id=94 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data2",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTarget_data2,                  /* place */
        OFFSET_OF_tTarget_data2,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[94]:  tTaskMain_NAME_LENVarDeclInfo id=95 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "NAME_LEN",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTaskMain_NAME_LEN,             /* place */
        OFFSET_OF_tTaskMain_NAME_LEN,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[95]:  tTaskMain_DIMVarDeclInfo id=96 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "DIM",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTaskMain_DIM,                  /* place */
        OFFSET_OF_tTaskMain_DIM,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[96]:  tTaskMain_N_TARGETVarDeclInfo id=97 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "N_TARGET",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTaskMain_N_TARGET,             /* place */
        OFFSET_OF_tTaskMain_N_TARGET,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[97]:  tTaskMain_target_pathVarDeclInfo id=98 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "target_path",                           /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_target_path,          /* place */
        OFFSET_OF_tTaskMain_target_path,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[98]:  tTaskMain_cell_pathVarDeclInfo id=99 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cell_path",                             /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_cell_path,            /* place */
        OFFSET_OF_tTaskMain_cell_path,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[99]:  tTaskMain_flag_find_cellVarDeclInfo id=100 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "flag_find_cell",                        /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_flag_find_cell,       /* place */
        OFFSET_OF_tTaskMain_flag_find_cell,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[100]:  tTaskMain_region_pathVarDeclInfo id=101 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "region_path",                           /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_region_path,          /* place */
        OFFSET_OF_tTaskMain_region_path,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[101]:  tTaskMain_region_cell_pathVarDeclInfo id=102 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "region_cell_path",                      /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_region_cell_path,     /* place */
        OFFSET_OF_tTaskMain_region_cell_path,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[102]:  tTaskMain_celltype_pathVarDeclInfo id=103 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "celltype_path",                         /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_celltype_path,        /* place */
        OFFSET_OF_tTaskMain_celltype_path,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[103]:  tTaskMain_var_pathVarDeclInfo id=104 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "var_path",                              /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_var_path,             /* place */
        OFFSET_OF_tTaskMain_var_path,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[104]:  tTaskMain_entry_pathVarDeclInfo id=105 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entry_path",                            /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_entry_path,           /* place */
        OFFSET_OF_tTaskMain_entry_path,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[105]:  tTaskMain_entry_path_tmpVarDeclInfo id=106 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entry_path_tmp",                        /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_entry_path_tmp,       /* place */
        OFFSET_OF_tTaskMain_entry_path_tmp,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[106]:  tTaskMain_flag_find_entryVarDeclInfo id=107 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "flag_find_entry",                       /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_flag_find_entry,      /* place */
        OFFSET_OF_tTaskMain_flag_find_entry,     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[107]:  tTaskMain_signature_pathVarDeclInfo id=108 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signature_path",                        /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_signature_path,       /* place */
        OFFSET_OF_tTaskMain_signature_path,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[108]:  tTaskMain_function_pathVarDeclInfo id=109 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "function_path",                         /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_function_path,        /* place */
        OFFSET_OF_tTaskMain_function_path,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[109]:  tTaskMain_function_path_tmpVarDeclInfo id=110 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "function_path_tmp",                     /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_function_path_tmp,    /* place */
        OFFSET_OF_tTaskMain_function_path_tmp,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[110]:  tTaskMain_flag_find_funcVarDeclInfo id=111 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "flag_find_func",                        /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_flag_find_func,       /* place */
        OFFSET_OF_tTaskMain_flag_find_func,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[111]:  tTaskMain_arg_nameVarDeclInfo id=112 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Array64__Array8_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_name",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_arg_name,             /* place */
        OFFSET_OF_tTaskMain_arg_name,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[112]:  tTaskMain_arg_typeVarDeclInfo id=113 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Array64__Array8_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_type",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_arg_type,             /* place */
        OFFSET_OF_tTaskMain_arg_type,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[113]:  tTaskMain_return_typeVarDeclInfo id=114 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "return_type",                           /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_return_type,          /* place */
        OFFSET_OF_tTaskMain_return_type,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[114]:  tTaskMain_n_argVarDeclInfo id=115 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_arg",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_n_arg,                /* place */
        OFFSET_OF_tTaskMain_n_arg,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[115]:  tTaskMain_n_arg_jsonVarDeclInfo id=116 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_arg_json",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_n_arg_json,           /* place */
        OFFSET_OF_tTaskMain_n_arg_json,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[116]:  tTaskMain_arg_structVarDeclInfo id=117 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_struct",                            /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_arg_struct,           /* place */
        OFFSET_OF_tTaskMain_arg_struct,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[117]:  tTaskMain_exp_structVarDeclInfo id=118 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__tecsunit_objTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exp_struct",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_exp_struct,           /* place */
        OFFSET_OF_tTaskMain_exp_struct,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[118]:  tTaskMain_pre_condVarDeclInfo id=119 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__cond_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pre_cond",                              /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_pre_cond,             /* place */
        OFFSET_OF_tTaskMain_pre_cond,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[119]:  tTaskMain_post_condVarDeclInfo id=120 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__cond_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "post_cond",                             /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_post_cond,            /* place */
        OFFSET_OF_tTaskMain_post_cond,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[120]:  tTaskMain_n_pre_condVarDeclInfo id=121 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_pre_cond",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_n_pre_cond,           /* place */
        OFFSET_OF_tTaskMain_n_pre_cond,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[121]:  tTaskMain_n_post_condVarDeclInfo id=122 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_post_cond",                           /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_n_post_cond,          /* place */
        OFFSET_OF_tTaskMain_n_post_cond,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[122]:  tJSMN_LENVarDeclInfo id=123 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LEN",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_LEN,                      /* place */
        OFFSET_OF_tJSMN_LEN,                     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[123]:  tJSMN_TMP_LENVarDeclInfo id=124 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TMP_LEN",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_TMP_LEN,                  /* place */
        OFFSET_OF_tJSMN_TMP_LEN,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[124]:  tJSMN_key_regionVarDeclInfo id=125 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_region",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_region,               /* place */
        OFFSET_OF_tJSMN_key_region,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[125]:  tJSMN_key_cellVarDeclInfo id=126 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_cell",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_cell,                 /* place */
        OFFSET_OF_tJSMN_key_cell,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[126]:  tJSMN_key_entryVarDeclInfo id=127 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_entry",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_entry,                /* place */
        OFFSET_OF_tJSMN_key_entry,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[127]:  tJSMN_key_functionVarDeclInfo id=128 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_function",                          /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_function,             /* place */
        OFFSET_OF_tJSMN_key_function,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[128]:  tJSMN_key_argVarDeclInfo id=129 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_arg",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_arg,                  /* place */
        OFFSET_OF_tJSMN_key_arg,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[129]:  tJSMN_key_expVarDeclInfo id=130 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_exp",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_exp,                  /* place */
        OFFSET_OF_tJSMN_key_exp,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[130]:  tJSMN_key_pre_condVarDeclInfo id=131 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_pre_cond",                          /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_pre_cond,             /* place */
        OFFSET_OF_tJSMN_key_pre_cond,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[131]:  tJSMN_key_post_condVarDeclInfo id=132 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "key_post_cond",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tJSMN_key_post_cond,            /* place */
        OFFSET_OF_tJSMN_key_post_cond,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[132]:  tJSMN_json_strVarDeclInfo id=133 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "json_str",                              /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tJSMN_json_str,                 /* place */
        OFFSET_OF_tJSMN_json_str,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[133]:  tJSMN_tmp_strVarDeclInfo id=134 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tmp_str",                               /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tJSMN_tmp_str,                  /* place */
        OFFSET_OF_tJSMN_tmp_str,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[134]:  tJSMN_target_pathVarDeclInfo id=135 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "target_path",                           /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tJSMN_target_path,              /* place */
        OFFSET_OF_tJSMN_target_path,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[135]:  tJSMN_counterVarDeclInfo id=136 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "counter",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tJSMN_counter,                  /* place */
        OFFSET_OF_tJSMN_counter,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[136]:  tTECSUnit_LENVarDeclInfo id=137 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LEN",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTECSUnit_LEN,                  /* place */
        OFFSET_OF_tTECSUnit_LEN,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[137]:  tTECSUnit_dataVarDeclInfo id=138 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTECSUnit_data,                 /* place */
        OFFSET_OF_tTECSUnit_data,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[138]:  tTECSUnit_cell_entryVarDeclInfo id=139 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cell_entry",                            /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTECSUnit_cell_entry,           /* place */
        OFFSET_OF_tTECSUnit_cell_entry,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[139]:  struct__RClass_gcnextVarDeclInfo id=140 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "gcnext",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__RClass_gcnext,          /* place */
        OFFSET_OF_struct__RClass_gcnext,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[140]:  nMruby_tTECSInitializer_TECSVarDeclInfo id=141 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TECS",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_nMruby_tTECSInitializer_TECS,   /* place */
        OFFSET_OF_nMruby_tTECSInitializer_TECS,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[141]:  nMruby_tsKernel_VMnameVarDeclInfo id=142 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsKernel_VMname,         /* place */
        OFFSET_OF_nMruby_tsKernel_VMname,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[142]:  nMruby_tsKernel_bridgeNameVarDeclInfo id=143 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsKernel_bridgeName,     /* place */
        OFFSET_OF_nMruby_tsKernel_bridgeName,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[143]:  nMruby_tsMotor_VMnameVarDeclInfo id=144 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsMotor_VMname,          /* place */
        OFFSET_OF_nMruby_tsMotor_VMname,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[144]:  nMruby_tsMotor_bridgeNameVarDeclInfo id=145 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsMotor_bridgeName,      /* place */
        OFFSET_OF_nMruby_tsMotor_bridgeName,     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[145]:  nMruby_tsLCD_VMnameVarDeclInfo id=146 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsLCD_VMname,            /* place */
        OFFSET_OF_nMruby_tsLCD_VMname,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[146]:  nMruby_tsLCD_bridgeNameVarDeclInfo id=147 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsLCD_bridgeName,        /* place */
        OFFSET_OF_nMruby_tsLCD_bridgeName,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[147]:  nMruby_tsLED_VMnameVarDeclInfo id=148 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsLED_VMname,            /* place */
        OFFSET_OF_nMruby_tsLED_VMname,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[148]:  nMruby_tsLED_bridgeNameVarDeclInfo id=149 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsLED_bridgeName,        /* place */
        OFFSET_OF_nMruby_tsLED_bridgeName,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[149]:  nMruby_tsButton_VMnameVarDeclInfo id=150 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsButton_VMname,         /* place */
        OFFSET_OF_nMruby_tsButton_VMname,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[150]:  nMruby_tsButton_bridgeNameVarDeclInfo id=151 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsButton_bridgeName,     /* place */
        OFFSET_OF_nMruby_tsButton_bridgeName,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[151]:  nMruby_tsBattery_VMnameVarDeclInfo id=152 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsBattery_VMname,        /* place */
        OFFSET_OF_nMruby_tsBattery_VMname,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[152]:  nMruby_tsBattery_bridgeNameVarDeclInfo id=153 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsBattery_bridgeName,    /* place */
        OFFSET_OF_nMruby_tsBattery_bridgeName,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[153]:  nMruby_tsSpeaker_VMnameVarDeclInfo id=154 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsSpeaker_VMname,        /* place */
        OFFSET_OF_nMruby_tsSpeaker_VMname,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[154]:  nMruby_tsSpeaker_bridgeNameVarDeclInfo id=155 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsSpeaker_bridgeName,    /* place */
        OFFSET_OF_nMruby_tsSpeaker_bridgeName,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[155]:  nMruby_tsUltrasonicSensor_VMnameVarDeclInfo id=156 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsUltrasonicSensor_VMname, /* place */
        OFFSET_OF_nMruby_tsUltrasonicSensor_VMname, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[156]:  nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo id=157 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsUltrasonicSensor_bridgeName, /* place */
        OFFSET_OF_nMruby_tsUltrasonicSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[157]:  nMruby_tsGyroSensor_VMnameVarDeclInfo id=158 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsGyroSensor_VMname,     /* place */
        OFFSET_OF_nMruby_tsGyroSensor_VMname,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[158]:  nMruby_tsGyroSensor_bridgeNameVarDeclInfo id=159 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsGyroSensor_bridgeName, /* place */
        OFFSET_OF_nMruby_tsGyroSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[159]:  nMruby_tsColorSensor_VMnameVarDeclInfo id=160 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsColorSensor_VMname,    /* place */
        OFFSET_OF_nMruby_tsColorSensor_VMname,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[160]:  nMruby_tsColorSensor_bridgeNameVarDeclInfo id=161 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsColorSensor_bridgeName, /* place */
        OFFSET_OF_nMruby_tsColorSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[161]:  nMruby_tsTouchSensor_VMnameVarDeclInfo id=162 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsTouchSensor_VMname,    /* place */
        OFFSET_OF_nMruby_tsTouchSensor_VMname,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[162]:  nMruby_tsTouchSensor_bridgeNameVarDeclInfo id=163 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsTouchSensor_bridgeName, /* place */
        OFFSET_OF_nMruby_tsTouchSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[163]:  nMruby_tsBalancer_VMnameVarDeclInfo id=164 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsBalancer_VMname,       /* place */
        OFFSET_OF_nMruby_tsBalancer_VMname,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[164]:  nMruby_tsBalancer_bridgeNameVarDeclInfo id=165 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsBalancer_bridgeName,   /* place */
        OFFSET_OF_nMruby_tsBalancer_bridgeName,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[165]:  nMruby_tsSharedMemory_VMnameVarDeclInfo id=166 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsSharedMemory_VMname,   /* place */
        OFFSET_OF_nMruby_tsSharedMemory_VMname,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[166]:  nMruby_tsSharedMemory_bridgeNameVarDeclInfo id=167 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsSharedMemory_bridgeName, /* place */
        OFFSET_OF_nMruby_tsSharedMemory_bridgeName, /* offset */
    },
};

extern const struct tag_nTECSInfo_sVarDeclInfo_VMT nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskpriVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskpriVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskbpriVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskbpriVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskwaitVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskwaitVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_wobjidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_wobjidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_lefttmoVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_lefttmoVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_actcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_actcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_wupcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_wupcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_texmskVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_texmskVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_waifbdVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_waifbdVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_svclevelVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_svclevelVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtex_texstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtex_texstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtex_pndptnVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtex_pndptnVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rovr_ovrstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rovr_ovrstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rovr_leftotmVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rovr_leftotmVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rcyc_cycstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rcyc_cycstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rcyc_lefttimVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rcyc_lefttimVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_ralm_almstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_ralm_almstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_ralm_lefttimVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_ralm_lefttimVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_stskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_stskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_rtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_rtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_spdqcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_spdqcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpf_wtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpf_wtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpf_fblkcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpf_fblkcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_stskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_stskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_rtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_rtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_smbfcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_smbfcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_fmbfszVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_fmbfszVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__tecsunit_obj_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__tecsunit_obj_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__tecsunit_obj_dataVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__tecsunit_obj_dataVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__cond_obj_nameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__cond_obj_nameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__cond_obj_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__cond_obj_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__cond_obj_dataVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__cond_obj_dataVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[42],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[43],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[44],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[45],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[46],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[47],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[48],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[49],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[50],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[51],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[52],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[53],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[54],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[55],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[56],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tFatFile_fsVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tFatFile_fsVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[57],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fsVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fsVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[58],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fs_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fs_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[59],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___drvVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___drvVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[60],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___csizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___csizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[61],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_fatsVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_fatsVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[62],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___wflagVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___wflagVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[63],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fsi_flagVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fsi_flagVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[64],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___idVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___idVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[65],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_rootdirVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_rootdirVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[66],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___sobjVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___sobjVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[67],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___last_clustVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___last_clustVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[68],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___free_clustVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___free_clustVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[69],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_fatentVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_fatentVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[70],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fsizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fsizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[71],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___volbaseVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___volbaseVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[72],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fatbaseVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fatbaseVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[73],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___dirbaseVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___dirbaseVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[74],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___databaseVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___databaseVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[75],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___winsectVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___winsectVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[76],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___winVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___winVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[77],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___idVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___idVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[78],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___flagVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___flagVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[79],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___errVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___errVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[80],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fptrVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fptrVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[81],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fsizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fsizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[82],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___sclustVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___sclustVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[83],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___clustVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___clustVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[84],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dsectVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dsectVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[85],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dir_sectVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dir_sectVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[86],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dir_ptrVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dir_ptrVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[87],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___bufVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___bufVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[88],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tFatFile_brVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tFatFile_brVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[89],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tFatFile_read_buffVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tFatFile_read_buffVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[90],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tFatFile_fatfsVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tFatFile_fatfsVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[91],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTarget_data1VarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTarget_data1VarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[92],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTarget_data2VarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTarget_data2VarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[93],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[94],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_DIMVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_DIMVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[95],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_N_TARGETVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_N_TARGETVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[96],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_target_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_target_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[97],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[98],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_flag_find_cellVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_flag_find_cellVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[99],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_region_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_region_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[100],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_region_cell_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_region_cell_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[101],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[102],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_var_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_var_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[103],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[104],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[105],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_flag_find_entryVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_flag_find_entryVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[106],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[107],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[108],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[109],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_flag_find_funcVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_flag_find_funcVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[110],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_nameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_nameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[111],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[112],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_return_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_return_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[113],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_n_argVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_n_argVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[114],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_n_arg_jsonVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_n_arg_jsonVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[115],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_structVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_structVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[116],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_exp_structVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_exp_structVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[117],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_pre_condVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_pre_condVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[118],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_post_condVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_post_condVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[119],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_n_pre_condVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_n_pre_condVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[120],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_n_post_condVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_n_post_condVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[121],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[122],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_TMP_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_TMP_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[123],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_regionVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_regionVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[124],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_cellVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_cellVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[125],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_entryVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_entryVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[126],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_functionVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_functionVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[127],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_argVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_argVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[128],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_expVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_expVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[129],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_pre_condVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_pre_condVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[130],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_post_condVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_key_post_condVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[131],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_json_strVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_json_strVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[132],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_tmp_strVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_tmp_strVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[133],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_target_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_target_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[134],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_counterVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tJSMN_counterVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[135],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[136],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_dataVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_dataVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[137],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cell_entryVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTECSUnit_cell_entryVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[138],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__RClass_gcnextVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__RClass_gcnextVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[139],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_TECSVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_TECSVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[140],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[141],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[142],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[143],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[144],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[145],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[146],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[147],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[148],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[149],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[150],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[151],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[152],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[153],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[154],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[155],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[156],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[157],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[158],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[159],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[160],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[161],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[162],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[163],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[164],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[165],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[166],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tVarDeclInfo_CB_initialize()
{
    nTECSInfo_tVarDeclInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
