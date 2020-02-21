/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sJSMN_TECSGEN_H
#define sJSMN_TECSGEN_H

/*
 * signature   :  sJSMN
 * global name :  sJSMN
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sJSMN_VDES {
    struct tag_sJSMN_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sJSMN_VMT {
    ER             (*json_open__T)( const struct tag_sJSMN_VDES *edp );
    ER             (*json_parse_path__T)( const struct tag_sJSMN_VDES *edp, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr );
    ER             (*json_parse_arg__T)( const struct tag_sJSMN_VDES *edp, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sJSMN_Defined
#define  Descriptor_of_sJSMN_Defined
typedef struct { struct tag_sJSMN_VDES *vdes; } Descriptor( sJSMN );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SJSMN_JSON_OPEN                 (1)
#define	FUNCID_SJSMN_JSON_PARSE_PATH           (2)
#define	FUNCID_SJSMN_JSON_PARSE_ARG            (3)

#endif /* sJSMN_TECSGEN_H */
