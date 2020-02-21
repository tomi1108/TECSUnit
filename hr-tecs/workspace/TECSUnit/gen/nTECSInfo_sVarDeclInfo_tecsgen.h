/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sVarDeclInfo_TECSGEN_H
#define nTECSInfo_sVarDeclInfo_TECSGEN_H

/*
 * signature   :  sVarDeclInfo
 * global name :  nTECSInfo_sVarDeclInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sTypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sTypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sTypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sTypeInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sVarDeclInfo_VDES {
    struct tag_nTECSInfo_sVarDeclInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sVarDeclInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, char_t* name, int_t max_len );
    uint16_t       (*getNameLength__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp );
    void           (*getLocationInfo__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, uint32_t* offset, int8_t* place );
    void           (*getTypeInfo__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, Descriptor( nTECSInfo_sTypeInfo )* desc );
    void           (*getSizeIsExpr__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, char_t* expr_str, int32_t max_len );
    ER             (*getSizeIs__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, uint32_t* size, const void* p_cb );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sVarDeclInfo_Defined
#define  Descriptor_of_nTECSInfo_sVarDeclInfo_Defined
typedef struct { struct tag_nTECSInfo_sVarDeclInfo_VDES *vdes; } Descriptor( nTECSInfo_sVarDeclInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETNAME  (1)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETLOCATIONINFO (3)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETTYPEINFO (4)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETSIZEISEXPR (5)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETSIZEIS (6)

#endif /* nTECSInfo_sVarDeclInfo_TECSGEN_H */
