/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sFunctionInfo_TECSGEN_H
#define nTECSInfo_sFunctionInfo_TECSGEN_H

/*
 * signature   :  sFunctionInfo
 * global name :  nTECSInfo_sFunctionInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sTypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sTypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sTypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sTypeInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sParamInfo_Defined
#define  Descriptor_of_nTECSInfo_sParamInfo_Defined
typedef struct { struct tag_nTECSInfo_sParamInfo_VDES *vdes; } Descriptor( nTECSInfo_sParamInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sFunctionInfo_VDES {
    struct tag_nTECSInfo_sFunctionInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sFunctionInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp, char_t* name, int_t max_len );
    uint16_t       (*getNameLength__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp );
    void           (*getReturnTypeInfo__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp, Descriptor( nTECSInfo_sTypeInfo )* desc );
    uint32_t       (*getNParam__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp );
    ER             (*getParamInfo__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp, uint32_t ith, Descriptor( nTECSInfo_sParamInfo )* param );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sFunctionInfo_Defined
#define  Descriptor_of_nTECSInfo_sFunctionInfo_Defined
typedef struct { struct tag_nTECSInfo_sFunctionInfo_VDES *vdes; } Descriptor( nTECSInfo_sFunctionInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETNAME (1)
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETRETURNTYPEINFO (3)
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETNPARAM (4)
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETPARAMINFO (5)

#endif /* nTECSInfo_sFunctionInfo_TECSGEN_H */
