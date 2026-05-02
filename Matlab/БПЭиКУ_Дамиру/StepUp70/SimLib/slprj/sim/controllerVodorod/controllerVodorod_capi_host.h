#include "__cf_controllerVodorod.h"
#ifndef RTW_HEADER_controllerVodorod_cap_host_h_
#define RTW_HEADER_controllerVodorod_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "Regulator_capi_host.h"
#include "Regulator_capi_host.h"
#include "Regulator_capi_host.h"
#include "Regulator_capi_host.h"
#include "pwmModule_capi_host.h"
#include "pwmModule_capi_host.h"
#include "pwmModule_capi_host.h"
#include "pwmTriangle_capi_host.h"
#include "pwmTriangle_capi_host.h"
#include "pwmTriangle_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 10 ] ; Regulator_host_DataMapInfo_T child0 ;
Regulator_host_DataMapInfo_T child1 ; Regulator_host_DataMapInfo_T child2 ;
Regulator_host_DataMapInfo_T child3 ; pwmModule_host_DataMapInfo_T child4 ;
pwmModule_host_DataMapInfo_T child5 ; pwmModule_host_DataMapInfo_T child6 ;
pwmTriangle_host_DataMapInfo_T child7 ; pwmTriangle_host_DataMapInfo_T child8
; pwmTriangle_host_DataMapInfo_T child9 ; }
controllerVodorod_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void controllerVodorod_host_InitializeDataMapInfo (
controllerVodorod_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
