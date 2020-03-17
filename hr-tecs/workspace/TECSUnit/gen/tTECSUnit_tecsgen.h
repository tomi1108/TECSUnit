/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTECSUnit_TECSGEN_H
#define tTECSUnit_TECSGEN_H

/*
 * celltype          :  tTECSUnit
 * global name       :  tTECSUnit
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
#include "sTECSUnit_tecsgen.h"
#include "sLCD_tecsgen.h"
#include "sButton_tecsgen.h"
#include "sKernel_tecsgen.h"
#include "sFatFile_tecsgen.h"
#include "nTECSInfo_sTECSInfo_tecsgen.h"
#include "nTECSInfo_sNamespaceInfo_tecsgen.h"
#include "nTECSInfo_sRegionInfo_tecsgen.h"
#include "nTECSInfo_sCellInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"
#include "nTECSInfo_sVarDeclInfo_tecsgen.h"
#include "nTECSInfo_sTypeInfo_tecsgen.h"
#include "nTECSInfo_sRawEntryDescriptorInfo_tecsgen.h"
#include "nTECSInfo_sEntryInfo_tecsgen.h"
#include "sUltrasonicSensor_tecsgen.h"
#include "sColorSensor_tecsgen.h"
#include "sTouchSensor_tecsgen.h"
#include "sGyroSensor_tecsgen.h"
#include "sMotor_tecsgen.h"
#include "sLED_tecsgen.h"
#include "sBattery_tecsgen.h"
#include "sSpeaker_tecsgen.h"
#include "sBalancer_tecsgen.h"
#include "sSharedMemory_tecsgen.h"
#include "sTarget_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTECSUnit_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES *cNSInfo_init_;
    struct tag_nTECSInfo_sRegionInfo_VDES *cRegionInfo_init_;
    struct tag_nTECSInfo_sCellInfo_VDES *cCellInfo_init_;
    struct tag_nTECSInfo_sSignatureInfo_VDES *cSignatureInfo_init_;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *cCelltypeInfo_init_;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *cVarDeclInfo_init_;
    struct tag_nTECSInfo_sTypeInfo_VDES *cTypeInfo_init_;
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *cREDInfo_init_;
    struct tag_nTECSInfo_sEntryInfo_VDES *cEntryInfo_init_;
    struct tag_sUltrasonicSensor_VDES *cUltrasonicSensor_init_;
    struct tag_sColorSensor_VDES *cColorSensor_init_;
    struct tag_sTouchSensor_VDES *cTouchSensor_init_;
    struct tag_sGyroSensor_VDES *cGyroSensor_init_;
    struct tag_sMotor_VDES *cMotor_init_;
    struct tag_sButton_VDES *cButton_init_;
    struct tag_sLCD_VDES *cLCD_init_;
    struct tag_sLED_VDES *cLED_init_;
    struct tag_sBattery_VDES *cBattery_init_;
    struct tag_sSpeaker_VDES *cSpeaker_init_;
    struct tag_sBalancer_VDES *cBalancer_init_;
    struct tag_sSharedMemory_VDES *cSharedMemory_init_;
    struct tag_sFatFile_VDES *cFatFile_init_;
    struct tag_sTarget_VDES *cTarget_init_;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        LEN;
    char*          cell_entry;
}  tTECSUnit_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tTECSUnit_CB {
    tTECSUnit_INIB  *_inib;
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES *cNSInfo;
    struct tag_nTECSInfo_sRegionInfo_VDES *cRegionInfo;
    struct tag_nTECSInfo_sCellInfo_VDES *cCellInfo;
    struct tag_nTECSInfo_sSignatureInfo_VDES *cSignatureInfo;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *cCelltypeInfo;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *cVarDeclInfo;
    struct tag_nTECSInfo_sTypeInfo_VDES *cTypeInfo;
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *cREDInfo;
    struct tag_nTECSInfo_sEntryInfo_VDES *cEntryInfo;
    struct tag_sUltrasonicSensor_VDES *cUltrasonicSensor;
    struct tag_sColorSensor_VDES *cColorSensor;
    struct tag_sTouchSensor_VDES *cTouchSensor;
    struct tag_sGyroSensor_VDES *cGyroSensor;
    struct tag_sMotor_VDES *cMotor;
    struct tag_sButton_VDES *cButton;
    struct tag_sLCD_VDES *cLCD;
    struct tag_sLED_VDES *cLED;
    struct tag_sBattery_VDES *cBattery;
    struct tag_sSpeaker_VDES *cSpeaker;
    struct tag_sBalancer_VDES *cBalancer;
    struct tag_sSharedMemory_VDES *cSharedMemory;
    struct tag_sFatFile_VDES *cFatFile;
    struct tag_sTarget_VDES *cTarget;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    void*          data;
}  tTECSUnit_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tTECSUnit_CB  tTECSUnit_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tTECSUnit_CB *tTECSUnit_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTECSUnit */
ER           tTECSUnit_eUnit_main(tTECSUnit_IDX idx, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTECSUnit_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tLCD_tecsgen.h"
#include "tButton_tecsgen.h"
#include "tKernel_tecsgen.h"
#include "tFatFile_tecsgen.h"
#include "nTECSInfo_tTECSInfo_tecsgen.h"
#ifdef  tTECSUnit_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTECSUnit_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTECSUnit_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tTECSUnit_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTECSUnit_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tTECSUnit_is_cNSInfo_joined(p_that) \
	  ((p_that)->cNSInfo!=0)
#define tTECSUnit_is_cRegionInfo_joined(p_that) \
	  ((p_that)->cRegionInfo!=0)
#define tTECSUnit_is_cCellInfo_joined(p_that) \
	  ((p_that)->cCellInfo!=0)
#define tTECSUnit_is_cSignatureInfo_joined(p_that) \
	  ((p_that)->cSignatureInfo!=0)
#define tTECSUnit_is_cCelltypeInfo_joined(p_that) \
	  ((p_that)->cCelltypeInfo!=0)
#define tTECSUnit_is_cVarDeclInfo_joined(p_that) \
	  ((p_that)->cVarDeclInfo!=0)
#define tTECSUnit_is_cTypeInfo_joined(p_that) \
	  ((p_that)->cTypeInfo!=0)
#define tTECSUnit_is_cREDInfo_joined(p_that) \
	  ((p_that)->cREDInfo!=0)
#define tTECSUnit_is_cEntryInfo_joined(p_that) \
	  ((p_that)->cEntryInfo!=0)
#define tTECSUnit_is_cUltrasonicSensor_joined(p_that) \
	  ((p_that)->cUltrasonicSensor!=0)
#define tTECSUnit_is_cColorSensor_joined(p_that) \
	  ((p_that)->cColorSensor!=0)
#define tTECSUnit_is_cTouchSensor_joined(p_that) \
	  ((p_that)->cTouchSensor!=0)
#define tTECSUnit_is_cGyroSensor_joined(p_that) \
	  ((p_that)->cGyroSensor!=0)
#define tTECSUnit_is_cMotor_joined(p_that) \
	  ((p_that)->cMotor!=0)
#define tTECSUnit_is_cButton_joined(p_that) \
	  ((p_that)->cButton!=0)
#define tTECSUnit_is_cLCD_joined(p_that) \
	  ((p_that)->cLCD!=0)
#define tTECSUnit_is_cLED_joined(p_that) \
	  ((p_that)->cLED!=0)
#define tTECSUnit_is_cBattery_joined(p_that) \
	  ((p_that)->cBattery!=0)
#define tTECSUnit_is_cSpeaker_joined(p_that) \
	  ((p_that)->cSpeaker!=0)
#define tTECSUnit_is_cBalancer_joined(p_that) \
	  ((p_that)->cBalancer!=0)
#define tTECSUnit_is_cSharedMemory_joined(p_that) \
	  ((p_that)->cSharedMemory!=0)
#define tTECSUnit_is_cFatFile_joined(p_that) \
	  ((p_that)->cFatFile!=0)
#define tTECSUnit_is_cTarget_joined(p_that) \
	  ((p_that)->cTarget!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tTECSUnit_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTECSUnit_ATTR_LEN( p_that )	((p_that)->_inib->LEN)

#define tTECSUnit_GET_LEN(p_that)	((p_that)->_inib->LEN)


/* var アクセスマクロ #_VAM_# */
#define tTECSUnit_VAR_data(p_that)	((p_that)->data)
#define tTECSUnit_VAR_cell_entry(p_that)	((p_that)->_inib->cell_entry)

#define tTECSUnit_GET_data(p_that)	((p_that)->data)
#define tTECSUnit_SET_data(p_that,val)	((p_that)->data=(val))
#define tTECSUnit_GET_cell_entry(p_that)	((p_that)->cell_entry)
#define tTECSUnit_SET_cell_entry(p_that,val)	((p_that)->cell_entry=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tTECSUnit_cLCD_tmp_setFont( p_that, font ) \
	  tLCD_eLCD_setFont( \
	   &tLCD_CB_tab[0], (font) )
#define tTECSUnit_cLCD_tmp_getFontSize( p_that, font, p_width, p_height ) \
	  tLCD_eLCD_getFontSize( \
	   &tLCD_CB_tab[0], (font), (p_width), (p_height) )
#define tTECSUnit_cLCD_tmp_drawString( p_that, str, x, y ) \
	  tLCD_eLCD_drawString( \
	   &tLCD_CB_tab[0], (str), (x), (y) )
#define tTECSUnit_cLCD_tmp_fillRect( p_that, x, y, w, h, color ) \
	  tLCD_eLCD_fillRect( \
	   &tLCD_CB_tab[0], (x), (y), (w), (h), (color) )
#define tTECSUnit_cLCD_tmp_drawLine( p_that, x0, y0, x1, y1 ) \
	  tLCD_eLCD_drawLine( \
	   &tLCD_CB_tab[0], (x0), (y0), (x1), (y1) )
#define tTECSUnit_cLCD_tmp_print( p_that, str ) \
	  tLCD_eLCD_print( \
	   &tLCD_CB_tab[0], (str) )
#define tTECSUnit_cLCD_tmp_puts( p_that, str ) \
	  tLCD_eLCD_puts( \
	   &tLCD_CB_tab[0], (str) )
#define tTECSUnit_cLCD_tmp_clear( p_that ) \
	  tLCD_eLCD_clear( \
	   &tLCD_CB_tab[0] )
#define tTECSUnit_cLCD_tmp_showMessageBox( p_that, title, msg ) \
	  tLCD_eLCD_showMessageBox( \
	   &tLCD_CB_tab[0], (title), (msg) )
#define tTECSUnit_cButton_tmp_isPressed( p_that, button ) \
	  tButton_eButton_isPressed( \
	   (tButton_IDX)0, (button) )
#define tTECSUnit_cKernel_tmp_sleep( p_that ) \
	  tKernel_eKernel_sleep( \
	    )
#define tTECSUnit_cKernel_tmp_sleepTimeout( p_that, timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tTECSUnit_cKernel_tmp_delay( p_that, delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tTECSUnit_cKernel_tmp_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tTECSUnit_cKernel_tmp_getTaskId( p_that, p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tTECSUnit_cKernel_tmp_rotateReadyQueue( p_that, taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tTECSUnit_cKernel_tmp_getTime( p_that, p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tTECSUnit_cKernel_tmp_getMicroTime( p_that, p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tTECSUnit_cKernel_tmp_lockCpu( p_that ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tTECSUnit_cKernel_tmp_unlockCpu( p_that ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tTECSUnit_cKernel_tmp_disableDispatch( p_that ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tTECSUnit_cKernel_tmp_enableDispatch( p_that ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tTECSUnit_cKernel_tmp_disableTaskException( p_that ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tTECSUnit_cKernel_tmp_enableTaskException( p_that ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tTECSUnit_cKernel_tmp_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tTECSUnit_cKernel_tmp_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tTECSUnit_cKernel_tmp_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tTECSUnit_cKernel_tmp_senseContext( p_that ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tTECSUnit_cKernel_tmp_senseLock( p_that ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tTECSUnit_cKernel_tmp_senseDispatch( p_that ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tTECSUnit_cKernel_tmp_senseDispatchPendingState( p_that ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tTECSUnit_cKernel_tmp_senseKernel( p_that ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tTECSUnit_cFatFile_tmp_fopen( p_that, path, mode ) \
	  tFatFile_eFatFile_fopen( \
	   &tFatFile_CB_tab[0], (path), (mode) )
#define tTECSUnit_cFatFile_tmp_fclose( p_that ) \
	  tFatFile_eFatFile_fclose( \
	   &tFatFile_CB_tab[0] )
#define tTECSUnit_cFatFile_tmp_fread( p_that, buffer, btr ) \
	  tFatFile_eFatFile_fread( \
	   &tFatFile_CB_tab[0], (buffer), (btr) )
#define tTECSUnit_cFatFile_tmp_fwrite( p_that, buffer, btw, bw ) \
	  tFatFile_eFatFile_fwrite( \
	   &tFatFile_CB_tab[0], (buffer), (btw), (bw) )
#define tTECSUnit_cFatFile_tmp_fgets( p_that, buff, btr ) \
	  tFatFile_eFatFile_fgets( \
	   &tFatFile_CB_tab[0], (buff), (btr) )
#define tTECSUnit_cFatFile_tmp_unlink( p_that, path ) \
	  tFatFile_eFatFile_unlink( \
	   &tFatFile_CB_tab[0], (path) )
#define tTECSUnit_cFatFile_tmp_fmount( p_that, path, opt ) \
	  tFatFile_eFatFile_fmount( \
	   &tFatFile_CB_tab[0], (path), (opt) )
#define tTECSUnit_cTECSInfo_findNamespace( p_that, namespace_path, nsDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( \
	    (namespace_path), (nsDesc) )
#define tTECSUnit_cTECSInfo_findRegion( p_that, namespace_path, regionDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRegion( \
	    (namespace_path), (regionDesc) )
#define tTECSUnit_cTECSInfo_findSignature( p_that, namespace_path, signatureDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findSignature( \
	    (namespace_path), (signatureDesc) )
#define tTECSUnit_cTECSInfo_findCelltype( p_that, namespace_path, celltypeDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( \
	    (namespace_path), (celltypeDesc) )
#define tTECSUnit_cTECSInfo_findCell( p_that, namespace_path, cellDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findCell( \
	    (namespace_path), (cellDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_that, namespace_path, rawEntryDescDesc, entryDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor( \
	    (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_that, namespace_path, subsc, rawDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe( \
	    (namespace_path), (subsc), (rawDesc) )
#define tTECSUnit_cNSInfo_getName( p_that, name, max_len ) \
	  (p_that)->cNSInfo->VMT->getName__T( \
	   (p_that)->cNSInfo, (name), (max_len) )
#define tTECSUnit_cNSInfo_getNameLength( p_that ) \
	  (p_that)->cNSInfo->VMT->getNameLength__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getNNamespace( p_that ) \
	  (p_that)->cNSInfo->VMT->getNNamespace__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getNamespaceInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getNamespaceInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cNSInfo_getNSignature( p_that ) \
	  (p_that)->cNSInfo->VMT->getNSignature__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getSignatureInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getSignatureInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cNSInfo_getNCelltype( p_that ) \
	  (p_that)->cNSInfo->VMT->getNCelltype__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getCelltypeInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getCelltypeInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cRegionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cRegionInfo->VMT->getName__T( \
	   (p_that)->cRegionInfo, (name), (max_len) )
#define tTECSUnit_cRegionInfo_getNameLength( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNameLength__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getNCell( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNCell__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getCellInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo->VMT->getCellInfo__T( \
	   (p_that)->cRegionInfo, (ith), (des) )
#define tTECSUnit_cRegionInfo_getNRegion( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNRegion__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getRegionInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo->VMT->getRegionInfo__T( \
	   (p_that)->cRegionInfo, (ith), (des) )
#define tTECSUnit_cCellInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCellInfo->VMT->getName__T( \
	   (p_that)->cCellInfo, (name), (max_len) )
#define tTECSUnit_cCellInfo_getNameLength( p_that ) \
	  (p_that)->cCellInfo->VMT->getNameLength__T( \
	   (p_that)->cCellInfo )
#define tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cCellInfo->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo )
#define tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_that, index, desc ) \
	  (p_that)->cCellInfo->VMT->getRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo, (index), (desc) )
#define tTECSUnit_cCellInfo_getCelltypeInfo( p_that, desc ) \
	  (p_that)->cCellInfo->VMT->getCelltypeInfo__T( \
	   (p_that)->cCellInfo, (desc) )
#define tTECSUnit_cCellInfo_getCBP( p_that, cbp ) \
	  (p_that)->cCellInfo->VMT->getCBP__T( \
	   (p_that)->cCellInfo, (cbp) )
#define tTECSUnit_cCellInfo_getINIBP( p_that, inibp ) \
	  (p_that)->cCellInfo->VMT->getINIBP__T( \
	   (p_that)->cCellInfo, (inibp) )
#define tTECSUnit_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo->VMT->getName__T( \
	   (p_that)->cSignatureInfo, (name), (max_len) )
#define tTECSUnit_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo )
#define tTECSUnit_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo )
#define tTECSUnit_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo->VMT->getName__T( \
	   (p_that)->cCelltypeInfo, (name), (max_len) )
#define tTECSUnit_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNameLength__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNAttr__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getAttrInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNVar__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getVarInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNCall__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getCallInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNEntry__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getEntryInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isSingleton__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isIDX_is_ID__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfCB__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfINIB__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cVarDeclInfo_getName( p_that, name, max_len ) \
	  (p_that)->cVarDeclInfo->VMT->getName__T( \
	   (p_that)->cVarDeclInfo, (name), (max_len) )
#define tTECSUnit_cVarDeclInfo_getNameLength( p_that ) \
	  (p_that)->cVarDeclInfo->VMT->getNameLength__T( \
	   (p_that)->cVarDeclInfo )
#define tTECSUnit_cVarDeclInfo_getLocationInfo( p_that, offset, place ) \
	  (p_that)->cVarDeclInfo->VMT->getLocationInfo__T( \
	   (p_that)->cVarDeclInfo, (offset), (place) )
#define tTECSUnit_cVarDeclInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cVarDeclInfo->VMT->getTypeInfo__T( \
	   (p_that)->cVarDeclInfo, (desc) )
#define tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_that, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo->VMT->getSizeIsExpr__T( \
	   (p_that)->cVarDeclInfo, (expr_str), (max_len) )
#define tTECSUnit_cVarDeclInfo_getSizeIs( p_that, size, p_cb ) \
	  (p_that)->cVarDeclInfo->VMT->getSizeIs__T( \
	   (p_that)->cVarDeclInfo, (size), (p_cb) )
#define tTECSUnit_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define tTECSUnit_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (desc) )
#define tTECSUnit_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNMember__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getMemberInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )
#define tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cREDInfo->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cREDInfo )
#define tTECSUnit_cREDInfo_getRawDescriptor( p_that, subsc, rawDesc ) \
	  (p_that)->cREDInfo->VMT->getRawDescriptor__T( \
	   (p_that)->cREDInfo, (subsc), (rawDesc) )
#define tTECSUnit_cEntryInfo_getName( p_that, name, max_len ) \
	  (p_that)->cEntryInfo->VMT->getName__T( \
	   (p_that)->cEntryInfo, (name), (max_len) )
#define tTECSUnit_cEntryInfo_getNameLength( p_that ) \
	  (p_that)->cEntryInfo->VMT->getNameLength__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_cEntryInfo_getSignatureInfo( p_that, desc ) \
	  (p_that)->cEntryInfo->VMT->getSignatureInfo__T( \
	   (p_that)->cEntryInfo, (desc) )
#define tTECSUnit_cEntryInfo_getArraySize( p_that ) \
	  (p_that)->cEntryInfo->VMT->getArraySize__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_cEntryInfo_isInline( p_that ) \
	  (p_that)->cEntryInfo->VMT->isInline__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_cUltrasonicSensor_getDistance( p_that ) \
	  (p_that)->cUltrasonicSensor->VMT->getDistance__T( \
	   (p_that)->cUltrasonicSensor )
#define tTECSUnit_cUltrasonicSensor_listen( p_that ) \
	  (p_that)->cUltrasonicSensor->VMT->listen__T( \
	   (p_that)->cUltrasonicSensor )
#define tTECSUnit_cUltrasonicSensor_initializePort( p_that ) \
	  (p_that)->cUltrasonicSensor->VMT->initializePort__T( \
	   (p_that)->cUltrasonicSensor )
#define tTECSUnit_cColorSensor_getColor( p_that ) \
	  (p_that)->cColorSensor->VMT->getColor__T( \
	   (p_that)->cColorSensor )
#define tTECSUnit_cColorSensor_getReflect( p_that ) \
	  (p_that)->cColorSensor->VMT->getReflect__T( \
	   (p_that)->cColorSensor )
#define tTECSUnit_cColorSensor_getAmbient( p_that ) \
	  (p_that)->cColorSensor->VMT->getAmbient__T( \
	   (p_that)->cColorSensor )
#define tTECSUnit_cColorSensor_initializePort( p_that ) \
	  (p_that)->cColorSensor->VMT->initializePort__T( \
	   (p_that)->cColorSensor )
#define tTECSUnit_cColorSensor_getRGBRaw( p_that, r, g, b ) \
	  (p_that)->cColorSensor->VMT->getRGBRaw__T( \
	   (p_that)->cColorSensor, (r), (g), (b) )
#define tTECSUnit_cTouchSensor_isPressed( p_that ) \
	  (p_that)->cTouchSensor->VMT->isPressed__T( \
	   (p_that)->cTouchSensor )
#define tTECSUnit_cTouchSensor_initializePort( p_that ) \
	  (p_that)->cTouchSensor->VMT->initializePort__T( \
	   (p_that)->cTouchSensor )
#define tTECSUnit_cGyroSensor_getAngle( p_that ) \
	  (p_that)->cGyroSensor->VMT->getAngle__T( \
	   (p_that)->cGyroSensor )
#define tTECSUnit_cGyroSensor_getRate( p_that ) \
	  (p_that)->cGyroSensor->VMT->getRate__T( \
	   (p_that)->cGyroSensor )
#define tTECSUnit_cGyroSensor_reset( p_that ) \
	  (p_that)->cGyroSensor->VMT->reset__T( \
	   (p_that)->cGyroSensor )
#define tTECSUnit_cGyroSensor_calibrate( p_that, times ) \
	  (p_that)->cGyroSensor->VMT->calibrate__T( \
	   (p_that)->cGyroSensor, (times) )
#define tTECSUnit_cGyroSensor_initializePort( p_that ) \
	  (p_that)->cGyroSensor->VMT->initializePort__T( \
	   (p_that)->cGyroSensor )
#define tTECSUnit_cMotor_getType( p_that ) \
	  (p_that)->cMotor->VMT->getType__T( \
	   (p_that)->cMotor )
#define tTECSUnit_cMotor_getCounts( p_that ) \
	  (p_that)->cMotor->VMT->getCounts__T( \
	   (p_that)->cMotor )
#define tTECSUnit_cMotor_getPower( p_that ) \
	  (p_that)->cMotor->VMT->getPower__T( \
	   (p_that)->cMotor )
#define tTECSUnit_cMotor_resetCounts( p_that ) \
	  (p_that)->cMotor->VMT->resetCounts__T( \
	   (p_that)->cMotor )
#define tTECSUnit_cMotor_setPower( p_that, power ) \
	  (p_that)->cMotor->VMT->setPower__T( \
	   (p_that)->cMotor, (power) )
#define tTECSUnit_cMotor_stop( p_that, brake ) \
	  (p_that)->cMotor->VMT->stop__T( \
	   (p_that)->cMotor, (brake) )
#define tTECSUnit_cMotor_rotate( p_that, degrees, speed_abs, blocking ) \
	  (p_that)->cMotor->VMT->rotate__T( \
	   (p_that)->cMotor, (degrees), (speed_abs), (blocking) )
#define tTECSUnit_cMotor_initializePort( p_that, type ) \
	  (p_that)->cMotor->VMT->initializePort__T( \
	   (p_that)->cMotor, (type) )
#define tTECSUnit_cButton_isPressed( p_that, button ) \
	  (p_that)->cButton->VMT->isPressed__T( \
	   (p_that)->cButton, (button) )
#define tTECSUnit_cLCD_setFont( p_that, font ) \
	  (p_that)->cLCD->VMT->setFont__T( \
	   (p_that)->cLCD, (font) )
#define tTECSUnit_cLCD_getFontSize( p_that, font, p_width, p_height ) \
	  (p_that)->cLCD->VMT->getFontSize__T( \
	   (p_that)->cLCD, (font), (p_width), (p_height) )
#define tTECSUnit_cLCD_drawString( p_that, str, x, y ) \
	  (p_that)->cLCD->VMT->drawString__T( \
	   (p_that)->cLCD, (str), (x), (y) )
#define tTECSUnit_cLCD_fillRect( p_that, x, y, w, h, color ) \
	  (p_that)->cLCD->VMT->fillRect__T( \
	   (p_that)->cLCD, (x), (y), (w), (h), (color) )
#define tTECSUnit_cLCD_drawLine( p_that, x0, y0, x1, y1 ) \
	  (p_that)->cLCD->VMT->drawLine__T( \
	   (p_that)->cLCD, (x0), (y0), (x1), (y1) )
#define tTECSUnit_cLCD_print( p_that, str ) \
	  (p_that)->cLCD->VMT->print__T( \
	   (p_that)->cLCD, (str) )
#define tTECSUnit_cLCD_puts( p_that, str ) \
	  (p_that)->cLCD->VMT->puts__T( \
	   (p_that)->cLCD, (str) )
#define tTECSUnit_cLCD_clear( p_that ) \
	  (p_that)->cLCD->VMT->clear__T( \
	   (p_that)->cLCD )
#define tTECSUnit_cLCD_showMessageBox( p_that, title, msg ) \
	  (p_that)->cLCD->VMT->showMessageBox__T( \
	   (p_that)->cLCD, (title), (msg) )
#define tTECSUnit_cLED_setColor( p_that, color ) \
	  (p_that)->cLED->VMT->setColor__T( \
	   (p_that)->cLED, (color) )
#define tTECSUnit_cLED_off( p_that ) \
	  (p_that)->cLED->VMT->off__T( \
	   (p_that)->cLED )
#define tTECSUnit_cBattery_current_mA( p_that ) \
	  (p_that)->cBattery->VMT->current_mA__T( \
	   (p_that)->cBattery )
#define tTECSUnit_cBattery_voltage_mV( p_that ) \
	  (p_that)->cBattery->VMT->voltage_mV__T( \
	   (p_that)->cBattery )
#define tTECSUnit_cSpeaker_setVolume( p_that, volume ) \
	  (p_that)->cSpeaker->VMT->setVolume__T( \
	   (p_that)->cSpeaker, (volume) )
#define tTECSUnit_cSpeaker_playTone( p_that, frequency, duration ) \
	  (p_that)->cSpeaker->VMT->playTone__T( \
	   (p_that)->cSpeaker, (frequency), (duration) )
#define tTECSUnit_cSpeaker_stop( p_that ) \
	  (p_that)->cSpeaker->VMT->stop__T( \
	   (p_that)->cSpeaker )
#define tTECSUnit_cBalancer_control( p_that, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
	  (p_that)->cBalancer->VMT->control__T( \
	   (p_that)->cBalancer, (forward), (turn), (gyro), (gyroOffset), (leftRevolution), (rightRevolution), (battery), (pwm_l), (pwm_r), (backlashhalf) )
#define tTECSUnit_cBalancer_init( p_that ) \
	  (p_that)->cBalancer->VMT->init__T( \
	   (p_that)->cBalancer )
#define tTECSUnit_cSharedMemory_putVal( p_that, index, val ) \
	  (p_that)->cSharedMemory->VMT->putVal__T( \
	   (p_that)->cSharedMemory, (index), (val) )
#define tTECSUnit_cSharedMemory_getVal( p_that, index ) \
	  (p_that)->cSharedMemory->VMT->getVal__T( \
	   (p_that)->cSharedMemory, (index) )
#define tTECSUnit_cSharedMemory_getSize( p_that ) \
	  (p_that)->cSharedMemory->VMT->getSize__T( \
	   (p_that)->cSharedMemory )
#define tTECSUnit_cFatFile_fopen( p_that, path, mode ) \
	  (p_that)->cFatFile->VMT->fopen__T( \
	   (p_that)->cFatFile, (path), (mode) )
#define tTECSUnit_cFatFile_fclose( p_that ) \
	  (p_that)->cFatFile->VMT->fclose__T( \
	   (p_that)->cFatFile )
#define tTECSUnit_cFatFile_fread( p_that, buffer, btr ) \
	  (p_that)->cFatFile->VMT->fread__T( \
	   (p_that)->cFatFile, (buffer), (btr) )
#define tTECSUnit_cFatFile_fwrite( p_that, buffer, btw, bw ) \
	  (p_that)->cFatFile->VMT->fwrite__T( \
	   (p_that)->cFatFile, (buffer), (btw), (bw) )
#define tTECSUnit_cFatFile_fgets( p_that, buff, btr ) \
	  (p_that)->cFatFile->VMT->fgets__T( \
	   (p_that)->cFatFile, (buff), (btr) )
#define tTECSUnit_cFatFile_unlink( p_that, path ) \
	  (p_that)->cFatFile->VMT->unlink__T( \
	   (p_that)->cFatFile, (path) )
#define tTECSUnit_cFatFile_fmount( p_that, path, opt ) \
	  (p_that)->cFatFile->VMT->fmount__T( \
	   (p_that)->cFatFile, (path), (opt) )
#define tTECSUnit_cTarget_main( p_that, a, b ) \
	  (p_that)->cTarget->VMT->main__T( \
	   (p_that)->cTarget, (a), (b) )

#else  /* TECSFLOW */
#define tTECSUnit_cLCD_tmp_setFont( p_that, font ) \
	  (p_that)->cLCD_tmp.setFont__T( \
 (font) )
#define tTECSUnit_cLCD_tmp_getFontSize( p_that, font, p_width, p_height ) \
	  (p_that)->cLCD_tmp.getFontSize__T( \
 (font), (p_width), (p_height) )
#define tTECSUnit_cLCD_tmp_drawString( p_that, str, x, y ) \
	  (p_that)->cLCD_tmp.drawString__T( \
 (str), (x), (y) )
#define tTECSUnit_cLCD_tmp_fillRect( p_that, x, y, w, h, color ) \
	  (p_that)->cLCD_tmp.fillRect__T( \
 (x), (y), (w), (h), (color) )
#define tTECSUnit_cLCD_tmp_drawLine( p_that, x0, y0, x1, y1 ) \
	  (p_that)->cLCD_tmp.drawLine__T( \
 (x0), (y0), (x1), (y1) )
#define tTECSUnit_cLCD_tmp_print( p_that, str ) \
	  (p_that)->cLCD_tmp.print__T( \
 (str) )
#define tTECSUnit_cLCD_tmp_puts( p_that, str ) \
	  (p_that)->cLCD_tmp.puts__T( \
 (str) )
#define tTECSUnit_cLCD_tmp_clear( p_that ) \
	  (p_that)->cLCD_tmp.clear__T( \
 )
#define tTECSUnit_cLCD_tmp_showMessageBox( p_that, title, msg ) \
	  (p_that)->cLCD_tmp.showMessageBox__T( \
 (title), (msg) )
#define tTECSUnit_cButton_tmp_isPressed( p_that, button ) \
	  (p_that)->cButton_tmp.isPressed__T( \
 (button) )
#define tTECSUnit_cKernel_tmp_sleep( p_that ) \
	  (p_that)->cKernel_tmp.sleep__T( \
 )
#define tTECSUnit_cKernel_tmp_sleepTimeout( p_that, timeout ) \
	  (p_that)->cKernel_tmp.sleepTimeout__T( \
 (timeout) )
#define tTECSUnit_cKernel_tmp_delay( p_that, delayTime ) \
	  (p_that)->cKernel_tmp.delay__T( \
 (delayTime) )
#define tTECSUnit_cKernel_tmp_exitTask( p_that ) \
	  (p_that)->cKernel_tmp.exitTask__T( \
 )
#define tTECSUnit_cKernel_tmp_getTaskId( p_that, p_taskId ) \
	  (p_that)->cKernel_tmp.getTaskId__T( \
 (p_taskId) )
#define tTECSUnit_cKernel_tmp_rotateReadyQueue( p_that, taskPriority ) \
	  (p_that)->cKernel_tmp.rotateReadyQueue__T( \
 (taskPriority) )
#define tTECSUnit_cKernel_tmp_getTime( p_that, p_systemTime ) \
	  (p_that)->cKernel_tmp.getTime__T( \
 (p_systemTime) )
#define tTECSUnit_cKernel_tmp_getMicroTime( p_that, p_systemMicroTime ) \
	  (p_that)->cKernel_tmp.getMicroTime__T( \
 (p_systemMicroTime) )
#define tTECSUnit_cKernel_tmp_lockCpu( p_that ) \
	  (p_that)->cKernel_tmp.lockCpu__T( \
 )
#define tTECSUnit_cKernel_tmp_unlockCpu( p_that ) \
	  (p_that)->cKernel_tmp.unlockCpu__T( \
 )
#define tTECSUnit_cKernel_tmp_disableDispatch( p_that ) \
	  (p_that)->cKernel_tmp.disableDispatch__T( \
 )
#define tTECSUnit_cKernel_tmp_enableDispatch( p_that ) \
	  (p_that)->cKernel_tmp.enableDispatch__T( \
 )
#define tTECSUnit_cKernel_tmp_disableTaskException( p_that ) \
	  (p_that)->cKernel_tmp.disableTaskException__T( \
 )
#define tTECSUnit_cKernel_tmp_enableTaskException( p_that ) \
	  (p_that)->cKernel_tmp.enableTaskException__T( \
 )
#define tTECSUnit_cKernel_tmp_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  (p_that)->cKernel_tmp.changeInterruptPriorityMask__T( \
 (interruptPriority) )
#define tTECSUnit_cKernel_tmp_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  (p_that)->cKernel_tmp.getInterruptPriorityMask__T( \
 (p_interruptPriority) )
#define tTECSUnit_cKernel_tmp_exitKernel( p_that ) \
	  (p_that)->cKernel_tmp.exitKernel__T( \
 )
#define tTECSUnit_cKernel_tmp_senseContext( p_that ) \
	  (p_that)->cKernel_tmp.senseContext__T( \
 )
#define tTECSUnit_cKernel_tmp_senseLock( p_that ) \
	  (p_that)->cKernel_tmp.senseLock__T( \
 )
#define tTECSUnit_cKernel_tmp_senseDispatch( p_that ) \
	  (p_that)->cKernel_tmp.senseDispatch__T( \
 )
#define tTECSUnit_cKernel_tmp_senseDispatchPendingState( p_that ) \
	  (p_that)->cKernel_tmp.senseDispatchPendingState__T( \
 )
#define tTECSUnit_cKernel_tmp_senseKernel( p_that ) \
	  (p_that)->cKernel_tmp.senseKernel__T( \
 )
#define tTECSUnit_cFatFile_tmp_fopen( p_that, path, mode ) \
	  (p_that)->cFatFile_tmp.fopen__T( \
 (path), (mode) )
#define tTECSUnit_cFatFile_tmp_fclose( p_that ) \
	  (p_that)->cFatFile_tmp.fclose__T( \
 )
#define tTECSUnit_cFatFile_tmp_fread( p_that, buffer, btr ) \
	  (p_that)->cFatFile_tmp.fread__T( \
 (buffer), (btr) )
#define tTECSUnit_cFatFile_tmp_fwrite( p_that, buffer, btw, bw ) \
	  (p_that)->cFatFile_tmp.fwrite__T( \
 (buffer), (btw), (bw) )
#define tTECSUnit_cFatFile_tmp_fgets( p_that, buff, btr ) \
	  (p_that)->cFatFile_tmp.fgets__T( \
 (buff), (btr) )
#define tTECSUnit_cFatFile_tmp_unlink( p_that, path ) \
	  (p_that)->cFatFile_tmp.unlink__T( \
 (path) )
#define tTECSUnit_cFatFile_tmp_fmount( p_that, path, opt ) \
	  (p_that)->cFatFile_tmp.fmount__T( \
 (path), (opt) )
#define tTECSUnit_cTECSInfo_findNamespace( p_that, namespace_path, nsDesc ) \
	  (p_that)->cTECSInfo.findNamespace__T( \
 (namespace_path), (nsDesc) )
#define tTECSUnit_cTECSInfo_findRegion( p_that, namespace_path, regionDesc ) \
	  (p_that)->cTECSInfo.findRegion__T( \
 (namespace_path), (regionDesc) )
#define tTECSUnit_cTECSInfo_findSignature( p_that, namespace_path, signatureDesc ) \
	  (p_that)->cTECSInfo.findSignature__T( \
 (namespace_path), (signatureDesc) )
#define tTECSUnit_cTECSInfo_findCelltype( p_that, namespace_path, celltypeDesc ) \
	  (p_that)->cTECSInfo.findCelltype__T( \
 (namespace_path), (celltypeDesc) )
#define tTECSUnit_cTECSInfo_findCell( p_that, namespace_path, cellDesc ) \
	  (p_that)->cTECSInfo.findCell__T( \
 (namespace_path), (cellDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_that, namespace_path, rawEntryDescDesc, entryDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor__T( \
 (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_that, namespace_path, subsc, rawDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor_unsafe__T( \
 (namespace_path), (subsc), (rawDesc) )
#define tTECSUnit_cNSInfo_getName( p_that, name, max_len ) \
	  (p_that)->cNSInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cNSInfo_getNameLength( p_that ) \
	  (p_that)->cNSInfo.getNameLength__T( \
 )
#define tTECSUnit_cNSInfo_getNNamespace( p_that ) \
	  (p_that)->cNSInfo.getNNamespace__T( \
 )
#define tTECSUnit_cNSInfo_getNamespaceInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getNamespaceInfo__T( \
 (ith), (des) )
#define tTECSUnit_cNSInfo_getNSignature( p_that ) \
	  (p_that)->cNSInfo.getNSignature__T( \
 )
#define tTECSUnit_cNSInfo_getSignatureInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getSignatureInfo__T( \
 (ith), (des) )
#define tTECSUnit_cNSInfo_getNCelltype( p_that ) \
	  (p_that)->cNSInfo.getNCelltype__T( \
 )
#define tTECSUnit_cNSInfo_getCelltypeInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getCelltypeInfo__T( \
 (ith), (des) )
#define tTECSUnit_cRegionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cRegionInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cRegionInfo_getNameLength( p_that ) \
	  (p_that)->cRegionInfo.getNameLength__T( \
 )
#define tTECSUnit_cRegionInfo_getNCell( p_that ) \
	  (p_that)->cRegionInfo.getNCell__T( \
 )
#define tTECSUnit_cRegionInfo_getCellInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo.getCellInfo__T( \
 (ith), (des) )
#define tTECSUnit_cRegionInfo_getNRegion( p_that ) \
	  (p_that)->cRegionInfo.getNRegion__T( \
 )
#define tTECSUnit_cRegionInfo_getRegionInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo.getRegionInfo__T( \
 (ith), (des) )
#define tTECSUnit_cCellInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCellInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cCellInfo_getNameLength( p_that ) \
	  (p_that)->cCellInfo.getNameLength__T( \
 )
#define tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cCellInfo.getNRawEntryDescriptorInfo__T( \
 )
#define tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_that, index, desc ) \
	  (p_that)->cCellInfo.getRawEntryDescriptorInfo__T( \
 (index), (desc) )
#define tTECSUnit_cCellInfo_getCelltypeInfo( p_that, desc ) \
	  (p_that)->cCellInfo.getCelltypeInfo__T( \
 (desc) )
#define tTECSUnit_cCellInfo_getCBP( p_that, cbp ) \
	  (p_that)->cCellInfo.getCBP__T( \
 (cbp) )
#define tTECSUnit_cCellInfo_getINIBP( p_that, inibp ) \
	  (p_that)->cCellInfo.getINIBP__T( \
 (inibp) )
#define tTECSUnit_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo.getNameLength__T( \
 )
#define tTECSUnit_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo.getNFunction__T( \
 )
#define tTECSUnit_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo.getFunctionInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo.getNameLength__T( \
 )
#define tTECSUnit_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo.getNAttr__T( \
 )
#define tTECSUnit_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getAttrInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo.getNVar__T( \
 )
#define tTECSUnit_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getVarInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo.getNCall__T( \
 )
#define tTECSUnit_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getCallInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo.getNEntry__T( \
 )
#define tTECSUnit_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getEntryInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo.isSingleton__T( \
 )
#define tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo.isIDX_is_ID__T( \
 )
#define tTECSUnit_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfCB__T( \
 )
#define tTECSUnit_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfINIB__T( \
 )
#define tTECSUnit_cVarDeclInfo_getName( p_that, name, max_len ) \
	  (p_that)->cVarDeclInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cVarDeclInfo_getNameLength( p_that ) \
	  (p_that)->cVarDeclInfo.getNameLength__T( \
 )
#define tTECSUnit_cVarDeclInfo_getLocationInfo( p_that, offset, place ) \
	  (p_that)->cVarDeclInfo.getLocationInfo__T( \
 (offset), (place) )
#define tTECSUnit_cVarDeclInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cVarDeclInfo.getTypeInfo__T( \
 (desc) )
#define tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_that, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo.getSizeIsExpr__T( \
 (expr_str), (max_len) )
#define tTECSUnit_cVarDeclInfo_getSizeIs( p_that, size, p_cb ) \
	  (p_that)->cVarDeclInfo.getSizeIs__T( \
 (size), (p_cb) )
#define tTECSUnit_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo.getNameLength__T( \
 )
#define tTECSUnit_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo.getSize__T( \
 )
#define tTECSUnit_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo.getKind__T( \
 )
#define tTECSUnit_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo.getNType__T( \
 )
#define tTECSUnit_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo.getTypeInfo__T( \
 (desc) )
#define tTECSUnit_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo.getNMember__T( \
 )
#define tTECSUnit_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo.getMemberInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cREDInfo.getNRawEntryDescriptorInfo__T( \
 )
#define tTECSUnit_cREDInfo_getRawDescriptor( p_that, subsc, rawDesc ) \
	  (p_that)->cREDInfo.getRawDescriptor__T( \
 (subsc), (rawDesc) )
#define tTECSUnit_cEntryInfo_getName( p_that, name, max_len ) \
	  (p_that)->cEntryInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cEntryInfo_getNameLength( p_that ) \
	  (p_that)->cEntryInfo.getNameLength__T( \
 )
#define tTECSUnit_cEntryInfo_getSignatureInfo( p_that, desc ) \
	  (p_that)->cEntryInfo.getSignatureInfo__T( \
 (desc) )
#define tTECSUnit_cEntryInfo_getArraySize( p_that ) \
	  (p_that)->cEntryInfo.getArraySize__T( \
 )
#define tTECSUnit_cEntryInfo_isInline( p_that ) \
	  (p_that)->cEntryInfo.isInline__T( \
 )
#define tTECSUnit_cUltrasonicSensor_getDistance( p_that ) \
	  (p_that)->cUltrasonicSensor.getDistance__T( \
 )
#define tTECSUnit_cUltrasonicSensor_listen( p_that ) \
	  (p_that)->cUltrasonicSensor.listen__T( \
 )
#define tTECSUnit_cUltrasonicSensor_initializePort( p_that ) \
	  (p_that)->cUltrasonicSensor.initializePort__T( \
 )
#define tTECSUnit_cColorSensor_getColor( p_that ) \
	  (p_that)->cColorSensor.getColor__T( \
 )
#define tTECSUnit_cColorSensor_getReflect( p_that ) \
	  (p_that)->cColorSensor.getReflect__T( \
 )
#define tTECSUnit_cColorSensor_getAmbient( p_that ) \
	  (p_that)->cColorSensor.getAmbient__T( \
 )
#define tTECSUnit_cColorSensor_initializePort( p_that ) \
	  (p_that)->cColorSensor.initializePort__T( \
 )
#define tTECSUnit_cColorSensor_getRGBRaw( p_that, r, g, b ) \
	  (p_that)->cColorSensor.getRGBRaw__T( \
 (r), (g), (b) )
#define tTECSUnit_cTouchSensor_isPressed( p_that ) \
	  (p_that)->cTouchSensor.isPressed__T( \
 )
#define tTECSUnit_cTouchSensor_initializePort( p_that ) \
	  (p_that)->cTouchSensor.initializePort__T( \
 )
#define tTECSUnit_cGyroSensor_getAngle( p_that ) \
	  (p_that)->cGyroSensor.getAngle__T( \
 )
#define tTECSUnit_cGyroSensor_getRate( p_that ) \
	  (p_that)->cGyroSensor.getRate__T( \
 )
#define tTECSUnit_cGyroSensor_reset( p_that ) \
	  (p_that)->cGyroSensor.reset__T( \
 )
#define tTECSUnit_cGyroSensor_calibrate( p_that, times ) \
	  (p_that)->cGyroSensor.calibrate__T( \
 (times) )
#define tTECSUnit_cGyroSensor_initializePort( p_that ) \
	  (p_that)->cGyroSensor.initializePort__T( \
 )
#define tTECSUnit_cMotor_getType( p_that ) \
	  (p_that)->cMotor.getType__T( \
 )
#define tTECSUnit_cMotor_getCounts( p_that ) \
	  (p_that)->cMotor.getCounts__T( \
 )
#define tTECSUnit_cMotor_getPower( p_that ) \
	  (p_that)->cMotor.getPower__T( \
 )
#define tTECSUnit_cMotor_resetCounts( p_that ) \
	  (p_that)->cMotor.resetCounts__T( \
 )
#define tTECSUnit_cMotor_setPower( p_that, power ) \
	  (p_that)->cMotor.setPower__T( \
 (power) )
#define tTECSUnit_cMotor_stop( p_that, brake ) \
	  (p_that)->cMotor.stop__T( \
 (brake) )
#define tTECSUnit_cMotor_rotate( p_that, degrees, speed_abs, blocking ) \
	  (p_that)->cMotor.rotate__T( \
 (degrees), (speed_abs), (blocking) )
#define tTECSUnit_cMotor_initializePort( p_that, type ) \
	  (p_that)->cMotor.initializePort__T( \
 (type) )
#define tTECSUnit_cButton_isPressed( p_that, button ) \
	  (p_that)->cButton.isPressed__T( \
 (button) )
#define tTECSUnit_cLCD_setFont( p_that, font ) \
	  (p_that)->cLCD.setFont__T( \
 (font) )
#define tTECSUnit_cLCD_getFontSize( p_that, font, p_width, p_height ) \
	  (p_that)->cLCD.getFontSize__T( \
 (font), (p_width), (p_height) )
#define tTECSUnit_cLCD_drawString( p_that, str, x, y ) \
	  (p_that)->cLCD.drawString__T( \
 (str), (x), (y) )
#define tTECSUnit_cLCD_fillRect( p_that, x, y, w, h, color ) \
	  (p_that)->cLCD.fillRect__T( \
 (x), (y), (w), (h), (color) )
#define tTECSUnit_cLCD_drawLine( p_that, x0, y0, x1, y1 ) \
	  (p_that)->cLCD.drawLine__T( \
 (x0), (y0), (x1), (y1) )
#define tTECSUnit_cLCD_print( p_that, str ) \
	  (p_that)->cLCD.print__T( \
 (str) )
#define tTECSUnit_cLCD_puts( p_that, str ) \
	  (p_that)->cLCD.puts__T( \
 (str) )
#define tTECSUnit_cLCD_clear( p_that ) \
	  (p_that)->cLCD.clear__T( \
 )
#define tTECSUnit_cLCD_showMessageBox( p_that, title, msg ) \
	  (p_that)->cLCD.showMessageBox__T( \
 (title), (msg) )
#define tTECSUnit_cLED_setColor( p_that, color ) \
	  (p_that)->cLED.setColor__T( \
 (color) )
#define tTECSUnit_cLED_off( p_that ) \
	  (p_that)->cLED.off__T( \
 )
#define tTECSUnit_cBattery_current_mA( p_that ) \
	  (p_that)->cBattery.current_mA__T( \
 )
#define tTECSUnit_cBattery_voltage_mV( p_that ) \
	  (p_that)->cBattery.voltage_mV__T( \
 )
#define tTECSUnit_cSpeaker_setVolume( p_that, volume ) \
	  (p_that)->cSpeaker.setVolume__T( \
 (volume) )
#define tTECSUnit_cSpeaker_playTone( p_that, frequency, duration ) \
	  (p_that)->cSpeaker.playTone__T( \
 (frequency), (duration) )
#define tTECSUnit_cSpeaker_stop( p_that ) \
	  (p_that)->cSpeaker.stop__T( \
 )
#define tTECSUnit_cBalancer_control( p_that, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
	  (p_that)->cBalancer.control__T( \
 (forward), (turn), (gyro), (gyroOffset), (leftRevolution), (rightRevolution), (battery), (pwm_l), (pwm_r), (backlashhalf) )
#define tTECSUnit_cBalancer_init( p_that ) \
	  (p_that)->cBalancer.init__T( \
 )
#define tTECSUnit_cSharedMemory_putVal( p_that, index, val ) \
	  (p_that)->cSharedMemory.putVal__T( \
 (index), (val) )
#define tTECSUnit_cSharedMemory_getVal( p_that, index ) \
	  (p_that)->cSharedMemory.getVal__T( \
 (index) )
#define tTECSUnit_cSharedMemory_getSize( p_that ) \
	  (p_that)->cSharedMemory.getSize__T( \
 )
#define tTECSUnit_cFatFile_fopen( p_that, path, mode ) \
	  (p_that)->cFatFile.fopen__T( \
 (path), (mode) )
#define tTECSUnit_cFatFile_fclose( p_that ) \
	  (p_that)->cFatFile.fclose__T( \
 )
#define tTECSUnit_cFatFile_fread( p_that, buffer, btr ) \
	  (p_that)->cFatFile.fread__T( \
 (buffer), (btr) )
#define tTECSUnit_cFatFile_fwrite( p_that, buffer, btw, bw ) \
	  (p_that)->cFatFile.fwrite__T( \
 (buffer), (btw), (bw) )
#define tTECSUnit_cFatFile_fgets( p_that, buff, btr ) \
	  (p_that)->cFatFile.fgets__T( \
 (buff), (btr) )
#define tTECSUnit_cFatFile_unlink( p_that, path ) \
	  (p_that)->cFatFile.unlink__T( \
 (path) )
#define tTECSUnit_cFatFile_fmount( p_that, path, opt ) \
	  (p_that)->cFatFile.fmount__T( \
 (path), (opt) )
#define tTECSUnit_cTarget_main( p_that, a, b ) \
	  (p_that)->cTarget.main__T( \
 (a), (b) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eUnit */
ER             tTECSUnit_eUnit_main_skel( const struct tag_sTECSUnit_VDES *epd, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cNSInfo */
Inline void
tTECSUnit_cNSInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sNamespaceInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cNSInfo = des.vdes;
}

/* [dynamic,optional] cNSInfo */
Inline void
tTECSUnit_cNSInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cNSInfo = NULL;
}

/* [dynamic] cRegionInfo */
Inline void
tTECSUnit_cRegionInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sRegionInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cRegionInfo = des.vdes;
}

/* [dynamic,optional] cRegionInfo */
Inline void
tTECSUnit_cRegionInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cRegionInfo = NULL;
}

/* [dynamic] cCellInfo */
Inline void
tTECSUnit_cCellInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sCellInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCellInfo = des.vdes;
}

/* [dynamic,optional] cCellInfo */
Inline void
tTECSUnit_cCellInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cCellInfo = NULL;
}

/* [dynamic] cSignatureInfo */
Inline void
tTECSUnit_cSignatureInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sSignatureInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cSignatureInfo = des.vdes;
}

/* [dynamic,optional] cSignatureInfo */
Inline void
tTECSUnit_cSignatureInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cSignatureInfo = NULL;
}

/* [dynamic] cCelltypeInfo */
Inline void
tTECSUnit_cCelltypeInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sCelltypeInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCelltypeInfo = des.vdes;
}

/* [dynamic,optional] cCelltypeInfo */
Inline void
tTECSUnit_cCelltypeInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cCelltypeInfo = NULL;
}

/* [dynamic] cVarDeclInfo */
Inline void
tTECSUnit_cVarDeclInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sVarDeclInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cVarDeclInfo = des.vdes;
}

/* [dynamic,optional] cVarDeclInfo */
Inline void
tTECSUnit_cVarDeclInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cVarDeclInfo = NULL;
}

/* [dynamic] cTypeInfo */
Inline void
tTECSUnit_cTypeInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sTypeInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTypeInfo = des.vdes;
}

/* [dynamic,optional] cTypeInfo */
Inline void
tTECSUnit_cTypeInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTypeInfo = NULL;
}

/* [dynamic] cREDInfo */
Inline void
tTECSUnit_cREDInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cREDInfo = des.vdes;
}

/* [dynamic,optional] cREDInfo */
Inline void
tTECSUnit_cREDInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cREDInfo = NULL;
}

/* [dynamic] cEntryInfo */
Inline void
tTECSUnit_cEntryInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sEntryInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cEntryInfo = des.vdes;
}

/* [dynamic,optional] cEntryInfo */
Inline void
tTECSUnit_cEntryInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cEntryInfo = NULL;
}

/* [dynamic] cUltrasonicSensor */
Inline void
tTECSUnit_cUltrasonicSensor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sUltrasonicSensor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cUltrasonicSensor = des.vdes;
}

/* [dynamic,optional] cUltrasonicSensor */
Inline void
tTECSUnit_cUltrasonicSensor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cUltrasonicSensor = NULL;
}

/* [dynamic] cColorSensor */
Inline void
tTECSUnit_cColorSensor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sColorSensor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cColorSensor = des.vdes;
}

/* [dynamic,optional] cColorSensor */
Inline void
tTECSUnit_cColorSensor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cColorSensor = NULL;
}

/* [dynamic] cTouchSensor */
Inline void
tTECSUnit_cTouchSensor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTouchSensor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTouchSensor = des.vdes;
}

/* [dynamic,optional] cTouchSensor */
Inline void
tTECSUnit_cTouchSensor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTouchSensor = NULL;
}

/* [dynamic] cGyroSensor */
Inline void
tTECSUnit_cGyroSensor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sGyroSensor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cGyroSensor = des.vdes;
}

/* [dynamic,optional] cGyroSensor */
Inline void
tTECSUnit_cGyroSensor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cGyroSensor = NULL;
}

/* [dynamic] cMotor */
Inline void
tTECSUnit_cMotor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sMotor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cMotor = des.vdes;
}

/* [dynamic,optional] cMotor */
Inline void
tTECSUnit_cMotor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cMotor = NULL;
}

/* [dynamic] cButton */
Inline void
tTECSUnit_cButton_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sButton ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cButton = des.vdes;
}

/* [dynamic,optional] cButton */
Inline void
tTECSUnit_cButton_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cButton = NULL;
}

/* [dynamic] cLCD */
Inline void
tTECSUnit_cLCD_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sLCD ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cLCD = des.vdes;
}

/* [dynamic,optional] cLCD */
Inline void
tTECSUnit_cLCD_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cLCD = NULL;
}

/* [dynamic] cLED */
Inline void
tTECSUnit_cLED_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sLED ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cLED = des.vdes;
}

/* [dynamic,optional] cLED */
Inline void
tTECSUnit_cLED_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cLED = NULL;
}

/* [dynamic] cBattery */
Inline void
tTECSUnit_cBattery_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sBattery ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cBattery = des.vdes;
}

/* [dynamic,optional] cBattery */
Inline void
tTECSUnit_cBattery_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cBattery = NULL;
}

/* [dynamic] cSpeaker */
Inline void
tTECSUnit_cSpeaker_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sSpeaker ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cSpeaker = des.vdes;
}

/* [dynamic,optional] cSpeaker */
Inline void
tTECSUnit_cSpeaker_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cSpeaker = NULL;
}

/* [dynamic] cBalancer */
Inline void
tTECSUnit_cBalancer_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sBalancer ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cBalancer = des.vdes;
}

/* [dynamic,optional] cBalancer */
Inline void
tTECSUnit_cBalancer_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cBalancer = NULL;
}

/* [dynamic] cSharedMemory */
Inline void
tTECSUnit_cSharedMemory_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sSharedMemory ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cSharedMemory = des.vdes;
}

/* [dynamic,optional] cSharedMemory */
Inline void
tTECSUnit_cSharedMemory_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cSharedMemory = NULL;
}

/* [dynamic] cFatFile */
Inline void
tTECSUnit_cFatFile_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sFatFile ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cFatFile = des.vdes;
}

/* [dynamic,optional] cFatFile */
Inline void
tTECSUnit_cFatFile_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cFatFile = NULL;
}

/* [dynamic] cTarget */
Inline void
tTECSUnit_cTarget_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTarget ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTarget = des.vdes;
}

/* [dynamic,optional] cTarget */
Inline void
tTECSUnit_cTarget_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTarget = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTECSUnit_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTECSUnit_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTECSUnit_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTECSUnit_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_LEN             tTECSUnit_ATTR_LEN( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_data             tTECSUnit_VAR_data( p_cellcb )
#define VAR_cell_entry       tTECSUnit_VAR_cell_entry( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cLCD_tmp_setFont( font ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_setFont( p_cellcb, font ))
#define cLCD_tmp_getFontSize( font, p_width, p_height ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_getFontSize( p_cellcb, font, p_width, p_height ))
#define cLCD_tmp_drawString( str, x, y ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_drawString( p_cellcb, str, x, y ))
#define cLCD_tmp_fillRect( x, y, w, h, color ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_fillRect( p_cellcb, x, y, w, h, color ))
#define cLCD_tmp_drawLine( x0, y0, x1, y1 ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_drawLine( p_cellcb, x0, y0, x1, y1 ))
#define cLCD_tmp_print( str ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_print( p_cellcb, str ))
#define cLCD_tmp_puts( str ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_puts( p_cellcb, str ))
#define cLCD_tmp_clear( ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_clear( p_cellcb ))
#define cLCD_tmp_showMessageBox( title, msg ) \
          ((void)p_cellcb, tTECSUnit_cLCD_tmp_showMessageBox( p_cellcb, title, msg ))
#define cButton_tmp_isPressed( button ) \
          ((void)p_cellcb, tTECSUnit_cButton_tmp_isPressed( p_cellcb, button ))
#define cKernel_tmp_sleep( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_sleep( p_cellcb ))
#define cKernel_tmp_sleepTimeout( timeout ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_sleepTimeout( p_cellcb, timeout ))
#define cKernel_tmp_delay( delayTime ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_delay( p_cellcb, delayTime ))
#define cKernel_tmp_exitTask( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_exitTask( p_cellcb ))
#define cKernel_tmp_getTaskId( p_taskId ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_getTaskId( p_cellcb, p_taskId ))
#define cKernel_tmp_rotateReadyQueue( taskPriority ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_rotateReadyQueue( p_cellcb, taskPriority ))
#define cKernel_tmp_getTime( p_systemTime ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_getTime( p_cellcb, p_systemTime ))
#define cKernel_tmp_getMicroTime( p_systemMicroTime ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_getMicroTime( p_cellcb, p_systemMicroTime ))
#define cKernel_tmp_lockCpu( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_lockCpu( p_cellcb ))
#define cKernel_tmp_unlockCpu( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_unlockCpu( p_cellcb ))
#define cKernel_tmp_disableDispatch( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_disableDispatch( p_cellcb ))
#define cKernel_tmp_enableDispatch( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_enableDispatch( p_cellcb ))
#define cKernel_tmp_disableTaskException( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_disableTaskException( p_cellcb ))
#define cKernel_tmp_enableTaskException( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_enableTaskException( p_cellcb ))
#define cKernel_tmp_changeInterruptPriorityMask( interruptPriority ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_changeInterruptPriorityMask( p_cellcb, interruptPriority ))
#define cKernel_tmp_getInterruptPriorityMask( p_interruptPriority ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_getInterruptPriorityMask( p_cellcb, p_interruptPriority ))
#define cKernel_tmp_exitKernel( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_exitKernel( p_cellcb ))
#define cKernel_tmp_senseContext( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_senseContext( p_cellcb ))
#define cKernel_tmp_senseLock( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_senseLock( p_cellcb ))
#define cKernel_tmp_senseDispatch( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_senseDispatch( p_cellcb ))
#define cKernel_tmp_senseDispatchPendingState( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_senseDispatchPendingState( p_cellcb ))
#define cKernel_tmp_senseKernel( ) \
          ((void)p_cellcb, tTECSUnit_cKernel_tmp_senseKernel( p_cellcb ))
#define cFatFile_tmp_fopen( path, mode ) \
          ((void)p_cellcb, tTECSUnit_cFatFile_tmp_fopen( p_cellcb, path, mode ))
#define cFatFile_tmp_fclose( ) \
          ((void)p_cellcb, tTECSUnit_cFatFile_tmp_fclose( p_cellcb ))
#define cFatFile_tmp_fread( buffer, btr ) \
          ((void)p_cellcb, tTECSUnit_cFatFile_tmp_fread( p_cellcb, buffer, btr ))
#define cFatFile_tmp_fwrite( buffer, btw, bw ) \
          ((void)p_cellcb, tTECSUnit_cFatFile_tmp_fwrite( p_cellcb, buffer, btw, bw ))
#define cFatFile_tmp_fgets( buff, btr ) \
          ((void)p_cellcb, tTECSUnit_cFatFile_tmp_fgets( p_cellcb, buff, btr ))
#define cFatFile_tmp_unlink( path ) \
          ((void)p_cellcb, tTECSUnit_cFatFile_tmp_unlink( p_cellcb, path ))
#define cFatFile_tmp_fmount( path, opt ) \
          ((void)p_cellcb, tTECSUnit_cFatFile_tmp_fmount( p_cellcb, path, opt ))
#define cTECSInfo_findNamespace( namespace_path, nsDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findNamespace( p_cellcb, namespace_path, nsDesc ))
#define cTECSInfo_findRegion( namespace_path, regionDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRegion( p_cellcb, namespace_path, regionDesc ))
#define cTECSInfo_findSignature( namespace_path, signatureDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findSignature( p_cellcb, namespace_path, signatureDesc ))
#define cTECSInfo_findCelltype( namespace_path, celltypeDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findCelltype( p_cellcb, namespace_path, celltypeDesc ))
#define cTECSInfo_findCell( namespace_path, cellDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findCell( p_cellcb, namespace_path, cellDesc ))
#define cTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_cellcb, namespace_path, rawEntryDescDesc, entryDesc ))
#define cTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_cellcb, namespace_path, subsc, rawDesc ))
#define cNSInfo_getName( name, max_len ) \
          tTECSUnit_cNSInfo_getName( p_cellcb, name, max_len )
#define cNSInfo_getNameLength( ) \
          tTECSUnit_cNSInfo_getNameLength( p_cellcb )
#define cNSInfo_getNNamespace( ) \
          tTECSUnit_cNSInfo_getNNamespace( p_cellcb )
#define cNSInfo_getNamespaceInfo( ith, des ) \
          tTECSUnit_cNSInfo_getNamespaceInfo( p_cellcb, ith, des )
#define cNSInfo_getNSignature( ) \
          tTECSUnit_cNSInfo_getNSignature( p_cellcb )
#define cNSInfo_getSignatureInfo( ith, des ) \
          tTECSUnit_cNSInfo_getSignatureInfo( p_cellcb, ith, des )
#define cNSInfo_getNCelltype( ) \
          tTECSUnit_cNSInfo_getNCelltype( p_cellcb )
#define cNSInfo_getCelltypeInfo( ith, des ) \
          tTECSUnit_cNSInfo_getCelltypeInfo( p_cellcb, ith, des )
#define cRegionInfo_getName( name, max_len ) \
          tTECSUnit_cRegionInfo_getName( p_cellcb, name, max_len )
#define cRegionInfo_getNameLength( ) \
          tTECSUnit_cRegionInfo_getNameLength( p_cellcb )
#define cRegionInfo_getNCell( ) \
          tTECSUnit_cRegionInfo_getNCell( p_cellcb )
#define cRegionInfo_getCellInfo( ith, des ) \
          tTECSUnit_cRegionInfo_getCellInfo( p_cellcb, ith, des )
#define cRegionInfo_getNRegion( ) \
          tTECSUnit_cRegionInfo_getNRegion( p_cellcb )
#define cRegionInfo_getRegionInfo( ith, des ) \
          tTECSUnit_cRegionInfo_getRegionInfo( p_cellcb, ith, des )
#define cCellInfo_getName( name, max_len ) \
          tTECSUnit_cCellInfo_getName( p_cellcb, name, max_len )
#define cCellInfo_getNameLength( ) \
          tTECSUnit_cCellInfo_getNameLength( p_cellcb )
#define cCellInfo_getNRawEntryDescriptorInfo( ) \
          tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_cellcb )
#define cCellInfo_getRawEntryDescriptorInfo( index, desc ) \
          tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_cellcb, index, desc )
#define cCellInfo_getCelltypeInfo( desc ) \
          tTECSUnit_cCellInfo_getCelltypeInfo( p_cellcb, desc )
#define cCellInfo_getCBP( cbp ) \
          tTECSUnit_cCellInfo_getCBP( p_cellcb, cbp )
#define cCellInfo_getINIBP( inibp ) \
          tTECSUnit_cCellInfo_getINIBP( p_cellcb, inibp )
#define cSignatureInfo_getName( name, max_len ) \
          tTECSUnit_cSignatureInfo_getName( p_cellcb, name, max_len )
#define cSignatureInfo_getNameLength( ) \
          tTECSUnit_cSignatureInfo_getNameLength( p_cellcb )
#define cSignatureInfo_getNFunction( ) \
          tTECSUnit_cSignatureInfo_getNFunction( p_cellcb )
#define cSignatureInfo_getFunctionInfo( ith, desc ) \
          tTECSUnit_cSignatureInfo_getFunctionInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getName( name, max_len ) \
          tTECSUnit_cCelltypeInfo_getName( p_cellcb, name, max_len )
#define cCelltypeInfo_getNameLength( ) \
          tTECSUnit_cCelltypeInfo_getNameLength( p_cellcb )
#define cCelltypeInfo_getNAttr( ) \
          tTECSUnit_cCelltypeInfo_getNAttr( p_cellcb )
#define cCelltypeInfo_getAttrInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getAttrInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNVar( ) \
          tTECSUnit_cCelltypeInfo_getNVar( p_cellcb )
#define cCelltypeInfo_getVarInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getVarInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNCall( ) \
          tTECSUnit_cCelltypeInfo_getNCall( p_cellcb )
#define cCelltypeInfo_getCallInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getCallInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNEntry( ) \
          tTECSUnit_cCelltypeInfo_getNEntry( p_cellcb )
#define cCelltypeInfo_getEntryInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getEntryInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_isSingleton( ) \
          tTECSUnit_cCelltypeInfo_isSingleton( p_cellcb )
#define cCelltypeInfo_isIDX_is_ID( ) \
          tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_cellcb )
#define cCelltypeInfo_sizeOfCB( ) \
          tTECSUnit_cCelltypeInfo_sizeOfCB( p_cellcb )
#define cCelltypeInfo_sizeOfINIB( ) \
          tTECSUnit_cCelltypeInfo_sizeOfINIB( p_cellcb )
#define cVarDeclInfo_getName( name, max_len ) \
          tTECSUnit_cVarDeclInfo_getName( p_cellcb, name, max_len )
#define cVarDeclInfo_getNameLength( ) \
          tTECSUnit_cVarDeclInfo_getNameLength( p_cellcb )
#define cVarDeclInfo_getLocationInfo( offset, place ) \
          tTECSUnit_cVarDeclInfo_getLocationInfo( p_cellcb, offset, place )
#define cVarDeclInfo_getTypeInfo( desc ) \
          tTECSUnit_cVarDeclInfo_getTypeInfo( p_cellcb, desc )
#define cVarDeclInfo_getSizeIsExpr( expr_str, max_len ) \
          tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_cellcb, expr_str, max_len )
#define cVarDeclInfo_getSizeIs( size, p_cb ) \
          tTECSUnit_cVarDeclInfo_getSizeIs( p_cellcb, size, p_cb )
#define cTypeInfo_getName( name, max_len ) \
          tTECSUnit_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( ) \
          tTECSUnit_cTypeInfo_getNameLength( p_cellcb )
#define cTypeInfo_getSize( ) \
          tTECSUnit_cTypeInfo_getSize( p_cellcb )
#define cTypeInfo_getKind( ) \
          tTECSUnit_cTypeInfo_getKind( p_cellcb )
#define cTypeInfo_getNType( ) \
          tTECSUnit_cTypeInfo_getNType( p_cellcb )
#define cTypeInfo_getTypeInfo( desc ) \
          tTECSUnit_cTypeInfo_getTypeInfo( p_cellcb, desc )
#define cTypeInfo_getNMember( ) \
          tTECSUnit_cTypeInfo_getNMember( p_cellcb )
#define cTypeInfo_getMemberInfo( ith, desc ) \
          tTECSUnit_cTypeInfo_getMemberInfo( p_cellcb, ith, desc )
#define cREDInfo_getNRawEntryDescriptorInfo( ) \
          tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_cellcb )
#define cREDInfo_getRawDescriptor( subsc, rawDesc ) \
          tTECSUnit_cREDInfo_getRawDescriptor( p_cellcb, subsc, rawDesc )
#define cEntryInfo_getName( name, max_len ) \
          tTECSUnit_cEntryInfo_getName( p_cellcb, name, max_len )
#define cEntryInfo_getNameLength( ) \
          tTECSUnit_cEntryInfo_getNameLength( p_cellcb )
#define cEntryInfo_getSignatureInfo( desc ) \
          tTECSUnit_cEntryInfo_getSignatureInfo( p_cellcb, desc )
#define cEntryInfo_getArraySize( ) \
          tTECSUnit_cEntryInfo_getArraySize( p_cellcb )
#define cEntryInfo_isInline( ) \
          tTECSUnit_cEntryInfo_isInline( p_cellcb )
#define cUltrasonicSensor_getDistance( ) \
          tTECSUnit_cUltrasonicSensor_getDistance( p_cellcb )
#define cUltrasonicSensor_listen( ) \
          tTECSUnit_cUltrasonicSensor_listen( p_cellcb )
#define cUltrasonicSensor_initializePort( ) \
          tTECSUnit_cUltrasonicSensor_initializePort( p_cellcb )
#define cColorSensor_getColor( ) \
          tTECSUnit_cColorSensor_getColor( p_cellcb )
#define cColorSensor_getReflect( ) \
          tTECSUnit_cColorSensor_getReflect( p_cellcb )
#define cColorSensor_getAmbient( ) \
          tTECSUnit_cColorSensor_getAmbient( p_cellcb )
#define cColorSensor_initializePort( ) \
          tTECSUnit_cColorSensor_initializePort( p_cellcb )
#define cColorSensor_getRGBRaw( r, g, b ) \
          tTECSUnit_cColorSensor_getRGBRaw( p_cellcb, r, g, b )
#define cTouchSensor_isPressed( ) \
          tTECSUnit_cTouchSensor_isPressed( p_cellcb )
#define cTouchSensor_initializePort( ) \
          tTECSUnit_cTouchSensor_initializePort( p_cellcb )
#define cGyroSensor_getAngle( ) \
          tTECSUnit_cGyroSensor_getAngle( p_cellcb )
#define cGyroSensor_getRate( ) \
          tTECSUnit_cGyroSensor_getRate( p_cellcb )
#define cGyroSensor_reset( ) \
          tTECSUnit_cGyroSensor_reset( p_cellcb )
#define cGyroSensor_calibrate( times ) \
          tTECSUnit_cGyroSensor_calibrate( p_cellcb, times )
#define cGyroSensor_initializePort( ) \
          tTECSUnit_cGyroSensor_initializePort( p_cellcb )
#define cMotor_getType( ) \
          tTECSUnit_cMotor_getType( p_cellcb )
#define cMotor_getCounts( ) \
          tTECSUnit_cMotor_getCounts( p_cellcb )
#define cMotor_getPower( ) \
          tTECSUnit_cMotor_getPower( p_cellcb )
#define cMotor_resetCounts( ) \
          tTECSUnit_cMotor_resetCounts( p_cellcb )
#define cMotor_setPower( power ) \
          tTECSUnit_cMotor_setPower( p_cellcb, power )
#define cMotor_stop( brake ) \
          tTECSUnit_cMotor_stop( p_cellcb, brake )
#define cMotor_rotate( degrees, speed_abs, blocking ) \
          tTECSUnit_cMotor_rotate( p_cellcb, degrees, speed_abs, blocking )
#define cMotor_initializePort( type ) \
          tTECSUnit_cMotor_initializePort( p_cellcb, type )
#define cButton_isPressed( button ) \
          tTECSUnit_cButton_isPressed( p_cellcb, button )
#define cLCD_setFont( font ) \
          tTECSUnit_cLCD_setFont( p_cellcb, font )
#define cLCD_getFontSize( font, p_width, p_height ) \
          tTECSUnit_cLCD_getFontSize( p_cellcb, font, p_width, p_height )
#define cLCD_drawString( str, x, y ) \
          tTECSUnit_cLCD_drawString( p_cellcb, str, x, y )
#define cLCD_fillRect( x, y, w, h, color ) \
          tTECSUnit_cLCD_fillRect( p_cellcb, x, y, w, h, color )
#define cLCD_drawLine( x0, y0, x1, y1 ) \
          tTECSUnit_cLCD_drawLine( p_cellcb, x0, y0, x1, y1 )
#define cLCD_print( str ) \
          tTECSUnit_cLCD_print( p_cellcb, str )
#define cLCD_puts( str ) \
          tTECSUnit_cLCD_puts( p_cellcb, str )
#define cLCD_clear( ) \
          tTECSUnit_cLCD_clear( p_cellcb )
#define cLCD_showMessageBox( title, msg ) \
          tTECSUnit_cLCD_showMessageBox( p_cellcb, title, msg )
#define cLED_setColor( color ) \
          tTECSUnit_cLED_setColor( p_cellcb, color )
#define cLED_off( ) \
          tTECSUnit_cLED_off( p_cellcb )
#define cBattery_current_mA( ) \
          tTECSUnit_cBattery_current_mA( p_cellcb )
#define cBattery_voltage_mV( ) \
          tTECSUnit_cBattery_voltage_mV( p_cellcb )
#define cSpeaker_setVolume( volume ) \
          tTECSUnit_cSpeaker_setVolume( p_cellcb, volume )
#define cSpeaker_playTone( frequency, duration ) \
          tTECSUnit_cSpeaker_playTone( p_cellcb, frequency, duration )
#define cSpeaker_stop( ) \
          tTECSUnit_cSpeaker_stop( p_cellcb )
#define cBalancer_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
          tTECSUnit_cBalancer_control( p_cellcb, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf )
#define cBalancer_init( ) \
          tTECSUnit_cBalancer_init( p_cellcb )
#define cSharedMemory_putVal( index, val ) \
          tTECSUnit_cSharedMemory_putVal( p_cellcb, index, val )
#define cSharedMemory_getVal( index ) \
          tTECSUnit_cSharedMemory_getVal( p_cellcb, index )
#define cSharedMemory_getSize( ) \
          tTECSUnit_cSharedMemory_getSize( p_cellcb )
#define cFatFile_fopen( path, mode ) \
          tTECSUnit_cFatFile_fopen( p_cellcb, path, mode )
#define cFatFile_fclose( ) \
          tTECSUnit_cFatFile_fclose( p_cellcb )
#define cFatFile_fread( buffer, btr ) \
          tTECSUnit_cFatFile_fread( p_cellcb, buffer, btr )
#define cFatFile_fwrite( buffer, btw, bw ) \
          tTECSUnit_cFatFile_fwrite( p_cellcb, buffer, btw, bw )
#define cFatFile_fgets( buff, btr ) \
          tTECSUnit_cFatFile_fgets( p_cellcb, buff, btr )
#define cFatFile_unlink( path ) \
          tTECSUnit_cFatFile_unlink( p_cellcb, path )
#define cFatFile_fmount( path, opt ) \
          tTECSUnit_cFatFile_fmount( p_cellcb, path, opt )
#define cTarget_main( a, b ) \
          tTECSUnit_cTarget_main( p_cellcb, a, b )



/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cNSInfo_set_descriptor( desc )\
          tTECSUnit_cNSInfo_set_descriptor( p_cellcb, desc )
#define cNSInfo_unjoin(  )\
          tTECSUnit_cNSInfo_unjoin( p_cellcb )
#define cRegionInfo_set_descriptor( desc )\
          tTECSUnit_cRegionInfo_set_descriptor( p_cellcb, desc )
#define cRegionInfo_unjoin(  )\
          tTECSUnit_cRegionInfo_unjoin( p_cellcb )
#define cCellInfo_set_descriptor( desc )\
          tTECSUnit_cCellInfo_set_descriptor( p_cellcb, desc )
#define cCellInfo_unjoin(  )\
          tTECSUnit_cCellInfo_unjoin( p_cellcb )
#define cSignatureInfo_set_descriptor( desc )\
          tTECSUnit_cSignatureInfo_set_descriptor( p_cellcb, desc )
#define cSignatureInfo_unjoin(  )\
          tTECSUnit_cSignatureInfo_unjoin( p_cellcb )
#define cCelltypeInfo_set_descriptor( desc )\
          tTECSUnit_cCelltypeInfo_set_descriptor( p_cellcb, desc )
#define cCelltypeInfo_unjoin(  )\
          tTECSUnit_cCelltypeInfo_unjoin( p_cellcb )
#define cVarDeclInfo_set_descriptor( desc )\
          tTECSUnit_cVarDeclInfo_set_descriptor( p_cellcb, desc )
#define cVarDeclInfo_unjoin(  )\
          tTECSUnit_cVarDeclInfo_unjoin( p_cellcb )
#define cTypeInfo_set_descriptor( desc )\
          tTECSUnit_cTypeInfo_set_descriptor( p_cellcb, desc )
#define cTypeInfo_unjoin(  )\
          tTECSUnit_cTypeInfo_unjoin( p_cellcb )
#define cREDInfo_set_descriptor( desc )\
          tTECSUnit_cREDInfo_set_descriptor( p_cellcb, desc )
#define cREDInfo_unjoin(  )\
          tTECSUnit_cREDInfo_unjoin( p_cellcb )
#define cEntryInfo_set_descriptor( desc )\
          tTECSUnit_cEntryInfo_set_descriptor( p_cellcb, desc )
#define cEntryInfo_unjoin(  )\
          tTECSUnit_cEntryInfo_unjoin( p_cellcb )
#define cUltrasonicSensor_set_descriptor( desc )\
          tTECSUnit_cUltrasonicSensor_set_descriptor( p_cellcb, desc )
#define cUltrasonicSensor_unjoin(  )\
          tTECSUnit_cUltrasonicSensor_unjoin( p_cellcb )
#define cColorSensor_set_descriptor( desc )\
          tTECSUnit_cColorSensor_set_descriptor( p_cellcb, desc )
#define cColorSensor_unjoin(  )\
          tTECSUnit_cColorSensor_unjoin( p_cellcb )
#define cTouchSensor_set_descriptor( desc )\
          tTECSUnit_cTouchSensor_set_descriptor( p_cellcb, desc )
#define cTouchSensor_unjoin(  )\
          tTECSUnit_cTouchSensor_unjoin( p_cellcb )
#define cGyroSensor_set_descriptor( desc )\
          tTECSUnit_cGyroSensor_set_descriptor( p_cellcb, desc )
#define cGyroSensor_unjoin(  )\
          tTECSUnit_cGyroSensor_unjoin( p_cellcb )
#define cMotor_set_descriptor( desc )\
          tTECSUnit_cMotor_set_descriptor( p_cellcb, desc )
#define cMotor_unjoin(  )\
          tTECSUnit_cMotor_unjoin( p_cellcb )
#define cButton_set_descriptor( desc )\
          tTECSUnit_cButton_set_descriptor( p_cellcb, desc )
#define cButton_unjoin(  )\
          tTECSUnit_cButton_unjoin( p_cellcb )
#define cLCD_set_descriptor( desc )\
          tTECSUnit_cLCD_set_descriptor( p_cellcb, desc )
#define cLCD_unjoin(  )\
          tTECSUnit_cLCD_unjoin( p_cellcb )
#define cLED_set_descriptor( desc )\
          tTECSUnit_cLED_set_descriptor( p_cellcb, desc )
#define cLED_unjoin(  )\
          tTECSUnit_cLED_unjoin( p_cellcb )
#define cBattery_set_descriptor( desc )\
          tTECSUnit_cBattery_set_descriptor( p_cellcb, desc )
#define cBattery_unjoin(  )\
          tTECSUnit_cBattery_unjoin( p_cellcb )
#define cSpeaker_set_descriptor( desc )\
          tTECSUnit_cSpeaker_set_descriptor( p_cellcb, desc )
#define cSpeaker_unjoin(  )\
          tTECSUnit_cSpeaker_unjoin( p_cellcb )
#define cBalancer_set_descriptor( desc )\
          tTECSUnit_cBalancer_set_descriptor( p_cellcb, desc )
#define cBalancer_unjoin(  )\
          tTECSUnit_cBalancer_unjoin( p_cellcb )
#define cSharedMemory_set_descriptor( desc )\
          tTECSUnit_cSharedMemory_set_descriptor( p_cellcb, desc )
#define cSharedMemory_unjoin(  )\
          tTECSUnit_cSharedMemory_unjoin( p_cellcb )
#define cFatFile_set_descriptor( desc )\
          tTECSUnit_cFatFile_set_descriptor( p_cellcb, desc )
#define cFatFile_unjoin(  )\
          tTECSUnit_cFatFile_unjoin( p_cellcb )
#define cTarget_set_descriptor( desc )\
          tTECSUnit_cTarget_set_descriptor( p_cellcb, desc )
#define cTarget_unjoin(  )\
          tTECSUnit_cTarget_unjoin( p_cellcb )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cNSInfo_joined()\
		tTECSUnit_is_cNSInfo_joined(p_cellcb)
#define is_cRegionInfo_joined()\
		tTECSUnit_is_cRegionInfo_joined(p_cellcb)
#define is_cCellInfo_joined()\
		tTECSUnit_is_cCellInfo_joined(p_cellcb)
#define is_cSignatureInfo_joined()\
		tTECSUnit_is_cSignatureInfo_joined(p_cellcb)
#define is_cCelltypeInfo_joined()\
		tTECSUnit_is_cCelltypeInfo_joined(p_cellcb)
#define is_cVarDeclInfo_joined()\
		tTECSUnit_is_cVarDeclInfo_joined(p_cellcb)
#define is_cTypeInfo_joined()\
		tTECSUnit_is_cTypeInfo_joined(p_cellcb)
#define is_cREDInfo_joined()\
		tTECSUnit_is_cREDInfo_joined(p_cellcb)
#define is_cEntryInfo_joined()\
		tTECSUnit_is_cEntryInfo_joined(p_cellcb)
#define is_cUltrasonicSensor_joined()\
		tTECSUnit_is_cUltrasonicSensor_joined(p_cellcb)
#define is_cColorSensor_joined()\
		tTECSUnit_is_cColorSensor_joined(p_cellcb)
#define is_cTouchSensor_joined()\
		tTECSUnit_is_cTouchSensor_joined(p_cellcb)
#define is_cGyroSensor_joined()\
		tTECSUnit_is_cGyroSensor_joined(p_cellcb)
#define is_cMotor_joined()\
		tTECSUnit_is_cMotor_joined(p_cellcb)
#define is_cButton_joined()\
		tTECSUnit_is_cButton_joined(p_cellcb)
#define is_cLCD_joined()\
		tTECSUnit_is_cLCD_joined(p_cellcb)
#define is_cLED_joined()\
		tTECSUnit_is_cLED_joined(p_cellcb)
#define is_cBattery_joined()\
		tTECSUnit_is_cBattery_joined(p_cellcb)
#define is_cSpeaker_joined()\
		tTECSUnit_is_cSpeaker_joined(p_cellcb)
#define is_cBalancer_joined()\
		tTECSUnit_is_cBalancer_joined(p_cellcb)
#define is_cSharedMemory_joined()\
		tTECSUnit_is_cSharedMemory_joined(p_cellcb)
#define is_cFatFile_joined()\
		tTECSUnit_is_cFatFile_joined(p_cellcb)
#define is_cTarget_joined()\
		tTECSUnit_is_cTarget_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eUnit_main       tTECSUnit_eUnit_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTECSUnit_N_CELL; (i)++ ){ \
       (p_cb) = &tTECSUnit_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->cNSInfo = (p_that)->_inib->cNSInfo_init_;\
	(p_that)->cRegionInfo = (p_that)->_inib->cRegionInfo_init_;\
	(p_that)->cCellInfo = (p_that)->_inib->cCellInfo_init_;\
	(p_that)->cSignatureInfo = (p_that)->_inib->cSignatureInfo_init_;\
	(p_that)->cCelltypeInfo = (p_that)->_inib->cCelltypeInfo_init_;\
	(p_that)->cVarDeclInfo = (p_that)->_inib->cVarDeclInfo_init_;\
	(p_that)->cTypeInfo = (p_that)->_inib->cTypeInfo_init_;\
	(p_that)->cREDInfo = (p_that)->_inib->cREDInfo_init_;\
	(p_that)->cEntryInfo = (p_that)->_inib->cEntryInfo_init_;\
	(p_that)->cUltrasonicSensor = (p_that)->_inib->cUltrasonicSensor_init_;\
	(p_that)->cColorSensor = (p_that)->_inib->cColorSensor_init_;\
	(p_that)->cTouchSensor = (p_that)->_inib->cTouchSensor_init_;\
	(p_that)->cGyroSensor = (p_that)->_inib->cGyroSensor_init_;\
	(p_that)->cMotor = (p_that)->_inib->cMotor_init_;\
	(p_that)->cButton = (p_that)->_inib->cButton_init_;\
	(p_that)->cLCD = (p_that)->_inib->cLCD_init_;\
	(p_that)->cLED = (p_that)->_inib->cLED_init_;\
	(p_that)->cBattery = (p_that)->_inib->cBattery_init_;\
	(p_that)->cSpeaker = (p_that)->_inib->cSpeaker_init_;\
	(p_that)->cBalancer = (p_that)->_inib->cBalancer_init_;\
	(p_that)->cSharedMemory = (p_that)->_inib->cSharedMemory_init_;\
	(p_that)->cFatFile = (p_that)->_inib->cFatFile_init_;\
	(p_that)->cTarget = (p_that)->_inib->cTarget_init_;

#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tTECSUnit_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTECSUnit_TECSGENH */
