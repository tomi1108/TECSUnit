/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTarget_TECSGEN_H
#define sTarget_TECSGEN_H

/*
 * signature   :  sTarget
 * global name :  sTarget
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTarget_VDES {
    struct tag_sTarget_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTarget_VMT {
    int            (*main__T)( const struct tag_sTarget_VDES *edp, int8_t a, int8_t b );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTarget_Defined
#define  Descriptor_of_sTarget_Defined
typedef struct { struct tag_sTarget_VDES *vdes; } Descriptor( sTarget );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STARGET_MAIN                    (1)

#endif /* sTarget_TECSGEN_H */
