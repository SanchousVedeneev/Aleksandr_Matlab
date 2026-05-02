#include "__cf_controllerVodorod_v3.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "controllerVodorod_v3_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "controllerVodorod_v3.h"
#include "controllerVodorod_v3_capi.h"
#include "controllerVodorod_v3_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 ,
0 , 0 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 } } ; static int_T
rtContextSystems [ 3 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 3 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 399009841U , 1421361766U , 1055947857U ,
2117846266U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * controllerVodorod_v3_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void controllerVodorod_v3_InitializeSystemRan ( gkavbsg3k1 * const
lqpj25grae , sysRanDType * systemRan [ ] , jaffrnzp5c * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
lqpj25grae ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemTid [ 1 ] = lqpj25grae -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = lqpj25grae -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void controllerVodorod_v3_InitializeDataMapInfo ( gkavbsg3k1 * const
lqpj25grae , jaffrnzp5c * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( lqpj25grae -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( lqpj25grae -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( lqpj25grae -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( lqpj25grae -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( lqpj25grae -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( lqpj25grae -> DataMapInfo . mmi , &
lqpj25grae -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
lqpj25grae -> DataMapInfo . mmi , lqpj25grae -> DataMapInfo . childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( lqpj25grae -> DataMapInfo . mmi , 10 ) ;
controllerVodorod_v3_InitializeSystemRan ( lqpj25grae , lqpj25grae ->
DataMapInfo . systemRan , localDW , lqpj25grae -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( lqpj25grae -> DataMapInfo .
mmi , lqpj25grae -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
lqpj25grae -> DataMapInfo . mmi , lqpj25grae -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( lqpj25grae -> DataMapInfo . mmi , & lqpj25grae ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void controllerVodorod_v3_host_InitializeDataMapInfo (
controllerVodorod_v3_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"controllerVodorod_v3/Model" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap ->
child1 . mmi ) ; Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child1
) , "controllerVodorod_v3/Model1" ) ; dataMap -> childMMI [ 2 ] = & ( dataMap
-> child2 . mmi ) ; Regulator_host_InitializeDataMapInfo ( & ( dataMap ->
child2 ) , "controllerVodorod_v3/Model2" ) ; dataMap -> childMMI [ 3 ] = & (
dataMap -> child3 . mmi ) ; Regulator_host_InitializeDataMapInfo ( & (
dataMap -> child3 ) , "controllerVodorod_v3/Model3" ) ; dataMap -> childMMI [
4 ] = & ( dataMap -> child4 . mmi ) ; pwmModule_host_InitializeDataMapInfo (
& ( dataMap -> child4 ) , "controllerVodorod_v3/Model4" ) ; dataMap ->
childMMI [ 5 ] = & ( dataMap -> child5 . mmi ) ;
pwmModule_host_InitializeDataMapInfo ( & ( dataMap -> child5 ) ,
"controllerVodorod_v3/Model5" ) ; dataMap -> childMMI [ 6 ] = & ( dataMap ->
child6 . mmi ) ; pwmModule_host_InitializeDataMapInfo ( & ( dataMap -> child6
) , "controllerVodorod_v3/Model6" ) ; dataMap -> childMMI [ 7 ] = & ( dataMap
-> child7 . mmi ) ; pwmTriangle_host_InitializeDataMapInfo ( & ( dataMap ->
child7 ) , "controllerVodorod_v3/Model7" ) ; dataMap -> childMMI [ 8 ] = & (
dataMap -> child8 . mmi ) ; pwmTriangle_host_InitializeDataMapInfo ( & (
dataMap -> child8 ) , "controllerVodorod_v3/Model8" ) ; dataMap -> childMMI [
9 ] = & ( dataMap -> child9 . mmi ) ; pwmTriangle_host_InitializeDataMapInfo
( & ( dataMap -> child9 ) , "controllerVodorod_v3/Model9" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 10 ) ; }
#ifdef __cplusplus
}
#endif
#endif
