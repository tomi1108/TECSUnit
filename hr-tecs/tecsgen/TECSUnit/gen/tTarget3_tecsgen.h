/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTarget3_TECSGEN_H
#define tTarget3_TECSGEN_H

/*
 * celltype          :  tTarget3
 * global name       :  tTarget3
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTarget3_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tTarget3_CB {
    int  dummy;
} tTarget3_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tTarget3_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTarget3 */
ER           tTarget3_eTarget3_send(tTarget3_IDX idx, const int8_t* buf, int8_t len);
ER           tTarget3_eTarget3_sendMessage(tTarget3_IDX idx, const char_t* buf, int8_t len);
ER           tTarget3_eTarget3_sendStruct(tTarget3_IDX idx, const struct target_struct* data);
ER           tTarget3_eTarget3_receiveMessage(tTarget3_IDX idx, char_t* buf, int8_t len);
ER           tTarget3_eTarget3_checkER(tTarget3_IDX idx, ER eroor);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTarget3_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tTarget3_N_CELL             (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTarget3_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTarget3_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTarget3 */
ER             tTarget3_eTarget3_send_skel( const struct tag_sTarget3_VDES *epd, const int8_t* buf, int8_t len);
ER             tTarget3_eTarget3_sendMessage_skel( const struct tag_sTarget3_VDES *epd, const char_t* buf, int8_t len);
ER             tTarget3_eTarget3_sendStruct_skel( const struct tag_sTarget3_VDES *epd, const struct target_struct* data);
ER             tTarget3_eTarget3_receiveMessage_skel( const struct tag_sTarget3_VDES *epd, char_t* buf, int8_t len);
ER             tTarget3_eTarget3_checkER_skel( const struct tag_sTarget3_VDES *epd, ER eroor);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTarget3_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTarget3_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTarget3_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTarget3_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTarget3_send    tTarget3_eTarget3_send
#define eTarget3_sendMessage tTarget3_eTarget3_sendMessage
#define eTarget3_sendStruct tTarget3_eTarget3_sendStruct
#define eTarget3_receiveMessage tTarget3_eTarget3_receiveMessage
#define eTarget3_checkER tTarget3_eTarget3_checkER

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTarget3_TECSGENH */
