/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tEntryInfo_TECSGEN_H
#define nTECSInfo_tEntryInfo_TECSGEN_H

/*
 * celltype          :  tEntryInfo
 * global name       :  nTECSInfo_tEntryInfo
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
#include "nTECSInfo_sEntryInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tEntryInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sSignatureInfo_VDES const*cSignatureInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    bool_t         b_inline;
    uint32_t       array_size;
}  nTECSInfo_tEntryInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tEntryInfo_CB_tab           nTECSInfo_tEntryInfo_INIB_tab
#define nTECSInfo_tEntryInfo_CB               nTECSInfo_tEntryInfo_INIB
#define tag_nTECSInfo_tEntryInfo_CB           tag_nTECSInfo_tEntryInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tEntryInfo_INIB  nTECSInfo_tEntryInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tEntryInfo_INIB *nTECSInfo_tEntryInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sEntryInfo */
ER           nTECSInfo_tEntryInfo_eEntryInfo_getName(nTECSInfo_tEntryInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tEntryInfo_eEntryInfo_getNameLength(nTECSInfo_tEntryInfo_IDX idx);
void         nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo(nTECSInfo_tEntryInfo_IDX idx, Descriptor( nTECSInfo_sSignatureInfo )* desc);
uint32_t     nTECSInfo_tEntryInfo_eEntryInfo_getArraySize(nTECSInfo_tEntryInfo_IDX idx);
bool_t       nTECSInfo_tEntryInfo_eEntryInfo_isInline(nTECSInfo_tEntryInfo_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tEntryInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tEntryInfo_N_CELL        (8)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tEntryInfo_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tEntryInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tEntryInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tEntryInfo_ATTR_b_inline( p_that )	((p_that)->b_inline)
#define nTECSInfo_tEntryInfo_ATTR_array_size( p_that )	((p_that)->array_size)

#define nTECSInfo_tEntryInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tEntryInfo_GET_b_inline(p_that)	((p_that)->b_inline)
#define nTECSInfo_tEntryInfo_GET_array_size(p_that)	((p_that)->array_size)



#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tEntryInfo_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo->VMT->getName__T( \
	   (p_that)->cSignatureInfo, (name), (max_len) )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo, (ith), (desc) )

#else  /* TECSFLOW */
#define nTECSInfo_tEntryInfo_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo.getNameLength__T( \
 )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo.getNFunction__T( \
 )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo.getFunctionInfo__T( \
 (ith), (desc) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEntryInfo */
ER             nTECSInfo_tEntryInfo_eEntryInfo_getName_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd);
void           nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc);
uint32_t       nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd);
bool_t         nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cSignatureInfo */
Inline Descriptor( nTECSInfo_sSignatureInfo )
nTECSInfo_tEntryInfo_cSignatureInfo_refer_to_descriptor( nTECSInfo_tEntryInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sSignatureInfo )  des;
    nTECSInfo_tEntryInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sSignatureInfo_VDES *)p_cellcb->cSignatureInfo;
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tEntryInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tEntryInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tEntryInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tEntryInfo_IDX

#define tEntryInfo_IDX  nTECSInfo_tEntryInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tEntryInfo_ATTR_name( p_cellcb )
#define ATTR_b_inline        nTECSInfo_tEntryInfo_ATTR_b_inline( p_cellcb )
#define ATTR_array_size      nTECSInfo_tEntryInfo_ATTR_array_size( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSignatureInfo_getName( name, max_len ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getName( p_cellcb, name, max_len )
#define cSignatureInfo_getNameLength( ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getNameLength( p_cellcb )
#define cSignatureInfo_getNFunction( ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getNFunction( p_cellcb )
#define cSignatureInfo_getFunctionInfo( ith, desc ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getFunctionInfo( p_cellcb, ith, desc )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cSignatureInfo_refer_to_descriptor()\
          nTECSInfo_tEntryInfo_cSignatureInfo_refer_to_descriptor( p_cellcb )
#define cSignatureInfo_ref_desc()\
          cSignatureInfo_refer_to_descriptor()



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntryInfo_getName nTECSInfo_tEntryInfo_eEntryInfo_getName
#define eEntryInfo_getNameLength nTECSInfo_tEntryInfo_eEntryInfo_getNameLength
#define eEntryInfo_getSignatureInfo nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo
#define eEntryInfo_getArraySize nTECSInfo_tEntryInfo_eEntryInfo_getArraySize
#define eEntryInfo_isInline nTECSInfo_tEntryInfo_eEntryInfo_isInline

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tEntryInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tEntryInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tEntryInfo_TECSGENH */
