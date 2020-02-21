/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sSignatureInfo_TECSGEN_H
#define nTECSInfo_sSignatureInfo_TECSGEN_H

/*
 * signature   :  sSignatureInfo
 * global name :  nTECSInfo_sSignatureInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sFunctionInfo_Defined
#define  Descriptor_of_nTECSInfo_sFunctionInfo_Defined
typedef struct { struct tag_nTECSInfo_sFunctionInfo_VDES *vdes; } Descriptor( nTECSInfo_sFunctionInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sSignatureInfo_VDES {
    struct tag_nTECSInfo_sSignatureInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sSignatureInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sSignatureInfo_VDES *edp, char_t* name, int_t max_len );
    uint16_t       (*getNameLength__T)( const struct tag_nTECSInfo_sSignatureInfo_VDES *edp );
    uint32_t       (*getNFunction__T)( const struct tag_nTECSInfo_sSignatureInfo_VDES *edp );
    ER             (*getFunctionInfo__T)( const struct tag_nTECSInfo_sSignatureInfo_VDES *edp, uint32_t ith, Descriptor( nTECSInfo_sFunctionInfo )* desc );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sSignatureInfo_Defined
#define  Descriptor_of_nTECSInfo_sSignatureInfo_Defined
typedef struct { struct tag_nTECSInfo_sSignatureInfo_VDES *vdes; } Descriptor( nTECSInfo_sSignatureInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SSIGNATUREINFO_GETNAME (1)
#define	FUNCID_NTECSINFO_SSIGNATUREINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SSIGNATUREINFO_GETNFUNCTION (3)
#define	FUNCID_NTECSINFO_SSIGNATUREINFO_GETFUNCTIONINFO (4)

#endif /* nTECSInfo_sSignatureInfo_TECSGEN_H */
