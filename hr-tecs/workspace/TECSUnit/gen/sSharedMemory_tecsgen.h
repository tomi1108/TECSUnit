/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSharedMemory_TECSGEN_H
#define sSharedMemory_TECSGEN_H

/*
 * signature   :  sSharedMemory
 * global name :  sSharedMemory
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSharedMemory_VDES {
    struct tag_sSharedMemory_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSharedMemory_VMT {
    void           (*putVal__T)( const struct tag_sSharedMemory_VDES *edp, int32_t index, int32_t val );
    int32_t        (*getVal__T)( const struct tag_sSharedMemory_VDES *edp, int32_t index );
    int32_t        (*getSize__T)( const struct tag_sSharedMemory_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSharedMemory_Defined
#define  Descriptor_of_sSharedMemory_Defined
typedef struct { struct tag_sSharedMemory_VDES *vdes; } Descriptor( sSharedMemory );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSHAREDMEMORY_PUTVAL            (1)
#define	FUNCID_SSHAREDMEMORY_GETVAL            (2)
#define	FUNCID_SSHAREDMEMORY_GETSIZE           (3)

#endif /* sSharedMemory_TECSGEN_H */
