/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * LEN              int16_t          ATTR_LEN        
 * TMP_LEN          int16_t          ATTR_TMP_LEN    
 * key_cell         char_t*          ATTR_key_cell   
 * key_entry        char_t*          ATTR_key_entry  
 * key_function     char_t*          ATTR_key_function
 * key_arg          char_t*          ATTR_key_arg    
 * key_exp          char_t*          ATTR_key_exp    
 * json_str         char_t*          VAR_json_str    
 * tmp_str          char_t*          VAR_tmp_str     
 * counter          int              VAR_counter     
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tJSMN_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

#include "tJSMN_tecsgen.h"
#include <stdio.h>
#include <jsmn.h>
#define N 128

static int
jsoneq( const char *json, jsmntok_t *tok, const char *s);
static void
strcpy_n( char_t *str1, int num, const char *str2 );
/* 受け口関数 #_TEPF_# */
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
    char str_tmp[N];
    int co_flag = 0, co_start, i, j;
    FILE *fp;

    if( ( fp = fopen("target.json", "r") ) == NULL ){
        printf("Failed to open\n");
        return -1;
    }
    while( fgets( str_tmp , N, fp ) != NULL ) {
        co_start = 0;
        for( i = 0; i < N -1; i++ ){
            if( str_tmp[i] == '/' && str_tmp[i+1] == '/' && !co_flag ){
                str_tmp[i] = '\0';
                break;
            }
            if( str_tmp[i] == '/' && str_tmp[i+1] == '*' && !co_flag ){
                co_start = i;
                co_flag = 1;
            }
            if( str_tmp[i] == '*' && str_tmp[i+1] == '/' && co_flag ){
                for(j = 0; str_tmp[(i+2)+j] != '\0'; j++ ){
                    str_tmp[co_start + j] = str_tmp[(i+2)+j];
                }
                str_tmp[co_start + j] = '\0';
                i = co_start;
                co_flag = 0;
            }
        }
        if( co_flag && co_start > 0 ){
            str_tmp[co_start] = '\0';
            strcat( VAR_json_str, str_tmp );
        }
        if( str_tmp[0] != '\0' && str_tmp[0] != '\n' && !co_flag ){
            strcat( VAR_json_str, str_tmp );
        }
    }
    fclose( fp );
    return 0;
}

/* #[<ENTRY_FUNC>]# eJSMN_json_parse_path
 * name:         eJSMN_json_parse_path
 * global_name:  tJSMN_eJSMN_json_parse_path
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_parse_path(CELLIDX idx, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr)
{
ER    ercd = E_OK;
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    int r, i, j, k, l, m, array_size, arg_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */
    char target_path[10];
    char str_tmp[8];

    sprintf( target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
        printf( "Failed to parse JSON: %d\n", r );
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        printf( "Object expected\n" );
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                printf("Object expected for target\n");
                return -1;
            }
            i = l + 2;
            for( k = 0; k < t[l+1].size; k++ ){
                if( jsoneq( VAR_json_str, &t[i], ATTR_key_cell ) == 0 ){
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
                }else{
                    printf( "Unexpected key: %.*s\n", t[i].end-t[i].start, VAR_json_str + t[i].start );
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
eJSMN_json_parse_arg(CELLIDX idx, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr)
{
  ER    ercd = E_OK;
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    int r, i, j, k, l, m, arg_size, array_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */
    char target_path[10];

    sprintf( target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
        printf( "Failed to parse JSON: %d\n", r );
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        printf( "Object expected\n" );
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                printf("Object expected for target\n");
                return -1;
            }
            i = l + 2;
            for( k = 0; k < t[l+1].size; k++ ){
                if( jsoneq( VAR_json_str, &t[i], ATTR_key_cell ) == 0 ){
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
                              printf("Arg %d is not struct type\n", j+1 );
                              return -1;
                            }
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // objの中身Tag名に注目
                                strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                                if( !strcmp(arguments[j].type,"const struct target_struct*") ){
                                    if( !strcmp( VAR_tmp_str, "number" ) ){
                                        i += 1;
                                        strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                                        arguments[j].data.mem_target_struct_buf.number = atoi( VAR_tmp_str );
                                    }else if( !strcmp( VAR_tmp_str, "name" ) ){
                                        i += 1;
                                        strcpy_n( arguments[j].data.mem_target_struct_buf.name, t[i].end - t[i].start, VAR_json_str + t[i].start );
                                    }else{
                                       printf("Member %s cannot found \n", VAR_tmp_str );
                                       return -1;
                                    }
                                }else{
                                  printf("Struct %s cannot found\n", arguments[j].type);
                                  return -1;
                                }
                            }
                        }else if( t[i].type == JSMN_ARRAY ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // 配列の中身に注目
                                strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                                if( !strcmp(arguments[j].type,"const int8_t*") ){
                                    arguments[j].data.mem_int8_t_buf[m] = atoi( VAR_tmp_str );
                                }else if( !strcmp(arguments[j].type,"char_t*") ){
                                }else{
                                    printf("Arg %d is not array type\n", j+1 );
                                    return -1;
                                }
                            }
                        }else if( t[i].type == JSMN_STRING ){
                            strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            if( !strcmp(VAR_tmp_str, "[out]") ){
                                if( strstr(arguments[j].type,"const") != NULL ){
                                    printf("Arg %d is not out arguments\n", j+1 );
                                    return -1;
                                }
                            }else if( !strcmp(arguments[j].type,"const char_t*") ){
                                strcpy_n( arguments[j].data.mem_char_t_buf, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }else{
                                printf("Arg %d is not string type\n", j+1 );
                                return -1;
                            }
                        }else if( t[i].type == JSMN_PRIMITIVE ){
                            strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            if( !strcmp(arguments[j].type,"int") ){
                                arguments[j].data.mem_int = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"int8_t") ){
                                arguments[j].data.mem_int8_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"ER") ){
                                arguments[j].data.mem_er = atoi( VAR_tmp_str );
                            }else{
                                printf("Arg %d is not numeric type\n", j+1 );
                                return -1;
                            }
                        }else if( t[i].type == JSMN_UNDEFINED ){
                            printf( "Unexpected value: %.*s\n", t[i].end - t[i].start, VAR_json_str + t[i].start );
                        }else{
                            printf( "Wrong Type: %.*s\n", t[i].end - t[i].start, VAR_json_str + t[i].start );
                        }
                    }
                    i += 1; // 最後には配列を抜ける
                /* 期待値 */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_exp ) == 0 ){
                    if( t[i+1].type == JSMN_ARRAY ){
                        printf("Return type is not support 'char' \n", j+1 );
                        return -1;
                    }else if( t[i+1].type == JSMN_STRING ){
                        printf("Return type is not support 'char' \n", j+1 );
                        return -1;
                    }else if( t[i+1].type == JSMN_PRIMITIVE ){
                        strcpy_n( VAR_tmp_str, t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                        if( !strcmp( exp_val->type, "int") ){
                            exp_val->data.mem_int = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "ER") ){
                            exp_val->data.mem_er = atoi( VAR_tmp_str );
                        }
                    }else if( t[i+1].type == JSMN_UNDEFINED ){
                        printf( "Unexpected value: %.*s\n", t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                    }else{
                        printf( "Wrong Type: %.*s\n", t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                    }
                    i += 2;
                }else{
                    printf( "Unexpected key: %.*s\n", t[i].end-t[i].start, VAR_json_str + t[i].start );
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

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
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
