#include "__cf_pwmTriangle.h"
#ifndef RTW_HEADER_pwmTriangle_h_
#define RTW_HEADER_pwmTriangle_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef pwmTriangle_COMMON_INCLUDES_
#define pwmTriangle_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "pwmTriangle_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T hloiot2yo5 ; real_T fj4wakpkhj ; real_T gug1rkho24 ;
real_T ad0njvodoz ; } eaz5hi4rxh ; typedef struct { int_T klkmhztnmi ; int_T
c1pzxk1kxx ; boolean_T akuyzcwgc2 ; } hdrkstsnow ; typedef struct { real_T
ich3g3up5e ; real_T hvxgk3zrr2 ; } nejzx5jqwi ; typedef struct { real_T
ich3g3up5e ; real_T hvxgk3zrr2 ; } gb3kufrdrz ; typedef struct { boolean_T
ich3g3up5e ; boolean_T hvxgk3zrr2 ; } nvl4pwqvg4 ; typedef struct { real_T
ich3g3up5e ; real_T hvxgk3zrr2 ; } kkg0533wge ; typedef struct { real_T
hcupgp1doy ; real_T b1qefffk40 ; } mcd0oqggut ; struct ly0yyuatfvm_ { real_T
P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T
P_6 ; real_T P_7 ; real_T P_8 ; uint8_T P_9 ; } ; struct oalyumgnlm { struct
SimStruct_tag * _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ; }
NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 1 ] ; const
rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
2 ] ; int32_T * vardimsAddress [ 2 ] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ;
sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef struct {
eaz5hi4rxh rtb ; hdrkstsnow rtdw ; axmp4f24ed rtm ; } g3sbconp5et ; extern
void e3hd4srsgw ( real_T * hgzw0lu54r , SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , axmp4f24ed * const
dnsw44e5pw , eaz5hi4rxh * localB , hdrkstsnow * localDW , nejzx5jqwi * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_pwmTriangle_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_pwmTriangle_GetDWork (
const g3sbconp5et * mdlrefDW ) ; extern void mr_pwmTriangle_SetDWork (
g3sbconp5et * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_pwmTriangle_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_pwmTriangle_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * pwmTriangle_GetCAPIStaticMap ( void ) ;
extern void j0x3ydvjvy ( axmp4f24ed * const dnsw44e5pw , hdrkstsnow * localDW
, nejzx5jqwi * localX ) ; extern void nwogyiwk2f ( axmp4f24ed * const
dnsw44e5pw , hdrkstsnow * localDW , nejzx5jqwi * localX ) ; extern void
n3nkwozpdi ( eaz5hi4rxh * localB ) ; extern void mctbmejznw ( eaz5hi4rxh *
localB , gb3kufrdrz * localXdot ) ; extern void j12i4toqbm ( const real_T *
muugmqxuyw , eaz5hi4rxh * localB , mcd0oqggut * localZCSV ) ; extern void
ogymlek1xp ( axmp4f24ed * const dnsw44e5pw , hdrkstsnow * localDW ) ; extern
void ogymlek1xpTID2 ( void ) ; extern void pwmTriangle ( axmp4f24ed * const
dnsw44e5pw , const real_T * dgjqzcwyjb , const real_T * muugmqxuyw , real_T *
jghxx201si , real_T * hgzw0lu54r , eaz5hi4rxh * localB , hdrkstsnow * localDW
, nejzx5jqwi * localX ) ; extern void pwmTriangleTID2 ( eaz5hi4rxh * localB )
; extern void n0u1nmdd3y ( axmp4f24ed * const dnsw44e5pw ) ;
#endif
