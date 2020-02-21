/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tKernel_tecsgen.h"
#include "tKernel_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eKernel */
struct tag_tKernel_eKernel_DES {
    const struct tag_sKernel_VMT *vmt;
    int           idx;
};

/* eiKernel */
struct tag_tKernel_eiKernel_DES {
    const struct tag_siKernel_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eKernel */
ER             tKernel_eKernel_sleep_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_sleep( );
}
ER             tKernel_eKernel_sleepTimeout_skel( const struct tag_sKernel_VDES *epd, TMO timeout)
{
    return tKernel_eKernel_sleepTimeout( timeout );
}
ER             tKernel_eKernel_delay_skel( const struct tag_sKernel_VDES *epd, RELTIM delayTime)
{
    return tKernel_eKernel_delay( delayTime );
}
ER             tKernel_eKernel_exitTask_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_exitTask( );
}
ER             tKernel_eKernel_getTaskId_skel( const struct tag_sKernel_VDES *epd, ID* p_taskId)
{
    return tKernel_eKernel_getTaskId( p_taskId );
}
ER             tKernel_eKernel_rotateReadyQueue_skel( const struct tag_sKernel_VDES *epd, PRI taskPriority)
{
    return tKernel_eKernel_rotateReadyQueue( taskPriority );
}
ER             tKernel_eKernel_getTime_skel( const struct tag_sKernel_VDES *epd, SYSTIM* p_systemTime)
{
    return tKernel_eKernel_getTime( p_systemTime );
}
ER             tKernel_eKernel_getMicroTime_skel( const struct tag_sKernel_VDES *epd, SYSUTM* p_systemMicroTime)
{
    return tKernel_eKernel_getMicroTime( p_systemMicroTime );
}
ER             tKernel_eKernel_lockCpu_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_lockCpu( );
}
ER             tKernel_eKernel_unlockCpu_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_unlockCpu( );
}
ER             tKernel_eKernel_disableDispatch_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_disableDispatch( );
}
ER             tKernel_eKernel_enableDispatch_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_enableDispatch( );
}
ER             tKernel_eKernel_disableTaskException_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_disableTaskException( );
}
ER             tKernel_eKernel_enableTaskException_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_enableTaskException( );
}
ER             tKernel_eKernel_changeInterruptPriorityMask_skel( const struct tag_sKernel_VDES *epd, PRI interruptPriority)
{
    return tKernel_eKernel_changeInterruptPriorityMask( interruptPriority );
}
ER             tKernel_eKernel_getInterruptPriorityMask_skel( const struct tag_sKernel_VDES *epd, PRI* p_interruptPriority)
{
    return tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority );
}
ER             tKernel_eKernel_exitKernel_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_exitKernel( );
}
bool_t         tKernel_eKernel_senseContext_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_senseContext( );
}
bool_t         tKernel_eKernel_senseLock_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_senseLock( );
}
bool_t         tKernel_eKernel_senseDispatch_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_senseDispatch( );
}
bool_t         tKernel_eKernel_senseDispatchPendingState_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_senseDispatchPendingState( );
}
bool_t         tKernel_eKernel_senseKernel_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_senseKernel( );
}
/* eiKernel */
ER             tKernel_eiKernel_getTaskId_skel( const struct tag_siKernel_VDES *epd, ID* p_taskId)
{
    return tKernel_eiKernel_getTaskId( p_taskId );
}
ER             tKernel_eiKernel_rotateReadyQueue_skel( const struct tag_siKernel_VDES *epd, PRI taskPriority)
{
    return tKernel_eiKernel_rotateReadyQueue( taskPriority );
}
ER             tKernel_eiKernel_getMicroTime_skel( const struct tag_siKernel_VDES *epd, SYSUTM* p_systemMicroTime)
{
    return tKernel_eiKernel_getMicroTime( p_systemMicroTime );
}
ER             tKernel_eiKernel_lockCpu_skel( const struct tag_siKernel_VDES *epd)
{
    return tKernel_eiKernel_lockCpu( );
}
ER             tKernel_eiKernel_unlockCpu_skel( const struct tag_siKernel_VDES *epd)
{
    return tKernel_eiKernel_unlockCpu( );
}
ER             tKernel_eiKernel_exitKernel_skel( const struct tag_siKernel_VDES *epd)
{
    return tKernel_eiKernel_exitKernel( );
}
bool_t         tKernel_eiKernel_senseContext_skel( const struct tag_siKernel_VDES *epd)
{
    return tKernel_eiKernel_senseContext( );
}
bool_t         tKernel_eiKernel_senseLock_skel( const struct tag_siKernel_VDES *epd)
{
    return tKernel_eiKernel_senseLock( );
}
bool_t         tKernel_eiKernel_senseDispatch_skel( const struct tag_siKernel_VDES *epd)
{
    return tKernel_eiKernel_senseDispatch( );
}
bool_t         tKernel_eiKernel_senseDispatchPendingState_skel( const struct tag_siKernel_VDES *epd)
{
    return tKernel_eiKernel_senseDispatchPendingState( );
}
bool_t         tKernel_eiKernel_senseKernel_skel( const struct tag_siKernel_VDES *epd)
{
    return tKernel_eiKernel_senseKernel( );
}
bool_t         tKernel_eiKernel_senseDispatchPendingStateCPU_skel( const struct tag_siKernel_VDES *epd, const void* p_exceptionInfomation)
{
    return tKernel_eiKernel_senseDispatchPendingStateCPU( p_exceptionInfomation );
}
bool_t         tKernel_eiKernel_senseTaskExceptionPendingStateCPU_skel( const struct tag_siKernel_VDES *epd, const void* p_exceptionInfomation)
{
    return tKernel_eiKernel_senseTaskExceptionPendingStateCPU( p_exceptionInfomation );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eKernel */
const struct tag_sKernel_VMT tKernel_eKernel_MT_ = {
    tKernel_eKernel_sleep_skel,
    tKernel_eKernel_sleepTimeout_skel,
    tKernel_eKernel_delay_skel,
    tKernel_eKernel_exitTask_skel,
    tKernel_eKernel_getTaskId_skel,
    tKernel_eKernel_rotateReadyQueue_skel,
    tKernel_eKernel_getTime_skel,
    tKernel_eKernel_getMicroTime_skel,
    tKernel_eKernel_lockCpu_skel,
    tKernel_eKernel_unlockCpu_skel,
    tKernel_eKernel_disableDispatch_skel,
    tKernel_eKernel_enableDispatch_skel,
    tKernel_eKernel_disableTaskException_skel,
    tKernel_eKernel_enableTaskException_skel,
    tKernel_eKernel_changeInterruptPriorityMask_skel,
    tKernel_eKernel_getInterruptPriorityMask_skel,
    tKernel_eKernel_exitKernel_skel,
    tKernel_eKernel_senseContext_skel,
    tKernel_eKernel_senseLock_skel,
    tKernel_eKernel_senseDispatch_skel,
    tKernel_eKernel_senseDispatchPendingState_skel,
    tKernel_eKernel_senseKernel_skel,
};
/* eiKernel */
const struct tag_siKernel_VMT tKernel_eiKernel_MT_ = {
    tKernel_eiKernel_getTaskId_skel,
    tKernel_eiKernel_rotateReadyQueue_skel,
    tKernel_eiKernel_getMicroTime_skel,
    tKernel_eiKernel_lockCpu_skel,
    tKernel_eiKernel_unlockCpu_skel,
    tKernel_eiKernel_exitKernel_skel,
    tKernel_eiKernel_senseContext_skel,
    tKernel_eiKernel_senseLock_skel,
    tKernel_eiKernel_senseDispatch_skel,
    tKernel_eiKernel_senseDispatchPendingState_skel,
    tKernel_eiKernel_senseKernel_skel,
    tKernel_eiKernel_senseDispatchPendingStateCPU_skel,
    tKernel_eiKernel_senseTaskExceptionPendingStateCPU_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
extern const struct tag_sKernel_VMT tKernel_eKernel_MT_;
extern const struct tag_siKernel_VMT tKernel_eiKernel_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tKernel_eKernel_DES rDomainEV3_HRP2Kernel_eKernel_des;
const struct tag_tKernel_eKernel_DES rDomainEV3_HRP2Kernel_eKernel_des = {
    &tKernel_eKernel_MT_,
    0,
};
extern const struct tag_tKernel_eiKernel_DES rDomainEV3_HRP2Kernel_eiKernel_des;
const struct tag_tKernel_eiKernel_DES rDomainEV3_HRP2Kernel_eiKernel_des = {
    &tKernel_eiKernel_MT_,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tKernel_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
