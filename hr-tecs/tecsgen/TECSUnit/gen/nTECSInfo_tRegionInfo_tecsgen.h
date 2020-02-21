/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tRegionInfo_TECSGEN_H
#define nTECSInfo_tRegionInfo_TECSGEN_H

/*
 * celltype          :  tRegionInfo
 * global name       :  nTECSInfo_tRegionInfo
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
#include "nTECSInfo_sRegionInfo_tecsgen.h"
#include "nTECSInfo_sCellInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tRegionInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sCellInfo_VDES *const*cCellInfo;
    int_t n_cCellInfo;
    struct tag_nTECSInfo_sRegionInfo_VDES *const*cRegionInfo;
    int_t n_cRegionInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char*          name;
}  nTECSInfo_tRegionInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tRegionInfo_CB_tab           nTECSInfo_tRegionInfo_INIB_tab
#define nTECSInfo_tRegionInfo_CB               nTECSInfo_tRegionInfo_INIB
#define tag_nTECSInfo_tRegionInfo_CB           tag_nTECSInfo_tRegionInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tRegionInfo_INIB  nTECSInfo_tRegionInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tRegionInfo_INIB *nTECSInfo_tRegionInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sRegionInfo */
ER           nTECSInfo_tRegionInfo_eRegionInfo_getName(nTECSInfo_tRegionInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tRegionInfo_eRegionInfo_getNameLength(nTECSInfo_tRegionInfo_IDX idx);
uint32_t     nTECSInfo_tRegionInfo_eRegionInfo_getNCell(nTECSInfo_tRegionInfo_IDX idx);
ER           nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo(nTECSInfo_tRegionInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sCellInfo )* des);
uint32_t     nTECSInfo_tRegionInfo_eRegionInfo_getNRegion(nTECSInfo_tRegionInfo_IDX idx);
ER           nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo(nTECSInfo_tRegionInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tRegionInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tRegionInfo_N_CELL        (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tRegionInfo_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCellInfo(p_that)  ((p_that)->n_cCellInfo)
#define NCP_cCellInfo           (N_CP_cCellInfo(p_cellcb))
#define N_CP_cRegionInfo(p_that)  ((p_that)->n_cRegionInfo)
#define NCP_cRegionInfo           (N_CP_cRegionInfo(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define nTECSInfo_tRegionInfo_is_cCellInfo_joined(p_that,subscript) \
	  (((p_that)->cCellInfo!=0)\
	  &&((p_that)->cCellInfo[subscript]!=0))
#define nTECSInfo_tRegionInfo_is_cRegionInfo_joined(p_that,subscript) \
	  (((p_that)->cRegionInfo!=0)\
	  &&((p_that)->cRegionInfo[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tRegionInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tRegionInfo_ATTR_name( p_that )	((p_that)->name)

#define nTECSInfo_tRegionInfo_GET_name(p_that)	((p_that)->name)



#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tRegionInfo_cCellInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCellInfo[subscript]->VMT->getName__T( \
	   (p_that)->cCellInfo[subscript], (name), (max_len) )
#define nTECSInfo_tRegionInfo_cCellInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cCellInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cCellInfo[subscript] )
#define nTECSInfo_tRegionInfo_cCellInfo_getNRawEntryDescriptorInfo( p_that, subscript ) \
	  (p_that)->cCellInfo[subscript]->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo[subscript] )
#define nTECSInfo_tRegionInfo_cCellInfo_getRawEntryDescriptorInfo( p_that, subscript, index, desc ) \
	  (p_that)->cCellInfo[subscript]->VMT->getRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo[subscript], (index), (desc) )
#define nTECSInfo_tRegionInfo_cCellInfo_getCelltypeInfo( p_that, subscript, desc ) \
	  (p_that)->cCellInfo[subscript]->VMT->getCelltypeInfo__T( \
	   (p_that)->cCellInfo[subscript], (desc) )
#define nTECSInfo_tRegionInfo_cCellInfo_getCBP( p_that, subscript, cbp ) \
	  (p_that)->cCellInfo[subscript]->VMT->getCBP__T( \
	   (p_that)->cCellInfo[subscript], (cbp) )
#define nTECSInfo_tRegionInfo_cCellInfo_getINIBP( p_that, subscript, inibp ) \
	  (p_that)->cCellInfo[subscript]->VMT->getINIBP__T( \
	   (p_that)->cCellInfo[subscript], (inibp) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getName__T( \
	   (p_that)->cRegionInfo[subscript], (name), (max_len) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cRegionInfo[subscript] )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNCell( p_that, subscript ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getNCell__T( \
	   (p_that)->cRegionInfo[subscript] )
#define nTECSInfo_tRegionInfo_cRegionInfo_getCellInfo( p_that, subscript, ith, des ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getCellInfo__T( \
	   (p_that)->cRegionInfo[subscript], (ith), (des) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNRegion( p_that, subscript ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getNRegion__T( \
	   (p_that)->cRegionInfo[subscript] )
#define nTECSInfo_tRegionInfo_cRegionInfo_getRegionInfo( p_that, subscript, ith, des ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getRegionInfo__T( \
	   (p_that)->cRegionInfo[subscript], (ith), (des) )

#else  /* TECSFLOW */
#define nTECSInfo_tRegionInfo_cCellInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCellInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tRegionInfo_cCellInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cCellInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tRegionInfo_cCellInfo_getNRawEntryDescriptorInfo( p_that, subscript ) \
	  (p_that)->cCellInfo[subscript].getNRawEntryDescriptorInfo__T( \
 )
#define nTECSInfo_tRegionInfo_cCellInfo_getRawEntryDescriptorInfo( p_that, subscript, index, desc ) \
	  (p_that)->cCellInfo[subscript].getRawEntryDescriptorInfo__T( \
 (index), (desc) )
#define nTECSInfo_tRegionInfo_cCellInfo_getCelltypeInfo( p_that, subscript, desc ) \
	  (p_that)->cCellInfo[subscript].getCelltypeInfo__T( \
 (desc) )
#define nTECSInfo_tRegionInfo_cCellInfo_getCBP( p_that, subscript, cbp ) \
	  (p_that)->cCellInfo[subscript].getCBP__T( \
 (cbp) )
#define nTECSInfo_tRegionInfo_cCellInfo_getINIBP( p_that, subscript, inibp ) \
	  (p_that)->cCellInfo[subscript].getINIBP__T( \
 (inibp) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cRegionInfo[subscript].getName__T( \
 (name), (max_len) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNameLength( p_that, subscript ) \
	  (p_that)->cRegionInfo[subscript].getNameLength__T( \
 )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNCell( p_that, subscript ) \
	  (p_that)->cRegionInfo[subscript].getNCell__T( \
 )
#define nTECSInfo_tRegionInfo_cRegionInfo_getCellInfo( p_that, subscript, ith, des ) \
	  (p_that)->cRegionInfo[subscript].getCellInfo__T( \
 (ith), (des) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNRegion( p_that, subscript ) \
	  (p_that)->cRegionInfo[subscript].getNRegion__T( \
 )
#define nTECSInfo_tRegionInfo_cRegionInfo_getRegionInfo( p_that, subscript, ith, des ) \
	  (p_that)->cRegionInfo[subscript].getRegionInfo__T( \
 (ith), (des) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eRegionInfo */
ER             nTECSInfo_tRegionInfo_eRegionInfo_getName_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tRegionInfo_eRegionInfo_getNameLength_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd);
uint32_t       nTECSInfo_tRegionInfo_eRegionInfo_getNCell_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd);
ER             nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sCellInfo )* des);
uint32_t       nTECSInfo_tRegionInfo_eRegionInfo_getNRegion_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd);
ER             nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cCellInfo */
Inline Descriptor( nTECSInfo_sCellInfo )
nTECSInfo_tRegionInfo_cCellInfo_refer_to_descriptor( nTECSInfo_tRegionInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sCellInfo )  des;
    nTECSInfo_tRegionInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cCellInfo );
    des.vdes = (struct tag_nTECSInfo_sCellInfo_VDES *)p_cellcb->cCellInfo[ i ];
    return des;
}

/* [ref_desc] cRegionInfo */
Inline Descriptor( nTECSInfo_sRegionInfo )
nTECSInfo_tRegionInfo_cRegionInfo_refer_to_descriptor( nTECSInfo_tRegionInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sRegionInfo )  des;
    nTECSInfo_tRegionInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cRegionInfo );
    des.vdes = (struct tag_nTECSInfo_sRegionInfo_VDES *)p_cellcb->cRegionInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tRegionInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tRegionInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tRegionInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tRegionInfo_IDX

#define tRegionInfo_IDX  nTECSInfo_tRegionInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tRegionInfo_ATTR_name( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCellInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tRegionInfo_cCellInfo_getName( p_cellcb, subscript, name, max_len )
#define cCellInfo_getNameLength( subscript ) \
          nTECSInfo_tRegionInfo_cCellInfo_getNameLength( p_cellcb, subscript )
#define cCellInfo_getNRawEntryDescriptorInfo( subscript ) \
          nTECSInfo_tRegionInfo_cCellInfo_getNRawEntryDescriptorInfo( p_cellcb, subscript )
#define cCellInfo_getRawEntryDescriptorInfo( subscript, index, desc ) \
          nTECSInfo_tRegionInfo_cCellInfo_getRawEntryDescriptorInfo( p_cellcb, subscript, index, desc )
#define cCellInfo_getCelltypeInfo( subscript, desc ) \
          nTECSInfo_tRegionInfo_cCellInfo_getCelltypeInfo( p_cellcb, subscript, desc )
#define cCellInfo_getCBP( subscript, cbp ) \
          nTECSInfo_tRegionInfo_cCellInfo_getCBP( p_cellcb, subscript, cbp )
#define cCellInfo_getINIBP( subscript, inibp ) \
          nTECSInfo_tRegionInfo_cCellInfo_getINIBP( p_cellcb, subscript, inibp )
#define cRegionInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getName( p_cellcb, subscript, name, max_len )
#define cRegionInfo_getNameLength( subscript ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getNameLength( p_cellcb, subscript )
#define cRegionInfo_getNCell( subscript ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getNCell( p_cellcb, subscript )
#define cRegionInfo_getCellInfo( subscript, ith, des ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getCellInfo( p_cellcb, subscript, ith, des )
#define cRegionInfo_getNRegion( subscript ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getNRegion( p_cellcb, subscript )
#define cRegionInfo_getRegionInfo( subscript, ith, des ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getRegionInfo( p_cellcb, subscript, ith, des )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cCellInfo_refer_to_descriptor( i )\
          nTECSInfo_tRegionInfo_cCellInfo_refer_to_descriptor( p_cellcb, i )
#define cCellInfo_ref_desc( i )\
          cCellInfo_refer_to_descriptor( i )
#define cRegionInfo_refer_to_descriptor( i )\
          nTECSInfo_tRegionInfo_cRegionInfo_refer_to_descriptor( p_cellcb, i )
#define cRegionInfo_ref_desc( i )\
          cRegionInfo_refer_to_descriptor( i )


/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCellInfo_joined(subscript)\
		nTECSInfo_tRegionInfo_is_cCellInfo_joined(p_cellcb,subscript)
#define is_cRegionInfo_joined(subscript)\
		nTECSInfo_tRegionInfo_is_cRegionInfo_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eRegionInfo_getName nTECSInfo_tRegionInfo_eRegionInfo_getName
#define eRegionInfo_getNameLength nTECSInfo_tRegionInfo_eRegionInfo_getNameLength
#define eRegionInfo_getNCell nTECSInfo_tRegionInfo_eRegionInfo_getNCell
#define eRegionInfo_getCellInfo nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo
#define eRegionInfo_getNRegion nTECSInfo_tRegionInfo_eRegionInfo_getNRegion
#define eRegionInfo_getRegionInfo nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tRegionInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tRegionInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tRegionInfo_TECSGENH */
