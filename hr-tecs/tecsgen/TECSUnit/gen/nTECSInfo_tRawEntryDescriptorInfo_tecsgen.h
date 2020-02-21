/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tRawEntryDescriptorInfo_TECSGEN_H
#define nTECSInfo_tRawEntryDescriptorInfo_TECSGEN_H

/*
 * celltype          :  tRawEntryDescriptorInfo
 * global name       :  nTECSInfo_tRawEntryDescriptorInfo
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
#include "nTECSInfo_sRawEntryDescriptorInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tRawEntryDescriptorInfo_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int_t          size;
    const void**         rawEntryDescriptor;
}  nTECSInfo_tRawEntryDescriptorInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tRawEntryDescriptorInfo_CB_tab           nTECSInfo_tRawEntryDescriptorInfo_INIB_tab
#define nTECSInfo_tRawEntryDescriptorInfo_CB               nTECSInfo_tRawEntryDescriptorInfo_INIB
#define tag_nTECSInfo_tRawEntryDescriptorInfo_CB           tag_nTECSInfo_tRawEntryDescriptorInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern nTECSInfo_tRawEntryDescriptorInfo_INIB  nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tRawEntryDescriptorInfo_INIB *nTECSInfo_tRawEntryDescriptorInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sRawEntryDescriptorInfo */
uint16_t     nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo(nTECSInfo_tRawEntryDescriptorInfo_IDX idx);
ER           nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor(nTECSInfo_tRawEntryDescriptorInfo_IDX idx, int_t subsc, void** rawDesc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tRawEntryDescriptorInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tRawEntryDescriptorInfo_N_CELL        (8)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tRawEntryDescriptorInfo_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tRawEntryDescriptorInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tRawEntryDescriptorInfo_ATTR_size( p_that )	((p_that)->size)
#define nTECSInfo_tRawEntryDescriptorInfo_ATTR_rawEntryDescriptor( p_that )	((p_that)->rawEntryDescriptor)

#define nTECSInfo_tRawEntryDescriptorInfo_GET_size(p_that)	((p_that)->size)
#define nTECSInfo_tRawEntryDescriptorInfo_GET_rawEntryDescriptor(p_that)	((p_that)->rawEntryDescriptor)



#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eRawEntryDescriptor */
uint16_t       nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *epd);
ER             nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor_skel( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *epd, int_t subsc, void** rawDesc);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tRawEntryDescriptorInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tRawEntryDescriptorInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tRawEntryDescriptorInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tRawEntryDescriptorInfo_IDX

#define tRawEntryDescriptorInfo_IDX  nTECSInfo_tRawEntryDescriptorInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_size            nTECSInfo_tRawEntryDescriptorInfo_ATTR_size( p_cellcb )
#define ATTR_rawEntryDescriptor nTECSInfo_tRawEntryDescriptorInfo_ATTR_rawEntryDescriptor( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eRawEntryDescriptor_getNRawEntryDescriptorInfo nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo
#define eRawEntryDescriptor_getRawDescriptor nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tRawEntryDescriptorInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tRawEntryDescriptorInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tRawEntryDescriptorInfo_TECSGENH */
