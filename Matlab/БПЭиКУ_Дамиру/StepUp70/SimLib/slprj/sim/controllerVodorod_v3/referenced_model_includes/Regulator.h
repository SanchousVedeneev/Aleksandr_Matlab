#include "__cf_Regulator.h"
#ifndef RTW_HEADER_Regulator_h_
#define RTW_HEADER_Regulator_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Regulator_COMMON_INCLUDES_
#define Regulator_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Regulator_types.h"
#include "multiword_types.h"
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"
typedef struct { real_T dh1ogsmu22 ; int8_T aytsio1uad ; } aqbcrgf4oo ;
typedef struct { real_T gohryr5uag ; } o2puchajdl ; typedef struct {
ZCSigState h2oxdb2d5v ; } kxh3ab0i4q ; struct fl5wnhhacm0_ { real_T P_0 ;
real_T P_1 ; real_T P_2 ; real_T P_3 ; uint8_T P_4 ; } ; struct faa3x2e0mg {
struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 4 ] ; int_T systemTid [ 4 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct { aqbcrgf4oo rtdw ;
kikxfoo4lu rtm ; kxh3ab0i4q rtzce ; } br0gwccfleh ; extern void m5ee4bufou (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , kikxfoo4lu
* const pu00cljalq , aqbcrgf4oo * localDW , kxh3ab0i4q * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_Regulator_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Regulator_GetDWork ( const
br0gwccfleh * mdlrefDW ) ; extern void mr_Regulator_SetDWork ( br0gwccfleh *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Regulator_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Regulator_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Regulator_GetCAPIStaticMap ( void ) ; extern
void idsv0brghs ( real_T * f3lqcojisn , real_T ky3ccizsrx [ 4 ] , aqbcrgf4oo
* localDW ) ; extern void m2owyfvrk5 ( aqbcrgf4oo * localDW ) ; extern void
a1kktpeqsn ( const real_T * kkl0mi2dyw , o2puchajdl * localZCSV ) ; extern
void Regulator ( kikxfoo4lu * const pu00cljalq , const real_T * lrtdp4zowk ,
const real_T * nhbn4np3vs , const real_T * prbdejp50q , const real_T *
mtrakqwbtt , const real_T * bfcmyat3ck , const real_T * ppol3mwvsd , const
real_T * laygfjs102 , const real_T * kkl0mi2dyw , real_T * f3lqcojisn ,
real_T ky3ccizsrx [ 4 ] , aqbcrgf4oo * localDW , kxh3ab0i4q * localZCE ) ;
extern void oore1qfowu ( kikxfoo4lu * const pu00cljalq ) ;
#endif
