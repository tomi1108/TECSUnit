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
    ER             (*json_parse_path__T)( const struct tag_sJSMN_VDES *edp, char_t* r_path, char_t* c_path, char_t* e_path, char_t* f_path, int16_t target_num, int16_t btr );
    ER             (*json_parse_arg__T)( const struct tag_sJSMN_VDES *edp, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int8_t* arg_num, int16_t target_num, int16_t btr );
    ER             (*json_parse_cond__T)( const struct tag_sJSMN_VDES *edp, struct cond_obj* pre_cond, struct cond_obj* post_cond, int16_t* pre_cond_num, int16_t* post_cond_num, int16_t target_num, int16_t btr );
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
#define	FUNCID_SJSMN_JSON_PARSE_COND           (4)

#endif /* sJSMN_TECSGEN_H */
