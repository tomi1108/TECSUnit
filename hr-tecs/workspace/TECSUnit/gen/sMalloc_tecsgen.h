/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sMalloc_TECSGEN_H
#define sMalloc_TECSGEN_H

/*
 * signature   :  sMalloc
 * global name :  sMalloc
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sMalloc_VDES {
    struct tag_sMalloc_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sMalloc_VMT {
    int            (*initializeMemoryPool__T)( const struct tag_sMalloc_VDES *edp );
    void*          (*calloc__T)( const struct tag_sMalloc_VDES *edp, size_t nelem, size_t elem_size );
    void*          (*malloc__T)( const struct tag_sMalloc_VDES *edp, size_t size );
    void*          (*realloc__T)( const struct tag_sMalloc_VDES *edp, const void* ptr, size_t new_size );
    void           (*free__T)( const struct tag_sMalloc_VDES *edp, const void* ptr );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sMalloc_Defined
#define  Descriptor_of_sMalloc_Defined
typedef struct { struct tag_sMalloc_VDES *vdes; } Descriptor( sMalloc );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMALLOC_INITIALIZEMEMORYPOOL    (1)
#define	FUNCID_SMALLOC_CALLOC                  (2)
#define	FUNCID_SMALLOC_MALLOC                  (3)
#define	FUNCID_SMALLOC_REALLOC                 (4)
#define	FUNCID_SMALLOC_FREE                    (5)

#endif /* sMalloc_TECSGEN_H */
