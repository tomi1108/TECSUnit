/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tStructTypeInfo_TECSGEN_H
#define nTECSInfo_tStructTypeInfo_TECSGEN_H

/*
 * celltype          :  tStructTypeInfo
 * global name       :  nTECSInfo_tStructTypeInfo
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
#include "nTECSInfo_sVarDeclInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tStructTypeInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sVarDeclInfo_VDES *const*cVarDeclInfo;
    int_t n_cVarDeclInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         typeKind;
    uint32_t       size;
    bool_t         b_const;
    bool_t         b_volatile;
}  nTECSInfo_tStructTypeInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tStructTypeInfo_CB_tab           nTECSInfo_tStructTypeInfo_INIB_tab
#define nTECSInfo_tStructTypeInfo_CB               nTECSInfo_tStructTypeInfo_INIB
#define tag_nTECSInfo_tStructTypeInfo_CB           tag_nTECSInfo_tStructTypeInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tStructTypeInfo_INIB  nTECSInfo_tStructTypeInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tStructTypeInfo_INIB *nTECSInfo_tStructTypeInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sTypeInfo */
ER           nTECSInfo_tStructTypeInfo_eTypeInfo_getName(nTECSInfo_tStructTypeInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength(nTECSInfo_tStructTypeInfo_IDX idx);
uint32_t     nTECSInfo_tStructTypeInfo_eTypeInfo_getSize(nTECSInfo_tStructTypeInfo_IDX idx);
int8_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getKind(nTECSInfo_tStructTypeInfo_IDX idx);
uint32_t     nTECSInfo_tStructTypeInfo_eTypeInfo_getNType(nTECSInfo_tStructTypeInfo_IDX idx);
ER           nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo(nTECSInfo_tStructTypeInfo_IDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc);
uint32_t     nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember(nTECSInfo_tStructTypeInfo_IDX idx);
ER           nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo(nTECSInfo_tStructTypeInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tStructTypeInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tStructTypeInfo_N_CELL        (5)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tStructTypeInfo_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cVarDeclInfo(p_that)  ((p_that)->n_cVarDeclInfo)
#define NCP_cVarDeclInfo           (N_CP_cVarDeclInfo(p_cellcb))

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tStructTypeInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tStructTypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tStructTypeInfo_ATTR_typeKind( p_that )	((p_that)->typeKind)
#define nTECSInfo_tStructTypeInfo_ATTR_size( p_that )	((p_that)->size)
#define nTECSInfo_tStructTypeInfo_ATTR_b_const( p_that )	((p_that)->b_const)
#define nTECSInfo_tStructTypeInfo_ATTR_b_volatile( p_that )	((p_that)->b_volatile)

#define nTECSInfo_tStructTypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tStructTypeInfo_GET_typeKind(p_that)	((p_that)->typeKind)
#define nTECSInfo_tStructTypeInfo_GET_size(p_that)	((p_that)->size)
#define nTECSInfo_tStructTypeInfo_GET_b_const(p_that)	((p_that)->b_const)
#define nTECSInfo_tStructTypeInfo_GET_b_volatile(p_that)	((p_that)->b_volatile)



#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cVarDeclInfo[subscript]->VMT->getName__T( \
	   (p_that)->cVarDeclInfo[subscript], (name), (max_len) )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cVarDeclInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cVarDeclInfo[subscript] )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cVarDeclInfo[subscript]->VMT->getLocationInfo__T( \
	   (p_that)->cVarDeclInfo[subscript], (offset), (place) )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cVarDeclInfo[subscript]->VMT->getTypeInfo__T( \
	   (p_that)->cVarDeclInfo[subscript], (desc) )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getSizeIsExpr( p_that, subscript, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo[subscript]->VMT->getSizeIsExpr__T( \
	   (p_that)->cVarDeclInfo[subscript], (expr_str), (max_len) )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getSizeIs( p_that, subscript, size, p_cb ) \
	  (p_that)->cVarDeclInfo[subscript]->VMT->getSizeIs__T( \
	   (p_that)->cVarDeclInfo[subscript], (size), (p_cb) )

#else  /* TECSFLOW */
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cVarDeclInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cVarDeclInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cVarDeclInfo[subscript].getLocationInfo__T( \
 (offset), (place) )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cVarDeclInfo[subscript].getTypeInfo__T( \
 (desc) )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getSizeIsExpr( p_that, subscript, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo[subscript].getSizeIsExpr__T( \
 (expr_str), (max_len) )
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo_getSizeIs( p_that, subscript, size, p_cb ) \
	  (p_that)->cVarDeclInfo[subscript].getSizeIs__T( \
 (size), (p_cb) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTypeInfo */
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
int8_t         nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc);
uint32_t       nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cVarDeclInfo */
Inline Descriptor( nTECSInfo_sVarDeclInfo )
nTECSInfo_tStructTypeInfo_cVarDeclInfo_refer_to_descriptor( nTECSInfo_tStructTypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sVarDeclInfo )  des;
    nTECSInfo_tStructTypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cVarDeclInfo );
    des.vdes = (struct tag_nTECSInfo_sVarDeclInfo_VDES *)p_cellcb->cVarDeclInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tStructTypeInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tStructTypeInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tStructTypeInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tStructTypeInfo_IDX

#define tStructTypeInfo_IDX  nTECSInfo_tStructTypeInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tStructTypeInfo_ATTR_name( p_cellcb )
#define ATTR_typeKind        nTECSInfo_tStructTypeInfo_ATTR_typeKind( p_cellcb )
#define ATTR_size            nTECSInfo_tStructTypeInfo_ATTR_size( p_cellcb )
#define ATTR_b_const         nTECSInfo_tStructTypeInfo_ATTR_b_const( p_cellcb )
#define ATTR_b_volatile      nTECSInfo_tStructTypeInfo_ATTR_b_volatile( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cVarDeclInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tStructTypeInfo_cVarDeclInfo_getName( p_cellcb, subscript, name, max_len )
#define cVarDeclInfo_getNameLength( subscript ) \
          nTECSInfo_tStructTypeInfo_cVarDeclInfo_getNameLength( p_cellcb, subscript )
#define cVarDeclInfo_getLocationInfo( subscript, offset, place ) \
          nTECSInfo_tStructTypeInfo_cVarDeclInfo_getLocationInfo( p_cellcb, subscript, offset, place )
#define cVarDeclInfo_getTypeInfo( subscript, desc ) \
          nTECSInfo_tStructTypeInfo_cVarDeclInfo_getTypeInfo( p_cellcb, subscript, desc )
#define cVarDeclInfo_getSizeIsExpr( subscript, expr_str, max_len ) \
          nTECSInfo_tStructTypeInfo_cVarDeclInfo_getSizeIsExpr( p_cellcb, subscript, expr_str, max_len )
#define cVarDeclInfo_getSizeIs( subscript, size, p_cb ) \
          nTECSInfo_tStructTypeInfo_cVarDeclInfo_getSizeIs( p_cellcb, subscript, size, p_cb )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cVarDeclInfo_refer_to_descriptor( i )\
          nTECSInfo_tStructTypeInfo_cVarDeclInfo_refer_to_descriptor( p_cellcb, i )
#define cVarDeclInfo_ref_desc( i )\
          cVarDeclInfo_refer_to_descriptor( i )



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTypeInfo_getName nTECSInfo_tStructTypeInfo_eTypeInfo_getName
#define eTypeInfo_getNameLength nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength
#define eTypeInfo_getSize nTECSInfo_tStructTypeInfo_eTypeInfo_getSize
#define eTypeInfo_getKind nTECSInfo_tStructTypeInfo_eTypeInfo_getKind
#define eTypeInfo_getNType nTECSInfo_tStructTypeInfo_eTypeInfo_getNType
#define eTypeInfo_getTypeInfo nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo
#define eTypeInfo_getNMember nTECSInfo_tStructTypeInfo_eTypeInfo_getNMember
#define eTypeInfo_getMemberInfo nTECSInfo_tStructTypeInfo_eTypeInfo_getMemberInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tStructTypeInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tStructTypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tStructTypeInfo_TECSGENH */
