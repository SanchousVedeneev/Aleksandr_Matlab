#include "__cf_pwmModule.h"
#ifndef RTW_HEADER_pwmModule_cap_host_h_
#define RTW_HEADER_pwmModule_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
pwmModule_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void pwmModule_host_InitializeDataMapInfo ( pwmModule_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
