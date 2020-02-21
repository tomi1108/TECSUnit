/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tBoolTypeInfo_TECSGEN_H
#define nTECSInfo_tBoolTypeInfo_TECSGEN_H

/*
 * celltype          :  tBoolTypeInfo
 * global name       :  nTECSInfo_tBoolTypeInfo
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
typedef const struct tag_nTECSInfo_tBoolTypeInfo_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         typeKind;
    uint32_t       size;
    bool_t         b_const;
    bool_t         b_volatile;
}  nTECSInfo_tBoolTypeInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tBoolTypeInfo_CB_tab           nTECSInfo_tBoolTypeInfo_INIB_tab
#define nTECSInfo_tBoolTypeInfo_CB               nTECSInfo_tBoolTypeInfo_INIB
#define tag_nTECSInfo_tBoolTypeInfo_CB           tag_nTECSInfo_tBoolTypeInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tBoolTypeInfo_INIB  nTECSInfo_tBoolTypeInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tBoolTypeInfo_INIB *nTECSInfo_tBoolTypeInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sTypeInfo */
ER           nTECSInfo_tBoolTypeInfo_eTypeInfo_getName(nTECSInfo_tBoolTypeInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tBoolTypeInfo_eTypeInfo_getNameLength(nTECSInfo_tBoolTypeInfo_IDX idx);
uint32_t     nTECSInfo_tBoolTypeInfo_eTypeInfo_getSize(nTECSInfo_tBoolTypeInfo_IDX idx);
int8_t       nTECSInfo_tBoolTypeInfo_eTypeInfo_getKind(nTECSInfo_tBoolTypeInfo_IDX idx);
uint32_t     nTECSInfo_tBoolTypeInfo_eTypeInfo_getNType(nTECSInfo_tBoolTypeInfo_IDX idx);
ER           nTECSInfo_tBoolTypeInfo_eTypeInfo_getTypeInfo(nTECSInfo_tBoolTypeInfo_IDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc);
uint32_t     nTECSInfo_tBoolTypeInfo_eTypeInfo_getNMember(nTECSInfo_tBoolTypeInfo_IDX idx);
ER           nTECSInfo_tBoolTypeInfo_eTypeInfo_getMemberInfo(nTECSInfo_tBoolTypeInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tBoolTypeInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tBoolTypeInfo_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tBoolTypeInfo_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tBoolTypeInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tBoolTypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tBoolTypeInfo_ATTR_typeKind( p_that )	((p_that)->typeKind)
#define nTECSInfo_tBoolTypeInfo_ATTR_size( p_that )	((p_that)->size)
#define nTECSInfo_tBoolTypeInfo_ATTR_b_const( p_that )	((p_that)->b_const)
#define nTECSInfo_tBoolTypeInfo_ATTR_b_volatile( p_that )	((p_that)->b_volatile)

#define nTECSInfo_tBoolTypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tBoolTypeInfo_GET_typeKind(p_that)	((p_that)->typeKind)
#define nTECSInfo_tBoolTypeInfo_GET_size(p_that)	((p_that)->size)
#define nTECSInfo_tBoolTypeInfo_GET_b_const(p_that)	((p_that)->b_const)
#define nTECSInfo_tBoolTypeInfo_GET_b_volatile(p_that)	((p_that)->b_volatile)



#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTypeInfo */
ER             nTECSInfo_tBoolTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tBoolTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
uint32_t       nTECSInfo_tBoolTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
int8_t         nTECSInfo_tBoolTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
uint32_t       nTECSInfo_tBoolTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
ER             nTECSInfo_tBoolTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc);
uint32_t       nTECSInfo_tBoolTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
ER             nTECSInfo_tBoolTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tBoolTypeInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tBoolTypeInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tBoolTypeInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tBoolTypeInfo_IDX

#define tBoolTypeInfo_IDX  nTECSInfo_tBoolTypeInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tBoolTypeInfo_ATTR_name( p_cellcb )
#define ATTR_typeKind        nTECSInfo_tBoolTypeInfo_ATTR_typeKind( p_cellcb )
#define ATTR_size            nTECSInfo_tBoolTypeInfo_ATTR_size( p_cellcb )
#define ATTR_b_const         nTECSInfo_tBoolTypeInfo_ATTR_b_const( p_cellcb )
#define ATTR_b_volatile      nTECSInfo_tBoolTypeInfo_ATTR_b_volatile( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTypeInfo_getName nTECSInfo_tBoolTypeInfo_eTypeInfo_getName
#define eTypeInfo_getNameLength nTECSInfo_tBoolTypeInfo_eTypeInfo_getNameLength
#define eTypeInfo_getSize nTECSInfo_tBoolTypeInfo_eTypeInfo_getSize
#define eTypeInfo_getKind nTECSInfo_tBoolTypeInfo_eTypeInfo_getKind
#define eTypeInfo_getNType nTECSInfo_tBoolTypeInfo_eTypeInfo_getNType
#define eTypeInfo_getTypeInfo nTECSInfo_tBoolTypeInfo_eTypeInfo_getTypeInfo
#define eTypeInfo_getNMember nTECSInfo_tBoolTypeInfo_eTypeInfo_getNMember
#define eTypeInfo_getMemberInfo nTECSInfo_tBoolTypeInfo_eTypeInfo_getMemberInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tBoolTypeInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tBoolTypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tBoolTypeInfo_TECSGENH */
