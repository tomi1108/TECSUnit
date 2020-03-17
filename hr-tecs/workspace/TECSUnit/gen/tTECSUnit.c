/*
 * ¤³¤Î¥Õ¥¡¥¤¥ë¤Ï tecsgen ¤Ë¤è¤ê¼«Æ°À¸À®¤µ¤ì¤Þ¤·¤¿
 * ¤³¤Î¥Õ¥¡¥¤¥ë¤òÊÔ½¸¤·¤Æ»ÈÍÑ¤¹¤ë¤³¤È¤Ï¡¢°Õ¿Þ¤µ¤ì¤Æ¤¤¤Þ¤»¤ó
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ¤«¤é #[</...>]# ¤Ç°Ï¤Þ¤ì¤¿¥³¥á¥ó¥È¤ÏÊÔ½¸¤·¤Ê¤¤¤Ç¤¯¤À¤µ¤¤
 * tecsmerge ¤Ë¤è¤ë¥Þ¡¼¥¸¤Ë»ÈÍÑ¤µ¤ì¤Þ¤¹
 *
 * Â°À­¥¢¥¯¥»¥¹¥Þ¥¯¥í #_CAAM_#
 * LEN              int16_t          ATTR_LEN        
 * data             void*            VAR_data        
 * cell_entry       char*            VAR_cell_entry  
 *
 * ¸Æ¤Ó¸ý´Ø¿ô #_TCPF_#
 * call port: cLCD_tmp signature: sLCD context:task
 *   ER             cLCD_tmp_setFont( lcdfont_t font );
 *   ER             cLCD_tmp_getFontSize( lcdfont_t font, int32_t* p_width, int32_t* p_height );
 *   ER             cLCD_tmp_drawString( const char* str, int32_t x, int32_t y );
 *   ER             cLCD_tmp_fillRect( int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color );
 *   ER             cLCD_tmp_drawLine( int32_t x0, int32_t y0, int32_t x1, int32_t y1 );
 *   void           cLCD_tmp_print( const char* str );
 *   void           cLCD_tmp_puts( const char* str );
 *   void           cLCD_tmp_clear( );
 *   void           cLCD_tmp_showMessageBox( const char* title, const char* msg );
 * call port: cButton_tmp signature: sButton context:task
 *   bool_t         cButton_tmp_isPressed( button_t button );
 * call port: cKernel_tmp signature: sKernel context:task
 *   ER             cKernel_tmp_sleep( );
 *   ER             cKernel_tmp_sleepTimeout( TMO timeout );
 *   ER             cKernel_tmp_delay( RELTIM delayTime );
 *   ER             cKernel_tmp_exitTask( );
 *   ER             cKernel_tmp_getTaskId( ID* p_taskId );
 *   ER             cKernel_tmp_rotateReadyQueue( PRI taskPriority );
 *   ER             cKernel_tmp_getTime( SYSTIM* p_systemTime );
 *   ER             cKernel_tmp_getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             cKernel_tmp_lockCpu( );
 *   ER             cKernel_tmp_unlockCpu( );
 *   ER             cKernel_tmp_disableDispatch( );
 *   ER             cKernel_tmp_enableDispatch( );
 *   ER             cKernel_tmp_disableTaskException( );
 *   ER             cKernel_tmp_enableTaskException( );
 *   ER             cKernel_tmp_changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             cKernel_tmp_getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             cKernel_tmp_exitKernel( );
 *   bool_t         cKernel_tmp_senseContext( );
 *   bool_t         cKernel_tmp_senseLock( );
 *   bool_t         cKernel_tmp_senseDispatch( );
 *   bool_t         cKernel_tmp_senseDispatchPendingState( );
 *   bool_t         cKernel_tmp_senseKernel( );
 * call port: cFatFile_tmp signature: sFatFile context:task
 *   FRESULT        cFatFile_tmp_fopen( const TCHAR* path, const TCHAR* mode );
 *   FRESULT        cFatFile_tmp_fclose( );
 *   FRESULT        cFatFile_tmp_fread( TCHAR* buffer, UINT btr );
 *   FRESULT        cFatFile_tmp_fwrite( const TCHAR* buffer, UINT btw, UINT* bw );
 *   TCHAR*         cFatFile_tmp_fgets( TCHAR* buff, uint_t btr );
 *   FRESULT        cFatFile_tmp_unlink( const TCHAR* path );
 *   FRESULT        cFatFile_tmp_fmount( const TCHAR* path, BYTE opt );
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
 * call port: cUltrasonicSensor signature: sUltrasonicSensor context:task optional:true
 *   bool_t     is_cUltrasonicSensor_joined()                     check if joined
 *   int16_t        cUltrasonicSensor_getDistance( );
 *   bool_t         cUltrasonicSensor_listen( );
 *   void           cUltrasonicSensor_initializePort( );
 *   [dynamic, optional]
 *      void           cUltrasonicSensor_set_descriptor( Descriptor( sUltrasonicSensor ) desc );
 *      void           cUltrasonicSensor_unjoin(  );
 * call port: cColorSensor signature: sColorSensor context:task optional:true
 *   bool_t     is_cColorSensor_joined()                     check if joined
 *   colorid_t      cColorSensor_getColor( );
 *   uint8_t        cColorSensor_getReflect( );
 *   uint8_t        cColorSensor_getAmbient( );
 *   void           cColorSensor_initializePort( );
 *   void           cColorSensor_getRGBRaw( uint16_t* r, uint16_t* g, uint16_t* b );
 *   [dynamic, optional]
 *      void           cColorSensor_set_descriptor( Descriptor( sColorSensor ) desc );
 *      void           cColorSensor_unjoin(  );
 * call port: cTouchSensor signature: sTouchSensor context:task optional:true
 *   bool_t     is_cTouchSensor_joined()                     check if joined
 *   bool_t         cTouchSensor_isPressed( );
 *   void           cTouchSensor_initializePort( );
 *   [dynamic, optional]
 *      void           cTouchSensor_set_descriptor( Descriptor( sTouchSensor ) desc );
 *      void           cTouchSensor_unjoin(  );
 * call port: cGyroSensor signature: sGyroSensor context:task optional:true
 *   bool_t     is_cGyroSensor_joined()                     check if joined
 *   int16_t        cGyroSensor_getAngle( );
 *   int16_t        cGyroSensor_getRate( );
 *   ER             cGyroSensor_reset( );
 *   float32_t      cGyroSensor_calibrate( int32_t times );
 *   void           cGyroSensor_initializePort( );
 *   [dynamic, optional]
 *      void           cGyroSensor_set_descriptor( Descriptor( sGyroSensor ) desc );
 *      void           cGyroSensor_unjoin(  );
 * call port: cMotor signature: sMotor context:task optional:true
 *   bool_t     is_cMotor_joined()                     check if joined
 *   ER_UINT        cMotor_getType( );
 *   int32_t        cMotor_getCounts( );
 *   int            cMotor_getPower( );
 *   ER             cMotor_resetCounts( );
 *   ER             cMotor_setPower( int power );
 *   ER             cMotor_stop( bool_t brake );
 *   ER             cMotor_rotate( int degrees, uint32_t speed_abs, bool_t blocking );
 *   void           cMotor_initializePort( int32_t type );
 *   [dynamic, optional]
 *      void           cMotor_set_descriptor( Descriptor( sMotor ) desc );
 *      void           cMotor_unjoin(  );
 * call port: cButton signature: sButton context:task optional:true
 *   bool_t     is_cButton_joined()                     check if joined
 *   bool_t         cButton_isPressed( button_t button );
 *   [dynamic, optional]
 *      void           cButton_set_descriptor( Descriptor( sButton ) desc );
 *      void           cButton_unjoin(  );
 * call port: cLCD signature: sLCD context:task optional:true
 *   bool_t     is_cLCD_joined()                     check if joined
 *   ER             cLCD_setFont( lcdfont_t font );
 *   ER             cLCD_getFontSize( lcdfont_t font, int32_t* p_width, int32_t* p_height );
 *   ER             cLCD_drawString( const char* str, int32_t x, int32_t y );
 *   ER             cLCD_fillRect( int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color );
 *   ER             cLCD_drawLine( int32_t x0, int32_t y0, int32_t x1, int32_t y1 );
 *   void           cLCD_print( const char* str );
 *   void           cLCD_puts( const char* str );
 *   void           cLCD_clear( );
 *   void           cLCD_showMessageBox( const char* title, const char* msg );
 *   [dynamic, optional]
 *      void           cLCD_set_descriptor( Descriptor( sLCD ) desc );
 *      void           cLCD_unjoin(  );
 * call port: cLED signature: sLED context:task optional:true
 *   bool_t     is_cLED_joined()                     check if joined
 *   ER             cLED_setColor( ledcolor_t color );
 *   ER             cLED_off( );
 *   [dynamic, optional]
 *      void           cLED_set_descriptor( Descriptor( sLED ) desc );
 *      void           cLED_unjoin(  );
 * call port: cBattery signature: sBattery context:task optional:true
 *   bool_t     is_cBattery_joined()                     check if joined
 *   int            cBattery_current_mA( );
 *   int            cBattery_voltage_mV( );
 *   [dynamic, optional]
 *      void           cBattery_set_descriptor( Descriptor( sBattery ) desc );
 *      void           cBattery_unjoin(  );
 * call port: cSpeaker signature: sSpeaker context:task optional:true
 *   bool_t     is_cSpeaker_joined()                     check if joined
 *   ER             cSpeaker_setVolume( uint8_t volume );
 *   ER             cSpeaker_playTone( uint16_t frequency, int32_t duration );
 *   ER             cSpeaker_stop( );
 *   [dynamic, optional]
 *      void           cSpeaker_set_descriptor( Descriptor( sSpeaker ) desc );
 *      void           cSpeaker_unjoin(  );
 * call port: cBalancer signature: sBalancer context:task optional:true
 *   bool_t     is_cBalancer_joined()                     check if joined
 *   void           cBalancer_control( int16_t forward, int16_t turn, int16_t gyro, int16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, int16_t battery, int8_t* pwm_l, int8_t* pwm_r, int32_t backlashhalf );
 *   void           cBalancer_init( );
 *   [dynamic, optional]
 *      void           cBalancer_set_descriptor( Descriptor( sBalancer ) desc );
 *      void           cBalancer_unjoin(  );
 * call port: cSharedMemory signature: sSharedMemory context:task optional:true
 *   bool_t     is_cSharedMemory_joined()                     check if joined
 *   void           cSharedMemory_putVal( int32_t index, int32_t val );
 *   int32_t        cSharedMemory_getVal( int32_t index );
 *   int32_t        cSharedMemory_getSize( );
 *   [dynamic, optional]
 *      void           cSharedMemory_set_descriptor( Descriptor( sSharedMemory ) desc );
 *      void           cSharedMemory_unjoin(  );
 * call port: cFatFile signature: sFatFile context:task optional:true
 *   bool_t     is_cFatFile_joined()                     check if joined
 *   FRESULT        cFatFile_fopen( const TCHAR* path, const TCHAR* mode );
 *   FRESULT        cFatFile_fclose( );
 *   FRESULT        cFatFile_fread( TCHAR* buffer, UINT btr );
 *   FRESULT        cFatFile_fwrite( const TCHAR* buffer, UINT btw, UINT* bw );
 *   TCHAR*         cFatFile_fgets( TCHAR* buff, uint_t btr );
 *   FRESULT        cFatFile_unlink( const TCHAR* path );
 *   FRESULT        cFatFile_fmount( const TCHAR* path, BYTE opt );
 *   [dynamic, optional]
 *      void           cFatFile_set_descriptor( Descriptor( sFatFile ) desc );
 *      void           cFatFile_unjoin(  );
 * call port: cTarget signature: sTarget context:task optional:true
 *   bool_t     is_cTarget_joined()                     check if joined
 *   int            cTarget_main( int8_t a, int8_t b );
 *   [dynamic, optional]
 *      void           cTarget_set_descriptor( Descriptor( sTarget ) desc );
 *      void           cTarget_unjoin(  );
 *
 * #[</PREAMBLE>]# */

/* ¥×¥í¥È¥¿¥¤¥×Àë¸À¤äÊÑ¿ô¤ÎÄêµÁ¤ò¤³¤³¤Ë½ñ¤­¤Þ¤¹ #_PAC_# */
#include "tTECSUnit_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, const char_t *expected_signature );
/* ¼õ¤±¸ý´Ø¿ô #_TEPF_# */
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
ER
eUnit_main(CELLIDX idx, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val)
{
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    /* ã‚¨ãƒ©ãƒ¼å‡¦ç†ã‚³ãƒ¼ãƒ‰ã‚’ã“ã“ã«è¨˜è¿°ã—ã¾ã™ */
  } /* end if VALID_IDX(idx) */
  void *rawDesc;
  Descriptor( sUltrasonicSensor ) UltrasonicSensorDesc;
  Descriptor( sColorSensor ) ColorSensorDesc;
  Descriptor( sTouchSensor ) TouchSensorDesc;
  Descriptor( sGyroSensor ) GyroSensorDesc;
  Descriptor( sMotor ) MotorDesc;
  Descriptor( sButton ) ButtonDesc;
  Descriptor( sLCD ) LCDDesc;
  Descriptor( sLED ) LEDDesc;
  Descriptor( sBattery ) BatteryDesc;
  Descriptor( sSpeaker ) SpeakerDesc;
  Descriptor( sBalancer ) BalancerDesc;
  Descriptor( sSharedMemory ) SharedMemoryDesc;
  Descriptor( sFatFile ) FatFileDesc;
  Descriptor( sTarget ) TargetDesc;
  sprintf( VAR_cell_entry, "%s.%s", cell_path, entry_path );
  getRawEntryDescriptor( p_cellcb, VAR_cell_entry, &rawDesc, signature_path );

  if( !strcmp(signature_path, "sUltrasonicSensor" ) ){
    setRawEntryDescriptor( UltrasonicSensorDesc, sUltrasonicSensor, rawDesc );
    cUltrasonicSensor_set_descriptor( UltrasonicSensorDesc );
      if( !strcmp( function_path, "getDistance" ) ){
        if( exp_val->data.mem_int16_t == cUltrasonicSensor_getDistance(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "listen" ) ){
        if( exp_val->data.mem_bool_t == cUltrasonicSensor_listen(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "initializePort" ) ){
        cUltrasonicSensor_initializePort(  );
        return 0;
      }
  }
  else if( !strcmp(signature_path, "sColorSensor" ) ){
    setRawEntryDescriptor( ColorSensorDesc, sColorSensor, rawDesc );
    cColorSensor_set_descriptor( ColorSensorDesc );
      if( !strcmp( function_path, "getColor" ) ){
        if( exp_val->data.mem_colorid_t == cColorSensor_getColor(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "getReflect" ) ){
        if( exp_val->data.mem_uint8_t == cColorSensor_getReflect(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "getAmbient" ) ){
        if( exp_val->data.mem_uint8_t == cColorSensor_getAmbient(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "initializePort" ) ){
        cColorSensor_initializePort(  );
        return 0;
      }
      else if( !strcmp( function_path, "getRGBRaw" ) ){
        VAR_data = malloc( sizeof(int)*3 + sizeof(double)*0 + sizeof(char)*0 );
        cColorSensor_getRGBRaw( (int *) ( VAR_data + sizeof(int)*0 + sizeof(double)*0 + sizeof(char)*0 ), (int *) ( VAR_data + sizeof(int)*1 + sizeof(double)*0 + sizeof(char)*0 ), (int *) ( VAR_data + sizeof(int)*2 + sizeof(double)*0 + sizeof(char)*0 ) );
        return 0;
        free( VAR_data );
      }
  }
  else if( !strcmp(signature_path, "sTouchSensor" ) ){
    setRawEntryDescriptor( TouchSensorDesc, sTouchSensor, rawDesc );
    cTouchSensor_set_descriptor( TouchSensorDesc );
      if( !strcmp( function_path, "isPressed" ) ){
        if( exp_val->data.mem_bool_t == cTouchSensor_isPressed(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "initializePort" ) ){
        cTouchSensor_initializePort(  );
        return 0;
      }
  }
  else if( !strcmp(signature_path, "sGyroSensor" ) ){
    setRawEntryDescriptor( GyroSensorDesc, sGyroSensor, rawDesc );
    cGyroSensor_set_descriptor( GyroSensorDesc );
      if( !strcmp( function_path, "getAngle" ) ){
        if( exp_val->data.mem_int16_t == cGyroSensor_getAngle(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "getRate" ) ){
        if( exp_val->data.mem_int16_t == cGyroSensor_getRate(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "reset" ) ){
        if( exp_val->data.mem_ER == cGyroSensor_reset(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "calibrate" ) ){
        if( exp_val->data.mem_float == cGyroSensor_calibrate( arguments[0].data.mem_int32_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "initializePort" ) ){
        cGyroSensor_initializePort(  );
        return 0;
      }
  }
  else if( !strcmp(signature_path, "sMotor" ) ){
    setRawEntryDescriptor( MotorDesc, sMotor, rawDesc );
    cMotor_set_descriptor( MotorDesc );
      if( !strcmp( function_path, "getType" ) ){
        if( exp_val->data.mem_ER_UINT == cMotor_getType(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "getCounts" ) ){
        if( exp_val->data.mem_int32_t == cMotor_getCounts(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "getPower" ) ){
        if( exp_val->data.mem_int == cMotor_getPower(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "resetCounts" ) ){
        if( exp_val->data.mem_ER == cMotor_resetCounts(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "setPower" ) ){
        if( exp_val->data.mem_ER == cMotor_setPower( arguments[0].data.mem_int ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "stop" ) ){
        if( exp_val->data.mem_ER == cMotor_stop( arguments[0].data.mem_bool_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "rotate" ) ){
        if( exp_val->data.mem_ER == cMotor_rotate( arguments[0].data.mem_int, arguments[1].data.mem_uint32_t, arguments[2].data.mem_bool_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "initializePort" ) ){
        cMotor_initializePort( arguments[0].data.mem_int32_t );
        return 0;
      }
  }
  else if( !strcmp(signature_path, "sButton" ) ){
    setRawEntryDescriptor( ButtonDesc, sButton, rawDesc );
    cButton_set_descriptor( ButtonDesc );
      if( !strcmp( function_path, "isPressed" ) ){
        if( exp_val->data.mem_bool_t == cButton_isPressed( arguments[0].data.mem_button_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
  }
  else if( !strcmp(signature_path, "sLCD" ) ){
    setRawEntryDescriptor( LCDDesc, sLCD, rawDesc );
    cLCD_set_descriptor( LCDDesc );
      if( !strcmp( function_path, "setFont" ) ){
        if( exp_val->data.mem_ER == cLCD_setFont( arguments[0].data.mem_lcdfont_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "getFontSize" ) ){
        VAR_data = malloc( sizeof(int)*2 + sizeof(double)*0 + sizeof(char)*0 );
        if( exp_val->data.mem_ER == cLCD_getFontSize( arguments[0].data.mem_lcdfont_t, (int *) ( VAR_data + sizeof(int)*0 + sizeof(double)*0 + sizeof(char)*0 ), (int *) ( VAR_data + sizeof(int)*1 + sizeof(double)*0 + sizeof(char)*0 ) ) ){
            return 0;
        }else{
            return -1;
        }
        free( VAR_data );
      }
      else if( !strcmp( function_path, "drawString" ) ){
        if( exp_val->data.mem_ER == cLCD_drawString( arguments[0].data.mem_char_buf, arguments[1].data.mem_int32_t, arguments[2].data.mem_int32_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "fillRect" ) ){
        if( exp_val->data.mem_ER == cLCD_fillRect( arguments[0].data.mem_int32_t, arguments[1].data.mem_int32_t, arguments[2].data.mem_int32_t, arguments[3].data.mem_int32_t, arguments[4].data.mem_lcdcolor_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "drawLine" ) ){
        if( exp_val->data.mem_ER == cLCD_drawLine( arguments[0].data.mem_int32_t, arguments[1].data.mem_int32_t, arguments[2].data.mem_int32_t, arguments[3].data.mem_int32_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "print" ) ){
        cLCD_print( arguments[0].data.mem_char_buf );
        return 0;
      }
      else if( !strcmp( function_path, "puts" ) ){
        cLCD_puts( arguments[0].data.mem_char_buf );
        return 0;
      }
      else if( !strcmp( function_path, "clear" ) ){
        cLCD_clear(  );
        return 0;
      }
      else if( !strcmp( function_path, "showMessageBox" ) ){
        cLCD_showMessageBox( arguments[0].data.mem_char_buf, arguments[1].data.mem_char_buf );
        return 0;
      }
  }
  else if( !strcmp(signature_path, "sLED" ) ){
    setRawEntryDescriptor( LEDDesc, sLED, rawDesc );
    cLED_set_descriptor( LEDDesc );
      if( !strcmp( function_path, "setColor" ) ){
        if( exp_val->data.mem_ER == cLED_setColor( arguments[0].data.mem_ledcolor_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "off" ) ){
        if( exp_val->data.mem_ER == cLED_off(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
  }
  else if( !strcmp(signature_path, "sBattery" ) ){
    setRawEntryDescriptor( BatteryDesc, sBattery, rawDesc );
    cBattery_set_descriptor( BatteryDesc );
      if( !strcmp( function_path, "current_mA" ) ){
        if( exp_val->data.mem_int == cBattery_current_mA(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "voltage_mV" ) ){
        if( exp_val->data.mem_int == cBattery_voltage_mV(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
  }
  else if( !strcmp(signature_path, "sSpeaker" ) ){
    setRawEntryDescriptor( SpeakerDesc, sSpeaker, rawDesc );
    cSpeaker_set_descriptor( SpeakerDesc );
      if( !strcmp( function_path, "setVolume" ) ){
        if( exp_val->data.mem_ER == cSpeaker_setVolume( arguments[0].data.mem_uint8_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "playTone" ) ){
        if( exp_val->data.mem_ER == cSpeaker_playTone( arguments[0].data.mem_uint16_t, arguments[1].data.mem_int32_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "stop" ) ){
        if( exp_val->data.mem_ER == cSpeaker_stop(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
  }
  else if( !strcmp(signature_path, "sBalancer" ) ){
    setRawEntryDescriptor( BalancerDesc, sBalancer, rawDesc );
    cBalancer_set_descriptor( BalancerDesc );
      if( !strcmp( function_path, "control" ) ){
        VAR_data = malloc( sizeof(int)*2 + sizeof(double)*0 + sizeof(char)*0 );
        cBalancer_control( arguments[0].data.mem_int16_t, arguments[1].data.mem_int16_t, arguments[2].data.mem_int16_t, arguments[3].data.mem_int16_t, arguments[4].data.mem_int32_t, arguments[5].data.mem_int32_t, arguments[6].data.mem_int16_t, (int *) ( VAR_data + sizeof(int)*0 + sizeof(double)*0 + sizeof(char)*0 ), (int *) ( VAR_data + sizeof(int)*1 + sizeof(double)*0 + sizeof(char)*0 ), arguments[9].data.mem_int32_t );
        return 0;
        free( VAR_data );
      }
      else if( !strcmp( function_path, "init" ) ){
        cBalancer_init(  );
        return 0;
      }
  }
  else if( !strcmp(signature_path, "sSharedMemory" ) ){
    setRawEntryDescriptor( SharedMemoryDesc, sSharedMemory, rawDesc );
    cSharedMemory_set_descriptor( SharedMemoryDesc );
      if( !strcmp( function_path, "putVal" ) ){
        cSharedMemory_putVal( arguments[0].data.mem_int32_t, arguments[1].data.mem_int32_t );
        return 0;
      }
      else if( !strcmp( function_path, "getVal" ) ){
        if( exp_val->data.mem_int32_t == cSharedMemory_getVal( arguments[0].data.mem_int32_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "getSize" ) ){
        if( exp_val->data.mem_int32_t == cSharedMemory_getSize(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
  }
  else if( !strcmp(signature_path, "sFatFile" ) ){
    setRawEntryDescriptor( FatFileDesc, sFatFile, rawDesc );
    cFatFile_set_descriptor( FatFileDesc );
      if( !strcmp( function_path, "fopen" ) ){
        if( exp_val->data.mem_FRESULT == cFatFile_fopen( arguments[0].data.mem_TCHAR_buf, arguments[1].data.mem_TCHAR_buf ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "fclose" ) ){
        if( exp_val->data.mem_FRESULT == cFatFile_fclose(  ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "fread" ) ){
        VAR_data = malloc( sizeof(int)*0 + sizeof(double)*0 + sizeof(char)*1 );
        if( exp_val->data.mem_FRESULT == cFatFile_fread( (char *) ( VAR_data + sizeof(int)*0 + sizeof(double)*0 + sizeof(char)*0 ), arguments[1].data.mem_UINT ) ){
            return 0;
        }else{
            return -1;
        }
        free( VAR_data );
      }
      else if( !strcmp( function_path, "fwrite" ) ){
        VAR_data = malloc( sizeof(int)*1 + sizeof(double)*0 + sizeof(char)*0 );
        if( exp_val->data.mem_FRESULT == cFatFile_fwrite( arguments[0].data.mem_TCHAR_buf, arguments[1].data.mem_UINT, (int *) ( VAR_data + sizeof(int)*0 + sizeof(double)*0 + sizeof(char)*0 ) ) ){
            return 0;
        }else{
            return -1;
        }
        free( VAR_data );
      }
      else if( !strcmp( function_path, "fgets" ) ){
        VAR_data = malloc( sizeof(int)*0 + sizeof(double)*0 + sizeof(char)*1 );
        if( exp_val->data.mem_TCHAR_buf == cFatFile_fgets( (char *) ( VAR_data + sizeof(int)*0 + sizeof(double)*0 + sizeof(char)*0 ), arguments[1].data.mem_uint_t ) ){
            return 0;
        }else{
            return -1;
        }
        free( VAR_data );
      }
      else if( !strcmp( function_path, "unlink" ) ){
        if( exp_val->data.mem_FRESULT == cFatFile_unlink( arguments[0].data.mem_TCHAR_buf ) ){
            return 0;
        }else{
            return -1;
        }
      }
      else if( !strcmp( function_path, "fmount" ) ){
        if( exp_val->data.mem_FRESULT == cFatFile_fmount( arguments[0].data.mem_TCHAR_buf, arguments[1].data.mem_BYTE ) ){
            return 0;
        }else{
            return -1;
        }
      }
  }
  else if( !strcmp(signature_path, "sTarget" ) ){
    setRawEntryDescriptor( TargetDesc, sTarget, rawDesc );
    cTarget_set_descriptor( TargetDesc );
      if( !strcmp( function_path, "main" ) ){
        if( exp_val->data.mem_int == cTarget_main( arguments[0].data.mem_int8_t, arguments[1].data.mem_int8_t ) ){
            return 0;
        }else{
            return -1;
        }
      }
  }
}

/* #[<POSTAMBLE>]#
 *   ¤³¤ì¤è¤ê²¼¤ËÈó¼õ¤±¸ý´Ø¿ô¤ò½ñ¤­¤Þ¤¹
 * #[</POSTAMBLE>]#*/
ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, const char_t *expected_signature )
{
    Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) rawEntryDescDesc;
    Descriptor( nTECSInfo_sEntryInfo )              entryDesc;
    ER     ercd;

    ercd = cTECSInfo_findRawEntryDescriptor( entry_path, &rawEntryDescDesc, &entryDesc );
    if( ercd != E_OK ){
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
        }
        if( strcmp( name, expected_signature ) != 0 ){
            ercd = E_NOEXS;
        }
        cREDInfo_getRawDescriptor( 0, rawEntryDesc );
    }
    return ercd;
}
