/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef siKernel_TECSGEN_H
#define siKernel_TECSGEN_H

/*
 * signature   :  siKernel
 * global name :  siKernel
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_siKernel_VDES {
    struct tag_siKernel_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_siKernel_VMT {
    ER             (*getMicroTime__T)( const struct tag_siKernel_VDES *edp, SYSUTM* p_system_micro_time );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_siKernel_Defined
#define  Descriptor_of_siKernel_Defined
typedef struct { struct tag_siKernel_VDES *vdes; } Descriptor( siKernel );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIKERNEL_GETMICROTIME           (1)

#endif /* siKernel_TECSGEN_H */
