/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTarget1_TECSGEN_H
#define sTarget1_TECSGEN_H

/*
 * signature   :  sTarget1
 * global name :  sTarget1
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTarget1_VDES {
    struct tag_sTarget1_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTarget1_VMT {
    int            (*double__T)( const struct tag_sTarget1_VDES *edp, int arg );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTarget1_Defined
#define  Descriptor_of_sTarget1_Defined
typedef struct { struct tag_sTarget1_VDES *vdes; } Descriptor( sTarget1 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STARGET1_DOUBLE                 (1)

#endif /* sTarget1_TECSGEN_H */
