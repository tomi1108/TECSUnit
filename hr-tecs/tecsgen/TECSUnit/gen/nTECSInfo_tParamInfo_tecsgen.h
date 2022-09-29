/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef nTECSInfo_tParamInfo_TECSGEN_H
#define nTECSInfo_tParamInfo_TECSGEN_H

/*
 * celltype          :  tParamInfo
 * global name       :  nTECSInfo_tParamInfo
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
#include "nTECSInfo_sParamInfo_tecsgen.h"
#include "nTECSInfo_sTypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* cell INIB type definition #_CIP_# */
typedef const struct tag_nTECSInfo_tParamInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sTypeInfo_VDES const*cTypeInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         dir;
    char_t*        sizeIsExpr;
    char_t*        countIsExpr;
    char_t*        stringExpr;
}  nTECSInfo_tParamInfo_INIB;

/* CB not exist. CB corresponding to INIB #_DCI_# */
#define nTECSInfo_tParamInfo_CB_tab           nTECSInfo_tParamInfo_INIB_tab
#define nTECSInfo_tParamInfo_CB               nTECSInfo_tParamInfo_INIB
#define tag_nTECSInfo_tParamInfo_CB           tag_nTECSInfo_tParamInfo_INIB

/* singleton cell CB prototype declaration #_MCPB_# */
extern nTECSInfo_tParamInfo_INIB  nTECSInfo_tParamInfo_INIB_tab[];

/* celltype IDX type #_CTIX_# */
typedef const struct tag_nTECSInfo_tParamInfo_INIB *nTECSInfo_tParamInfo_IDX;

/* prototype declaration of entry port function #_EPP_# */
/* nTECSInfo_sParamInfo */
ER           nTECSInfo_tParamInfo_eParamInfo_getName(nTECSInfo_tParamInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tParamInfo_eParamInfo_getNameLength(nTECSInfo_tParamInfo_IDX idx);
ER           nTECSInfo_tParamInfo_eParamInfo_getTypeInfo(nTECSInfo_tParamInfo_IDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc);
ER           nTECSInfo_tParamInfo_eParamInfo_getDir(nTECSInfo_tParamInfo_IDX idx, int8_t* dir);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tParamInfo_ID_BASE        (1)  /* ID Base  #_NIDB_# */
#define nTECSInfo_tParamInfo_N_CELL      (223)  /*  number of cells  #_NCEL_# */

/* IDX validation macro #_CVI_# */
#define nTECSInfo_tParamInfo_VALID_IDX(IDX) (1)


/* celll CB macro #_GCB_# */
#define nTECSInfo_tParamInfo_GET_CELLCB(idx) (idx)

/* attr access  #_AAM_# */
#define nTECSInfo_tParamInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tParamInfo_ATTR_dir( p_that )	((p_that)->dir)
#define nTECSInfo_tParamInfo_ATTR_sizeIsExpr( p_that )	((p_that)->sizeIsExpr)
#define nTECSInfo_tParamInfo_ATTR_countIsExpr( p_that )	((p_that)->countIsExpr)
#define nTECSInfo_tParamInfo_ATTR_stringExpr( p_that )	((p_that)->stringExpr)

#define nTECSInfo_tParamInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tParamInfo_GET_dir(p_that)	((p_that)->dir)
#define nTECSInfo_tParamInfo_GET_sizeIsExpr(p_that)	((p_that)->sizeIsExpr)
#define nTECSInfo_tParamInfo_GET_countIsExpr(p_that)	((p_that)->countIsExpr)
#define nTECSInfo_tParamInfo_GET_stringExpr(p_that)	((p_that)->stringExpr)



#ifndef TECSFLOW
 /* call port function macro #_CPM_# */
#define nTECSInfo_tParamInfo_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define nTECSInfo_tParamInfo_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tParamInfo_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tParamInfo_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tParamInfo_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tParamInfo_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (desc) )
#define nTECSInfo_tParamInfo_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNMember__T( \
	   (p_that)->cTypeInfo )
#define nTECSInfo_tParamInfo_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getMemberInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )

#else  /* TECSFLOW */
#define nTECSInfo_tParamInfo_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tParamInfo_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo.getNameLength__T( \
 )
#define nTECSInfo_tParamInfo_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo.getSize__T( \
 )
#define nTECSInfo_tParamInfo_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo.getKind__T( \
 )
#define nTECSInfo_tParamInfo_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo.getNType__T( \
 )
#define nTECSInfo_tParamInfo_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo.getTypeInfo__T( \
 (desc) )
#define nTECSInfo_tParamInfo_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo.getNMember__T( \
 )
#define nTECSInfo_tParamInfo_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo.getMemberInfo__T( \
 (ith), (desc) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* prototype declaration of entry port function (referenced when VMT useless optimise enabled) #_EPSP_# */
/* eParamInfo */
ER             nTECSInfo_tParamInfo_eParamInfo_getName_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tParamInfo_eParamInfo_getNameLength_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd);
ER             nTECSInfo_tParamInfo_eParamInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc);
ER             nTECSInfo_tParamInfo_eParamInfo_getDir_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, int8_t* dir);

#ifndef TOPPERS_CB_TYPE_ONLY

/* refer to descriptor function #_CRD_# */
/* [ref_desc] cTypeInfo */
Inline Descriptor( nTECSInfo_sTypeInfo )
nTECSInfo_tParamInfo_cTypeInfo_refer_to_descriptor( nTECSInfo_tParamInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sTypeInfo )  des;
    nTECSInfo_tParamInfo_CB *p_cellcb = p_that;
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

/* IDX validation macro (abbrev.) #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tParamInfo_VALID_IDX(IDX)


/* cell CB macro (abbrev) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tParamInfo_GET_CELLCB(idx)

/* CELLCB type (abbrev) #_CCT_# */
#define CELLCB	nTECSInfo_tParamInfo_CB

/* celltype IDX type (abbrev) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tParamInfo_IDX

#define tParamInfo_IDX  nTECSInfo_tParamInfo_IDX

/* attr access macro (abbrev) #_AAMA_# */
#define ATTR_name            nTECSInfo_tParamInfo_ATTR_name( p_cellcb )
#define ATTR_dir             nTECSInfo_tParamInfo_ATTR_dir( p_cellcb )
#define ATTR_sizeIsExpr      nTECSInfo_tParamInfo_ATTR_sizeIsExpr( p_cellcb )
#define ATTR_countIsExpr     nTECSInfo_tParamInfo_ATTR_countIsExpr( p_cellcb )
#define ATTR_stringExpr      nTECSInfo_tParamInfo_ATTR_stringExpr( p_cellcb )


/* call port function macro (abbrev) #_CPMA_# */
#define cTypeInfo_getName( name, max_len ) \
          nTECSInfo_tParamInfo_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( ) \
          nTECSInfo_tParamInfo_cTypeInfo_getNameLength( p_cellcb )
#define cTypeInfo_getSize( ) \
          nTECSInfo_tParamInfo_cTypeInfo_getSize( p_cellcb )
#define cTypeInfo_getKind( ) \
          nTECSInfo_tParamInfo_cTypeInfo_getKind( p_cellcb )
#define cTypeInfo_getNType( ) \
          nTECSInfo_tParamInfo_cTypeInfo_getNType( p_cellcb )
#define cTypeInfo_getTypeInfo( desc ) \
          nTECSInfo_tParamInfo_cTypeInfo_getTypeInfo( p_cellcb, desc )
#define cTypeInfo_getNMember( ) \
          nTECSInfo_tParamInfo_cTypeInfo_getNMember( p_cellcb )
#define cTypeInfo_getMemberInfo( ith, desc ) \
          nTECSInfo_tParamInfo_cTypeInfo_getMemberInfo( p_cellcb, ith, desc )


/* refer to descriptor macro (abbrev) #_CRDA_# */
#define cTypeInfo_refer_to_descriptor()\
          nTECSInfo_tParamInfo_cTypeInfo_refer_to_descriptor( p_cellcb )
#define cTypeInfo_ref_desc()\
          cTypeInfo_refer_to_descriptor()



/* entry port function macro (abbrev) #_EPM_# */
#define eParamInfo_getName nTECSInfo_tParamInfo_eParamInfo_getName
#define eParamInfo_getNameLength nTECSInfo_tParamInfo_eParamInfo_getNameLength
#define eParamInfo_getTypeInfo nTECSInfo_tParamInfo_eParamInfo_getTypeInfo
#define eParamInfo_getDir nTECSInfo_tParamInfo_eParamInfo_getDir

/* iteration code (FOREACH_CELL) #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tParamInfo_N_CELL; (i)++ ){ \
       //(p_cb) = &nTECSInfo_tParamInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB initialize macro #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tParamInfo_TECSGENH */
