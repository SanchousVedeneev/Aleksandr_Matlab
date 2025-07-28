#include "__cf_controllerBat.h"
#ifndef RTW_HEADER_controllerBat_h_
#define RTW_HEADER_controllerBat_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef controllerBat_COMMON_INCLUDES_
#define controllerBat_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "controllerBat_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "pwmTriangle.h"
#include "pwmModule.h"
#include "Regulator.h"
#include "rt_nonfinite.h"
typedef struct { real_T ozjo0ixvws ; real_T oqa5xn1jw5 ; real_T j5kkaznxto ;
real_T n1y5ts5jl0 ; real_T n3o2n0p34l ; real_T jbvca00rgp ; real_T k5ogj0sgcj
[ 4 ] ; real_T kherpepy4y ; real_T ojj5yfgqya ; real_T np4wmhhetu ; real_T
lebry03vln ; real_T chceewvydw ; real_T dh1iqvc3x4 ; real_T l4h1crqnte [ 4 ]
; real_T azvlhbnaei ; real_T n2sry2dzd4 ; real_T nhvlcttta3 ; real_T
pbafocvmui [ 4 ] ; real_T fxgqe545fc ; real_T gdpaxhcdpo ; real_T hysldzlmlq
; real_T ghfedn4iwx [ 4 ] ; } lecnr2pgmu ; typedef struct { g3sbconp5et
d51fsvmsda ; br0gwccfleh nvpgcbygyu ; br0gwccfleh oh2qaswqus ; g3sbconp5et
ds0son2y1j ; br0gwccfleh jhopyzeotk ; g3sbconp5et eobtlpicr5 ; br0gwccfleh
ldhiekzpxn ; kumy01kfnx4 ksj4mxlnd5 ; kumy01kfnx4 jcnmjfrtmc ; kumy01kfnx4
pxsb1tl0sz ; } fkzi5l1lut ; typedef struct { nejzx5jqwi ijzlrsxcqp ;
nejzx5jqwi jkhbnocr3c ; nejzx5jqwi e0gvyfmleq ; } jbeieohcqw ; typedef struct
{ gb3kufrdrz ijzlrsxcqp ; gb3kufrdrz jkhbnocr3c ; gb3kufrdrz e0gvyfmleq ; }
jk4n3sowaa ; typedef struct { nvl4pwqvg4 ijzlrsxcqp ; nvl4pwqvg4 jkhbnocr3c ;
nvl4pwqvg4 e0gvyfmleq ; } cgglf2wg0n ; typedef struct { kkg0533wge ijzlrsxcqp
; kkg0533wge jkhbnocr3c ; kkg0533wge e0gvyfmleq ; } mqlvt5cw1s ; typedef
struct { mcd0oqggut fe4dpzi3tf ; o2puchajdl bryd32eavv ; o2puchajdl
fcfzonrs0n ; mcd0oqggut lzl25toxwy ; o2puchajdl dhn53j23gr ; mcd0oqggut
oleoprbqhh ; o2puchajdl buoabqoar4 ; lo11qnivjt chb312mqns ; lo11qnivjt
chsddlnnhu ; lo11qnivjt jpzixvuopg ; } pukm5my3sv ; struct ibuqxm3rjnv_ {
real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ;
real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T
P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; uint8_T P_16 ; } ; struct
kw34rvmaqv { struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ;
rtwCAPI_ModelMappingInfo * childMMI [ 10 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { uint8_T rtmDbBufReadBuf2 ;
uint8_T rtmDbBufWriteBuf2 ; boolean_T rtmDbBufLastBufWr2 ; real_T
rtmDbBufContT2 [ 2 ] ; int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef
struct { lecnr2pgmu rtb ; fkzi5l1lut rtdw ; btoxbdzh04 rtm ; } kgggvd1faq2 ;
extern real_T rtP_freq ; extern void hfhy5cdpmm ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , btoxbdzh04 * const
b4o3tq21jf , lecnr2pgmu * localB , fkzi5l1lut * localDW , jbeieohcqw * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern const real_T controllerBat_RGND ; extern void
mr_controllerBat_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_controllerBat_GetDWork ( const
kgggvd1faq2 * mdlrefDW ) ; extern void mr_controllerBat_SetDWork (
kgggvd1faq2 * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_controllerBat_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_controllerBat_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * controllerBat_GetCAPIStaticMap ( void ) ;
extern void ctotqyrd0p ( lecnr2pgmu * localB , fkzi5l1lut * localDW ,
jbeieohcqw * localX ) ; extern void bnfjkdn4xn ( fkzi5l1lut * localDW ,
jbeieohcqw * localX ) ; extern void n3bw3qo5jk ( fkzi5l1lut * localDW ) ;
extern void fhxu1bhy2n ( fkzi5l1lut * localDW , jk4n3sowaa * localXdot ) ;
extern void obarucvacx ( lecnr2pgmu * localB , fkzi5l1lut * localDW ,
pukm5my3sv * localZCSV ) ; extern void icaae0t0vb ( btoxbdzh04 * const
b4o3tq21jf , fkzi5l1lut * localDW ) ; extern void icaae0t0vbTID2 ( void ) ;
extern void controllerBat ( btoxbdzh04 * const b4o3tq21jf , const real_T *
kdb5fvruke , const real_T * g5cuu5zygk , const real_T * gfkice4pkk , const
real_T * ozoy3edd5x , const real_T nua5sttvey [ 3 ] , const real_T *
oekotpkj4v , real_T hn5fbii1ls [ 2 ] , real_T cme4nsnhgg [ 2 ] , real_T
ciftiopo5c [ 2 ] , real_T jypfbzkvzp [ 7 ] , lecnr2pgmu * localB , fkzi5l1lut
* localDW , jbeieohcqw * localX ) ; extern void controllerBatTID2 (
lecnr2pgmu * localB , fkzi5l1lut * localDW ) ; extern void ljtbjh5abf (
fkzi5l1lut * localDW , btoxbdzh04 * const b4o3tq21jf ) ;
#endif
