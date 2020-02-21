/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tStructTypeInfo_tecsgen.h"
#include "nTECSInfo_tStructTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tStructTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getSize( lepd->idx );
}
int8_t         nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getKind( lepd->idx );
}
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getNType( lepd->idx );
}
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember( lepd->idx );
}
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tStructTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_tskstatVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_tskpriVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_tskbpriVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_tskwaitVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_wobjidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_lefttmoVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_actcntVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_wupcntVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_texmskVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_waifbdVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtsk_svclevelVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtex_texstatVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rtex_pndptnVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rovr_ovrstatVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rovr_leftotmVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rcyc_cycstatVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rcyc_lefttimVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_ralm_almstatVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_ralm_lefttimVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rpdq_stskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rpdq_rtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rpdq_spdqcntVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rmpf_wtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rmpf_fblkcntVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rmbf_stskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rmbf_rtskidVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rmbf_smbfcntVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__t_rmbf_fmbfszVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__tecsunit_obj_typeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__tecsunit_obj_dataVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__cond_obj_nameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__cond_obj_typeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__cond_obj_dataVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fsVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___idVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___flagVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___errVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fptrVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fsizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___sclustVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___clustVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dsectVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dir_sectVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dir_ptrVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___bufVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fs_typeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___drvVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___csizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_fatsVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___wflagVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fsi_flagVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___idVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_rootdirVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___sobjVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___last_clustVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___free_clustVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_fatentVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fsizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___volbaseVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fatbaseVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___dirbaseVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___databaseVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___winsectVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___winVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_struct__RClass_gcnextVarDeclInfo_eVarDeclInfo_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rtsk_tskstatVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_tskpriVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_tskbpriVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_tskwaitVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_wobjidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_lefttmoVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_actcntVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_wupcntVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_texmskVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_waifbdVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtsk_svclevelVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rtex_texstatVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rtex_pndptnVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rovr_ovrstatVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rovr_leftotmVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rcyc_cycstatVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rcyc_lefttimVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_ralm_almstatVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_ralm_lefttimVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rpdq_stskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rpdq_rtskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rpdq_spdqcntVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rmpf_wtskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rmpf_fblkcntVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__t_rmbf_stskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rmbf_rtskidVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rmbf_smbfcntVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__t_rmbf_fmbfszVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__tecsunit_objTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__tecsunit_obj_typeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__tecsunit_obj_dataVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__cond_objTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__cond_obj_nameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__cond_obj_typeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__cond_obj_dataVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal__TypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fsVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___idVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___flagVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___errVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fptrVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___fsizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___sclustVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___clustVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dsectVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dir_sectVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___dir_ptrVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal___bufVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal__TypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fs_typeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___drvVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___csizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_fatsVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___wflagVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fsi_flagVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___idVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_rootdirVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___sobjVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___last_clustVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___free_clustVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___n_fatentVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fsizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___volbaseVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___fatbaseVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___dirbaseVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___databaseVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___winsectVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal___winVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_struct__RClassTypeInfo_cVarDeclInfo[] = {
    &rDomainEV3_rTECSInfo_struct__RClass_gcnextVarDeclInfo_eVarDeclInfo_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tStructTypeInfo_INIB nTECSInfo_tStructTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[0]:  struct__t_rtskTypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        11,                                      /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rtsk",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rtsk),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[1]:  struct__t_rtexTypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rtex",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rtex),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[2]:  struct__t_rovrTypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rovr",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rovr),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[3]:  struct__t_rcycTypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rcyc",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rcyc),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[4]:  struct__t_ralmTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_ralm",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_ralm),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[5]:  struct__t_rsemTypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rsem",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rsem),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[6]:  struct__t_rflgTypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rflg",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rflg),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[7]:  struct__t_rdtqTypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        3,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rdtq",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rdtq),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[8]:  struct__t_rpdqTypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        3,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rpdq",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rpdq),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[9]:  struct__t_rmpfTypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rmpf",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rmpf),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[10]:  struct__t_rmbfTypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        4,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rmbf",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rmbf),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[11]:  struct__tecsunit_objTypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__tecsunit_objTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct tecsunit_obj",                   /* name */
        7,                                       /* typeKind */
        sizeof(struct tecsunit_obj),             /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[12]:  struct__cond_objTypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__cond_objTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        3,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct cond_obj",                       /* name */
        7,                                       /* typeKind */
        sizeof(struct cond_obj),                 /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[13]:  struct__TAG_7_TECS_internal__TypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal__TypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        12,                                      /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct {FATFS* fs;WORD id;BYTE flag;BYTE err;DWORD fptr;DWORD fsize;DWORD sclust;DWORD clust;DWORD dsect;DWORD dir_sect;BYTE* dir_ptr;BYTE buf[512];} ", /* name */
        7,                                       /* typeKind */
        sizeof(struct {FATFS* fs;WORD id;BYTE flag;BYTE err;DWORD fptr;DWORD fsize;DWORD sclust;DWORD clust;DWORD dsect;DWORD dir_sect;BYTE* dir_ptr;BYTE buf[512];} ), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[14]:  struct__TAG_6_TECS_internal__TypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal__TypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        19,                                      /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct {BYTE fs_type;BYTE drv;BYTE csize;BYTE n_fats;BYTE wflag;BYTE fsi_flag;WORD id;WORD n_rootdir;ID sobj;DWORD last_clust;DWORD free_clust;DWORD n_fatent;DWORD fsize;DWORD volbase;DWORD fatbase;DWORD dirbase;DWORD database;DWORD winsect;BYTE win[512];} ", /* name */
        7,                                       /* typeKind */
        sizeof(struct {BYTE fs_type;BYTE drv;BYTE csize;BYTE n_fats;BYTE wflag;BYTE fsi_flag;WORD id;WORD n_rootdir;ID sobj;DWORD last_clust;DWORD free_clust;DWORD n_fatent;DWORD fsize;DWORD volbase;DWORD fatbase;DWORD dirbase;DWORD database;DWORD winsect;BYTE win[512];} ), /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[15]:  struct__RClassTypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__RClassTypeInfo_cVarDeclInfo, /* #_CCP3B_# */
        1,                                       /* length of cVarDeclInfo (n_cVarDeclInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct RClass",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct RClass),                   /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tStructTypeInfo_eTypeInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__tecsunit_objTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__tecsunit_objTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__cond_objTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__cond_objTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal__TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__TAG_7_TECS_internal__TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal__TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__TAG_6_TECS_internal__TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__RClassTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__RClassTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[15],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tStructTypeInfo_CB_initialize()
{
    nTECSInfo_tStructTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
