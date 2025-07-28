#include "__cf_pwmTriangle.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "pwmTriangle_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "pwmTriangle.h"
#include "pwmTriangle_capi.h"
#include "pwmTriangle_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING ( "pwmTriangle/Integrator" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 1 ,
TARGET_STRING ( "pwmTriangle/Integrator1" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 , ( NULL
) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void pwmTriangle_InitializeDataAddr ( void * dataAddr [ ] , hdrkstsnow
* localDW , nejzx5jqwi * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
ich3g3up5e ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> hvxgk3zrr2 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void pwmTriangle_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void pwmTriangle_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 4123684258U , 2443071972U , 3151746773U ,
3856605002U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * pwmTriangle_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void pwmTriangle_InitializeSystemRan ( axmp4f24ed * const dnsw44e5pw ,
sysRanDType * systemRan [ ] , hdrkstsnow * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( dnsw44e5pw ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = dnsw44e5pw ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void pwmTriangle_InitializeDataMapInfo ( axmp4f24ed * const dnsw44e5pw ,
hdrkstsnow * localDW , nejzx5jqwi * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( dnsw44e5pw -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dnsw44e5pw -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( dnsw44e5pw -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; pwmTriangle_InitializeDataAddr ( dnsw44e5pw ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
dnsw44e5pw -> DataMapInfo . mmi , dnsw44e5pw -> DataMapInfo . dataAddress ) ;
pwmTriangle_InitializeVarDimsAddr ( dnsw44e5pw -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( dnsw44e5pw -> DataMapInfo .
mmi , dnsw44e5pw -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
dnsw44e5pw -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
dnsw44e5pw -> DataMapInfo . mmi , ( NULL ) ) ;
pwmTriangle_InitializeLoggingFunctions ( dnsw44e5pw -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( dnsw44e5pw -> DataMapInfo . mmi ,
dnsw44e5pw -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
dnsw44e5pw -> DataMapInfo . mmi , & dnsw44e5pw -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( dnsw44e5pw -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dnsw44e5pw -> DataMapInfo .
mmi , 0 ) ; pwmTriangle_InitializeSystemRan ( dnsw44e5pw , dnsw44e5pw ->
DataMapInfo . systemRan , localDW , dnsw44e5pw -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( dnsw44e5pw -> DataMapInfo .
mmi , dnsw44e5pw -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
dnsw44e5pw -> DataMapInfo . mmi , dnsw44e5pw -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( dnsw44e5pw -> DataMapInfo . mmi , & dnsw44e5pw ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void pwmTriangle_host_InitializeDataMapInfo ( pwmTriangle_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
