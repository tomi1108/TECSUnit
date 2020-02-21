/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTarget3_TECSGEN_H
#define sTarget3_TECSGEN_H

/*
 * signature   :  sTarget3
 * global name :  sTarget3
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTarget3_VDES {
    struct tag_sTarget3_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTarget3_VMT {
    ER             (*send__T)( const struct tag_sTarget3_VDES *edp, const int8_t* buf, int8_t len );
    ER             (*sendMessage__T)( const struct tag_sTarget3_VDES *edp, const char_t* buf, int8_t len );
    ER             (*sendStruct__T)( const struct tag_sTarget3_VDES *edp, const struct target_struct* data );
    ER             (*receiveMessage__T)( const struct tag_sTarget3_VDES *edp, char_t* buf, int8_t len );
    ER             (*checkER__T)( const struct tag_sTarget3_VDES *edp, ER eroor );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTarget3_Defined
#define  Descriptor_of_sTarget3_Defined
typedef struct { struct tag_sTarget3_VDES *vdes; } Descriptor( sTarget3 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STARGET3_SEND                   (1)
#define	FUNCID_STARGET3_SENDMESSAGE            (2)
#define	FUNCID_STARGET3_SENDSTRUCT             (3)
#define	FUNCID_STARGET3_RECEIVEMESSAGE         (4)
#define	FUNCID_STARGET3_CHECKER                (5)

#endif /* sTarget3_TECSGEN_H */
