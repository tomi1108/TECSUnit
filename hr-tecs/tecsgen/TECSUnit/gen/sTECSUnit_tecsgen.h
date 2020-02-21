/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTECSUnit_TECSGEN_H
#define sTECSUnit_TECSGEN_H

/*
 * signature   :  sTECSUnit
 * global name :  sTECSUnit
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTECSUnit_VDES {
    struct tag_sTECSUnit_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTECSUnit_VMT {
    void           (*main__T)( const struct tag_sTECSUnit_VDES *edp, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTECSUnit_Defined
#define  Descriptor_of_sTECSUnit_Defined
typedef struct { struct tag_sTECSUnit_VDES *vdes; } Descriptor( sTECSUnit );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STECSUNIT_MAIN                  (1)

#endif /* sTECSUnit_TECSGEN_H */
