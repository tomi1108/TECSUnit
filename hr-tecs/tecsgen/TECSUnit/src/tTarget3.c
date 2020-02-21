/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tTarget3_templ.c => src/tTarget3.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTarget3_tecsgen.h"
#include "string.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eTarget3
 * entry port: eTarget3
 * signature:  sTarget3
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTarget3_send
 * name:         eTarget3_send
 * global_name:  tTarget3_eTarget3_send
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTarget3_send(CELLIDX idx, const int8_t* buf, int8_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	int8_t i;
	for( i = 0 ; i < len; i++ ){
		printf("%d:%d\n", i+1, buf[i]);
	}
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTarget3_sendMessage
 * name:         eTarget3_sendMessage
 * global_name:  tTarget3_eTarget3_sendMessage
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTarget3_sendMessage(CELLIDX idx, const char_t* buf, int8_t len)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf("This is eTarget3_sendMessage\n");
	printf("%s\n", buf);
	return 1;
}

/* #[<ENTRY_FUNC>]# eTarget3_sendStruct
 * name:         eTarget3_sendStruct
 * global_name:  tTarget3_eTarget3_sendStruct
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTarget3_sendStruct(CELLIDX idx, const struct target_struct* data)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf("This is eTarget3_sendStruct\n");
	printf("num = %d\n", data->number );
	printf("name = %s\n", data->name );
	return 1;
}

/* #[<ENTRY_FUNC>]# eTarget3_receiveMessage
 * name:         eTarget3_receiveMessage
 * global_name:  tTarget3_eTarget3_receiveMessage
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTarget3_receiveMessage(CELLIDX idx, char_t* buf, int8_t len)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	strcpy( buf, "test" );
	return;
}

/* #[<ENTRY_FUNC>]# eTarget3_checkER
 * name:         eTarget3_checkER
 * global_name:  tTarget3_eTarget3_checkER
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTarget3_checkER(CELLIDX idx, ER eroor)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
