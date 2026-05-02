#include "__cf_controllerVodorod_v3.h"
#ifndef RTW_HEADER_controllerVodorod_v3_h_
#define RTW_HEADER_controllerVodorod_v3_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef controllerVodorod_v3_COMMON_INCLUDES_
#define controllerVodorod_v3_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "controllerVodorod_v3_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "pwmTriangle.h"
#include "pwmModule.h"
#include "Regulator.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T ozajs3jxdc ; real_T nrnrx1uydc ; real_T pt01kqjboz ;
real_T aujivfi3ly ; real_T d0ww41xi1q [ 4 ] ; real_T c3ph5uacr4 ; real_T
fceotbaroy ; real_T ac3v4pe14i ; real_T bbribr34de ; real_T fpvlo1fbhd [ 4 ]
; real_T abgybf5xdp ; real_T ow2q035axa ; real_T e2w5znzbmc ; real_T
nfjr2simyn [ 4 ] ; real_T jp5zzb42ks ; real_T oyfdohc2gx ; real_T ck2v0zo2sm
; real_T lyso4yzz05 [ 4 ] ; } mh2x3pcoxw ; typedef struct { real_T em1setuxms
; real_T ll045miu2z ; real_T bl2examuly ; real_T fw2jotf1v1 ; g3sbconp5et
ooqcvjedec ; br0gwccfleh ob3mtojdi0 ; br0gwccfleh o3kufkc24m ; g3sbconp5et
cg2vemhqwv ; br0gwccfleh noyhtujxkp ; g3sbconp5et ao4tx0cbp2 ; br0gwccfleh
n2oc1ardmw ; kumy01kfnx4 j1a4t1c04p ; kumy01kfnx4 jeqddimxtj ; kumy01kfnx4
alendeifiz ; } jaffrnzp5c ; typedef struct { nejzx5jqwi c05vaq24lr ;
nejzx5jqwi cqdbnb4k3n ; nejzx5jqwi esrofdutvx ; } js3n4q55qd ; typedef struct
{ gb3kufrdrz c05vaq24lr ; gb3kufrdrz cqdbnb4k3n ; gb3kufrdrz esrofdutvx ; }
bqyzy0qlad ; typedef struct { nvl4pwqvg4 c05vaq24lr ; nvl4pwqvg4 cqdbnb4k3n ;
nvl4pwqvg4 esrofdutvx ; } mt3m5pxusw ; typedef struct { kkg0533wge c05vaq24lr
; kkg0533wge cqdbnb4k3n ; kkg0533wge esrofdutvx ; } axu3qg3yfv ; typedef
struct { mcd0oqggut jbde0gg1ph ; o2puchajdl bkiwpnylcz ; o2puchajdl
hhba1puwj0 ; mcd0oqggut pyw4fj2kwo ; o2puchajdl deftepfzmu ; mcd0oqggut
n1bj2a4xbd ; o2puchajdl b40xzhbeef ; lo11qnivjt glyy0aw4ta ; lo11qnivjt
dthlyuxxoi ; lo11qnivjt jvv1yaj3b2 ; } pt1naupvub ; struct aejmqxhlibf_ {
real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ;
real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T
P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ;
uint8_T P_18 ; } ; struct hhcydz2qdf { struct SimStruct_tag * _mdlRefSfcnS ;
const rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ;
rtwCAPI_ModelMappingInfo * childMMI [ 10 ] ; sysRanDType * systemRan [ 3 ] ;
int_T systemTid [ 3 ] ; } DataMapInfo ; struct { uint8_T rtmDbBufReadBuf2 ;
uint8_T rtmDbBufWriteBuf2 ; boolean_T rtmDbBufLastBufWr2 ; real_T
rtmDbBufContT2 [ 2 ] ; int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef
struct { mh2x3pcoxw rtb ; jaffrnzp5c rtdw ; gkavbsg3k1 rtm ; } lwkeiu4mt4o ;
extern real_T rtP_freq ; extern void m1iqpdj14h ( SimStruct * _mdlRefSfcnS ,
int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , gkavbsg3k1 *
const lqpj25grae , mh2x3pcoxw * localB , jaffrnzp5c * localDW , js3n4q55qd *
localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void mr_controllerVodorod_v3_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern
mxArray * mr_controllerVodorod_v3_GetDWork ( const lwkeiu4mt4o * mdlrefDW ) ;
extern void mr_controllerVodorod_v3_SetDWork ( lwkeiu4mt4o * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_controllerVodorod_v3_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_controllerVodorod_v3_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * controllerVodorod_v3_GetCAPIStaticMap
( void ) ; extern void hehbdv0jkc ( real_T eho5yypsrk [ 7 ] , mh2x3pcoxw *
localB , jaffrnzp5c * localDW , js3n4q55qd * localX ) ; extern void
a1zuxcbpf4 ( jaffrnzp5c * localDW , js3n4q55qd * localX ) ; extern void
heyjo0abia ( jaffrnzp5c * localDW ) ; extern void iaovebmshm ( jaffrnzp5c *
localDW , bqyzy0qlad * localXdot ) ; extern void p235fwogck ( mh2x3pcoxw *
localB , jaffrnzp5c * localDW , pt1naupvub * localZCSV ) ; extern void
l11ckoolpj ( gkavbsg3k1 * const lqpj25grae , mh2x3pcoxw * localB , jaffrnzp5c
* localDW ) ; extern void l11ckoolpjTID2 ( void ) ; extern void
controllerVodorod_v3 ( gkavbsg3k1 * const lqpj25grae , const real_T *
hxui33nzb1 , const real_T * j4nar5nqiq , const real_T * lgbsped20s , const
real_T fyakvgf4wr [ 3 ] , const real_T * nagc1ubcon , const real_T *
fxf20ekgfj , real_T covbyfaham [ 2 ] , real_T kg3sf0kngz [ 2 ] , real_T
nvedshrdys [ 2 ] , real_T eho5yypsrk [ 7 ] , mh2x3pcoxw * localB , jaffrnzp5c
* localDW , js3n4q55qd * localX ) ; extern void controllerVodorod_v3TID2 (
mh2x3pcoxw * localB , jaffrnzp5c * localDW ) ; extern void mg25sqmbc3 (
jaffrnzp5c * localDW , gkavbsg3k1 * const lqpj25grae ) ;
#endif
