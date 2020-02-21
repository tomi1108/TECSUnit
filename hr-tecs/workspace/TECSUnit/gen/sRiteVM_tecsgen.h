/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sRiteVM_TECSGEN_H
#define sRiteVM_TECSGEN_H

/*
 * signature   :  sRiteVM
 * global name :  sRiteVM
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sRiteVM_VDES {
    struct tag_sRiteVM_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sRiteVM_VMT {
    void           (*reset__T)( const struct tag_sRiteVM_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sRiteVM_Defined
#define  Descriptor_of_sRiteVM_Defined
typedef struct { struct tag_sRiteVM_VDES *vdes; } Descriptor( sRiteVM );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SRITEVM_RESET                   (1)

#endif /* sRiteVM_TECSGEN_H */
