/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sFatFile_TECSGEN_H
#define sFatFile_TECSGEN_H

/*
 * signature   :  sFatFile
 * global name :  sFatFile
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sFatFile_VDES {
    struct tag_sFatFile_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sFatFile_VMT {
    FRESULT        (*fopen__T)( const struct tag_sFatFile_VDES *edp, const TCHAR* path, const TCHAR* mode );
    FRESULT        (*fclose__T)( const struct tag_sFatFile_VDES *edp );
    FRESULT        (*fread__T)( const struct tag_sFatFile_VDES *edp, TCHAR* buffer, UINT btr );
    FRESULT        (*fwrite__T)( const struct tag_sFatFile_VDES *edp, const TCHAR* buffer, UINT btw, UINT* bw );
    TCHAR*         (*fgets__T)( const struct tag_sFatFile_VDES *edp, TCHAR* buff, uint_t btr );
    FRESULT        (*unlink__T)( const struct tag_sFatFile_VDES *edp, const TCHAR* path );
    FRESULT        (*fmount__T)( const struct tag_sFatFile_VDES *edp, const TCHAR* path, BYTE opt );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sFatFile_Defined
#define  Descriptor_of_sFatFile_Defined
typedef struct { struct tag_sFatFile_VDES *vdes; } Descriptor( sFatFile );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SFATFILE_FOPEN                  (1)
#define	FUNCID_SFATFILE_FCLOSE                 (2)
#define	FUNCID_SFATFILE_FREAD                  (3)
#define	FUNCID_SFATFILE_FWRITE                 (4)
#define	FUNCID_SFATFILE_FGETS                  (5)
#define	FUNCID_SFATFILE_UNLINK                 (6)
#define	FUNCID_SFATFILE_FMOUNT                 (7)

#endif /* sFatFile_TECSGEN_H */
