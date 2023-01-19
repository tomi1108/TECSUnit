/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTask_TECSGEN_H
#define sTask_TECSGEN_H

/*
 * signature   :  sTask
 * global name :  sTask
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTask_VDES {
    struct tag_sTask_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTask_VMT {
    ER             (*activate__T)( const struct tag_sTask_VDES *edp );
    ER             (*suspend__T)( const struct tag_sTask_VDES *edp );
    ER             (*resume__T)( const struct tag_sTask_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTask_Defined
#define  Descriptor_of_sTask_Defined
typedef struct { struct tag_sTask_VDES *vdes; } Descriptor( sTask );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STASK_ACTIVATE                  (1)
#define	FUNCID_STASK_SUSPEND                   (2)
#define	FUNCID_STASK_RESUME                    (3)

#endif /* sTask_TECSGEN_H */
