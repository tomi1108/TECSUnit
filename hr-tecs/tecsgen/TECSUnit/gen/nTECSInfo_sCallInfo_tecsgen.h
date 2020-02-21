/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sCallInfo_TECSGEN_H
#define nTECSInfo_sCallInfo_TECSGEN_H

/*
 * signature   :  sCallInfo
 * global name :  nTECSInfo_sCallInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sSignatureInfo_Defined
#define  Descriptor_of_nTECSInfo_sSignatureInfo_Defined
typedef struct { struct tag_nTECSInfo_sSignatureInfo_VDES *vdes; } Descriptor( nTECSInfo_sSignatureInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sCallInfo_VDES {
    struct tag_nTECSInfo_sCallInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sCallInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sCallInfo_VDES *edp, char_t* name, int_t max_len );
    uint16_t       (*getNameLength__T)( const struct tag_nTECSInfo_sCallInfo_VDES *edp );
    void           (*getSignatureInfo__T)( const struct tag_nTECSInfo_sCallInfo_VDES *edp, Descriptor( nTECSInfo_sSignatureInfo )* desc );
    uint32_t       (*getArraySize__T)( const struct tag_nTECSInfo_sCallInfo_VDES *edp );
    void           (*getSpecifierInfo__T)( const struct tag_nTECSInfo_sCallInfo_VDES *edp, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit );
    void           (*getInternalInfo__T)( const struct tag_nTECSInfo_sCallInfo_VDES *edp, bool_t* b_allocator_port, bool_t* b_require_port );
    void           (*getLocationInfo__T)( const struct tag_nTECSInfo_sCallInfo_VDES *edp, uint32_t* offset, int8_t* place );
    void           (*getOptimizeInfo__T)( const struct tag_nTECSInfo_sCallInfo_VDES *edp, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sCallInfo_Defined
#define  Descriptor_of_nTECSInfo_sCallInfo_Defined
typedef struct { struct tag_nTECSInfo_sCallInfo_VDES *vdes; } Descriptor( nTECSInfo_sCallInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SCALLINFO_GETNAME     (1)
#define	FUNCID_NTECSINFO_SCALLINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SCALLINFO_GETSIGNATUREINFO (3)
#define	FUNCID_NTECSINFO_SCALLINFO_GETARRAYSIZE (4)
#define	FUNCID_NTECSINFO_SCALLINFO_GETSPECIFIERINFO (5)
#define	FUNCID_NTECSINFO_SCALLINFO_GETINTERNALINFO (6)
#define	FUNCID_NTECSINFO_SCALLINFO_GETLOCATIONINFO (7)
#define	FUNCID_NTECSINFO_SCALLINFO_GETOPTIMIZEINFO (8)

#endif /* nTECSInfo_sCallInfo_TECSGEN_H */
