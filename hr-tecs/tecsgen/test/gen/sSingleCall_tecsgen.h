/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSingleCall_TECSGEN_H
#define sSingleCall_TECSGEN_H

/*
 * signature   :  sSingleCall
 * global name :  sSingleCall
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSingleCall_VDES {
    struct tag_sSingleCall_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSingleCall_VMT {
    int32_t        (*single__T)( const struct tag_sSingleCall_VDES *edp, int32_t s );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSingleCall_Defined
#define  Descriptor_of_sSingleCall_Defined
typedef struct { struct tag_sSingleCall_VDES *vdes; } Descriptor( sSingleCall );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSINGLECALL_SINGLE              (1)

#endif /* sSingleCall_TECSGEN_H */
