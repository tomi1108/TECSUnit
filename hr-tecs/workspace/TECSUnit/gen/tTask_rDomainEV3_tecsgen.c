/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTask */
struct tag_tTask_eTask_DES {
    const struct tag_sTask_VMT *vmt;
    tTask_IDX  idx;
};

/* eiTask */
struct tag_tTask_eiTask_DES {
    const struct tag_siTask_VMT *vmt;
    tTask_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTask */
ER             tTask_eTask_activate_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_activate( lepd->idx );
}
ER_UINT        tTask_eTask_cancelActivate_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_cancelActivate( lepd->idx );
}
ER             tTask_eTask_terminate_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_terminate( lepd->idx );
}
ER             tTask_eTask_changePriority_skel( const struct tag_sTask_VDES *epd, PRI priority)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_changePriority( lepd->idx, priority );
}
ER             tTask_eTask_getPriority_skel( const struct tag_sTask_VDES *epd, PRI* p_priority)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_getPriority( lepd->idx, p_priority );
}
ER             tTask_eTask_refer_skel( const struct tag_sTask_VDES *epd, T_RTSK* pk_taskStatus)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_refer( lepd->idx, pk_taskStatus );
}
ER             tTask_eTask_wakeup_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_wakeup( lepd->idx );
}
ER_UINT        tTask_eTask_cancelWakeup_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_cancelWakeup( lepd->idx );
}
ER             tTask_eTask_releaseWait_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_releaseWait( lepd->idx );
}
ER             tTask_eTask_suspend_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_suspend( lepd->idx );
}
ER             tTask_eTask_resume_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_resume( lepd->idx );
}
ER             tTask_eTask_raiseException_skel( const struct tag_sTask_VDES *epd, TEXPTN pattern)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_raiseException( lepd->idx, pattern );
}
ER             tTask_eTask_referException_skel( const struct tag_sTask_VDES *epd, T_RTEX* pk_rtex)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_referException( lepd->idx, pk_rtex );
}
ER             tTask_eTask_startOverRunHandler_skel( const struct tag_sTask_VDES *epd, OVRTIM ovrtim)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_startOverRunHandler( lepd->idx, ovrtim );
}
ER             tTask_eTask_stopOverRunHandler_skel( const struct tag_sTask_VDES *epd)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_stopOverRunHandler( lepd->idx );
}
ER             tTask_eTask_referOverRunHandler_skel( const struct tag_sTask_VDES *epd, T_ROVR* pk_rovr)
{
    struct tag_tTask_eTask_DES *lepd
        = (struct tag_tTask_eTask_DES *)epd;
    return tTask_eTask_referOverRunHandler( lepd->idx, pk_rovr );
}
/* eiTask */
ER             tTask_eiTask_activate_skel( const struct tag_siTask_VDES *epd)
{
    struct tag_tTask_eiTask_DES *lepd
        = (struct tag_tTask_eiTask_DES *)epd;
    return tTask_eiTask_activate( lepd->idx );
}
ER             tTask_eiTask_wakeup_skel( const struct tag_siTask_VDES *epd)
{
    struct tag_tTask_eiTask_DES *lepd
        = (struct tag_tTask_eiTask_DES *)epd;
    return tTask_eiTask_wakeup( lepd->idx );
}
ER             tTask_eiTask_releaseWait_skel( const struct tag_siTask_VDES *epd)
{
    struct tag_tTask_eiTask_DES *lepd
        = (struct tag_tTask_eiTask_DES *)epd;
    return tTask_eiTask_releaseWait( lepd->idx );
}
ER             tTask_eiTask_raiseException_skel( const struct tag_siTask_VDES *epd, TEXPTN pattern)
{
    struct tag_tTask_eiTask_DES *lepd
        = (struct tag_tTask_eiTask_DES *)epd;
    return tTask_eiTask_raiseException( lepd->idx, pattern );
}
ER             tTask_eiTask_disableWait_skel( const struct tag_siTask_VDES *epd)
{
    struct tag_tTask_eiTask_DES *lepd
        = (struct tag_tTask_eiTask_DES *)epd;
    return tTask_eiTask_disableWait( lepd->idx );
}
ER             tTask_eiTask_enableWait_skel( const struct tag_siTask_VDES *epd)
{
    struct tag_tTask_eiTask_DES *lepd
        = (struct tag_tTask_eiTask_DES *)epd;
    return tTask_eiTask_enableWait( lepd->idx );
}
ER             tTask_eiTask_startOverRunHandler_skel( const struct tag_siTask_VDES *epd, OVRTIM ovrtim)
{
    struct tag_tTask_eiTask_DES *lepd
        = (struct tag_tTask_eiTask_DES *)epd;
    return tTask_eiTask_startOverRunHandler( lepd->idx, ovrtim );
}
ER             tTask_eiTask_stopOverRunHandler_skel( const struct tag_siTask_VDES *epd)
{
    struct tag_tTask_eiTask_DES *lepd
        = (struct tag_tTask_eiTask_DES *)epd;
    return tTask_eiTask_stopOverRunHandler( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTask */
const struct tag_sTask_VMT tTask_eTask_MT_ = {
    tTask_eTask_activate_skel,
    tTask_eTask_cancelActivate_skel,
    tTask_eTask_terminate_skel,
    tTask_eTask_changePriority_skel,
    tTask_eTask_getPriority_skel,
    tTask_eTask_refer_skel,
    tTask_eTask_wakeup_skel,
    tTask_eTask_cancelWakeup_skel,
    tTask_eTask_releaseWait_skel,
    tTask_eTask_suspend_skel,
    tTask_eTask_resume_skel,
    tTask_eTask_raiseException_skel,
    tTask_eTask_referException_skel,
    tTask_eTask_startOverRunHandler_skel,
    tTask_eTask_stopOverRunHandler_skel,
    tTask_eTask_referOverRunHandler_skel,
};
/* eiTask */
const struct tag_siTask_VMT tTask_eiTask_MT_ = {
    tTask_eiTask_activate_skel,
    tTask_eiTask_wakeup_skel,
    tTask_eiTask_releaseWait_skel,
    tTask_eiTask_raiseException_skel,
    tTask_eiTask_disableWait_skel,
    tTask_eiTask_enableWait_skel,
    tTask_eiTask_startOverRunHandler_skel,
    tTask_eiTask_stopOverRunHandler_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sTaskBody_VDES rDomainEV3_EV3Platform_eTaskBody_des;

extern struct tag_sTaskBody_VDES rDomainEV3_TaskMain_eBody_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  EV3Task id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_EV3Platform_eTaskBody_des,   /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_rDomainEV3_EV3Task,          /* id */
    },
    /* cell: tTask_CB_tab[1]:  Task id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_TaskMain_eBody_des,          /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_rDomainEV3_Task,             /* id */
    },
};

extern const struct tag_sTask_VMT tTask_eTask_MT_;
extern const struct tag_siTask_VMT tTask_eiTask_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTask_eTask_DES rDomainEV3_EV3Task_eTask_des;
const struct tag_tTask_eTask_DES rDomainEV3_EV3Task_eTask_des = {
    &tTask_eTask_MT_,
    &tTask_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_tTask_eiTask_DES rDomainEV3_EV3Task_eiTask_des;
const struct tag_tTask_eiTask_DES rDomainEV3_EV3Task_eiTask_des = {
    &tTask_eiTask_MT_,
    &tTask_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_tTask_eTask_DES rDomainEV3_Task_eTask_des;
const struct tag_tTask_eTask_DES rDomainEV3_Task_eTask_des = {
    &tTask_eTask_MT_,
    &tTask_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_tTask_eiTask_DES rDomainEV3_Task_eiTask_des;
const struct tag_tTask_eiTask_DES rDomainEV3_Task_eiTask_des = {
    &tTask_eiTask_MT_,
    &tTask_INIB_tab[1],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
tTask_CB_initialize()
{
    tTask_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
