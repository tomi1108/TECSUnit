/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tDefinedTypeInfo_TECSGEN_H
#define nTECSInfo_tDefinedTypeInfo_TECSGEN_H

/*
 * celltype          :  tDefinedTypeInfo
 * global name       :  nTECSInfo_tDefinedTypeInfo
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "nTECSInfo_sTypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tDefinedTypeInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sTypeInfo_VDES const*cTypeInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         typeKind;
    uint32_t       size;
    bool_t         b_const;
    bool_t         b_volatile;
}  nTECSInfo_tDefinedTypeInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tDefinedTypeInfo_CB_tab           nTECSInfo_tDefinedTypeInfo_INIB_tab
#define nTECSInfo_tDefinedTypeInfo_CB               nTECSInfo_tDefinedTypeInfo_INIB
#define tag_nTECSInfo_tDefinedTypeInfo_CB           tag_nTECSInfo_tDefinedTypeInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tDefinedTypeInfo_INIB  nTECSInfo_tDefinedTypeInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tDefinedTypeInfo_INIB *nTECSInfo_tDefinedTypeInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sTypeInfo */
ER           nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName(nTECSInfo_tDefinedTypeInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength(nTECSInfo_tDefinedTypeInfo_IDX idx);
uint32_t     nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize(nTECSInfo_tDefinedTypeInfo_IDX idx);
int8_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind(nTECSInfo_tDefinedTypeInfo_IDX idx);
uint32_t     nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType(nTECSInfo_tDefinedTypeInfo_IDX idx);
ER           nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo(nTECSInfo_tDefinedTypeInfo_IDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc);
uint32_t     nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNMember(nTECSInfo_tDefinedTypeInfo_IDX idx);
ER           nTECSInfo_tDefinedTypeInfo_eTypeInfo_getMemberInfo(nTECSInfo_tDefinedTypeInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tDefinedTypeInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tDefinedTypeInfo_N_CELL       (26)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tDefinedTypeInfo_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tDefinedTypeInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tDefinedTypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tDefinedTypeInfo_ATTR_typeKind( p_that )	((p_that)->typeKind)
#define nTECSInfo_tDefinedTypeInfo_ATTR_size( p_that )	((p_that)->size)
#define nTECSInfo_tDefinedTypeInfo_ATTR_b_const( p_that )	((p_that)->b_const)
#define nTECSInfo_tDefinedTypeInfo_ATTR_b_volatile( p_that )	((p_that)->b_volatile)

#define nTECSInfo_tDefinedTypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tDefinedTypeInfo_GET_typeKind(p_that)	((p_that)->typeKind)
#define nTECSInfo_tDefinedTypeInfo_GET_size(p_that)	((p_that)->size)
#define nTECSInfo_tDefinedTypeInfo_GET_b_const(p_that)	((p_that)->b_const)
#define nTECSInfo_tDefinedTypeInfo_GET_b_volatile(p_that)	((p_that)->b_volatile)



#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (desc) )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNMember__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getMemberInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )

#else  /* TECSFLOW */
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo.getNameLength__T( \
 )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo.getSize__T( \
 )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo.getKind__T( \
 )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo.getNType__T( \
 )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo.getTypeInfo__T( \
 (desc) )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo.getNMember__T( \
 )
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo.getMemberInfo__T( \
 (ith), (desc) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTypeInfo */
ER             nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
uint32_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
int8_t         nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
uint32_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
ER             nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc);
uint32_t       nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
ER             nTECSInfo_tDefinedTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cTypeInfo */
Inline Descriptor( nTECSInfo_sTypeInfo )
nTECSInfo_tDefinedTypeInfo_cTypeInfo_refer_to_descriptor( nTECSInfo_tDefinedTypeInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sTypeInfo )  des;
    nTECSInfo_tDefinedTypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sTypeInfo_VDES *)p_cellcb->cTypeInfo;
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tDefinedTypeInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tDefinedTypeInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tDefinedTypeInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tDefinedTypeInfo_IDX

#define tDefinedTypeInfo_IDX  nTECSInfo_tDefinedTypeInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tDefinedTypeInfo_ATTR_name( p_cellcb )
#define ATTR_typeKind        nTECSInfo_tDefinedTypeInfo_ATTR_typeKind( p_cellcb )
#define ATTR_size            nTECSInfo_tDefinedTypeInfo_ATTR_size( p_cellcb )
#define ATTR_b_const         nTECSInfo_tDefinedTypeInfo_ATTR_b_const( p_cellcb )
#define ATTR_b_volatile      nTECSInfo_tDefinedTypeInfo_ATTR_b_volatile( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTypeInfo_getName( name, max_len ) \
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( ) \
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNameLength( p_cellcb )
#define cTypeInfo_getSize( ) \
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_getSize( p_cellcb )
#define cTypeInfo_getKind( ) \
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_getKind( p_cellcb )
#define cTypeInfo_getNType( ) \
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNType( p_cellcb )
#define cTypeInfo_getTypeInfo( desc ) \
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_getTypeInfo( p_cellcb, desc )
#define cTypeInfo_getNMember( ) \
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_getNMember( p_cellcb )
#define cTypeInfo_getMemberInfo( ith, desc ) \
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_getMemberInfo( p_cellcb, ith, desc )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cTypeInfo_refer_to_descriptor()\
          nTECSInfo_tDefinedTypeInfo_cTypeInfo_refer_to_descriptor( p_cellcb )
#define cTypeInfo_ref_desc()\
          cTypeInfo_refer_to_descriptor()



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTypeInfo_getName nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName
#define eTypeInfo_getNameLength nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength
#define eTypeInfo_getSize nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize
#define eTypeInfo_getKind nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind
#define eTypeInfo_getNType nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType
#define eTypeInfo_getTypeInfo nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo
#define eTypeInfo_getNMember nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNMember
#define eTypeInfo_getMemberInfo nTECSInfo_tDefinedTypeInfo_eTypeInfo_getMemberInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tDefinedTypeInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tDefinedTypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tDefinedTypeInfo_TECSGENH */
