/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTarget2_TECSGEN_H
#define sTarget2_TECSGEN_H

/*
 * signature   :  sTarget2
 * global name :  sTarget2
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTarget2_VDES {
    struct tag_sTarget2_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTarget2_VMT {
    int            (*add__T)( const struct tag_sTarget2_VDES *edp, int arg1, int arg2 );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTarget2_Defined
#define  Descriptor_of_sTarget2_Defined
typedef struct { struct tag_sTarget2_VDES *vdes; } Descriptor( sTarget2 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STARGET2_ADD                    (1)

#endif /* sTarget2_TECSGEN_H */
