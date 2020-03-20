/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tFatFile_templ.c => src/tFatFile.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * fs               FIL              VAR_fs          
 * br               UINT             VAR_br          
 * read_buff        TCHAR [100]      VAR_read_buff   
 * fatfs            FATFS            VAR_fatfs       
 *
 * #[</PREAMBLE>]# */

/* �ץ��ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tFatFile_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eFatFile
 * entry port: eFatFile
 * signature:  sFatFile
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eFatFile_fopen
 * name:         eFatFile_fopen
 * global_name:  tFatFile_eFatFile_fopen
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
FRESULT
eFatFile_fopen(CELLIDX idx, const TCHAR* path, const TCHAR* mode)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eFatFile_fclose
 * name:         eFatFile_fclose
 * global_name:  tFatFile_eFatFile_fclose
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
FRESULT
eFatFile_fclose(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eFatFile_fread
 * name:         eFatFile_fread
 * global_name:  tFatFile_eFatFile_fread
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
FRESULT
eFatFile_fread(CELLIDX idx, TCHAR* buffer, UINT btr)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eFatFile_fwrite
 * name:         eFatFile_fwrite
 * global_name:  tFatFile_eFatFile_fwrite
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
FRESULT
eFatFile_fwrite(CELLIDX idx, const TCHAR* buffer, UINT btw, UINT* bw)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eFatFile_fgets
 * name:         eFatFile_fgets
 * global_name:  tFatFile_eFatFile_fgets
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
TCHAR*
eFatFile_fgets(CELLIDX idx, TCHAR* buff, uint_t btr)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eFatFile_unlink
 * name:         eFatFile_unlink
 * global_name:  tFatFile_eFatFile_unlink
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
FRESULT
eFatFile_unlink(CELLIDX idx, const TCHAR* path)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eFatFile_fmount
 * name:         eFatFile_fmount
 * global_name:  tFatFile_eFatFile_fmount
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
FRESULT
eFatFile_fmount(CELLIDX idx, const TCHAR* path, BYTE opt)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/