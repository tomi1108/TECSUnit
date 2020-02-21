/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tJSMN_TECSGEN_H
#define tJSMN_TECSGEN_H

/*
 * celltype          :  tJSMN
 * global name       :  tJSMN
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sJSMN_tecsgen.h"
#include "sLCD_tecsgen.h"
#include "sFatFile_tecsgen.h"
#include "sButton_tecsgen.h"
#include "sKernel_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tJSMN_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        LEN;
    int16_t        TMP_LEN;
    char_t*        key_region;
    char_t*        key_cell;
    char_t*        key_entry;
    char_t*        key_function;
    char_t*        key_arg;
    char_t*        key_exp;
    char_t*        key_pre_cond;
    char_t*        key_post_cond;
    char_t*        json_str;
    char_t*        tmp_str;
    char_t*        target_path;
}  tJSMN_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tJSMN_CB {
    tJSMN_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int            counter;
}  tJSMN_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tJSMN_CB  tJSMN_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tJSMN_CB *tJSMN_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sJSMN */
ER           tJSMN_eJSMN_json_open(tJSMN_IDX idx);
ER           tJSMN_eJSMN_json_parse_path(tJSMN_IDX idx, char_t* r_path, char_t* c_path, char_t* e_path, char_t* f_path, int16_t target_num, int16_t btr);
ER           tJSMN_eJSMN_json_parse_arg(tJSMN_IDX idx, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int8_t* arg_num, int16_t target_num, int16_t btr);
ER           tJSMN_eJSMN_json_parse_cond(tJSMN_IDX idx, struct cond_obj* pre_cond, struct cond_obj* post_cond, int16_t* pre_cond_num, int16_t* post_cond_num, int16_t target_num, int16_t btr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tJSMN_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tLCD_tecsgen.h"
#include "tFatFile_tecsgen.h"
#include "tButton_tecsgen.h"
#include "tKernel_tecsgen.h"
#ifdef  tJSMN_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tJSMN_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tJSMN_ID_BASE               (1)  /* ID のベース  #_NIDB_# */
#define tJSMN_N_CELL                (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tJSMN_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tJSMN_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tJSMN_ATTR_LEN( p_that )	((p_that)->_inib->LEN)
#define tJSMN_ATTR_TMP_LEN( p_that )	((p_that)->_inib->TMP_LEN)
#define tJSMN_ATTR_key_region( p_that )	((p_that)->_inib->key_region)
#define tJSMN_ATTR_key_cell( p_that )	((p_that)->_inib->key_cell)
#define tJSMN_ATTR_key_entry( p_that )	((p_that)->_inib->key_entry)
#define tJSMN_ATTR_key_function( p_that )	((p_that)->_inib->key_function)
#define tJSMN_ATTR_key_arg( p_that )	((p_that)->_inib->key_arg)
#define tJSMN_ATTR_key_exp( p_that )	((p_that)->_inib->key_exp)
#define tJSMN_ATTR_key_pre_cond( p_that )	((p_that)->_inib->key_pre_cond)
#define tJSMN_ATTR_key_post_cond( p_that )	((p_that)->_inib->key_post_cond)

#define tJSMN_GET_LEN(p_that)	((p_that)->_inib->LEN)
#define tJSMN_GET_TMP_LEN(p_that)	((p_that)->_inib->TMP_LEN)
#define tJSMN_GET_key_region(p_that)	((p_that)->_inib->key_region)
#define tJSMN_GET_key_cell(p_that)	((p_that)->_inib->key_cell)
#define tJSMN_GET_key_entry(p_that)	((p_that)->_inib->key_entry)
#define tJSMN_GET_key_function(p_that)	((p_that)->_inib->key_function)
#define tJSMN_GET_key_arg(p_that)	((p_that)->_inib->key_arg)
#define tJSMN_GET_key_exp(p_that)	((p_that)->_inib->key_exp)
#define tJSMN_GET_key_pre_cond(p_that)	((p_that)->_inib->key_pre_cond)
#define tJSMN_GET_key_post_cond(p_that)	((p_that)->_inib->key_post_cond)


/* var アクセスマクロ #_VAM_# */
#define tJSMN_VAR_json_str(p_that)	((p_that)->_inib->json_str)
#define tJSMN_VAR_tmp_str(p_that)	((p_that)->_inib->tmp_str)
#define tJSMN_VAR_target_path(p_that)	((p_that)->_inib->target_path)
#define tJSMN_VAR_counter(p_that)	((p_that)->counter)

#define tJSMN_GET_json_str(p_that)	((p_that)->json_str)
#define tJSMN_SET_json_str(p_that,val)	((p_that)->json_str=(val))
#define tJSMN_GET_tmp_str(p_that)	((p_that)->tmp_str)
#define tJSMN_SET_tmp_str(p_that,val)	((p_that)->tmp_str=(val))
#define tJSMN_GET_target_path(p_that)	((p_that)->target_path)
#define tJSMN_SET_target_path(p_that,val)	((p_that)->target_path=(val))
#define tJSMN_GET_counter(p_that)	((p_that)->counter)
#define tJSMN_SET_counter(p_that,val)	((p_that)->counter=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tJSMN_cLCD_setFont( p_that, font ) \
	  tLCD_eLCD_setFont( \
	   &tLCD_CB_tab[0], (font) )
#define tJSMN_cLCD_getFontSize( p_that, font, p_width, p_height ) \
	  tLCD_eLCD_getFontSize( \
	   &tLCD_CB_tab[0], (font), (p_width), (p_height) )
#define tJSMN_cLCD_drawString( p_that, str, x, y ) \
	  tLCD_eLCD_drawString( \
	   &tLCD_CB_tab[0], (str), (x), (y) )
#define tJSMN_cLCD_fillRect( p_that, x, y, w, h, color ) \
	  tLCD_eLCD_fillRect( \
	   &tLCD_CB_tab[0], (x), (y), (w), (h), (color) )
#define tJSMN_cLCD_drawLine( p_that, x0, y0, x1, y1 ) \
	  tLCD_eLCD_drawLine( \
	   &tLCD_CB_tab[0], (x0), (y0), (x1), (y1) )
#define tJSMN_cLCD_print( p_that, str ) \
	  tLCD_eLCD_print( \
	   &tLCD_CB_tab[0], (str) )
#define tJSMN_cLCD_puts( p_that, str ) \
	  tLCD_eLCD_puts( \
	   &tLCD_CB_tab[0], (str) )
#define tJSMN_cLCD_clear( p_that ) \
	  tLCD_eLCD_clear( \
	   &tLCD_CB_tab[0] )
#define tJSMN_cLCD_showMessageBox( p_that, title, msg ) \
	  tLCD_eLCD_showMessageBox( \
	   &tLCD_CB_tab[0], (title), (msg) )
#define tJSMN_cFatFile_fopen( p_that, path, mode ) \
	  tFatFile_eFatFile_fopen( \
	   &tFatFile_CB_tab[0], (path), (mode) )
#define tJSMN_cFatFile_fclose( p_that ) \
	  tFatFile_eFatFile_fclose( \
	   &tFatFile_CB_tab[0] )
#define tJSMN_cFatFile_fread( p_that, buffer, btr ) \
	  tFatFile_eFatFile_fread( \
	   &tFatFile_CB_tab[0], (buffer), (btr) )
#define tJSMN_cFatFile_fwrite( p_that, buffer, btw, bw ) \
	  tFatFile_eFatFile_fwrite( \
	   &tFatFile_CB_tab[0], (buffer), (btw), (bw) )
#define tJSMN_cFatFile_fgets( p_that, buff, btr ) \
	  tFatFile_eFatFile_fgets( \
	   &tFatFile_CB_tab[0], (buff), (btr) )
#define tJSMN_cFatFile_unlink( p_that, path ) \
	  tFatFile_eFatFile_unlink( \
	   &tFatFile_CB_tab[0], (path) )
#define tJSMN_cFatFile_fmount( p_that, path, opt ) \
	  tFatFile_eFatFile_fmount( \
	   &tFatFile_CB_tab[0], (path), (opt) )
#define tJSMN_cButton_isPressed( p_that, button ) \
	  tButton_eButton_isPressed( \
	   (tButton_IDX)0, (button) )
#define tJSMN_cKernel_sleep( p_that ) \
	  tKernel_eKernel_sleep( \
	    )
#define tJSMN_cKernel_sleepTimeout( p_that, timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tJSMN_cKernel_delay( p_that, delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tJSMN_cKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tJSMN_cKernel_getTaskId( p_that, p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tJSMN_cKernel_rotateReadyQueue( p_that, taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tJSMN_cKernel_getTime( p_that, p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tJSMN_cKernel_getMicroTime( p_that, p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tJSMN_cKernel_lockCpu( p_that ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tJSMN_cKernel_unlockCpu( p_that ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tJSMN_cKernel_disableDispatch( p_that ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tJSMN_cKernel_enableDispatch( p_that ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tJSMN_cKernel_disableTaskException( p_that ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tJSMN_cKernel_enableTaskException( p_that ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tJSMN_cKernel_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tJSMN_cKernel_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tJSMN_cKernel_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tJSMN_cKernel_senseContext( p_that ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tJSMN_cKernel_senseLock( p_that ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tJSMN_cKernel_senseDispatch( p_that ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tJSMN_cKernel_senseDispatchPendingState( p_that ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tJSMN_cKernel_senseKernel( p_that ) \
	  tKernel_eKernel_senseKernel( \
	    )

#else  /* TECSFLOW */
#define tJSMN_cLCD_setFont( p_that, font ) \
	  (p_that)->cLCD.setFont__T( \
 (font) )
#define tJSMN_cLCD_getFontSize( p_that, font, p_width, p_height ) \
	  (p_that)->cLCD.getFontSize__T( \
 (font), (p_width), (p_height) )
#define tJSMN_cLCD_drawString( p_that, str, x, y ) \
	  (p_that)->cLCD.drawString__T( \
 (str), (x), (y) )
#define tJSMN_cLCD_fillRect( p_that, x, y, w, h, color ) \
	  (p_that)->cLCD.fillRect__T( \
 (x), (y), (w), (h), (color) )
#define tJSMN_cLCD_drawLine( p_that, x0, y0, x1, y1 ) \
	  (p_that)->cLCD.drawLine__T( \
 (x0), (y0), (x1), (y1) )
#define tJSMN_cLCD_print( p_that, str ) \
	  (p_that)->cLCD.print__T( \
 (str) )
#define tJSMN_cLCD_puts( p_that, str ) \
	  (p_that)->cLCD.puts__T( \
 (str) )
#define tJSMN_cLCD_clear( p_that ) \
	  (p_that)->cLCD.clear__T( \
 )
#define tJSMN_cLCD_showMessageBox( p_that, title, msg ) \
	  (p_that)->cLCD.showMessageBox__T( \
 (title), (msg) )
#define tJSMN_cFatFile_fopen( p_that, path, mode ) \
	  (p_that)->cFatFile.fopen__T( \
 (path), (mode) )
#define tJSMN_cFatFile_fclose( p_that ) \
	  (p_that)->cFatFile.fclose__T( \
 )
#define tJSMN_cFatFile_fread( p_that, buffer, btr ) \
	  (p_that)->cFatFile.fread__T( \
 (buffer), (btr) )
#define tJSMN_cFatFile_fwrite( p_that, buffer, btw, bw ) \
	  (p_that)->cFatFile.fwrite__T( \
 (buffer), (btw), (bw) )
#define tJSMN_cFatFile_fgets( p_that, buff, btr ) \
	  (p_that)->cFatFile.fgets__T( \
 (buff), (btr) )
#define tJSMN_cFatFile_unlink( p_that, path ) \
	  (p_that)->cFatFile.unlink__T( \
 (path) )
#define tJSMN_cFatFile_fmount( p_that, path, opt ) \
	  (p_that)->cFatFile.fmount__T( \
 (path), (opt) )
#define tJSMN_cButton_isPressed( p_that, button ) \
	  (p_that)->cButton.isPressed__T( \
 (button) )
#define tJSMN_cKernel_sleep( p_that ) \
	  (p_that)->cKernel.sleep__T( \
 )
#define tJSMN_cKernel_sleepTimeout( p_that, timeout ) \
	  (p_that)->cKernel.sleepTimeout__T( \
 (timeout) )
#define tJSMN_cKernel_delay( p_that, delayTime ) \
	  (p_that)->cKernel.delay__T( \
 (delayTime) )
#define tJSMN_cKernel_exitTask( p_that ) \
	  (p_that)->cKernel.exitTask__T( \
 )
#define tJSMN_cKernel_getTaskId( p_that, p_taskId ) \
	  (p_that)->cKernel.getTaskId__T( \
 (p_taskId) )
#define tJSMN_cKernel_rotateReadyQueue( p_that, taskPriority ) \
	  (p_that)->cKernel.rotateReadyQueue__T( \
 (taskPriority) )
#define tJSMN_cKernel_getTime( p_that, p_systemTime ) \
	  (p_that)->cKernel.getTime__T( \
 (p_systemTime) )
#define tJSMN_cKernel_getMicroTime( p_that, p_systemMicroTime ) \
	  (p_that)->cKernel.getMicroTime__T( \
 (p_systemMicroTime) )
#define tJSMN_cKernel_lockCpu( p_that ) \
	  (p_that)->cKernel.lockCpu__T( \
 )
#define tJSMN_cKernel_unlockCpu( p_that ) \
	  (p_that)->cKernel.unlockCpu__T( \
 )
#define tJSMN_cKernel_disableDispatch( p_that ) \
	  (p_that)->cKernel.disableDispatch__T( \
 )
#define tJSMN_cKernel_enableDispatch( p_that ) \
	  (p_that)->cKernel.enableDispatch__T( \
 )
#define tJSMN_cKernel_disableTaskException( p_that ) \
	  (p_that)->cKernel.disableTaskException__T( \
 )
#define tJSMN_cKernel_enableTaskException( p_that ) \
	  (p_that)->cKernel.enableTaskException__T( \
 )
#define tJSMN_cKernel_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  (p_that)->cKernel.changeInterruptPriorityMask__T( \
 (interruptPriority) )
#define tJSMN_cKernel_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  (p_that)->cKernel.getInterruptPriorityMask__T( \
 (p_interruptPriority) )
#define tJSMN_cKernel_exitKernel( p_that ) \
	  (p_that)->cKernel.exitKernel__T( \
 )
#define tJSMN_cKernel_senseContext( p_that ) \
	  (p_that)->cKernel.senseContext__T( \
 )
#define tJSMN_cKernel_senseLock( p_that ) \
	  (p_that)->cKernel.senseLock__T( \
 )
#define tJSMN_cKernel_senseDispatch( p_that ) \
	  (p_that)->cKernel.senseDispatch__T( \
 )
#define tJSMN_cKernel_senseDispatchPendingState( p_that ) \
	  (p_that)->cKernel.senseDispatchPendingState__T( \
 )
#define tJSMN_cKernel_senseKernel( p_that ) \
	  (p_that)->cKernel.senseKernel__T( \
 )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eJSMN */
ER             tJSMN_eJSMN_json_open_skel( const struct tag_sJSMN_VDES *epd);
ER             tJSMN_eJSMN_json_parse_path_skel( const struct tag_sJSMN_VDES *epd, char_t* r_path, char_t* c_path, char_t* e_path, char_t* f_path, int16_t target_num, int16_t btr);
ER             tJSMN_eJSMN_json_parse_arg_skel( const struct tag_sJSMN_VDES *epd, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int8_t* arg_num, int16_t target_num, int16_t btr);
ER             tJSMN_eJSMN_json_parse_cond_skel( const struct tag_sJSMN_VDES *epd, struct cond_obj* pre_cond, struct cond_obj* post_cond, int16_t* pre_cond_num, int16_t* post_cond_num, int16_t target_num, int16_t btr);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tJSMN_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tJSMN_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tJSMN_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tJSMN_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_LEN             tJSMN_ATTR_LEN( p_cellcb )
#define ATTR_TMP_LEN         tJSMN_ATTR_TMP_LEN( p_cellcb )
#define ATTR_key_region      tJSMN_ATTR_key_region( p_cellcb )
#define ATTR_key_cell        tJSMN_ATTR_key_cell( p_cellcb )
#define ATTR_key_entry       tJSMN_ATTR_key_entry( p_cellcb )
#define ATTR_key_function    tJSMN_ATTR_key_function( p_cellcb )
#define ATTR_key_arg         tJSMN_ATTR_key_arg( p_cellcb )
#define ATTR_key_exp         tJSMN_ATTR_key_exp( p_cellcb )
#define ATTR_key_pre_cond    tJSMN_ATTR_key_pre_cond( p_cellcb )
#define ATTR_key_post_cond   tJSMN_ATTR_key_post_cond( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_json_str         tJSMN_VAR_json_str( p_cellcb )
#define VAR_tmp_str          tJSMN_VAR_tmp_str( p_cellcb )
#define VAR_target_path      tJSMN_VAR_target_path( p_cellcb )
#define VAR_counter          tJSMN_VAR_counter( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cLCD_setFont( font ) \
          ((void)p_cellcb, tJSMN_cLCD_setFont( p_cellcb, font ))
#define cLCD_getFontSize( font, p_width, p_height ) \
          ((void)p_cellcb, tJSMN_cLCD_getFontSize( p_cellcb, font, p_width, p_height ))
#define cLCD_drawString( str, x, y ) \
          ((void)p_cellcb, tJSMN_cLCD_drawString( p_cellcb, str, x, y ))
#define cLCD_fillRect( x, y, w, h, color ) \
          ((void)p_cellcb, tJSMN_cLCD_fillRect( p_cellcb, x, y, w, h, color ))
#define cLCD_drawLine( x0, y0, x1, y1 ) \
          ((void)p_cellcb, tJSMN_cLCD_drawLine( p_cellcb, x0, y0, x1, y1 ))
#define cLCD_print( str ) \
          ((void)p_cellcb, tJSMN_cLCD_print( p_cellcb, str ))
#define cLCD_puts( str ) \
          ((void)p_cellcb, tJSMN_cLCD_puts( p_cellcb, str ))
#define cLCD_clear( ) \
          ((void)p_cellcb, tJSMN_cLCD_clear( p_cellcb ))
#define cLCD_showMessageBox( title, msg ) \
          ((void)p_cellcb, tJSMN_cLCD_showMessageBox( p_cellcb, title, msg ))
#define cFatFile_fopen( path, mode ) \
          ((void)p_cellcb, tJSMN_cFatFile_fopen( p_cellcb, path, mode ))
#define cFatFile_fclose( ) \
          ((void)p_cellcb, tJSMN_cFatFile_fclose( p_cellcb ))
#define cFatFile_fread( buffer, btr ) \
          ((void)p_cellcb, tJSMN_cFatFile_fread( p_cellcb, buffer, btr ))
#define cFatFile_fwrite( buffer, btw, bw ) \
          ((void)p_cellcb, tJSMN_cFatFile_fwrite( p_cellcb, buffer, btw, bw ))
#define cFatFile_fgets( buff, btr ) \
          ((void)p_cellcb, tJSMN_cFatFile_fgets( p_cellcb, buff, btr ))
#define cFatFile_unlink( path ) \
          ((void)p_cellcb, tJSMN_cFatFile_unlink( p_cellcb, path ))
#define cFatFile_fmount( path, opt ) \
          ((void)p_cellcb, tJSMN_cFatFile_fmount( p_cellcb, path, opt ))
#define cButton_isPressed( button ) \
          ((void)p_cellcb, tJSMN_cButton_isPressed( p_cellcb, button ))
#define cKernel_sleep( ) \
          ((void)p_cellcb, tJSMN_cKernel_sleep( p_cellcb ))
#define cKernel_sleepTimeout( timeout ) \
          ((void)p_cellcb, tJSMN_cKernel_sleepTimeout( p_cellcb, timeout ))
#define cKernel_delay( delayTime ) \
          ((void)p_cellcb, tJSMN_cKernel_delay( p_cellcb, delayTime ))
#define cKernel_exitTask( ) \
          ((void)p_cellcb, tJSMN_cKernel_exitTask( p_cellcb ))
#define cKernel_getTaskId( p_taskId ) \
          ((void)p_cellcb, tJSMN_cKernel_getTaskId( p_cellcb, p_taskId ))
#define cKernel_rotateReadyQueue( taskPriority ) \
          ((void)p_cellcb, tJSMN_cKernel_rotateReadyQueue( p_cellcb, taskPriority ))
#define cKernel_getTime( p_systemTime ) \
          ((void)p_cellcb, tJSMN_cKernel_getTime( p_cellcb, p_systemTime ))
#define cKernel_getMicroTime( p_systemMicroTime ) \
          ((void)p_cellcb, tJSMN_cKernel_getMicroTime( p_cellcb, p_systemMicroTime ))
#define cKernel_lockCpu( ) \
          ((void)p_cellcb, tJSMN_cKernel_lockCpu( p_cellcb ))
#define cKernel_unlockCpu( ) \
          ((void)p_cellcb, tJSMN_cKernel_unlockCpu( p_cellcb ))
#define cKernel_disableDispatch( ) \
          ((void)p_cellcb, tJSMN_cKernel_disableDispatch( p_cellcb ))
#define cKernel_enableDispatch( ) \
          ((void)p_cellcb, tJSMN_cKernel_enableDispatch( p_cellcb ))
#define cKernel_disableTaskException( ) \
          ((void)p_cellcb, tJSMN_cKernel_disableTaskException( p_cellcb ))
#define cKernel_enableTaskException( ) \
          ((void)p_cellcb, tJSMN_cKernel_enableTaskException( p_cellcb ))
#define cKernel_changeInterruptPriorityMask( interruptPriority ) \
          ((void)p_cellcb, tJSMN_cKernel_changeInterruptPriorityMask( p_cellcb, interruptPriority ))
#define cKernel_getInterruptPriorityMask( p_interruptPriority ) \
          ((void)p_cellcb, tJSMN_cKernel_getInterruptPriorityMask( p_cellcb, p_interruptPriority ))
#define cKernel_exitKernel( ) \
          ((void)p_cellcb, tJSMN_cKernel_exitKernel( p_cellcb ))
#define cKernel_senseContext( ) \
          ((void)p_cellcb, tJSMN_cKernel_senseContext( p_cellcb ))
#define cKernel_senseLock( ) \
          ((void)p_cellcb, tJSMN_cKernel_senseLock( p_cellcb ))
#define cKernel_senseDispatch( ) \
          ((void)p_cellcb, tJSMN_cKernel_senseDispatch( p_cellcb ))
#define cKernel_senseDispatchPendingState( ) \
          ((void)p_cellcb, tJSMN_cKernel_senseDispatchPendingState( p_cellcb ))
#define cKernel_senseKernel( ) \
          ((void)p_cellcb, tJSMN_cKernel_senseKernel( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eJSMN_json_open  tJSMN_eJSMN_json_open
#define eJSMN_json_parse_path tJSMN_eJSMN_json_parse_path
#define eJSMN_json_parse_arg tJSMN_eJSMN_json_parse_arg
#define eJSMN_json_parse_cond tJSMN_eJSMN_json_parse_cond

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tJSMN_N_CELL; (i)++ ){ \
       (p_cb) = &tJSMN_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->counter = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tJSMN_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tJSMN_TECSGENH */
