/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cTECS signature: sSharedMemory context:task
 *   void           cTECS_putVal( int32_t index, int32_t val );
 *   int32_t        cTECS_getVal( int32_t index );
 *   int32_t        cTECS_getSize( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "nMruby_tsSharedMemory_tecsgen.h"

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

/* RData MBP001 */
static void 
tsSharedMemory_free( mrb_state *mrb, void *p )
{
	if( p )
		(void)mrb_free( mrb, p );
}

/* RData MBP002 */
struct mrb_data_type data_type_tsSharedMemory =
{
	"tsSharedMemory",
	tsSharedMemory_free
};

/* RData MBP003 */
struct tecs_tsSharedMemory {
    CELLCB  *cbp;
};

/* name_to_cbp MBP010 */
const struct name_to_cbp_tsSharedMemory {
    char   *name;    /* Cell Name */
    CELLCB *cbp;
} Name_to_cbp_tsSharedMemory[] = {
	{ "BridgeSharedMemory", NULL },
	{ 0, 0 },
};


/* MBP100 */
mrb_value
MrubyBridge_tsSharedMemory_initialize( mrb_state *mrb, mrb_value self)
{
	mrb_value	name;
	struct tecs_tsSharedMemory *tecs_cb;
	const struct name_to_cbp_tsSharedMemory *ntc;

	/* set DATA_TYPE earlier to avoid SEGV */
	DATA_TYPE( self ) = &data_type_tsSharedMemory;

	mrb_get_args(mrb, "o", &name );
	if( mrb_type( name ) != MRB_TT_STRING ){
		mrb_raise(mrb, E_NAME_ERROR, "cell name not string");
	}
	for( ntc = &Name_to_cbp_tsSharedMemory[0]; ntc->name != NULL; ntc++ ){
		if( strcmp( ntc->name, RSTRING_PTR( name ) ) == 0 )
			break;
	}
	if( ntc->name == 0 ){
		mrb_raise(mrb, E_ARGUMENT_ERROR, "cell not found");
	}
	tecs_cb = (struct tecs_tsSharedMemory *)mrb_malloc(mrb, sizeof(struct tecs_tsSharedMemory) );
	tecs_cb->cbp = ntc->cbp;
	DATA_PTR( self ) = (void *)tecs_cb;

	return self;
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsSharedMemory_putVal( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsSharedMemory *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	mrb_int	mrb_index;
	int32_t	index;
	mrb_int	mrb_val;
	int32_t	val;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "ii", &mrb_index, &mrb_val );
	/* convert mrb to C (MBP112) */
	VALCHECK_Int32( mrb, mrb_index );
	index = (int32_t)mrb_index;
	VALCHECK_Int32( mrb, mrb_val );
	val = (int32_t)mrb_val;
	/* calling target (MBP120) */
	cTECS_putVal( index, val );
	/* return (MBP130) */
	return  mrb_nil_value();
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsSharedMemory_getVal( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsSharedMemory *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	int32_t	ret_val;
	mrb_int	mrb_index;
	int32_t	index;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "i", &mrb_index );
	/* convert mrb to C (MBP112) */
	VALCHECK_Int32( mrb, mrb_index );
	index = (int32_t)mrb_index;
	/* calling target (MBP120) */
	ret_val = cTECS_getVal( index );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsSharedMemory_getSize( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsSharedMemory *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	int32_t	ret_val;
	/* calling target (MBP120) */
	ret_val = cTECS_getSize(  );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}
/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
