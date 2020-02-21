/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tTECSInfo_TECSGEN_H
#define nTECSInfo_tTECSInfo_TECSGEN_H

/*
 * celltype          :  tTECSInfo
 * global name       :  nTECSInfo_tTECSInfo
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "nTECSInfo_sTECSInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nTECSInfo_tTECSInfo_CB {
    int  dummy;
} nTECSInfo_tTECSInfo_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   nTECSInfo_tTECSInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sTECSInfo */
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor( const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe( const char_t* namespace_path, uint32_t subsc, void** rawDesc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nTECSInfo_tTECSInfo_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#ifdef  nTECSInfo_tTECSInfo_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nTECSInfo_tTECSInfo_CB_TYPE_ONLY */

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tTECSInfo_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tTECSInfo_cTECSInfo_findNamespace( namespace_path, nsDesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace( \
	    (namespace_path), (nsDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findRegion( namespace_path, regionDesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion( \
	    (namespace_path), (regionDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findSignature( namespace_path, signatureDesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature( \
	    (namespace_path), (signatureDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findCelltype( namespace_path, celltypeDesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype( \
	    (namespace_path), (celltypeDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findCell( namespace_path, cellDesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findCell( \
	    (namespace_path), (cellDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor( \
	    (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findRawEntryDescriptor_unsafe( \
	    (namespace_path), (subsc), (rawDesc) )

#else  /* TECSFLOW */
#define nTECSInfo_tTECSInfo_cTECSInfo_findNamespace( namespace_path, nsDesc ) \
	  (p_that)->cTECSInfo.findNamespace__T( \
 (namespace_path), (nsDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findRegion( namespace_path, regionDesc ) \
	  (p_that)->cTECSInfo.findRegion__T( \
 (namespace_path), (regionDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findSignature( namespace_path, signatureDesc ) \
	  (p_that)->cTECSInfo.findSignature__T( \
 (namespace_path), (signatureDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findCelltype( namespace_path, celltypeDesc ) \
	  (p_that)->cTECSInfo.findCelltype__T( \
 (namespace_path), (celltypeDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findCell( namespace_path, cellDesc ) \
	  (p_that)->cTECSInfo.findCell__T( \
 (namespace_path), (cellDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor__T( \
 (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor_unsafe__T( \
 (namespace_path), (subsc), (rawDesc) )

#endif /* TECSFLOW */
#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTECSInfo */
ER             nTECSInfo_tTECSInfo_eTECSInfo_findNamespace_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc);
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRegion_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc);
ER             nTECSInfo_tTECSInfo_eTECSInfo_findSignature_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc);
ER             nTECSInfo_tTECSInfo_eTECSInfo_findCelltype_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc);
ER             nTECSInfo_tTECSInfo_eTECSInfo_findCell_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc);
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc);
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, uint32_t subsc, void** rawDesc);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tTECSInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tTECSInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tTECSInfo_IDX

#define tTECSInfo_IDX  nTECSInfo_tTECSInfo_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECSInfo_findNamespace( namespace_path, nsDesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findNamespace( namespace_path, nsDesc )
#define cTECSInfo_findRegion( namespace_path, regionDesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findRegion( namespace_path, regionDesc )
#define cTECSInfo_findSignature( namespace_path, signatureDesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findSignature( namespace_path, signatureDesc )
#define cTECSInfo_findCelltype( namespace_path, celltypeDesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findCelltype( namespace_path, celltypeDesc )
#define cTECSInfo_findCell( namespace_path, cellDesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findCell( namespace_path, cellDesc )
#define cTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc )
#define cTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTECSInfo_findNamespace nTECSInfo_tTECSInfo_eTECSInfo_findNamespace
#define eTECSInfo_findRegion nTECSInfo_tTECSInfo_eTECSInfo_findRegion
#define eTECSInfo_findSignature nTECSInfo_tTECSInfo_eTECSInfo_findSignature
#define eTECSInfo_findCelltype nTECSInfo_tTECSInfo_eTECSInfo_findCelltype
#define eTECSInfo_findCell nTECSInfo_tTECSInfo_eTECSInfo_findCell
#define eTECSInfo_findRawEntryDescriptor nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor
#define eTECSInfo_findRawEntryDescriptor_unsafe nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "nTECSInfo_tTECSInfo_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tTECSInfo_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef nTECSInfo_tTECSInfo_cTECSInfo_findNamespace
#undef cTECSInfo_findNamespace
#undef nTECSInfo_tTECSInfo_cTECSInfo_findRegion
#undef cTECSInfo_findRegion
#undef nTECSInfo_tTECSInfo_cTECSInfo_findSignature
#undef cTECSInfo_findSignature
#undef nTECSInfo_tTECSInfo_cTECSInfo_findCelltype
#undef cTECSInfo_findCelltype
#undef nTECSInfo_tTECSInfo_cTECSInfo_findCell
#undef cTECSInfo_findCell
#undef nTECSInfo_tTECSInfo_cTECSInfo_findRawEntryDescriptor
#undef cTECSInfo_findRawEntryDescriptor
#undef nTECSInfo_tTECSInfo_cTECSInfo_findRawEntryDescriptor_unsafe
#undef cTECSInfo_findRawEntryDescriptor_unsafe
#undef eTECSInfo_findNamespace
#undef eTECSInfo_findRegion
#undef eTECSInfo_findSignature
#undef eTECSInfo_findCelltype
#undef eTECSInfo_findCell
#undef eTECSInfo_findRawEntryDescriptor
#undef eTECSInfo_findRawEntryDescriptor_unsafe
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* nTECSInfo_tTECSInfo_TECSGENH */
