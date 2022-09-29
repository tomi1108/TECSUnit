/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
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

/* global header #_IGH_# */
#include "global_tecsgen.h"

/* signature header #_ISH_# */
#include "nTECSInfo_sEntryInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* cell INIB type definition #_CIP_# */
typedef const struct tag_nTECSInfo_tEntryInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sSignatureInfo_VDES const*cSignatureInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    bool_t         b_inline;
    uint32_t       array_size;
}  nTECSInfo_tEntryInfo_INIB;

/* CB not exist. CB corresponding to INIB #_DCI_# */
#define nTECSInfo_tEntryInfo_CB_tab           nTECSInfo_tEntryInfo_INIB_tab
#define nTECSInfo_tEntryInfo_CB               nTECSInfo_tEntryInfo_INIB
#define tag_nTECSInfo_tEntryInfo_CB           tag_nTECSInfo_tEntryInfo_INIB

/* singleton cell CB prototype declaration #_MCPB_# */
extern nTECSInfo_tEntryInfo_INIB  nTECSInfo_tEntryInfo_INIB_tab[];

/* celltype IDX type #_CTIX_# */
typedef const struct tag_nTECSInfo_tEntryInfo_INIB *nTECSInfo_tEntryInfo_IDX;

/* prototype declaration of entry port function #_EPP_# */
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

#define nTECSInfo_tEntryInfo_ID_BASE        (1)  /* ID Base  #_NIDB_# */
#define nTECSInfo_tEntryInfo_N_CELL        (7)  /*  number of cells  #_NCEL_# */

/* IDX validation macro #_CVI_# */
#define nTECSInfo_tEntryInfo_VALID_IDX(IDX) (1)


/* celll CB macro #_GCB_# */
#define nTECSInfo_tEntryInfo_GET_CELLCB(idx) (idx)

/* attr access  #_AAM_# */
#define nTECSInfo_tEntryInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tEntryInfo_ATTR_b_inline( p_that )	((p_that)->b_inline)
#define nTECSInfo_tEntryInfo_ATTR_array_size( p_that )	((p_that)->array_size)

#define nTECSInfo_tEntryInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tEntryInfo_GET_b_inline(p_that)	((p_that)->b_inline)
#define nTECSInfo_tEntryInfo_GET_array_size(p_that)	((p_that)->array_size)



#ifndef TECSFLOW
 /* call port function macro #_CPM_# */
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

/* prototype declaration of entry port function (referenced when VMT useless optimise enabled) #_EPSP_# */
/* eEntryInfo */
ER             nTECSInfo_tEntryInfo_eEntryInfo_getName_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd);
void           nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc);
uint32_t       nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd);
bool_t         nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* refer to descriptor function #_CRD_# */
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

/* IDX validation macro (abbrev.) #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tEntryInfo_VALID_IDX(IDX)


/* cell CB macro (abbrev) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tEntryInfo_GET_CELLCB(idx)

/* CELLCB type (abbrev) #_CCT_# */
#define CELLCB	nTECSInfo_tEntryInfo_CB

/* celltype IDX type (abbrev) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tEntryInfo_IDX

#define tEntryInfo_IDX  nTECSInfo_tEntryInfo_IDX

/* attr access macro (abbrev) #_AAMA_# */
#define ATTR_name            nTECSInfo_tEntryInfo_ATTR_name( p_cellcb )
#define ATTR_b_inline        nTECSInfo_tEntryInfo_ATTR_b_inline( p_cellcb )
#define ATTR_array_size      nTECSInfo_tEntryInfo_ATTR_array_size( p_cellcb )


/* call port function macro (abbrev) #_CPMA_# */
#define cSignatureInfo_getName( name, max_len ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getName( p_cellcb, name, max_len )
#define cSignatureInfo_getNameLength( ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getNameLength( p_cellcb )
#define cSignatureInfo_getNFunction( ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getNFunction( p_cellcb )
#define cSignatureInfo_getFunctionInfo( ith, desc ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getFunctionInfo( p_cellcb, ith, desc )


/* refer to descriptor macro (abbrev) #_CRDA_# */
#define cSignatureInfo_refer_to_descriptor()\
          nTECSInfo_tEntryInfo_cSignatureInfo_refer_to_descriptor( p_cellcb )
#define cSignatureInfo_ref_desc()\
          cSignatureInfo_refer_to_descriptor()



/* entry port function macro (abbrev) #_EPM_# */
#define eEntryInfo_getName nTECSInfo_tEntryInfo_eEntryInfo_getName
#define eEntryInfo_getNameLength nTECSInfo_tEntryInfo_eEntryInfo_getNameLength
#define eEntryInfo_getSignatureInfo nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo
#define eEntryInfo_getArraySize nTECSInfo_tEntryInfo_eEntryInfo_getArraySize
#define eEntryInfo_isInline nTECSInfo_tEntryInfo_eEntryInfo_isInline

/* iteration code (FOREACH_CELL) #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tEntryInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tEntryInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB initialize macro #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tEntryInfo_TECSGENH */
