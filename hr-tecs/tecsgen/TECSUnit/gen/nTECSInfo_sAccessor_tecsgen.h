/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sAccessor_TECSGEN_H
#define nTECSInfo_sAccessor_TECSGEN_H

/*
 * signature   :  sAccessor
 * global name :  nTECSInfo_sAccessor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sAccessor_VDES {
    struct tag_nTECSInfo_sAccessor_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sAccessor_VMT {
    ER             (*selectNamespaceInfoByName__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, const char_t* namespacePath );
    ER             (*selectCelltypeInfoByName__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, const char_t* celltypePath );
    ER             (*selectSignatureInfoByName__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, const char_t* signaturePath );
    ER             (*selectRegionInfoByName__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, const char_t* regionPath );
    ER             (*selectCellInfoByName__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, const char_t* cellPath );
    ER             (*getSignatureNameOfCellEntry__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, const char_t* cellEntryPath, char_t* signatureGlobalName, int_t max_len );
    ER             (*getSelectedNamespaceInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_namespace, int_t* num_celltype, int_t* num_signature );
    ER             (*selectCelltypeInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*selectSignatureInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*selectNamespaceInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*getSelectedCelltypeInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_attr, int_t* num_var, int_t* num_call, int_t* num_entry );
    ER             (*selectCallInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*selectEntryInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*selectAttrInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*selectVarInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*getSelectedAttrInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len );
    ER             (*getSizeIsExprOfAttr__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* expr_str, int32_t max_len );
    ER             (*selectTypeInfoOfAttr__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getSelectedVarInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len );
    ER             (*getSizeIsExprOfVar__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* expr_str, int32_t max_len );
    ER             (*selectTypeInfoOfVar__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getSelectedCallInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* array_size );
    ER             (*selectSignatureOfCall__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getSelectedCallSpecifierInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit );
    ER             (*getSelectedCallInternalInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, bool_t* b_allocator_port, bool_t* b_require_port );
    ER             (*getSelectedCallLocationInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, uint32_t* offset, int8_t* place );
    ER             (*getSelectedCallOptimizeInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique );
    ER             (*getSelectedEntryInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* array_size );
    ER             (*selectSignatureOfEntry__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getSelectedEntryInlineInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, bool_t* b_inline );
    ER             (*getSelectedSignatureInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_function );
    ER             (*selectFunctionInfoByIndex__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*getSelectedFunctionInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_args );
    ER             (*selectTypeInfoOfReturn__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getSelectedParamInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int8_t* dir );
    ER             (*selectParamInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*selectTypeInfoOfParam__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getSelectedTypeInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int8_t* kind );
    ER             (*selectTypeInfoOfType__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getSelectedRegionInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_cell, int_t* num_region );
    ER             (*selectCellInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*selectRegionInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, int_t ith );
    ER             (*getSelectedCellInfo__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* name, int_t max_len );
    ER             (*selectCelltypeInfoOfCell__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getAttrValueInStr__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* buf, int_t max_len );
    ER             (*getAttrSizeIsValue__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
    ER             (*getVarValueInStr__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp, char_t* buf, int_t max_len );
    ER             (*getVarSizeIsValue__T)( const struct tag_nTECSInfo_sAccessor_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sAccessor_Defined
#define  Descriptor_of_nTECSInfo_sAccessor_Defined
typedef struct { struct tag_nTECSInfo_sAccessor_VDES *vdes; } Descriptor( nTECSInfo_sAccessor );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTNAMESPACEINFOBYNAME (1)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTCELLTYPEINFOBYNAME (2)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTSIGNATUREINFOBYNAME (3)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTREGIONINFOBYNAME (4)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTCELLINFOBYNAME (5)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSIGNATURENAMEOFCELLENTRY (6)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDNAMESPACEINFO (7)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTCELLTYPEINFO (8)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTSIGNATUREINFO (9)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTNAMESPACEINFO (10)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDCELLTYPEINFO (11)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTCALLINFO (12)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTENTRYINFO (13)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTATTRINFO (14)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTVARINFO (15)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDATTRINFO (16)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSIZEISEXPROFATTR (17)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTTYPEINFOOFATTR (18)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDVARINFO (19)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSIZEISEXPROFVAR (20)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTTYPEINFOOFVAR (21)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDCALLINFO (22)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTSIGNATUREOFCALL (23)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDCALLSPECIFIERINFO (24)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDCALLINTERNALINFO (25)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDCALLLOCATIONINFO (26)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDCALLOPTIMIZEINFO (27)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDENTRYINFO (28)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTSIGNATUREOFENTRY (29)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDENTRYINLINEINFO (30)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDSIGNATUREINFO (31)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTFUNCTIONINFOBYINDEX (32)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDFUNCTIONINFO (33)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTTYPEINFOOFRETURN (34)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDPARAMINFO (35)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTPARAMINFO (36)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTTYPEINFOOFPARAM (37)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDTYPEINFO (38)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTTYPEINFOOFTYPE (39)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDREGIONINFO (40)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTCELLINFO (41)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTREGIONINFO (42)
#define	FUNCID_NTECSINFO_SACCESSOR_GETSELECTEDCELLINFO (43)
#define	FUNCID_NTECSINFO_SACCESSOR_SELECTCELLTYPEINFOOFCELL (44)
#define	FUNCID_NTECSINFO_SACCESSOR_GETATTRVALUEINSTR (45)
#define	FUNCID_NTECSINFO_SACCESSOR_GETATTRSIZEISVALUE (46)
#define	FUNCID_NTECSINFO_SACCESSOR_GETVARVALUEINSTR (47)
#define	FUNCID_NTECSINFO_SACCESSOR_GETVARSIZEISVALUE (48)

#endif /* nTECSInfo_sAccessor_TECSGEN_H */
