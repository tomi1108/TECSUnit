/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "cygwin_tecs.h"
#include "t_stddef.h"
#include "t_syslog.h"
#include "target_struct.h"
#include "json_struct.h"
/**/

#ifndef TOPPERS_MACRO_ONLY


#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define TASK_STATE_0   ((const int)0)
#define TASK_STATE_1   ((const int)1)
#define TECSTypeKind_BoolType ((const int8_t)1)
#define TECSTypeKind_IntType ((const int8_t)2)
#define TECSTypeKind_FloatType ((const int8_t)3)
#define TECSTypeKind_PtrType ((const int8_t)4)
#define TECSTypeKind_ArrayType ((const int8_t)5)
#define TECSTypeKind_DefinedType ((const int8_t)6)
#define TECSTypeKind_StructType ((const int8_t)7)
#define TECSTypeKind_EnumType ((const int8_t)8)
#define TECSTypeKind_VoidType ((const int8_t)9)
#define TECSTypeKind_DescriptorType ((const int8_t)10)
#define PARAM_DIR_IN   ((const int8_t)1)
#define PARAM_DIR_OUT  ((const int8_t)2)
#define PARAM_DIR_INOUT ((const int8_t)3)
#define PARAM_DIR_SEND ((const int8_t)4)
#define PARAM_DIR_RECEIVE ((const int8_t)5)
#define DECLTYPE_STMEMBER ((const int8_t)1)
#define DECLTYPE_ATTR  ((const int8_t)2)
#define DECLTYPE_VAR   ((const int8_t)3)
#define VARDECL_PLACE_STRUCT ((const int8_t)1)
#define VARDECL_PLACE_NON ((const int8_t)2)
#define VARDECL_PLACE_CB ((const int8_t)3)
#define VARDECL_PLACE_INIB ((const int8_t)4)
#define CALL_PLACE_NON ((const int8_t)1)
#define CALL_PLACE_INIB_DES ((const int8_t)2)
#define CALL_PLACE_CB_DES ((const int8_t)3)
#define CALL_PLACE_INIB_IDX ((const int8_t)4)
#define CALL_PLACE_CB_IDX ((const int8_t)5)
#define setRawEntryDescriptor( callDesc, callPortSignature, rawEntryDesc )   (callDesc).vdes = (struct tag_ ## callPortSignature ## _VDES *) rawEntryDesc

#endif /* GLOBAL_TECSGEN_H */
