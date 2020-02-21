/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSingleEntry_TECSGEN_H
#define sSingleEntry_TECSGEN_H

/*
 * signature   :  sSingleEntry
 * global name :  sSingleEntry
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSingleEntry_VDES {
    struct tag_sSingleEntry_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSingleEntry_VMT {
    int32_t        (*single__T)( const struct tag_sSingleEntry_VDES *edp, int32_t s );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSingleEntry_Defined
#define  Descriptor_of_sSingleEntry_Defined
typedef struct { struct tag_sSingleEntry_VDES *vdes; } Descriptor( sSingleEntry );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSINGLEENTRY_SINGLE             (1)

#endif /* sSingleEntry_TECSGEN_H */
