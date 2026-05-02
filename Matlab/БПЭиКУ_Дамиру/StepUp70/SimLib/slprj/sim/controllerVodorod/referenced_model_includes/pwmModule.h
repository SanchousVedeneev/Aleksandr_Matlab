#include "__cf_pwmModule.h"
#ifndef RTW_HEADER_pwmModule_h_
#define RTW_HEADER_pwmModule_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef pwmModule_COMMON_INCLUDES_
#define pwmModule_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "pwmModule_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T gopprsfl3j ; real_T g2jejzvxtz ; real_T a0ikczkuan ;
} dojebtymbo ; typedef struct { int_T ph4iaxe1hi ; boolean_T paqlck2xrn ;
boolean_T pec4milqal ; boolean_T fpgbvpjdc3 ; } ehzfgw0pyn ; typedef struct {
real_T ilvyzc4d2k ; real_T onwysbp4ty ; real_T ez4izwbuyo ; real_T e50mazbf0y
; } lo11qnivjt ; struct brk4d55yako_ { real_T P_0 [ 2 ] ; real_T P_1 ; real_T
P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T
P_8 ; } ; struct nadxwfuj1s { struct SimStruct_tag * _mdlRefSfcnS ; const
rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef struct { dojebtymbo rtb ;
ehzfgw0pyn rtdw ; gtrat43scy rtm ; } kumy01kfnx4 ; extern void phg1nlb4kn (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , gtrat43scy * const o10hpotkpa , dojebtymbo * localB ,
ehzfgw0pyn * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_pwmModule_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_pwmModule_GetDWork ( const kumy01kfnx4
* mdlrefDW ) ; extern void mr_pwmModule_SetDWork ( kumy01kfnx4 * mdlrefDW ,
const mxArray * ssDW ) ; extern void mr_pwmModule_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_pwmModule_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * pwmModule_GetCAPIStaticMap
( void ) ; extern void jiiolryi0a ( const real_T * drnlh2epdm , dojebtymbo *
localB , lo11qnivjt * localZCSV ) ; extern void pwmModule ( gtrat43scy *
const o10hpotkpa , const real_T * drnlh2epdm , const real_T * p4t1g2jyh0 ,
real_T ozitb2bfze [ 2 ] , dojebtymbo * localB , ehzfgw0pyn * localDW ) ;
extern void pwmModuleTID2 ( dojebtymbo * localB ) ; extern void jdbkzszijr (
gtrat43scy * const o10hpotkpa ) ;
#endif
