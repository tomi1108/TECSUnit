#ifndef tCallInfo_FACTORY_H
#define tCallInfo_FACTORY_H
#include "include_all_signature_header.h"

/***** Offset of attr & var of celltype  *****/
#define TOPPERS_CB_TYPE_ONLY

/* In case a celltype has 'inline' entry,
 * some macros are temporally defined
 * even if TOPPERS_CB_TYPE_ONLY is defined.
 * To avoid redefinition warning, undef these macros.
 */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tCallInfo_IDX
#undef ATTR_name
#undef ATTR_offset
#undef ATTR_b_inCB
#undef ATTR_b_optional
#undef ATTR_b_omit
#undef ATTR_b_dynamic
#undef ATTR_b_ref_desc
#undef ATTR_b_allocator_port
#undef ATTR_b_require_port
#undef ATTR_b_VMT_useless
#undef ATTR_b_skelton_useless
#undef ATTR_b_cell_unique
#undef cSignatureInfo_getName
#undef cSignatureInfo_getNameLength
#undef cSignatureInfo_getNFunction
#undef cSignatureInfo_getFunctionInfo
#undef cSignatureInfo_refer_to_descriptor
#undef cSignatureInfo_ref_desc
#undef eCallInfo_getName
#undef eCallInfo_getNameLength
#undef eCallInfo_getSignatureInfo
#undef eCallInfo_getArraySize
#undef eCallInfo_isOptional
#undef eCallInfo_isDynamic
#undef eCallInfo_isRefDesc
#undef eCallInfo_isOmit
#undef FOREACH_CELL


#include "tTask_tecsgen.h"
#define tTask_cBody__offset                                (0xffffffff)
#define tTask_cBody__array_size                            (0)
#define tTask_cBody__place                                 (CALL_PLACE_NON)
#define tTask_cBody__b_VMT_useless                         (true)
#define tTask_cBody__b_skelton_useless                     (true)
#define tTask_cBody__b_cell_unique                         (true)
#define tTask_cExceptionBody__offset                       (0xffffffff)
#define tTask_cExceptionBody__array_size                   (0)
#define tTask_cExceptionBody__place                        (CALL_PLACE_NON)
#define tTask_cExceptionBody__b_VMT_useless                (true)
#define tTask_cExceptionBody__b_skelton_useless            (true)
#define tTask_cExceptionBody__b_cell_unique                (true)

#include "tTarget1_tecsgen.h"

#include "tTarget2_tecsgen.h"

#include "tTarget3_tecsgen.h"

#include "tTaskMain_tecsgen.h"
#define tTaskMain_cUnit__offset                            (0xffffffff)
#define tTaskMain_cUnit__array_size                        (0)
#define tTaskMain_cUnit__place                             (CALL_PLACE_NON)
#define tTaskMain_cUnit__b_VMT_useless                     (true)
#define tTaskMain_cUnit__b_skelton_useless                 (true)
#define tTaskMain_cUnit__b_cell_unique                     (true)
#define tTaskMain_cJSMN__offset                            (0xffffffff)
#define tTaskMain_cJSMN__array_size                        (0)
#define tTaskMain_cJSMN__place                             (CALL_PLACE_NON)
#define tTaskMain_cJSMN__b_VMT_useless                     (true)
#define tTaskMain_cJSMN__b_skelton_useless                 (true)
#define tTaskMain_cJSMN__b_cell_unique                     (true)
#define tTaskMain_cTECSInfo__offset                        (0xffffffff)
#define tTaskMain_cTECSInfo__array_size                    (0)
#define tTaskMain_cTECSInfo__place                         (CALL_PLACE_NON)
#define tTaskMain_cTECSInfo__b_VMT_useless                 (true)
#define tTaskMain_cTECSInfo__b_skelton_useless             (true)
#define tTaskMain_cTECSInfo__b_cell_unique                 (true)
#define tTaskMain_cNSInfo__offset                          ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cNSInfo)
#define tTaskMain_cNSInfo__array_size                      (0)
#define tTaskMain_cNSInfo__place                           (CALL_PLACE_CB_DES)
#define tTaskMain_cNSInfo__b_VMT_useless                   (false)
#define tTaskMain_cNSInfo__b_skelton_useless               (false)
#define tTaskMain_cNSInfo__b_cell_unique                   (false)
#define tTaskMain_cRegionInfo__offset                      ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cRegionInfo)
#define tTaskMain_cRegionInfo__array_size                  (0)
#define tTaskMain_cRegionInfo__place                       (CALL_PLACE_CB_DES)
#define tTaskMain_cRegionInfo__b_VMT_useless               (false)
#define tTaskMain_cRegionInfo__b_skelton_useless           (false)
#define tTaskMain_cRegionInfo__b_cell_unique               (false)
#define tTaskMain_cCellInfo__offset                        ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cCellInfo)
#define tTaskMain_cCellInfo__array_size                    (0)
#define tTaskMain_cCellInfo__place                         (CALL_PLACE_CB_DES)
#define tTaskMain_cCellInfo__b_VMT_useless                 (false)
#define tTaskMain_cCellInfo__b_skelton_useless             (false)
#define tTaskMain_cCellInfo__b_cell_unique                 (false)
#define tTaskMain_cSignatureInfo__offset                   ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cSignatureInfo)
#define tTaskMain_cSignatureInfo__array_size               (0)
#define tTaskMain_cSignatureInfo__place                    (CALL_PLACE_CB_DES)
#define tTaskMain_cSignatureInfo__b_VMT_useless            (false)
#define tTaskMain_cSignatureInfo__b_skelton_useless        (false)
#define tTaskMain_cSignatureInfo__b_cell_unique            (false)
#define tTaskMain_cCelltypeInfo__offset                    ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cCelltypeInfo)
#define tTaskMain_cCelltypeInfo__array_size                (0)
#define tTaskMain_cCelltypeInfo__place                     (CALL_PLACE_CB_DES)
#define tTaskMain_cCelltypeInfo__b_VMT_useless             (false)
#define tTaskMain_cCelltypeInfo__b_skelton_useless         (false)
#define tTaskMain_cCelltypeInfo__b_cell_unique             (false)
#define tTaskMain_cVarDeclInfo__offset                     ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cVarDeclInfo)
#define tTaskMain_cVarDeclInfo__array_size                 (0)
#define tTaskMain_cVarDeclInfo__place                      (CALL_PLACE_CB_DES)
#define tTaskMain_cVarDeclInfo__b_VMT_useless              (false)
#define tTaskMain_cVarDeclInfo__b_skelton_useless          (false)
#define tTaskMain_cVarDeclInfo__b_cell_unique              (false)
#define tTaskMain_cTypeInfo__offset                        ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cTypeInfo)
#define tTaskMain_cTypeInfo__array_size                    (0)
#define tTaskMain_cTypeInfo__place                         (CALL_PLACE_CB_DES)
#define tTaskMain_cTypeInfo__b_VMT_useless                 (false)
#define tTaskMain_cTypeInfo__b_skelton_useless             (false)
#define tTaskMain_cTypeInfo__b_cell_unique                 (false)
#define tTaskMain_cFunctionInfo__offset                    ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cFunctionInfo)
#define tTaskMain_cFunctionInfo__array_size                (0)
#define tTaskMain_cFunctionInfo__place                     (CALL_PLACE_CB_DES)
#define tTaskMain_cFunctionInfo__b_VMT_useless             (false)
#define tTaskMain_cFunctionInfo__b_skelton_useless         (false)
#define tTaskMain_cFunctionInfo__b_cell_unique             (false)
#define tTaskMain_cParamInfo__offset                       ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cParamInfo)
#define tTaskMain_cParamInfo__array_size                   (0)
#define tTaskMain_cParamInfo__place                        (CALL_PLACE_CB_DES)
#define tTaskMain_cParamInfo__b_VMT_useless                (false)
#define tTaskMain_cParamInfo__b_skelton_useless            (false)
#define tTaskMain_cParamInfo__b_cell_unique                (false)
#define tTaskMain_cEntryInfo__offset                       ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cEntryInfo)
#define tTaskMain_cEntryInfo__array_size                   (0)
#define tTaskMain_cEntryInfo__place                        (CALL_PLACE_CB_DES)
#define tTaskMain_cEntryInfo__b_VMT_useless                (false)
#define tTaskMain_cEntryInfo__b_skelton_useless            (false)
#define tTaskMain_cEntryInfo__b_cell_unique                (false)

#include "tTECSUnit_tecsgen.h"
#define tTECSUnit_cTECSInfo__offset                        (0xffffffff)
#define tTECSUnit_cTECSInfo__array_size                    (0)
#define tTECSUnit_cTECSInfo__place                         (CALL_PLACE_NON)
#define tTECSUnit_cTECSInfo__b_VMT_useless                 (true)
#define tTECSUnit_cTECSInfo__b_skelton_useless             (true)
#define tTECSUnit_cTECSInfo__b_cell_unique                 (true)
#define tTECSUnit_cNSInfo__offset                          ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cNSInfo)
#define tTECSUnit_cNSInfo__array_size                      (0)
#define tTECSUnit_cNSInfo__place                           (CALL_PLACE_CB_DES)
#define tTECSUnit_cNSInfo__b_VMT_useless                   (false)
#define tTECSUnit_cNSInfo__b_skelton_useless               (false)
#define tTECSUnit_cNSInfo__b_cell_unique                   (false)
#define tTECSUnit_cRegionInfo__offset                      ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cRegionInfo)
#define tTECSUnit_cRegionInfo__array_size                  (0)
#define tTECSUnit_cRegionInfo__place                       (CALL_PLACE_CB_DES)
#define tTECSUnit_cRegionInfo__b_VMT_useless               (false)
#define tTECSUnit_cRegionInfo__b_skelton_useless           (false)
#define tTECSUnit_cRegionInfo__b_cell_unique               (false)
#define tTECSUnit_cCellInfo__offset                        ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cCellInfo)
#define tTECSUnit_cCellInfo__array_size                    (0)
#define tTECSUnit_cCellInfo__place                         (CALL_PLACE_CB_DES)
#define tTECSUnit_cCellInfo__b_VMT_useless                 (false)
#define tTECSUnit_cCellInfo__b_skelton_useless             (false)
#define tTECSUnit_cCellInfo__b_cell_unique                 (false)
#define tTECSUnit_cSignatureInfo__offset                   ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cSignatureInfo)
#define tTECSUnit_cSignatureInfo__array_size               (0)
#define tTECSUnit_cSignatureInfo__place                    (CALL_PLACE_CB_DES)
#define tTECSUnit_cSignatureInfo__b_VMT_useless            (false)
#define tTECSUnit_cSignatureInfo__b_skelton_useless        (false)
#define tTECSUnit_cSignatureInfo__b_cell_unique            (false)
#define tTECSUnit_cCelltypeInfo__offset                    ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cCelltypeInfo)
#define tTECSUnit_cCelltypeInfo__array_size                (0)
#define tTECSUnit_cCelltypeInfo__place                     (CALL_PLACE_CB_DES)
#define tTECSUnit_cCelltypeInfo__b_VMT_useless             (false)
#define tTECSUnit_cCelltypeInfo__b_skelton_useless         (false)
#define tTECSUnit_cCelltypeInfo__b_cell_unique             (false)
#define tTECSUnit_cVarDeclInfo__offset                     ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cVarDeclInfo)
#define tTECSUnit_cVarDeclInfo__array_size                 (0)
#define tTECSUnit_cVarDeclInfo__place                      (CALL_PLACE_CB_DES)
#define tTECSUnit_cVarDeclInfo__b_VMT_useless              (false)
#define tTECSUnit_cVarDeclInfo__b_skelton_useless          (false)
#define tTECSUnit_cVarDeclInfo__b_cell_unique              (false)
#define tTECSUnit_cTypeInfo__offset                        ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTypeInfo)
#define tTECSUnit_cTypeInfo__array_size                    (0)
#define tTECSUnit_cTypeInfo__place                         (CALL_PLACE_CB_DES)
#define tTECSUnit_cTypeInfo__b_VMT_useless                 (false)
#define tTECSUnit_cTypeInfo__b_skelton_useless             (false)
#define tTECSUnit_cTypeInfo__b_cell_unique                 (false)
#define tTECSUnit_cREDInfo__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cREDInfo)
#define tTECSUnit_cREDInfo__array_size                     (0)
#define tTECSUnit_cREDInfo__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cREDInfo__b_VMT_useless                  (false)
#define tTECSUnit_cREDInfo__b_skelton_useless              (false)
#define tTECSUnit_cREDInfo__b_cell_unique                  (false)
#define tTECSUnit_cEntryInfo__offset                       ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cEntryInfo)
#define tTECSUnit_cEntryInfo__array_size                   (0)
#define tTECSUnit_cEntryInfo__place                        (CALL_PLACE_CB_DES)
#define tTECSUnit_cEntryInfo__b_VMT_useless                (false)
#define tTECSUnit_cEntryInfo__b_skelton_useless            (false)
#define tTECSUnit_cEntryInfo__b_cell_unique                (false)
#define tTECSUnit_cTarget1__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTarget1)
#define tTECSUnit_cTarget1__array_size                     (0)
#define tTECSUnit_cTarget1__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cTarget1__b_VMT_useless                  (false)
#define tTECSUnit_cTarget1__b_skelton_useless              (false)
#define tTECSUnit_cTarget1__b_cell_unique                  (false)
#define tTECSUnit_cTarget2__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTarget2)
#define tTECSUnit_cTarget2__array_size                     (0)
#define tTECSUnit_cTarget2__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cTarget2__b_VMT_useless                  (false)
#define tTECSUnit_cTarget2__b_skelton_useless              (false)
#define tTECSUnit_cTarget2__b_cell_unique                  (false)
#define tTECSUnit_cTarget3__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTarget3)
#define tTECSUnit_cTarget3__array_size                     (0)
#define tTECSUnit_cTarget3__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cTarget3__b_VMT_useless                  (false)
#define tTECSUnit_cTarget3__b_skelton_useless              (false)
#define tTECSUnit_cTarget3__b_cell_unique                  (false)

#include "tJSMN_tecsgen.h"

#include "nTECSInfo_tTECSInfo_tecsgen.h"
#define nTECSInfo_tTECSInfo_cTECSInfo__offset              (0xffffffff)
#define nTECSInfo_tTECSInfo_cTECSInfo__array_size          (0)
#define nTECSInfo_tTECSInfo_cTECSInfo__place               (CALL_PLACE_NON)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_VMT_useless       (true)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_skelton_useless   (true)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_cell_unique       (true)

#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__offset      ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_INIB*)0)->cNamespaceInfo)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__array_size  (0)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__place       (CALL_PLACE_INIB_DES)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_INIB*)0)->cRegionInfo)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__array_size     (0)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_VMT_useless  (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_cell_unique  (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__offset  ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cNamespaceInfoTemp)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__place   (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cRegionInfoTemp)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__place      (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__offset  ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cSignatureInfoTemp)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__place   (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__offset   ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cCelltypeInfoTemp)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__place    (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__offset       ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cCellInfoTemp)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__array_size   (0)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__place        (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__offset      ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cEntryInfoTemp)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__array_size  (0)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__place       (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__offset ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cRawEntryDescriptorInfoTemp)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__place (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__b_cell_unique (false)

#include "nTECSInfo_tNamespaceInfo_tecsgen.h"
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__array_size (0xffffffff)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_cell_unique (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cCelltypeInfo)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__array_size (0xffffffff)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__place      (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_cell_unique (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cNamespaceInfo)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__array_size (0xffffffff)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_cell_unique (false)

#include "nTECSInfo_tSignatureInfo_tecsgen.h"
#define nTECSInfo_tSignatureInfo_cFunctionInfo__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tSignatureInfo_INIB*)0)->cFunctionInfo)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__array_size (0xffffffff)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__place      (CALL_PLACE_INIB_DES)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_VMT_useless (false)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_skelton_useless (false)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_cell_unique (false)

#include "nTECSInfo_tFunctionInfo_tecsgen.h"
#define nTECSInfo_tFunctionInfo_cParamInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tFunctionInfo_INIB*)0)->cParamInfo)
#define nTECSInfo_tFunctionInfo_cParamInfo__array_size     (0xffffffff)
#define nTECSInfo_tFunctionInfo_cParamInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_VMT_useless  (false)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_skelton_useless (false)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_cell_unique  (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tFunctionInfo_INIB*)0)->cReturnTypeInfo)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__array_size (0)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_VMT_useless (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_cell_unique (false)

#include "nTECSInfo_tParamInfo_tecsgen.h"
#define nTECSInfo_tParamInfo_cTypeInfo__offset             ((uint32_t)(intptr_t)&((nTECSInfo_tParamInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tParamInfo_cTypeInfo__array_size         (0)
#define nTECSInfo_tParamInfo_cTypeInfo__place              (CALL_PLACE_INIB_DES)
#define nTECSInfo_tParamInfo_cTypeInfo__b_VMT_useless      (false)
#define nTECSInfo_tParamInfo_cTypeInfo__b_skelton_useless  (false)
#define nTECSInfo_tParamInfo_cTypeInfo__b_cell_unique      (false)

#include "nTECSInfo_tCelltypeInfo_tecsgen.h"
#define nTECSInfo_tCelltypeInfo_cEntryInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cEntryInfo)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__array_size     (0xffffffff)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_VMT_useless  (false)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_cell_unique  (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cCallInfo)
#define nTECSInfo_tCelltypeInfo_cCallInfo__array_size      (0xffffffff)
#define nTECSInfo_tCelltypeInfo_cCallInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_VMT_useless   (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_cell_unique   (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cAttrInfo)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__array_size      (0xffffffff)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_VMT_useless   (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_cell_unique   (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cVarInfo)
#define nTECSInfo_tCelltypeInfo_cVarInfo__array_size       (0xffffffff)
#define nTECSInfo_tCelltypeInfo_cVarInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_VMT_useless    (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_cell_unique    (false)

#include "nTECSInfo_tCallInfo_tecsgen.h"
#define nTECSInfo_tCallInfo_cSignatureInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tCallInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tCallInfo_cSignatureInfo__array_size     (0)
#define nTECSInfo_tCallInfo_cSignatureInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_VMT_useless  (false)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_cell_unique  (false)

#include "nTECSInfo_tEntryInfo_tecsgen.h"
#define nTECSInfo_tEntryInfo_cSignatureInfo__offset        ((uint32_t)(intptr_t)&((nTECSInfo_tEntryInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tEntryInfo_cSignatureInfo__array_size    (0)
#define nTECSInfo_tEntryInfo_cSignatureInfo__place         (CALL_PLACE_INIB_DES)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_cell_unique (false)

#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#define nTECSInfo_tVarDeclInfo_cTypeInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tVarDeclInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__array_size       (0)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_VMT_useless    (false)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_cell_unique    (false)

#include "nTECSInfo_tRegionInfo_tecsgen.h"
#define nTECSInfo_tRegionInfo_cCellInfo__offset            ((uint32_t)(intptr_t)&((nTECSInfo_tRegionInfo_INIB*)0)->cCellInfo)
#define nTECSInfo_tRegionInfo_cCellInfo__array_size        (0xffffffff)
#define nTECSInfo_tRegionInfo_cCellInfo__place             (CALL_PLACE_INIB_DES)
#define nTECSInfo_tRegionInfo_cCellInfo__b_VMT_useless     (false)
#define nTECSInfo_tRegionInfo_cCellInfo__b_skelton_useless (false)
#define nTECSInfo_tRegionInfo_cCellInfo__b_cell_unique     (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tRegionInfo_INIB*)0)->cRegionInfo)
#define nTECSInfo_tRegionInfo_cRegionInfo__array_size      (0xffffffff)
#define nTECSInfo_tRegionInfo_cRegionInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_VMT_useless   (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_skelton_useless (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_cell_unique   (false)

#include "nTECSInfo_tCellInfo_tecsgen.h"
#define nTECSInfo_tCellInfo_cCelltypeInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tCellInfo_INIB*)0)->cCelltypeInfo)
#define nTECSInfo_tCellInfo_cCelltypeInfo__array_size      (0)
#define nTECSInfo_tCellInfo_cCelltypeInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCellInfo_cCelltypeInfo__b_VMT_useless   (false)
#define nTECSInfo_tCellInfo_cCelltypeInfo__b_skelton_useless (false)
#define nTECSInfo_tCellInfo_cCelltypeInfo__b_cell_unique   (false)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tCellInfo_INIB*)0)->cRawEntryDescriptor)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__array_size (0xffffffff)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__b_VMT_useless (false)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__b_skelton_useless (false)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__b_cell_unique (false)

#include "nTECSInfo_tRawEntryDescriptorInfo_tecsgen.h"

#include "nTECSInfo_tVoidTypeInfo_tecsgen.h"

#include "nTECSInfo_tBoolTypeInfo_tecsgen.h"

#include "nTECSInfo_tIntTypeInfo_tecsgen.h"

#include "nTECSInfo_tFloatTypeInfo_tecsgen.h"

#include "nTECSInfo_tStructTypeInfo_tecsgen.h"
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tStructTypeInfo_INIB*)0)->cVarDeclInfo)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__array_size (0xffffffff)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__place      (CALL_PLACE_INIB_DES)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__b_VMT_useless (false)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__b_skelton_useless (false)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__b_cell_unique (false)

#include "nTECSInfo_tPtrTypeInfo_tecsgen.h"
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tPtrTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__array_size       (0)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_VMT_useless    (false)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_cell_unique    (false)

#include "nTECSInfo_tArrayTypeInfo_tecsgen.h"
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tArrayTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__array_size     (0)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_VMT_useless  (false)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_cell_unique  (false)

#include "nTECSInfo_tDefinedTypeInfo_tecsgen.h"
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__offset       ((uint32_t)(intptr_t)&((nTECSInfo_tDefinedTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__array_size   (0)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__place        (CALL_PLACE_INIB_DES)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_VMT_useless (false)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_cell_unique (false)

#include "nTECSInfo_tDescriptorTypeInfo_tecsgen.h"
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__offset ((uint32_t)(intptr_t)&((nTECSInfo_tDescriptorTypeInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__array_size (0)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__place (CALL_PLACE_INIB_DES)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_cell_unique (false)

/* redefine macros */
#define tCallInfo_IDX  nTECSInfo_tCallInfo_IDX

#endif /* tCallInfo_FACTORY_H */
