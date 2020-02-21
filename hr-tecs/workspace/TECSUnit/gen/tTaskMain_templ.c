/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tTaskMain_templ.c => src/tTaskMain.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * NAME_LEN         int16_t          ATTR_NAME_LEN   
 * DIM              int16_t          ATTR_DIM        
 * N_TARGET         int16_t          ATTR_N_TARGET   
 * data             void*            VAR_data        
 * target_path      char_t*          VAR_target_path 
 * cell_path        char_t*          VAR_cell_path   
 * flag_find_cell   bool_t           VAR_flag_find_cell
 * region_path      char_t*          VAR_region_path 
 * region_cell_path char_t*          VAR_region_cell_path
 * celltype_path    char_t*          VAR_celltype_path
 * var_path         char_t*          VAR_var_path    
 * entry_path       char_t*          VAR_entry_path  
 * entry_path_tmp   char_t*          VAR_entry_path_tmp
 * flag_find_entry  bool_t           VAR_flag_find_entry
 * signature_path   char_t*          VAR_signature_path
 * function_path    char_t*          VAR_function_path
 * function_path_tmp char_t*          VAR_function_path_tmp
 * flag_find_func   bool_t           VAR_flag_find_func
 * arg_name         char_t [8][64]   VAR_arg_name    
 * arg_type         char_t [8][64]   VAR_arg_type    
 * return_type      char_t*          VAR_return_type 
 * n_arg            uint8_t          VAR_n_arg       
 * n_arg_json       uint8_t          VAR_n_arg_json  
 * arg_struct       struct tecsunit_obj*  VAR_arg_struct  
 * exp_struct       struct tecsunit_obj  VAR_exp_struct  
 * pre_cond         struct cond_obj*  VAR_pre_cond    
 * post_cond        struct cond_obj*  VAR_post_cond   
 * n_pre_cond       int16_t          VAR_n_pre_cond  
 * n_post_cond      int16_t          VAR_n_post_cond 
 *
 * 呼び口関数 #_TCPF_#
 * call port: cUnit signature: sTECSUnit context:task
 *   ER             cUnit_main( const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val, void* data );
 * call port: cJSMN signature: sJSMN context:task
 *   ER             cJSMN_json_open( );
 *   ER             cJSMN_json_parse_path( char_t* r_path, char_t* c_path, char_t* e_path, char_t* f_path, int16_t target_num, int16_t btr );
 *   ER             cJSMN_json_parse_arg( struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int8_t* arg_num, int16_t target_num, int16_t btr );
 *   ER             cJSMN_json_parse_cond( struct cond_obj* pre_cond, struct cond_obj* post_cond, int16_t* pre_cond_num, int16_t* post_cond_num, int16_t target_num, int16_t btr );
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
 * call port: cButton signature: sButton context:task
 *   bool_t         cButton_isPressed( button_t button );
 * call port: cFatFile signature: sFatFile context:task
 *   FRESULT        cFatFile_fopen( const TCHAR* path, const TCHAR* mode );
 *   FRESULT        cFatFile_fclose( );
 *   FRESULT        cFatFile_fread( TCHAR* buffer, UINT btr );
 *   FRESULT        cFatFile_fwrite( const TCHAR* buffer, UINT btw, UINT* bw );
 *   TCHAR*         cFatFile_fgets( TCHAR* buff, uint_t btr );
 *   FRESULT        cFatFile_unlink( const TCHAR* path );
 *   FRESULT        cFatFile_fmount( const TCHAR* path, BYTE opt );
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
 * call port: cFunctionInfo signature: nTECSInfo_sFunctionInfo context:task optional:true
 *   bool_t     is_cFunctionInfo_joined()                     check if joined
 *   ER             cFunctionInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cFunctionInfo_getNameLength( );
 *   void           cFunctionInfo_getReturnTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   uint32_t       cFunctionInfo_getNParam( );
 *   ER             cFunctionInfo_getParamInfo( uint32_t ith, Descriptor( nTECSInfo_sParamInfo )* param );
 *   [dynamic, optional]
 *      void           cFunctionInfo_set_descriptor( Descriptor( nTECSInfo_sFunctionInfo ) desc );
 *      void           cFunctionInfo_unjoin(  );
 * call port: cParamInfo signature: nTECSInfo_sParamInfo context:task optional:true
 *   bool_t     is_cParamInfo_joined()                     check if joined
 *   ER             cParamInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cParamInfo_getNameLength( );
 *   ER             cParamInfo_getTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   ER             cParamInfo_getDir( int8_t* dir );
 *   [dynamic, optional]
 *      void           cParamInfo_set_descriptor( Descriptor( nTECSInfo_sParamInfo ) desc );
 *      void           cParamInfo_unjoin(  );
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
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTaskMain_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tTaskMain_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
