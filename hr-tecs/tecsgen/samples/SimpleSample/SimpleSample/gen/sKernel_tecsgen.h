/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sKernel_TECSGEN_H
#define sKernel_TECSGEN_H

/*
 * signature   :  sKernel
 * global name :  sKernel
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sKernel_VDES {
    struct tag_sKernel_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sKernel_VMT {
    ER             (*delay__T)( const struct tag_sKernel_VDES *edp, RELTIM delay_time );
    ER             (*exitTask__T)( const struct tag_sKernel_VDES *edp );
    ER             (*getTime__T)( const struct tag_sKernel_VDES *edp, SYSTIM* p_system_time );
    ER             (*getMicroTime__T)( const struct tag_sKernel_VDES *edp, SYSUTM* p_system_micro_time );
    ER             (*exitKernel__T)( const struct tag_sKernel_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sKernel_Defined
#define  Descriptor_of_sKernel_Defined
typedef struct { struct tag_sKernel_VDES *vdes; } Descriptor( sKernel );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SKERNEL_DELAY                   (1)
#define	FUNCID_SKERNEL_EXITTASK                (2)
#define	FUNCID_SKERNEL_GETTIME                 (3)
#define	FUNCID_SKERNEL_GETMICROTIME            (4)
#define	FUNCID_SKERNEL_EXITKERNEL              (5)

#endif /* sKernel_TECSGEN_H */
