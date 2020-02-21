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
 * out_int          int32_t [16][64] VAR_out_int     
 * out_double       double64_t [16][32] VAR_out_double  
 * out_char         char_t [16][256] VAR_out_char    
 * cell_entry       char*            VAR_cell_entry  
 *
 * 呼び口関数 #_TCPF_#
 * call port: cTECSInfo signature: nTECSInfo_sTECSInfo context:task
 *   ER             cTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc );
 *   ER             cTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc );
 *   ER             cTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc );
 *   ER             cTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc );
 *   ER             cTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc );
 *   ER             cTECSInfo_findRawEntryDescriptor( const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc );
 *   ER             cTECSInfo_findRawEntryDescriptor_unsafe( const char_t* namespace_path, uint32_t subsc, void** rawDesc );
 * call port: cNSInfo signature: nTECSInfo_sNamespaceInfo context:task optional:true
 *   bool_t     is_cNSInfo_joined()                     check if joined
 *   ER             cNSInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cNSInfo_getNameLength( );
 *   uint32_t       cNSInfo_getNNamespace( );
 *   ER             cNSInfo_getNamespaceInfo( uint32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des );
 *   uint32_t       cNSInfo_getNSignature( );
 *   ER             cNSInfo_getSignatureInfo( uint32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des );
 *   uint32_t       cNSInfo_getNCelltype( );
 *   ER             cNSInfo_getCelltypeInfo( uint32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des );
 *   [dynamic, optional]
 *      void           cNSInfo_set_descriptor( Descriptor( nTECSInfo_sNamespaceInfo ) desc );
 *      void           cNSInfo_unjoin(  );
 * call port: cRegionInfo signature: nTECSInfo_sRegionInfo context:task optional:true
 *   bool_t     is_cRegionInfo_joined()                     check if joined
 *   ER             cRegionInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cRegionInfo_getNameLength( );
 *   uint32_t       cRegionInfo_getNCell( );
 *   ER             cRegionInfo_getCellInfo( uint32_t ith, Descriptor( nTECSInfo_sCellInfo )* des );
 *   uint32_t       cRegionInfo_getNRegion( );
 *   ER             cRegionInfo_getRegionInfo( uint32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des );
 *   [dynamic, optional]
 *      void           cRegionInfo_set_descriptor( Descriptor( nTECSInfo_sRegionInfo ) desc );
 *      void           cRegionInfo_unjoin(  );
 * call port: cCellInfo signature: nTECSInfo_sCellInfo context:task optional:true
 *   bool_t     is_cCellInfo_joined()                     check if joined
 *   ER             cCellInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cCellInfo_getNameLength( );
 *   uint32_t       cCellInfo_getNRawEntryDescriptorInfo( );
 *   ER             cCellInfo_getRawEntryDescriptorInfo( int_t index, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* desc );
 *   void           cCellInfo_getCelltypeInfo( Descriptor( nTECSInfo_sCelltypeInfo )* desc );
 *   void           cCellInfo_getCBP( void** cbp );
 *   void           cCellInfo_getINIBP( void** inibp );
 *   [dynamic, optional]
 *      void           cCellInfo_set_descriptor( Descriptor( nTECSInfo_sCellInfo ) desc );
 *      void           cCellInfo_unjoin(  );
 * call port: cSignatureInfo signature: nTECSInfo_sSignatureInfo context:task optional:true
 *   bool_t     is_cSignatureInfo_joined()                     check if joined
 *   ER             cSignatureInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cSignatureInfo_getNameLength( );
 *   uint32_t       cSignatureInfo_getNFunction( );
 *   ER             cSignatureInfo_getFunctionInfo( uint32_t ith, Descriptor( nTECSInfo_sFunctionInfo )* desc );
 *   [dynamic, optional]
 *      void           cSignatureInfo_set_descriptor( Descriptor( nTECSInfo_sSignatureInfo ) desc );
 *      void           cSignatureInfo_unjoin(  );
 * call port: cCelltypeInfo signature: nTECSInfo_sCelltypeInfo context:task optional:true
 *   bool_t     is_cCelltypeInfo_joined()                     check if joined
 *   ER             cCelltypeInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cCelltypeInfo_getNameLength( );
 *   uint32_t       cCelltypeInfo_getNAttr( );
 *   ER             cCelltypeInfo_getAttrInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNVar( );
 *   ER             cCelltypeInfo_getVarInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNCall( );
 *   ER             cCelltypeInfo_getCallInfo( uint32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNEntry( );
 *   ER             cCelltypeInfo_getEntryInfo( uint32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc );
 *   bool_t         cCelltypeInfo_isSingleton( );
 *   bool_t         cCelltypeInfo_isIDX_is_ID( );
 *   uint32_t       cCelltypeInfo_sizeOfCB( );
 *   uint32_t       cCelltypeInfo_sizeOfINIB( );
 *   [dynamic, optional]
 *      void           cCelltypeInfo_set_descriptor( Descriptor( nTECSInfo_sCelltypeInfo ) desc );
 *      void           cCelltypeInfo_unjoin(  );
 * call port: cVarDeclInfo signature: nTECSInfo_sVarDeclInfo context:task optional:true
 *   bool_t     is_cVarDeclInfo_joined()                     check if joined
 *   ER             cVarDeclInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cVarDeclInfo_getNameLength( );
 *   void           cVarDeclInfo_getLocationInfo( uint32_t* offset, int8_t* place );
 *   void           cVarDeclInfo_getTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   void           cVarDeclInfo_getSizeIsExpr( char_t* expr_str, int32_t max_len );
 *   ER             cVarDeclInfo_getSizeIs( uint32_t* size, const void* p_cb );
 *   [dynamic, optional]
 *      void           cVarDeclInfo_set_descriptor( Descriptor( nTECSInfo_sVarDeclInfo ) desc );
 *      void           cVarDeclInfo_unjoin(  );
 * call port: cTypeInfo signature: nTECSInfo_sTypeInfo context:task optional:true
 *   bool_t     is_cTypeInfo_joined()                     check if joined
 *   ER             cTypeInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cTypeInfo_getNameLength( );
 *   uint32_t       cTypeInfo_getSize( );
 *   int8_t         cTypeInfo_getKind( );
 *   uint32_t       cTypeInfo_getNType( );
 *   ER             cTypeInfo_getTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   uint32_t       cTypeInfo_getNMember( );
 *   ER             cTypeInfo_getMemberInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   [dynamic, optional]
 *      void           cTypeInfo_set_descriptor( Descriptor( nTECSInfo_sTypeInfo ) desc );
 *      void           cTypeInfo_unjoin(  );
 * call port: cREDInfo signature: nTECSInfo_sRawEntryDescriptorInfo context:task optional:true
 *   bool_t     is_cREDInfo_joined()                     check if joined
 *   uint16_t       cREDInfo_getNRawEntryDescriptorInfo( );
 *   ER             cREDInfo_getRawDescriptor( int_t subsc, void** rawDesc );
 *   [dynamic, optional]
 *      void           cREDInfo_set_descriptor( Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) desc );
 *      void           cREDInfo_unjoin(  );
 * call port: cEntryInfo signature: nTECSInfo_sEntryInfo context:task optional:true
 *   bool_t     is_cEntryInfo_joined()                     check if joined
 *   ER             cEntryInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cEntryInfo_getNameLength( );
 *   void           cEntryInfo_getSignatureInfo( Descriptor( nTECSInfo_sSignatureInfo )* desc );
 *   uint32_t       cEntryInfo_getArraySize( );
 *   bool_t         cEntryInfo_isInline( );
 *   [dynamic, optional]
 *      void           cEntryInfo_set_descriptor( Descriptor( nTECSInfo_sEntryInfo ) desc );
 *      void           cEntryInfo_unjoin(  );
 * call port: cTarget1 signature: sTarget1 context:task optional:true
 *   bool_t     is_cTarget1_joined()                     check if joined
 *   int            cTarget1_double( int arg );
 *   [dynamic, optional]
 *      void           cTarget1_set_descriptor( Descriptor( sTarget1 ) desc );
 *      void           cTarget1_unjoin(  );
 * call port: cTarget2 signature: sTarget2 context:task optional:true
 *   bool_t     is_cTarget2_joined()                     check if joined
 *   int            cTarget2_add( int arg1, int arg2 );
 *   [dynamic, optional]
 *      void           cTarget2_set_descriptor( Descriptor( sTarget2 ) desc );
 *      void           cTarget2_unjoin(  );
 * call port: cTarget3 signature: sTarget3 context:task optional:true
 *   bool_t     is_cTarget3_joined()                     check if joined
 *   ER             cTarget3_send( const int8_t* buf, int8_t len );
 *   ER             cTarget3_sendMessage( const char_t* buf, int8_t len );
 *   ER             cTarget3_sendStruct( const struct target_struct* data );
 *   ER             cTarget3_receiveMessage( char_t* buf, int8_t len );
 *   ER             cTarget3_checkER( ER eroor );
 *   [dynamic, optional]
 *      void           cTarget3_set_descriptor( Descriptor( sTarget3 ) desc );
 *      void           cTarget3_unjoin(  );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTECSUnit_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, char_t *expected_signature );
/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eUnit
 * entry port: eUnit
 * signature:  sTECSUnit
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eUnit_main
 * name:         eUnit_main
 * global_name:  tTECSUnit_eUnit_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eUnit_main(CELLIDX idx, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val)
{
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    /* エラー処理コードをここに記述します */
  } /* end if VALID_IDX(idx) */
  puts("");
  printf( "--- TECSUnit ---\n" );
  void *rawDesc;
  Descriptor( sTarget1 ) Target1Desc;
  Descriptor( sTarget2 ) Target2Desc;
  Descriptor( sTarget3 ) Target3Desc;
  sprintf( VAR_cell_entry, "%s.%s", cell_path, entry_path );
  getRawEntryDescriptor( p_cellcb, VAR_cell_entry, &rawDesc, signature_path );

  if( !strcmp(signature_path, "sTarget1" ) ){
    setRawEntryDescriptor( Target1Desc, sTarget1, rawDesc );
    cTarget1_set_descriptor( Target1Desc );
      if( !strcmp( function_path, "double" ) ){
        printf("Call cTarget1_double\n");
        if( exp_val->data.mem_int == cTarget1_double( arguments[0].data.mem_int ) ){
          printf("\nResult：OK\n");
        }else{
          printf("\nResult：NG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sTarget2" ) ){
    setRawEntryDescriptor( Target2Desc, sTarget2, rawDesc );
    cTarget2_set_descriptor( Target2Desc );
      if( !strcmp( function_path, "add" ) ){
        printf("Call cTarget2_add\n");
        if( exp_val->data.mem_int == cTarget2_add( arguments[0].data.mem_int, arguments[1].data.mem_int ) ){
          printf("\nResult：OK\n");
        }else{
          printf("\nResult：NG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sTarget3" ) ){
    setRawEntryDescriptor( Target3Desc, sTarget3, rawDesc );
    cTarget3_set_descriptor( Target3Desc );
      if( !strcmp( function_path, "send" ) ){
        printf("Call cTarget3_send\n");
        if( exp_val->data.mem_er == cTarget3_send( arguments[0].data.mem_int8_t_buf, arguments[1].data.mem_int8_t ) ){
          printf("\nResult：OK\n");
        }else{
          printf("\nResult：NG\n");
        }
      }
      else if( !strcmp( function_path, "sendMessage" ) ){
        printf("Call cTarget3_sendMessage\n");
        if( exp_val->data.mem_er == cTarget3_sendMessage( arguments[0].data.mem_char_t_buf, arguments[1].data.mem_int8_t ) ){
          printf("\nResult：OK\n");
        }else{
          printf("\nResult：NG\n");
        }
      }
      else if( !strcmp( function_path, "sendStruct" ) ){
        printf("Call cTarget3_sendStruct\n");
        if( exp_val->data.mem_er == cTarget3_sendStruct( &arguments[0].data.mem_target_struct_buf ) ){
          printf("\nResult：OK\n");
        }else{
          printf("\nResult：NG\n");
        }
      }
      else if( !strcmp( function_path, "receiveMessage" ) ){
        printf("Call cTarget3_receiveMessage\n");
        if( exp_val->data.mem_er == cTarget3_receiveMessage( VAR_out_char[0], arguments[1].data.mem_int8_t ) ){
          printf("\nResult：OK\n");
        }else{
          printf("\nResult：NG\n");
        }
      }
      else if( !strcmp( function_path, "checkER" ) ){
        printf("Call cTarget3_checkER\n");
        if( exp_val->data.mem_er == cTarget3_checkER( arguments[0].data.mem_er ) ){
          printf("\nResult：OK\n");
        }else{
          printf("\nResult：NG\n");
        }
      }
  }
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, char_t *expected_signature )
{
    Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) rawEntryDescDesc;
    Descriptor( nTECSInfo_sEntryInfo )              entryDesc;
    ER     ercd;
    void   *rawDesc;

    ercd = cTECSInfo_findRawEntryDescriptor( entry_path, &rawEntryDescDesc, &entryDesc );
    if( ercd != E_OK ){
        printf( "call_sTask: error cTECSInfo_findRawEntryDescriptor( entry_path=%s ) = %d\n", entry_path, ercd );
    }
    else {
#define NAME_LEN  (256)
        Descriptor( nTECSInfo_sSignatureInfo )  signatureDesc;
        char_t  name[ NAME_LEN ];

        cREDInfo_set_descriptor( rawEntryDescDesc );
        cEntryInfo_set_descriptor( entryDesc );
        cEntryInfo_getSignatureInfo( &signatureDesc );
        cSignatureInfo_set_descriptor( signatureDesc );
        ercd = cSignatureInfo_getName( name, NAME_LEN );
        if( ercd != E_OK ){
            printf( "getRawEntryDescriptor: error cannot get signature name. expectd: '%s'\n", expected_signature );
        }
        if( strcmp( name, expected_signature ) != 0 ){
            printf( "getRawEntryDescriptor: error signature name '%s' mismatch expecting '%s'\n", name, expected_signature );
            ercd = E_NOEXS;
        }
        cREDInfo_getRawDescriptor( 0, rawEntryDesc );
    }
    return ercd;
}
