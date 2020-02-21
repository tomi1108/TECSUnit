/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "nMruby_tsKernel_Initializer_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* MBP: MrubyBridgePlugin: MBP000 */
#ifndef TECSGEN
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#endif /* TECSGEN */
#include "TECSPointer.h"
#include "TECSStruct.h"

#if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

#ifndef NULL
#define NULL 0
#endif
//  Prototype MBP400
mrb_value  MrubyBridge_tsKernel_initialize( mrb_state *mrb, mrb_value self);
mrb_value  MrubyBridge_tsKernel_sleep( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_sleepTimeout( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_delay( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_exitTask( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_getTaskId( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_rotateReadyQueue( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_getTime( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_getMicroTime( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_lockCpu( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_unlockCpu( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_disableDispatch( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_enableDispatch( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_disableTaskException( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_enableTaskException( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_changeInterruptPriorityMask( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_getInterruptPriorityMask( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_exitKernel( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_senseContext( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_senseLock( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_senseDispatch( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_senseDispatchPendingState( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsKernel_senseKernel( mrb_state *mrb, mrb_value self );
/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  nMruby_sInitializeTECSBridge
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_initializeBridge
 * name:         eInitialize_initializeBridge
 * global_name:  nMruby_tsKernel_Initializer_eInitialize_initializeBridge
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_initializeBridge(CELLIDX idx, mrb_state* mrb, struct RClass* TECS)
{
    // CELLCB *p_cellcb = GET_CELLCB( idx );  /* no error check */     /* MBP700 */
    struct RClass	*rc;

    rc = mrb_define_class_under( mrb, TECS, "TsKernel", mrb->object_class );
    mrb_define_method( mrb, rc, "initialize", MrubyBridge_tsKernel_initialize, MRB_ARGS_REQ(1) );
    MRB_SET_INSTANCE_TT(rc, MRB_TT_DATA);
	mrb_define_method( mrb, rc, "sleep", MrubyBridge_tsKernel_sleep, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "sleepTimeout", MrubyBridge_tsKernel_sleepTimeout, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "delay", MrubyBridge_tsKernel_delay, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "exitTask", MrubyBridge_tsKernel_exitTask, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "getTaskId", MrubyBridge_tsKernel_getTaskId, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "rotateReadyQueue", MrubyBridge_tsKernel_rotateReadyQueue, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "getTime", MrubyBridge_tsKernel_getTime, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "getMicroTime", MrubyBridge_tsKernel_getMicroTime, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "lockCpu", MrubyBridge_tsKernel_lockCpu, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "unlockCpu", MrubyBridge_tsKernel_unlockCpu, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "disableDispatch", MrubyBridge_tsKernel_disableDispatch, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "enableDispatch", MrubyBridge_tsKernel_enableDispatch, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "disableTaskException", MrubyBridge_tsKernel_disableTaskException, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "enableTaskException", MrubyBridge_tsKernel_enableTaskException, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "changeInterruptPriorityMask", MrubyBridge_tsKernel_changeInterruptPriorityMask, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "getInterruptPriorityMask", MrubyBridge_tsKernel_getInterruptPriorityMask, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "exitKernel", MrubyBridge_tsKernel_exitKernel, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "senseContext", MrubyBridge_tsKernel_senseContext, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "senseLock", MrubyBridge_tsKernel_senseLock, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "senseDispatch", MrubyBridge_tsKernel_senseDispatch, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "senseDispatchPendingState", MrubyBridge_tsKernel_senseDispatchPendingState, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "senseKernel", MrubyBridge_tsKernel_senseKernel, MRB_ARGS_NONE() );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
