/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sParamInfo_TECSGEN_H
#define nTECSInfo_sParamInfo_TECSGEN_H

/*
 * signature   :  sParamInfo
 * global name :  nTECSInfo_sParamInfo
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
struct tag_nTECSInfo_sParamInfo_VDES {
    struct tag_nTECSInfo_sParamInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sParamInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sParamInfo_VDES *edp, char_t* name, int_t max_len );
    uint16_t       (*getNameLength__T)( const struct tag_nTECSInfo_sParamInfo_VDES *edp );
    ER             (*getTypeInfo__T)( const struct tag_nTECSInfo_sParamInfo_VDES *edp, Descriptor( nTECSInfo_sTypeInfo )* desc );
    ER             (*getDir__T)( const struct tag_nTECSInfo_sParamInfo_VDES *edp, int8_t* dir );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sParamInfo_Defined
#define  Descriptor_of_nTECSInfo_sParamInfo_Defined
typedef struct { struct tag_nTECSInfo_sParamInfo_VDES *vdes; } Descriptor( nTECSInfo_sParamInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SPARAMINFO_GETNAME    (1)
#define	FUNCID_NTECSINFO_SPARAMINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SPARAMINFO_GETTYPEINFO (3)
#define	FUNCID_NTECSINFO_SPARAMINFO_GETDIR     (4)

#endif /* nTECSInfo_sParamInfo_TECSGEN_H */
