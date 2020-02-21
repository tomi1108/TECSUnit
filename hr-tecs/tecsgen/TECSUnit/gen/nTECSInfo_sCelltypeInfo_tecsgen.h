/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sCelltypeInfo_TECSGEN_H
#define nTECSInfo_sCelltypeInfo_TECSGEN_H

/*
 * signature   :  sCelltypeInfo
 * global name :  nTECSInfo_sCelltypeInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sVarDeclInfo_Defined
#define  Descriptor_of_nTECSInfo_sVarDeclInfo_Defined
typedef struct { struct tag_nTECSInfo_sVarDeclInfo_VDES *vdes; } Descriptor( nTECSInfo_sVarDeclInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sCallInfo_Defined
#define  Descriptor_of_nTECSInfo_sCallInfo_Defined
typedef struct { struct tag_nTECSInfo_sCallInfo_VDES *vdes; } Descriptor( nTECSInfo_sCallInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sEntryInfo_Defined
#define  Descriptor_of_nTECSInfo_sEntryInfo_Defined
typedef struct { struct tag_nTECSInfo_sEntryInfo_VDES *vdes; } Descriptor( nTECSInfo_sEntryInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sCelltypeInfo_VDES {
    struct tag_nTECSInfo_sCelltypeInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sCelltypeInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, char_t* name, int_t max_len );
    uint16_t       (*getNameLength__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    uint32_t       (*getNAttr__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    ER             (*getAttrInfo__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
    uint32_t       (*getNVar__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    ER             (*getVarInfo__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
    uint32_t       (*getNCall__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    ER             (*getCallInfo__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, uint32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc );
    uint32_t       (*getNEntry__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    ER             (*getEntryInfo__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, uint32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc );
    bool_t         (*isSingleton__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    bool_t         (*isIDX_is_ID__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    uint32_t       (*sizeOfCB__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    uint32_t       (*sizeOfINIB__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sCelltypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sCelltypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sCelltypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sCelltypeInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNAME (1)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNATTR (3)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETATTRINFO (4)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNVAR (5)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETVARINFO (6)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNCALL (7)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETCALLINFO (8)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNENTRY (9)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETENTRYINFO (10)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_ISSINGLETON (11)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_ISIDX_IS_ID (12)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_SIZEOFCB (13)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_SIZEOFINIB (14)

#endif /* nTECSInfo_sCelltypeInfo_TECSGEN_H */
