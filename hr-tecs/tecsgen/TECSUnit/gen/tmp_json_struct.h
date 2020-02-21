/*  1 "gen/tmp_C_src.c" */
/*  1 "<組み込み>" */
/*  1 "<コマンドライン>" */
/*  1 "gen/tmp_C_src.c" */
/*  34 "gen/tmp_C_src.c" */
typedef struct { int dummy; } va_list;

/*  1 "./json_struct.h" 1 */
struct tecsunit_obj{
  char type[32];
  union{

    ER mem_er;
    struct target_struct mem_target_struct_buf;


    char mem_char;
    int mem_int;
    short mem_short;
    long mem_long;
    float mem_float;
    double mem_double;

    int_t mem_int_t;
    uint_t mem_uint_t;
    long_t mem_long_t;
    ulong_t mem_ulong_t;
    short_t mem_short_t;
    ushort_t mem_ushort_t;

    int8_t mem_int8_t;
    int16_t mem_int16_t;
    int32_t mem_int32_t;
    int64_t mem_int64_t;
    uint8_t mem_uint8_t;
    uint16_t mem_uint16_t;
    uint32_t mem_uint32_t;
    uint64_t mem_uint64_t;
    float32_t mem_float32_t;
    double64_t mem_double64_t;
    char_t mem_char_t;


    char mem_char_buf[256];
    int mem_int_buf[64];
    short mem_short_buf[128];
    long mem_long_buf[64];
    float mem_float_buf[64];
    double mem_double_buf[32];

    int_t mem_int_t_buf[64];
    uint_t mem_uint_t_buf[64];
    long_t mem_long_t_buf[64];
    ulong_t mem_ulong_t_buf[64];
    short_t mem_short_t_buf[128];
    ushort_t mem_ushort_t_buf[128];

    int8_t mem_int8_t_buf[256];
    int16_t mem_int16_t_buf[128];
    int32_t mem_int32_t_buf[64];
    int64_t mem_int64_t_buf[32];
    uint8_t mem_uint8_t_buf[256];
    uint16_t mem_uint16_t_buf[128];
    uint32_t mem_uint32_t_buf[64];
    uint64_t mem_uint64_t_buf[32];
    float32_t mem_float32_t_buf[64];
    double64_t mem_double64_t_buf[32];
    char_t mem_char_t_buf[256];

  } data;
};
/*  36 "gen/tmp_C_src.c" 2 */
