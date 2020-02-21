/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTaskExceptionBody_TECSGEN_H
#define sTaskExceptionBody_TECSGEN_H

/*
 * signature   :  sTaskExceptionBody
 * global name :  sTaskExceptionBody
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTaskExceptionBody_VDES {
    struct tag_sTaskExceptionBody_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTaskExceptionBody_VMT {
    void           (*main__T)( const struct tag_sTaskExceptionBody_VDES *edp, TEXPTN pattern );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTaskExceptionBody_Defined
#define  Descriptor_of_sTaskExceptionBody_Defined
typedef struct { struct tag_sTaskExceptionBody_VDES *vdes; } Descriptor( sTaskExceptionBody );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STASKEXCEPTIONBODY_MAIN         (1)

#endif /* sTaskExceptionBody_TECSGEN_H */
