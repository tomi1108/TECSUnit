#include"t_stddef.h"
struct tecsunit_obj{
  char    type[32]; /* TECSInfoにより型名を格納します */
  union{
/*
 * 新しい型はここに追加してください
 */
    void *mem_void_buf;
    // TCHAR mem_TCHAR_buf[256];
    // ER mem_er;
    // struct target_struct mem_target_struct_buf;

/*
 *  基本の型
 */
    char    mem_char;
    int     mem_int;
    short   mem_short;
    long    mem_long;
    float   mem_float;
    double  mem_double;

/*
 *  stddef.h
 */
    ptrdiff_t   mem_ptrdiff_t;
    size_t      mem_size_t;
    wchar_t     mem_wchar_t;

/*
 *  t_stddef.h
 */
#ifndef TOPPERS_MACRO_ONLY
// #ifndef TOPPERS_fp
// (*TOPPERS_fp_t)(struct TOPPERS_dummy_t);
// #endif /* TOPPERS_fp */
    bool_t    mem_bool_t;   /* 真偽値 */

    int_t     mem_int_t;    /* 自然なサイズの符号付き整数 */
    uint_t    mem_uint_t;   /* 自然なサイズの符号無し整数 */

    long_t    mem_long_t;   /* 長めのサイズの符号付き整数 */
    ulong_t   mem_ulong_t;  /* 長めのサイズの符号無し整数 */

    FN      mem_FN;         /* 機能コード */
    ER      mem_ER;         /* エラーコード */
    ID      mem_ID;         /* オブジェクトのID番号 */
    ATR     mem_ATR;        /* オブジェクトの属性 */
    STAT    mem_STAT;       /* オブジェクトの状態 */
    MODE    mem_MODE;       /* サービスコールの動作モード */
    PRI     mem_PRI;        /* 優先度 */
    SIZE    mem_SIZE;       /* メモリ領域のサイズ */

    TMO     mem_TMO;        /* タイムアウト指定 */
    RELTIM  mem_RELTIM;     /* 相対時間 */
    SYSTIM  mem_SYSTIM;     /* システム時刻 */
    SYSUTM  mem_SYSUTM;     /* 性能評価用システム時刻 */

    FP      mem_FP;         /* プログラムの起動番地 */

    ER_BOOL     mem_ER_BOOL;    /* エラーコードまたは真偽値 */
    ER_ID       mem_ER_ID;      /* エラーコードまたはID番号 */
    ER_UINT     mem_ER_UINT;    /* エラーコードまたは符号無し整数 */

    MB_T    mem_MB_T;       /* 管理領域を確保するためのデータ型 */

    ACPTN   mem_ACPTN;      /* アクセス許可パターン */
    ACVCT   mem_ACVCT;      /* アクセス許可ベクタ */
#endif /* TOPPERS_MACRO_ONLY */

/*
 *  tool_stddef.h
 */
// #ifdef TOPPERS_STDINT_TYPE1
#ifndef TOPPERS_MACRO_ONLY
    int8_t      mem_int8_t;     /* 符号付き8ビット整数 */
    uint8_t     mem_uint8_t;    /* 符号無し8ビット整数 */

    int16_t     mem_int16_t;    /* 符号付き16ビット整数 */
    uint16_t    mem_uint16_t;   /* 符号無し16ビット整数 */

    int32_t     mem_int32_t;    /* 符号付き32ビット整数 */
    uint32_t    mem_uint32_t;   /* 符号無し32ビット整数 */

    int64_t     mem_int64_t;    /* 符号付き64ビット整数 */
    uint64_t    mem_uint64_t;   /* 符号無し64ビット整数 */

    int_least8_t    mem_int_least8_t;   /* 8ビット以上の符号付き整数 */
    uint_least8_t   mem_uint_least8_t;  /* 8ビット以上の符号無し整数 */

    intptr_t    mem_intptr_t;   /* ポインタを格納できる符号付き整数 */
    uintptr_t   mem_uintptr_t;  /* ポインタを格納できる符号無し整数 */
#endif /* TOPPERS_MACRO_ONLY */
// #endif /* TOPPERS_STDINT_TYPE1 */
#ifdef TOPPERS_STDFLOAT_TYPE1
#ifndef TOPPERS_MACRO_ONLY
    float32_t   mem_float32_t;          /* IEEE754準拠の単精度浮動小数点数 */
    double64_t  mem_double64_t;         /* IEEE754準拠の倍精度浮動小数点数 */
#endif /* TOPPERS_MACRO_ONLY */
#endif /* TOPPERS_STDFLOAT_TYPE1 */

/*
 *  t_syslog.h
 */
#ifndef TOPPERS_MACRO_ONLY
    SYSLOG          mem_SYSLOG;     /* ログ情報のデータ構造 */
    T_SYSLOG_RLOG   mem_T_SYSLOG_RLOG;  /* パケット形式の定義 */
#endif /* TOPPERS_MACRO_ONLY */

/*
 *  chip_timer.h
 */
// #ifndef TOPPERS_MACRO_ONLY
//     CLOCK   mem_clock;      /* タイマ値の内部表現の型 */
// #endif /* TOPPERS_MACRO_ONLY */

/*
 *  kernel.h
 */
#ifndef TOPPERS_MACRO_ONLY
    TEXPTN  mem_TEXPTN;     /* タスク例外要因のビットパターン */
    FLGPTN  mem_FLGPTN;     /* イベントフラグのビットパターン */
    OVRTIM  mem_OVRTIM;     /* プロセッサ時間 */
    INTNO   mem_INTNO;      /* 割込み番号 */
    INHNO   mem_INHNO;      /* 割込みハンドラ番号 */
    EXCNO   mem_EXCNO;      /* CPU例外ハンドラ番号 */
/*
(*TASK)(intptr_t exinf);
(*TEXRTN)(TEXPTN texptn, intptr_t exinf);
(*CYCHDR)(intptr_t exinf);
(*ALMHDR)(intptr_t exinf);
(*OVRHDR)(ID tskid, intptr_t exinf);
(*ISR)(intptr_t exinf);
(*INTHDR)(void);
(*EXCHDR)(void *p_excinf);
(*EXTSVC)(intptr_t par1, intptr_t par2, intptr_t par3,
                                intptr_t par4, intptr_t par5, ID cdmid);
(*INIRTN)(intptr_t exinf);
(*TERRTN)(intptr_t exinf);
*/
    STK_T   mem_STK_T;  /* スタック領域を確保するための型 */

    MPF_T   mem_MPF_T;  /* 固定長メモリプール領域を確保するための型 */
    /*
     *  パケット形式の定義
     */
    T_CTSK  mem_T_CTKS;
    T_RTSK  mem_T_RTSK;
    T_DTEX  mem_T_DTEX;
    T_RTEX  mem_T_RTEX;
    T_CSEM  mem_T_CSEM;
    T_RSEM  mem_T_RSEM;
    T_CFLG  mem_T_CFLG;
    T_RFLG  mem_T_RFLG;
    T_CDTQ  mem_T_CDTQ;
    T_RDTQ  mem_T_RDTQ;
    T_CPDQ  mem_T_CPDQ;
    T_RPDQ  mem_T_RPDQ;
    T_CMTX  mem_T_CMTX;
    T_RMBF  mem_T_RMBF;
    T_RMTX  mem_T_RMTX;
    T_CMPF  mem_T_CMPF;
    T_RMPF  mem_T_RMPF;
    T_CCYC  mem_T_CCYC;
    T_RCYC  mem_T_RCYC;
    T_CALM  mem_T_CALM;
    T_RALM  mem_T_RALM;
    T_ROVR  mem_T_ROVR;
    T_CISR  mem_T_CISR;
#endif /* TOPPERS_MACRO_ONLY */

/*
 *  itron.h TODO:2種類のファイルの違い
 */
// #ifndef TOPPERS_MACRO_ONLY
// #ifdef INT8_MAX
//     B   mem_B;          /* 符号付き8ビット整数 */
// #endif /* INT8_MAX */
// #ifdef UINT8_MAX
//     UB  mem_UB;         /* 符号無し8ビット整数 */
//     VB  mem_VB;         /* 型が定まらない8ビットの値 */
// #endif /* UINT8_MAX */
//     // H   mem_H;          /* 符号付き16ビット整数 */
//     // UH  mem_UH;         /* 符号無し16ビット整数 */
//     // VH  mem_VH;         /* 型が定まらない16ビットの値 */

//     // W   mem_W;          /* 符号付き32ビット整数 */
//     // UW  mem_UW;         /* 符号無し32ビット整数 */
//     // VW  mem_VW;         /* 型が定まらない32ビットの値 */
// #ifdef INT64_MAX
//     D   mem_D;          /* 符号付き64ビット整数 */
// #endif /* INT64_MAX */
// #ifdef UINT64_MAX
//     UD  mem_UD;         /* 符号無し64ビット整数 */
//     VD  mem_VD;         /* 型が定まらない64ビットの値 */
// #endif /* UINT64_MAX */
// // *VP;        /* 型が定まらないものへのポインタ */

//     // INT     mem_INT;        /* 自然なサイズの符号付き整数 */
//     // UINT    mem_UINT;       /* 自然なサイズの符号無し整数 */

//     // BOOL    mem_BOOL;       /* 真偽値 */

//     // VP_INT  mem_VP_INT;     /* ポインタまたは符号付き整数 */
// #endif /* TOPPERS_MACRO_ONLY */

/*
 *  trace_config.h
 */
#ifndef TOPPERS_MACRO_ONLY
    // TRACE   mem_TRACE;   /* トレースログのデータ構造 */
#endif /* TOPPERS_MACRO_ONLY */

/*
 *  ev3api_button.h
 */
    button_t    mem_button_t;   /* ボタンを表す番号 */

/*
 *  ev3api_fs.h
 */
    memfile_t   mem_memfile_t;  /* メモリファイルの構造体．メモリファイルのデータは，SDカードではなく，メモリに格納される． */
    fileinfo_t  mem_fileinfo_t; /* ファイル情報の構造体． */
#ifdef TECSGEN
    FILE    mem_FILE;       /* dummy for tecgen */
    serial_port_t   mem_serial_port_t;  /* dummy for tecgen */
#else
    serial_port_t   mem_serial_port_t;
#endif

/*
 *  ev3api_lcd.h
 */
    lcdfont_t   mem_lcdfont_t;  /* フォントを表す番号 */
    lcdcolor_t  mem_lcdcolor_t; /* LCDカラーを表す番号 */
    image_t     mem_image_t;    /* 画像のオブジェクトの構造体 */

/*
 *  ev3api_led.h
 */
    ledcolor_t  mem_ledcolor_t; /* 設定できるLEDカラーの列挙型 */

/*
 *  ev3api_motor.h
 */
#ifndef TECSGEN
    motor_port_t    mem_motor_port_t;   /* モータポートを表す番号 */
    motor_type_t    mem_motor_type_t;   /* サポートするモータタイプ */
#endif

/*
 *  ev3api_sensor.h
 */
#ifndef TECSGEN
    sensor_port_t   mem_sensor_port_t;  /* センサポートを表す番号 */
    sensor_type_t   mem_sensor_type_t;  /* サポートするセンサタイプ */
    colorid_t   mem_colorid_t;  /* カラーセンサで識別できるカラーの番号 */
    rgb_raw_t   mem_rgb_raw_t;  /* Raw値を格納する構造体 */
    ir_seek_t   mem_ir_seek_t;  /* IRビーコンの方位と距離を格納する構造体 */
    ir_remote_t mem_ir_remote_t;/*  */
#else
    colorid_t   mem_colorid_t;
    rgb_raw_t   mem_rgb_raw_t;
#endif

/*
 *  ff.h
 */
#if _MULTI_PARTITION        /* Multiple partition configuration */
    PARTITION   mem_PARTITION;
#endif
#if _LFN_UNICODE            /* Unicode string */
#if !_USE_LFN
#error _LFN_UNICODE must be 0 at non-LFN cfg.
#endif
#ifndef _INC_TCHAR
    TCHAR   mem_TCHAR;
    TCHAR   mem_TCHAR_buf[256];
#endif
#else                       /* ANSI/OEM string */
#ifndef _INC_TCHAR
    TCHAR   mem_TCHAR;
    TCHAR   mem_TCHAR_buf[256];
#endif
#endif
    FATFS   mem_FATFS;  /* File system object structure (FATFS) */
    FIL     mem_FIL;    /* File object structure (FIL) */
    DIR     mem_DIR;    /* Directory object structure (DIR) */
    FILINFO     mem_FILINFO;    /* File status structure (FILINFO) */
    FRESULT     mem_FRESULT;    /* File function return code (FRESULT) */

/*
 *  integer.h
 */
#ifndef _WIN32
    BYTE    mem_BYTE;

    SHORT   mem_SHORT;
    WORD    mem_WORD;
    WCHAR   mem_WCHAR;
    WCHAR   mem_WCHAR_buf[256];


    /* These types MUST be 16 bit or 32 bit */
    INT     mem_INT;
    UINT    mem_UINT;

    /* These types MUST be 32 bit */
    LONG    mem_LONG;
    DWORD   mem_DWORD;
#endif  /* _WIN32 */

/*
 *  tecs_mruby.h
 */
#ifdef TECSGEN
    mrb_state       mem_mrb_state;
    // mrb_state       mem_mrb_state_buf[64];
    mrb_irep        mem_mrb_irep;
    mrb_context     mem_mrb_context;
    mrbc_context    mem_mrbc_context;
    mrb_value       mem_mrb_value;
    mrb_int         mem_mrb_int;
    struct  RClass  mem_struct_RClass;
    struct  RProc   mem_struct_RProc;
    CELLCB          mem_CELLCB;
#endif /* TECSGEN */

/* -------------------------------------- */
/*
 * [in]用の配列 ※サイズは事前に決めなければいけない。
 */
    char    mem_char_buf[256];
    int     mem_int_buf[64];
    short   mem_short_buf[128];
    long    mem_long_buf[64];
    float   mem_float_buf[64];
    double  mem_double_buf[32];
#ifndef TOPPERS_MACRO_ONLY
    int_t     mem_int_t_buf[64];
    uint_t    mem_uint_t_buf[64];
    long_t    mem_long_t_buf[64];
    ulong_t   mem_ulong_t_buf[64];
    bool_t     mem_bool_t_buf[64];
#endif /* TOPPERS_MACRO_ONLY */
// #ifdef TOPPERS_STDINT_TYPE1
#ifndef TOPPERS_MACRO_ONLY
    int8_t     mem_int8_t_buf[256];
    uint8_t    mem_uint8_t_buf[256];

    int16_t    mem_int16_t_buf[128];
    uint16_t   mem_uint16_t_buf[128];

    int32_t    mem_int32_t_buf[64];
    uint32_t   mem_uint32_t_buf[64];

    int64_t    mem_int64_t_buf[32];
    uint64_t   mem_uint64_t_buf[32];
#endif /* TOPPERS_MACRO_ONLY */
// #endif /* TOPPERS_STDINT_TYPE1 */

  } data;
};

struct cond_obj{
  char    name[32]; /* TECSInfoにより変数名を格納します */
  char    type[32]; /* TECSInfoにより型名を格納します */
  union{
/*
 * 新しい型はここに追加してください
 */
    void *mem_void_buf;
    // TCHAR mem_TCHAR_buf[256];
    // ER mem_er;
    // struct target_struct mem_target_struct_buf;

/*
 *  基本の型
 */
    char    mem_char;
    int     mem_int;
    short   mem_short;
    long    mem_long;
    float   mem_float;
    double  mem_double;

/*
 *  stddef.h
 */
    ptrdiff_t   mem_ptrdiff_t;
    size_t      mem_size_t;
    wchar_t     mem_wchar_t;

/*
 *  t_stddef.h
 */
#ifndef TOPPERS_MACRO_ONLY
// #ifndef TOPPERS_fp
// (*TOPPERS_fp_t)(struct TOPPERS_dummy_t);
// #endif /* TOPPERS_fp */
    bool_t    mem_bool_t;   /* 真偽値 */

    int_t     mem_int_t;    /* 自然なサイズの符号付き整数 */
    uint_t    mem_uint_t;   /* 自然なサイズの符号無し整数 */

    long_t    mem_long_t;   /* 長めのサイズの符号付き整数 */
    ulong_t   mem_ulong_t;  /* 長めのサイズの符号無し整数 */

    FN      mem_FN;         /* 機能コード */
    ER      mem_ER;         /* エラーコード */
    ID      mem_ID;         /* オブジェクトのID番号 */
    ATR     mem_ATR;        /* オブジェクトの属性 */
    STAT    mem_STAT;       /* オブジェクトの状態 */
    MODE    mem_MODE;       /* サービスコールの動作モード */
    PRI     mem_PRI;        /* 優先度 */
    SIZE    mem_SIZE;       /* メモリ領域のサイズ */

    TMO     mem_TMO;        /* タイムアウト指定 */
    RELTIM  mem_RELTIM;     /* 相対時間 */
    SYSTIM  mem_SYSTIM;     /* システム時刻 */
    SYSUTM  mem_SYSUTM;     /* 性能評価用システム時刻 */

    FP      mem_FP;         /* プログラムの起動番地 */

    ER_BOOL     mem_ER_BOOL;    /* エラーコードまたは真偽値 */
    ER_ID       mem_ER_ID;      /* エラーコードまたはID番号 */
    ER_UINT     mem_ER_UINT;    /* エラーコードまたは符号無し整数 */

    MB_T    mem_MB_T;       /* 管理領域を確保するためのデータ型 */

    ACPTN   mem_ACPTN;      /* アクセス許可パターン */
    ACVCT   mem_ACVCT;      /* アクセス許可ベクタ */
#endif /* TOPPERS_MACRO_ONLY */

/*
 *  tool_stddef.h
 */
// #ifdef TOPPERS_STDINT_TYPE1
#ifndef TOPPERS_MACRO_ONLY
    int8_t      mem_int8_t;     /* 符号付き8ビット整数 */
    uint8_t     mem_uint8_t;    /* 符号無し8ビット整数 */

    int16_t     mem_int16_t;    /* 符号付き16ビット整数 */
    uint16_t    mem_uint16_t;   /* 符号無し16ビット整数 */

    int32_t     mem_int32_t;    /* 符号付き32ビット整数 */
    uint32_t    mem_uint32_t;   /* 符号無し32ビット整数 */

    int64_t     mem_int64_t;    /* 符号付き64ビット整数 */
    uint64_t    mem_uint64_t;   /* 符号無し64ビット整数 */

    int_least8_t    mem_int_least8_t;   /* 8ビット以上の符号付き整数 */
    uint_least8_t   mem_uint_least8_t;  /* 8ビット以上の符号無し整数 */

    intptr_t    mem_intptr_t;   /* ポインタを格納できる符号付き整数 */
    uintptr_t   mem_uintptr_t;  /* ポインタを格納できる符号無し整数 */
#endif /* TOPPERS_MACRO_ONLY */
// #endif /* TOPPERS_STDINT_TYPE1 */
#ifdef TOPPERS_STDFLOAT_TYPE1
#ifndef TOPPERS_MACRO_ONLY
    float32_t   mem_float32_t;          /* IEEE754準拠の単精度浮動小数点数 */
    double64_t  mem_double64_t;         /* IEEE754準拠の倍精度浮動小数点数 */
#endif /* TOPPERS_MACRO_ONLY */
#endif /* TOPPERS_STDFLOAT_TYPE1 */

/*
 *  t_syslog.h
 */
#ifndef TOPPERS_MACRO_ONLY
    SYSLOG          mem_SYSLOG;     /* ログ情報のデータ構造 */
    T_SYSLOG_RLOG   mem_T_SYSLOG_RLOG;  /* パケット形式の定義 */
#endif /* TOPPERS_MACRO_ONLY */

/*
 *  chip_timer.h
 */
// #ifndef TOPPERS_MACRO_ONLY
//     CLOCK   mem_clock;      /* タイマ値の内部表現の型 */
// #endif /* TOPPERS_MACRO_ONLY */

/*
 *  kernel.h
 */
#ifndef TOPPERS_MACRO_ONLY
    TEXPTN  mem_TEXPTN;     /* タスク例外要因のビットパターン */
    FLGPTN  mem_FLGPTN;     /* イベントフラグのビットパターン */
    OVRTIM  mem_OVRTIM;     /* プロセッサ時間 */
    INTNO   mem_INTNO;      /* 割込み番号 */
    INHNO   mem_INHNO;      /* 割込みハンドラ番号 */
    EXCNO   mem_EXCNO;      /* CPU例外ハンドラ番号 */
/*
(*TASK)(intptr_t exinf);
(*TEXRTN)(TEXPTN texptn, intptr_t exinf);
(*CYCHDR)(intptr_t exinf);
(*ALMHDR)(intptr_t exinf);
(*OVRHDR)(ID tskid, intptr_t exinf);
(*ISR)(intptr_t exinf);
(*INTHDR)(void);
(*EXCHDR)(void *p_excinf);
(*EXTSVC)(intptr_t par1, intptr_t par2, intptr_t par3,
                                intptr_t par4, intptr_t par5, ID cdmid);
(*INIRTN)(intptr_t exinf);
(*TERRTN)(intptr_t exinf);
*/
    STK_T   mem_STK_T;  /* スタック領域を確保するための型 */

    MPF_T   mem_MPF_T;  /* 固定長メモリプール領域を確保するための型 */
    /*
     *  パケット形式の定義
     */
    T_CTSK  mem_T_CTKS;
    T_RTSK  mem_T_RTSK;
    T_DTEX  mem_T_DTEX;
    T_RTEX  mem_T_RTEX;
    T_CSEM  mem_T_CSEM;
    T_RSEM  mem_T_RSEM;
    T_CFLG  mem_T_CFLG;
    T_RFLG  mem_T_RFLG;
    T_CDTQ  mem_T_CDTQ;
    T_RDTQ  mem_T_RDTQ;
    T_CPDQ  mem_T_CPDQ;
    T_RPDQ  mem_T_RPDQ;
    T_CMTX  mem_T_CMTX;
    T_RMBF  mem_T_RMBF;
    T_RMTX  mem_T_RMTX;
    T_CMPF  mem_T_CMPF;
    T_RMPF  mem_T_RMPF;
    T_CCYC  mem_T_CCYC;
    T_RCYC  mem_T_RCYC;
    T_CALM  mem_T_CALM;
    T_RALM  mem_T_RALM;
    T_ROVR  mem_T_ROVR;
    T_CISR  mem_T_CISR;
#endif /* TOPPERS_MACRO_ONLY */

/*
 *  itron.h TODO:2種類のファイルの違い
 */
// #ifndef TOPPERS_MACRO_ONLY
// #ifdef INT8_MAX
//     B   mem_B;          /* 符号付き8ビット整数 */
// #endif /* INT8_MAX */
// #ifdef UINT8_MAX
//     UB  mem_UB;         /* 符号無し8ビット整数 */
//     VB  mem_VB;         /* 型が定まらない8ビットの値 */
// #endif /* UINT8_MAX */
//     // H   mem_H;          /* 符号付き16ビット整数 */
//     // UH  mem_UH;         /* 符号無し16ビット整数 */
//     // VH  mem_VH;         /* 型が定まらない16ビットの値 */

//     // W   mem_W;          /* 符号付き32ビット整数 */
//     // UW  mem_UW;         /* 符号無し32ビット整数 */
//     // VW  mem_VW;         /* 型が定まらない32ビットの値 */
// #ifdef INT64_MAX
//     D   mem_D;          /* 符号付き64ビット整数 */
// #endif /* INT64_MAX */
// #ifdef UINT64_MAX
//     UD  mem_UD;         /* 符号無し64ビット整数 */
//     VD  mem_VD;         /* 型が定まらない64ビットの値 */
// #endif /* UINT64_MAX */
// // *VP;        /* 型が定まらないものへのポインタ */

//     // INT     mem_INT;        /* 自然なサイズの符号付き整数 */
//     // UINT    mem_UINT;       /* 自然なサイズの符号無し整数 */

//     // BOOL    mem_BOOL;       /* 真偽値 */

//     // VP_INT  mem_VP_INT;     /* ポインタまたは符号付き整数 */
// #endif /* TOPPERS_MACRO_ONLY */

/*
 *  trace_config.h
 */
#ifndef TOPPERS_MACRO_ONLY
    // TRACE   mem_TRACE;   /* トレースログのデータ構造 */
#endif /* TOPPERS_MACRO_ONLY */

/*
 *  ev3api_button.h
 */
    button_t    mem_button_t;   /* ボタンを表す番号 */

/*
 *  ev3api_fs.h
 */
    memfile_t   mem_memfile_t;  /* メモリファイルの構造体．メモリファイルのデータは，SDカードではなく，メモリに格納される． */
    fileinfo_t  mem_fileinfo_t; /* ファイル情報の構造体． */
#ifdef TECSGEN
    FILE    mem_FILE;       /* dummy for tecgen */
    serial_port_t   mem_serial_port_t;  /* dummy for tecgen */
#else
    serial_port_t   mem_serial_port_t;
#endif

/*
 *  ev3api_lcd.h
 */
    lcdfont_t   mem_lcdfont_t;  /* フォントを表す番号 */
    lcdcolor_t  mem_lcdcolor_t; /* LCDカラーを表す番号 */
    image_t     mem_image_t;    /* 画像のオブジェクトの構造体 */

/*
 *  ev3api_led.h
 */
    ledcolor_t  mem_ledcolor_t; /* 設定できるLEDカラーの列挙型 */

/*
 *  ev3api_motor.h
 */
#ifndef TECSGEN
    motor_port_t    mem_motor_port_t;   /* モータポートを表す番号 */
    motor_type_t    mem_motor_type_t;   /* サポートするモータタイプ */
#endif

/*
 *  ev3api_sensor.h
 */
#ifndef TECSGEN
    sensor_port_t   mem_sensor_port_t;  /* センサポートを表す番号 */
    sensor_type_t   mem_sensor_type_t;  /* サポートするセンサタイプ */
    colorid_t   mem_colorid_t;  /* カラーセンサで識別できるカラーの番号 */
    rgb_raw_t   mem_rgb_raw_t;  /* Raw値を格納する構造体 */
    ir_seek_t   mem_ir_seek_t;  /* IRビーコンの方位と距離を格納する構造体 */
    ir_remote_t mem_ir_remote_t;/*  */
#else
    colorid_t   mem_colorid_t;
    rgb_raw_t   mem_rgb_raw_t;
#endif

/*
 *  ff.h
 */
#if _MULTI_PARTITION        /* Multiple partition configuration */
    PARTITION   mem_PARTITION;
#endif
#if _LFN_UNICODE            /* Unicode string */
#if !_USE_LFN
#error _LFN_UNICODE must be 0 at non-LFN cfg.
#endif
#ifndef _INC_TCHAR
    TCHAR   mem_TCHAR;
    TCHAR   mem_TCHAR_buf[256];
#endif
#else                       /* ANSI/OEM string */
#ifndef _INC_TCHAR
    TCHAR   mem_TCHAR;
    TCHAR   mem_TCHAR_buf[256];
#endif
#endif
    FATFS   mem_FATFS;  /* File system object structure (FATFS) */
    FIL     mem_FIL;    /* File object structure (FIL) */
    DIR     mem_DIR;    /* Directory object structure (DIR) */
    FILINFO     mem_FILINFO;    /* File status structure (FILINFO) */
    FRESULT     mem_FRESULT;    /* File function return code (FRESULT) */

/*
 *  integer.h
 */
#ifndef _WIN32
    BYTE    mem_BYTE;

    SHORT   mem_SHORT;
    WORD    mem_WORD;
    WCHAR   mem_WCHAR;
    WCHAR   mem_WCHAR_buf[256];

    /* These types MUST be 16 bit or 32 bit */
    INT     mem_INT;
    UINT    mem_UINT;

    /* These types MUST be 32 bit */
    LONG    mem_LONG;
    DWORD   mem_DWORD;
#endif  /* _WIN32 */

/*
 *  tecs_mruby.h
 */
#ifdef TECSGEN
    mrb_state       mem_mrb_state;
    // mrb_state       mem_mrb_state_buf[64];
    mrb_irep        mem_mrb_irep;
    mrb_context     mem_mrb_context;
    mrbc_context    mem_mrbc_context;
    mrb_value       mem_mrb_value;
    mrb_int         mem_mrb_int;
    struct  RClass  mem_struct_RClass;
    struct  RProc   mem_struct_RProc;
    CELLCB          mem_CELLCB;
#endif /* TECSGEN */

/* -------------------------------------- */
/*
 * [in]用の配列 ※サイズは事前に決めなければいけない。
 */
    char    mem_char_buf[256];
    int     mem_int_buf[64];
    short   mem_short_buf[128];
    long    mem_long_buf[64];
    float   mem_float_buf[64];
    double  mem_double_buf[32];
#ifndef TOPPERS_MACRO_ONLY
    int_t     mem_int_t_buf[64];
    uint_t    mem_uint_t_buf[64];
    long_t    mem_long_t_buf[64];
    ulong_t   mem_ulong_t_buf[64];
    bool_t     mem_bool_t_buf[64];
#endif /* TOPPERS_MACRO_ONLY */
// #ifdef TOPPERS_STDINT_TYPE1
#ifndef TOPPERS_MACRO_ONLY
    int8_t     mem_int8_t_buf[256];
    uint8_t    mem_uint8_t_buf[256];

    int16_t    mem_int16_t_buf[128];
    uint16_t   mem_uint16_t_buf[128];

    int32_t    mem_int32_t_buf[64];
    uint32_t   mem_uint32_t_buf[64];

    int64_t    mem_int64_t_buf[32];
    uint64_t   mem_uint64_t_buf[32];
#endif /* TOPPERS_MACRO_ONLY */
// #endif /* TOPPERS_STDINT_TYPE1 */

  } data;
};
