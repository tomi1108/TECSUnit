/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * LEN              int16_t          ATTR_LEN        
 * TMP_LEN          int16_t          ATTR_TMP_LEN    
 * key_region       char_t*          ATTR_key_region 
 * key_cell         char_t*          ATTR_key_cell   
 * key_entry        char_t*          ATTR_key_entry  
 * key_function     char_t*          ATTR_key_function
 * key_arg          char_t*          ATTR_key_arg    
 * key_exp          char_t*          ATTR_key_exp    
 * key_pre_cond     char_t*          ATTR_key_pre_cond
 * key_post_cond    char_t*          ATTR_key_post_cond
 * json_str         char_t*          VAR_json_str    
 * tmp_str          char_t*          VAR_tmp_str     
 * target_path      char_t*          VAR_target_path 
 * counter          int              VAR_counter     
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port: cLCD signature: sLCD context:task
 *   ER             cLCD_setFont( lcdfont_t font );
 *   ER             cLCD_getFontSize( lcdfont_t font, int32_t* p_width, int32_t* p_height );
 *   ER             cLCD_drawString( const char* str, int32_t x, int32_t y );
 *   ER             cLCD_fillRect( int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color );
 *   ER             cLCD_drawLine( int32_t x0, int32_t y0, int32_t x1, int32_t y1 );
 *   void           cLCD_print( const char* str );
 *   void           cLCD_puts( const char* str );
 *   void           cLCD_clear( );
 *   void           cLCD_showMessageBox( const char* title, const char* msg );
 * call port: cFatFile signature: sFatFile context:task
 *   FRESULT        cFatFile_fopen( const TCHAR* path, const TCHAR* mode );
 *   FRESULT        cFatFile_fclose( );
 *   FRESULT        cFatFile_fread( TCHAR* buffer, UINT btr );
 *   FRESULT        cFatFile_fwrite( const TCHAR* buffer, UINT btw, UINT* bw );
 *   TCHAR*         cFatFile_fgets( TCHAR* buff, uint_t btr );
 *   FRESULT        cFatFile_unlink( const TCHAR* path );
 *   FRESULT        cFatFile_fmount( const TCHAR* path, BYTE opt );
 * call port: cButton signature: sButton context:task
 *   bool_t         cButton_isPressed( button_t button );
 * call port: cKernel signature: sKernel context:task
 *   ER             cKernel_sleep( );
 *   ER             cKernel_sleepTimeout( TMO timeout );
 *   ER             cKernel_delay( RELTIM delayTime );
 *   ER             cKernel_exitTask( );
 *   ER             cKernel_getTaskId( ID* p_taskId );
 *   ER             cKernel_rotateReadyQueue( PRI taskPriority );
 *   ER             cKernel_getTime( SYSTIM* p_systemTime );
 *   ER             cKernel_getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             cKernel_lockCpu( );
 *   ER             cKernel_unlockCpu( );
 *   ER             cKernel_disableDispatch( );
 *   ER             cKernel_enableDispatch( );
 *   ER             cKernel_disableTaskException( );
 *   ER             cKernel_enableTaskException( );
 *   ER             cKernel_changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             cKernel_getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             cKernel_exitKernel( );
 *   bool_t         cKernel_senseContext( );
 *   bool_t         cKernel_senseLock( );
 *   bool_t         cKernel_senseDispatch( );
 *   bool_t         cKernel_senseDispatchPendingState( );
 *   bool_t         cKernel_senseKernel( );
 *
 * #[</PREAMBLE>]# */

/* �ץ��ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tJSMN_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

#include "tJSMN_tecsgen.h"
#include <stdio.h>
#include <stdlib.h>
#include <jsmn.h>
#include <ff.h>
#define N 128

static int
jsoneq( const char *json, jsmntok_t *tok, const char *s);
static void
strcpy_n( char_t *str1, int num, const char *str2 );
/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eJSMN
 * entry port: eJSMN
 * signature:  sJSMN
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eJSMN_json_open
 * name:         eJSMN_json_open
 * global_name:  tJSMN_eJSMN_json_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_open(CELLIDX idx)
{
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    /* エラー処理コードをここに記述します */
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    int co_flag = 0, co_start, i, j;
    FRESULT res;

    cFatFile_fmount( "", 0 );
    res = cFatFile_fopen( "json/target.json", "r");
    if( res != FR_OK ){
        return -1; // failed to open
    }
    while( cFatFile_fgets( VAR_tmp_str , N ) != NULL ) {
        co_start = 0;
        for( i = 0; i < N -1; i++ ){
            if( VAR_tmp_str[i] == '/' && VAR_tmp_str[i+1] == '/' && !co_flag ){
                VAR_tmp_str[i] = '\0';
                break;
            }
            if( VAR_tmp_str[i] == '/' && VAR_tmp_str[i+1] == '*' && !co_flag ){
                co_start = i;
                co_flag = 1;
            }
            if( VAR_tmp_str[i] == '*' && VAR_tmp_str[i+1] == '/' && co_flag ){
                for(j = 0; VAR_tmp_str[(i+2)+j] != '\0'; j++ ){
                    VAR_tmp_str[co_start + j] = VAR_tmp_str[(i+2)+j];
                }
                VAR_tmp_str[co_start + j] = '\0';
                i = co_start;
                co_flag = 0;
            }
        }
        if( co_flag && co_start > 0 ){
            VAR_tmp_str[co_start] = '\0';
            strcat( VAR_json_str, VAR_tmp_str );
        }
        if( VAR_tmp_str[0] != '\0' && VAR_tmp_str[0] != '\n' && !co_flag ){
            strcat( VAR_json_str, VAR_tmp_str );
        }
    }
    cFatFile_fclose();
    return 0;
}

/* #[<ENTRY_FUNC>]# eJSMN_json_parse_path
 * name:         eJSMN_json_parse_path
 * global_name:  tJSMN_eJSMN_json_parse_path
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_parse_path(CELLIDX idx, char_t* r_path, char_t* c_path, char_t* e_path, char_t* f_path, int16_t target_num, int16_t btr)
{
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    int r, i, j, k, l, m, array_size, arg_size, cond_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */

    sprintf( VAR_target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
        /* Failed to parse */
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], VAR_target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                return -1;
            }
            i = l + 2;
            for( k = 0; k < t[l+1].size; k++ ){
                if( jsoneq( VAR_json_str, &t[i], ATTR_key_region ) == 0 ){
                    strcpy_n( r_path, t[i+1].end-t[i+1].start, VAR_json_str + t[i+1].start );
                    i += 2;
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_cell ) == 0 ){
                    strcpy_n( c_path, t[i+1].end-t[i+1].start, VAR_json_str + t[i+1].start );
                    i += 2;
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_entry ) == 0 ){
                    strcpy_n( e_path, t[i+1].end-t[i+1].start, VAR_json_str + t[i+1].start );
                    i += 2;
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_function ) == 0 ){
                    strcpy_n( f_path, t[i+1].end-t[i+1].start, VAR_json_str + t[i+1].start );
                    i += 2;
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_arg ) == 0 ) {
                    i += 1;
                    arg_size = t[i].size;
                    for( j = 0; j < arg_size; j++ ){
                        i += 1; // iは各要素を指す
                        if( t[i].type == JSMN_ARRAY ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // 配列の中身に注目
                                if( t[i].size > 1 ){
                                  i += t[i].size;
                                }
                            }
                        }
                        if( t[i].type == JSMN_OBJECT ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++){
                                i += 2; // member
                                if( t[i].size > 1 ){
                                  i += t[i].size;
                                }
                            }
                        }
                    }
                    i += 1; // 最後には配列を抜ける
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_exp ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_pre_cond ) == 0 ){
                    i += 1; // t[i] はOBJECTを想定
                    if( t[i].type != JSMN_OBJECT ) return -1;
                    cond_size = t[i].size;
                    for( j = 0; j < cond_size; j++ ){
                      i += 1; // t[i] は変数名
                      i += 1; // t[i] は変数値
                    }
                    i += 1; // 最後にはOBJECTを抜ける
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_post_cond ) == 0 ){
                    i += 1; // t[i] はOBJECTを想定
                    if( t[i].type != JSMN_OBJECT ) return -1;
                    cond_size = t[i].size;
                    for( j = 0; j < cond_size; j++ ){
                      i += 1; // t[i] は変数名
                      i += 1; // t[i] は変数値
                    }
                    i += 1; // 最後にはOBJECTを抜ける
                }else{
                  //  printf( "Unexpected key: %.*s\n", t[i].end-t[i].start, VAR_json_str + t[i].start );
                    return -1;
                }
            }
            return 0;
        }
    }
    return 1;
}

/* #[<ENTRY_FUNC>]# eJSMN_json_parse_arg
 * name:         eJSMN_json_parse_arg
 * global_name:  tJSMN_eJSMN_json_parse_arg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_parse_arg(CELLIDX idx, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int8_t* arg_num, int16_t target_num, int16_t btr)
{
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    int r, i, j, k, l, m, arg_size, array_size, cond_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */

    sprintf( VAR_target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
        /* Failed to parse JSON */
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], VAR_target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                return -1;
            }
            i = l + 2;
            for( k = 0; k < t[l+1].size; k++ ){
                if( jsoneq( VAR_json_str, &t[i], ATTR_key_region ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_cell ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_entry ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_function ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_arg ) == 0 ) {
                    if(t[i+1].type != JSMN_ARRAY){
                        continue; /* We expect groups to be an array of strings */
                    }
                    i += 1;
                    arg_size = t[i].size;
                    *arg_num = arg_size; // 引数の数をTaskMainに渡す
                    for( j = 0; j < arg_size; j++ ){
                        i += 1; // iは各要素を指す
                        if( t[i].type == JSMN_OBJECT ){
                            if( strstr( arguments[j].type, "const struct" ) == NULL ){
                              /* not struct type */
                              return -1;
                            }
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // objの中身Tag名に注目
                                strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }
                        }else if( t[i].type == JSMN_ARRAY ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // 配列の中身に注目
                                strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }
                        }else if( t[i].type == JSMN_STRING ){
                            strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            if( !strcmp(VAR_tmp_str, "[out]") ){
                                if( strstr(arguments[j].type,"const") != NULL ){
                                    // printf("Arg %d is not out arguments\n", j+1 );
                                    return -1;
                                }
                            }else if( !strcmp(arguments[j].type,"const char*") ){
                                strcpy_n( arguments[j].data.mem_char_buf, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }else if( !strcmp(arguments[j].type,"const TCHAR*") ){
                                strcpy_n( arguments[j].data.mem_TCHAR_buf, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }else{
                                /* Arg is not char type */
                                return -1;
                            }
                        }else if( t[i].type == JSMN_PRIMITIVE ){
                            strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            if( !strcmp(arguments[j].type,"int32_t") ){
                                arguments[j].data.mem_int32_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"int") ){
                                arguments[j].data.mem_int = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"bool_t") ){
                                arguments[j].data.mem_bool_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"uint32_t") ){
                                arguments[j].data.mem_uint32_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"button_t") ){
                                arguments[j].data.mem_button_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"lcdfont_t") ){
                                arguments[j].data.mem_lcdfont_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"lcdcolor_t") ){
                                arguments[j].data.mem_lcdcolor_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"ledcolor_t") ){
                                arguments[j].data.mem_ledcolor_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"uint8_t") ){
                                arguments[j].data.mem_uint8_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"uint16_t") ){
                                arguments[j].data.mem_uint16_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"int16_t") ){
                                arguments[j].data.mem_int16_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"UINT") ){
                                arguments[j].data.mem_UINT = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"uint_t") ){
                                arguments[j].data.mem_uint_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"BYTE") ){
                                arguments[j].data.mem_BYTE = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"int8_t") ){
                                arguments[j].data.mem_int8_t = atoi( VAR_tmp_str );
                            }else{
                                /* Arg is not primitive type */
                                return -1;
                            }
                        }else if( t[i].type == JSMN_UNDEFINED ){
                            /* Unexpected value */
                        }else{
                            /* Wrong Type */
                        }
                    }
                    i += 1; // 最後には配列を抜ける
                /* 期待値 */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_exp ) == 0 ){
                    if( t[i+1].type == JSMN_ARRAY ){
                        /* Return type not support char */
                        return -1;
                    }else if( t[i+1].type == JSMN_STRING ){
                        /* Return type not support char */
                        return -1;
                    }else if( t[i+1].type == JSMN_PRIMITIVE ){
                        strcpy_n( VAR_tmp_str, t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                        if( !strcmp( exp_val->type, "void") ){
                          /* ignore */
                        }else if( !strcmp( exp_val->type, "float32_t") ){
                            exp_val->data.mem_float = atof( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "ER") ){
                            exp_val->data.mem_ER = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "bool_t") ){
                            exp_val->data.mem_bool_t = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "int32_t") ){
                            exp_val->data.mem_int32_t = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "FRESULT") ){
                            exp_val->data.mem_FRESULT = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "int") ){
                            exp_val->data.mem_int = atoi( VAR_tmp_str );
                        }
                    }else if( t[i+1].type == JSMN_UNDEFINED ){
                        /* Unexpected Value */
                    }else{
                        /* Wrong Type */
                    }
                    i += 2;
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_pre_cond ) == 0 ){
                    i += 1; // t[i] はOBJECTを想定
                    if( t[i].type != JSMN_OBJECT ) return -1;
                    cond_size = t[i].size;
                    for( j = 0; j < cond_size; j++ ){
                      i += 1; // t[i] は変数名
                      i += 1; // t[i] は変数値
                    }
                    i += 1; // 最後にはOBJECTを抜ける
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_post_cond ) == 0 ){
                    i += 1; // t[i] はOBJECTを想定
                    if( t[i].type != JSMN_OBJECT ) return -1;
                    cond_size = t[i].size;
                    for( j = 0; j < cond_size; j++ ){
                      i += 1; // t[i] は変数名
                      i += 1; // t[i] は変数値
                    }
                    i += 1; // 最後にはOBJECTを抜ける
                }else{
                    /* Unexpected Key */
                    return -1;
                }
            }
            VAR_counter += 1;
            if( VAR_counter >= t[0].size ){
                return 2;
            }
            return 0;
        }
    }
    return 1;
}

/* #[<ENTRY_FUNC>]# eJSMN_json_parse_cond
 * name:         eJSMN_json_parse_cond
 * global_name:  tJSMN_eJSMN_json_parse_cond
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_parse_cond(CELLIDX idx, struct cond_obj* pre_cond, struct cond_obj* post_cond, int16_t* pre_cond_num, int16_t* post_cond_num, int16_t target_num, int16_t btr)
{
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    int r, i, j, k, l, m, array_size, arg_size, cond_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */

    sprintf( VAR_target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
      /* Failed to parse JSON */
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], VAR_target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                return -1;
            }
            i = l + 2;
            for( k = 0; k < t[l+1].size; k++ ){
                if( jsoneq( VAR_json_str, &t[i], ATTR_key_region ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_cell ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_entry ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_function ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_arg ) == 0 ) {
                    i += 1;
                    arg_size = t[i].size;
                    for( j = 0; j < arg_size; j++ ){
                        i += 1; // iは各要素を指す
                        if( t[i].type == JSMN_ARRAY ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // 配列の中身に注目
                                if( t[i].size > 1 ){
                                  i += t[i].size;
                                }
                            }
                        }
                        if( t[i].type == JSMN_OBJECT ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++){
                                i += 2; // member
                                if( t[i].size > 1 ){
                                  i += t[i].size;
                                }
                            }
                        }
                    }
                    i += 1; // 最後には配列を抜ける
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_exp ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_pre_cond ) == 0 ){
                    i += 1; // t[i] はOBJECTを想定
                    if( t[i].type != JSMN_OBJECT ) return -1;
                    cond_size = t[i].size;
                    *pre_cond_num = cond_size;
                    for( j = 0; j < cond_size; j++ ){
                      i += 1; // t[i] は変数名
                      strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                        if( strcmp( VAR_tmp_str, "currentFont" ) ){
                          strcpy_n( pre_cond[j].name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          i += 1; // t[i] は変数値
                          strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          pre_cond[j].data.mem_lcdfont_t = atoi( VAR_tmp_str );
                        }else if( strcmp( VAR_tmp_str, "br" ) ){
                          strcpy_n( pre_cond[j].name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          i += 1; // t[i] は変数値
                          strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          pre_cond[j].data.mem_UINT = atoi( VAR_tmp_str );
                        }else if( strcmp( VAR_tmp_str, "data1" ) ){
                          strcpy_n( pre_cond[j].name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          i += 1; // t[i] は変数値
                          strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          pre_cond[j].data.mem_int8_t = atoi( VAR_tmp_str );
                        }else if( strcmp( VAR_tmp_str, "data2" ) ){
                          strcpy_n( pre_cond[j].name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          i += 1; // t[i] は変数値
                          strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          pre_cond[j].data.mem_int8_t = atoi( VAR_tmp_str );
                        }else{
                          return -1;
                        }
                    }
                    i += 1; // 最後にはOBJECTを抜ける
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_post_cond ) == 0 ){
                    i += 1; // t[i] はOBJECTを想定
                    if( t[i].type != JSMN_OBJECT ) return -1;
                    cond_size = t[i].size;
                    *post_cond_num = cond_size;
                    for( j = 0; j < cond_size; j++ ){
                      i += 1; // t[i] は変数名
                      strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                        if( strcmp( VAR_tmp_str, "currentFont" ) ){
                          strcpy_n( post_cond[j].name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          i += 1; // t[i] は変数値
                          strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          post_cond[j].data.mem_lcdfont_t = atoi( VAR_tmp_str );
                        }else if( strcmp( VAR_tmp_str, "br" ) ){
                          strcpy_n( post_cond[j].name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          i += 1; // t[i] は変数値
                          strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          post_cond[j].data.mem_UINT = atoi( VAR_tmp_str );
                        }else if( strcmp( VAR_tmp_str, "data1" ) ){
                          strcpy_n( post_cond[j].name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          i += 1; // t[i] は変数値
                          strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          post_cond[j].data.mem_int8_t = atoi( VAR_tmp_str );
                        }else if( strcmp( VAR_tmp_str, "data2" ) ){
                          strcpy_n( post_cond[j].name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          i += 1; // t[i] は変数値
                          strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                          post_cond[j].data.mem_int8_t = atoi( VAR_tmp_str );
                        }else{
                          return -1;
                        }
                    }
                    i += 1; // 最後にはOBJECTを抜ける
                }else{
                  //  printf( "Unexpected key: %.*s\n", t[i].end-t[i].start, VAR_json_str + t[i].start );
                    return -1;
                }
            }
            return 0;
        }
    }
    return 1;
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
static int
jsoneq(const char *json, jsmntok_t *tok, const char *s)
{
    if( tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start
        && strncmp(json + tok->start, s, tok->end - tok->start) == 0 ){
        return 0;
    }
    return -1;
}

static void
strcpy_n( char_t *str1, int num, const char *str2 )
{
    int i;
    for(i = 0; i < num; i++){
        str1[i] = str2[i];
    }
    str1[num] = '\0';
}
/* 以下jsmn.cより引用 */
/**
 * Allocates a fresh unused token from the token pool.
 */
static jsmntok_t *jsmn_alloc_token(jsmn_parser *parser,
        jsmntok_t *tokens, size_t num_tokens) {
    jsmntok_t *tok;
    if (parser->toknext >= num_tokens) {
        return NULL;
    }
    tok = &tokens[parser->toknext++];
    tok->start = tok->end = -1;
    tok->size = 0;
#ifdef JSMN_PARENT_LINKS
    tok->parent = -1;
#endif
    return tok;
}

/**
 * Fills token type and boundaries.
 */
static void jsmn_fill_token(jsmntok_t *token, jsmntype_t type,
                            int start, int end) {
    token->type = type;
    token->start = start;
    token->end = end;
    token->size = 0;
}

/**
 * Fills next available token with JSON primitive.
 */
static int jsmn_parse_primitive(jsmn_parser *parser, const char *js,
        size_t len, jsmntok_t *tokens, size_t num_tokens) {
    jsmntok_t *token;
    int start;

    start = parser->pos;

    for (; parser->pos < len && js[parser->pos] != '\0'; parser->pos++) {
        switch (js[parser->pos]) {
#ifndef JSMN_STRICT
            /* In strict mode primitive must be followed by "," or "}" or "]" */
            case ':':
#endif
            case '\t' : case '\r' : case '\n' : case ' ' :
            case ','  : case ']'  : case '}' :
                goto found;
        }
        if (js[parser->pos] < 32 || js[parser->pos] >= 127) {
            parser->pos = start;
            return JSMN_ERROR_INVAL;
        }
    }
#ifdef JSMN_STRICT
    /* In strict mode primitive must be followed by a comma/object/array */
    parser->pos = start;
    return JSMN_ERROR_PART;
#endif

found:
    if (tokens == NULL) {
        parser->pos--;
        return 0;
    }
    token = jsmn_alloc_token(parser, tokens, num_tokens);
    if (token == NULL) {
        parser->pos = start;
        return JSMN_ERROR_NOMEM;
    }
    jsmn_fill_token(token, JSMN_PRIMITIVE, start, parser->pos);
#ifdef JSMN_PARENT_LINKS
    token->parent = parser->toksuper;
#endif
    parser->pos--;
    return 0;
}

/**
 * Fills next token with JSON string.
 */
static int jsmn_parse_string(jsmn_parser *parser, const char *js,
        size_t len, jsmntok_t *tokens, size_t num_tokens) {
    jsmntok_t *token;

    int start = parser->pos;

    parser->pos++;

    /* Skip starting quote */
    for (; parser->pos < len && js[parser->pos] != '\0'; parser->pos++) {
        char c = js[parser->pos];

        /* Quote: end of string */
        if (c == '\"') {
            if (tokens == NULL) {
                return 0;
            }
            token = jsmn_alloc_token(parser, tokens, num_tokens);
            if (token == NULL) {
                parser->pos = start;
                return JSMN_ERROR_NOMEM;
            }
            jsmn_fill_token(token, JSMN_STRING, start+1, parser->pos);
#ifdef JSMN_PARENT_LINKS
            token->parent = parser->toksuper;
#endif
            return 0;
        }

        /* Backslash: Quoted symbol expected */
        if (c == '\\' && parser->pos + 1 < len) {
            int i;
            parser->pos++;
            switch (js[parser->pos]) {
                /* Allowed escaped symbols */
                case '"': case '/' : case '\\' : case 'b' :
                case 'f' : case 'r' : case 'n'  : case 't' :
                    break;
                /* Allows escaped symbol */
                case 'u':
                    parser->pos++;
                    for(i = 0; i < 4 && parser->pos < len && js[parser->pos] != '\0'; i++) {
                        /* If it isnot a hex character we have an error */
                        if(!((js[parser->pos] >= 48 && js[parser->pos] <= 57) || /* 0-9 */
                                    (js[parser->pos] >= 65 && js[parser->pos] <= 70) || /* A-F */
                                    (js[parser->pos] >= 97 && js[parser->pos] <= 102))) { /* a-f */
                            parser->pos = start;
                            return JSMN_ERROR_INVAL;
                        }
                        parser->pos++;
                    }
                    parser->pos--;
                    break;
                /* Unexpected symbol */
                default:
                    parser->pos = start;
                    return JSMN_ERROR_INVAL;
            }
        }
    }
    parser->pos = start;
    return JSMN_ERROR_PART;
}

/**
 * Parse JSON string and fill tokens.
 */
int jsmn_parse(jsmn_parser *parser, const char *js, size_t len,
        jsmntok_t *tokens, unsigned int num_tokens) {
    int r;
    int i;
    jsmntok_t *token;
    int count = parser->toknext;

    for (; parser->pos < len && js[parser->pos] != '\0'; parser->pos++) {
        char c;
        jsmntype_t type;

        c = js[parser->pos];
        switch (c) {
            case '{': case '[':
                count++;
                if (tokens == NULL) {
                    break;
                }
                token = jsmn_alloc_token(parser, tokens, num_tokens);
                if (token == NULL)
                    return JSMN_ERROR_NOMEM;
                if (parser->toksuper != -1) {
                    tokens[parser->toksuper].size++;
#ifdef JSMN_PARENT_LINKS
                    token->parent = parser->toksuper;
#endif
                }
                token->type = (c == '{' ? JSMN_OBJECT : JSMN_ARRAY);
                token->start = parser->pos;
                parser->toksuper = parser->toknext - 1;
                break;
            case '}': case ']':
                if (tokens == NULL)
                    break;
                type = (c == '}' ? JSMN_OBJECT : JSMN_ARRAY);
#ifdef JSMN_PARENT_LINKS
                if (parser->toknext < 1) {
                    return JSMN_ERROR_INVAL;
                }
                token = &tokens[parser->toknext - 1];
                for (;;) {
                    if (token->start != -1 && token->end == -1) {
                        if (token->type != type) {
                            return JSMN_ERROR_INVAL;
                        }
                        token->end = parser->pos + 1;
                        parser->toksuper = token->parent;
                        break;
                    }
                    if (token->parent == -1) {
                        if(token->type != type || parser->toksuper == -1) {
                            return JSMN_ERROR_INVAL;
                        }
                        break;
                    }
                    token = &tokens[token->parent];
                }
#else
                for (i = parser->toknext - 1; i >= 0; i--) {
                    token = &tokens[i];
                    if (token->start != -1 && token->end == -1) {
                        if (token->type != type) {
                            return JSMN_ERROR_INVAL;
                        }
                        parser->toksuper = -1;
                        token->end = parser->pos + 1;
                        break;
                    }
                }
                /* Error if unmatched closing bracket */
                if (i == -1) return JSMN_ERROR_INVAL;
                for (; i >= 0; i--) {
                    token = &tokens[i];
                    if (token->start != -1 && token->end == -1) {
                        parser->toksuper = i;
                        break;
                    }
                }
#endif
                break;
            case '\"':
                r = jsmn_parse_string(parser, js, len, tokens, num_tokens);
                if (r < 0) return r;
                count++;
                if (parser->toksuper != -1 && tokens != NULL)
                    tokens[parser->toksuper].size++;
                break;
            case '\t' : case '\r' : case '\n' : case ' ':
                break;
            case ':':
                parser->toksuper = parser->toknext - 1;
                break;
            case ',':
                if (tokens != NULL && parser->toksuper != -1 &&
                        tokens[parser->toksuper].type != JSMN_ARRAY &&
                        tokens[parser->toksuper].type != JSMN_OBJECT) {
#ifdef JSMN_PARENT_LINKS
                    parser->toksuper = tokens[parser->toksuper].parent;
#else
                    for (i = parser->toknext - 1; i >= 0; i--) {
                        if (tokens[i].type == JSMN_ARRAY || tokens[i].type == JSMN_OBJECT) {
                            if (tokens[i].start != -1 && tokens[i].end == -1) {
                                parser->toksuper = i;
                                break;
                            }
                        }
                    }
#endif
                }
                break;
#ifdef JSMN_STRICT
            /* In strict mode primitives are: numbers and booleans */
            case '-': case '0': case '1' : case '2': case '3' : case '4':
            case '5': case '6': case '7' : case '8': case '9':
            case 't': case 'f': case 'n' :
                /* And they must not be keys of the object */
                if (tokens != NULL && parser->toksuper != -1) {
                    jsmntok_t *t = &tokens[parser->toksuper];
                    if (t->type == JSMN_OBJECT ||
                            (t->type == JSMN_STRING && t->size != 0)) {
                        return JSMN_ERROR_INVAL;
                    }
                }
#else
            /* In non-strict mode every unquoted value is a primitive */
            default:
#endif
                r = jsmn_parse_primitive(parser, js, len, tokens, num_tokens);
                if (r < 0) return r;
                count++;
                if (parser->toksuper != -1 && tokens != NULL)
                    tokens[parser->toksuper].size++;
                break;

#ifdef JSMN_STRICT
            /* Unexpected char in strict mode */
            default:
                return JSMN_ERROR_INVAL;
#endif
        }
    }

    if (tokens != NULL) {
        for (i = parser->toknext - 1; i >= 0; i--) {
            /* Unmatched opened object or array */
            if (tokens[i].start != -1 && tokens[i].end == -1) {
                return JSMN_ERROR_PART;
            }
        }
    }

    return count;
}

/**
 * Creates a new parser based over a given  buffer with an array of tokens
 * available.
 */
void jsmn_init(jsmn_parser *parser) {
    parser->pos = 0;
    parser->toknext = 0;
    parser->toksuper = -1;
}


