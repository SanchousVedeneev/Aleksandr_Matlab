#include "__cf_controllerVodorod.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "controllerVodorod_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "controllerVodorod.h"
#include "controllerVodorod_capi.h"
#include "controllerVodorod_private.h"
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
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3191442627U , 969973159U , 2377617138U ,
1160020748U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * controllerVodorod_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void controllerVodorod_InitializeSystemRan ( ohrnffjjct * const
foyhwjjwti , sysRanDType * systemRan [ ] , a0bwj031qr * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
foyhwjjwti ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = foyhwjjwti
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void controllerVodorod_InitializeDataMapInfo ( ohrnffjjct * const foyhwjjwti
, a0bwj031qr * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( foyhwjjwti -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( foyhwjjwti -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( foyhwjjwti -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( foyhwjjwti -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( foyhwjjwti -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( foyhwjjwti -> DataMapInfo . mmi , &
foyhwjjwti -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
foyhwjjwti -> DataMapInfo . mmi , foyhwjjwti -> DataMapInfo . childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( foyhwjjwti -> DataMapInfo . mmi , 10 ) ;
controllerVodorod_InitializeSystemRan ( foyhwjjwti , foyhwjjwti ->
DataMapInfo . systemRan , localDW , foyhwjjwti -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( foyhwjjwti -> DataMapInfo .
mmi , foyhwjjwti -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
foyhwjjwti -> DataMapInfo . mmi , foyhwjjwti -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( foyhwjjwti -> DataMapInfo . mmi , & foyhwjjwti ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void controllerVodorod_host_InitializeDataMapInfo (
controllerVodorod_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"controllerVodorod/Model" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap ->
child1 . mmi ) ; Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child1
) , "controllerVodorod/Model1" ) ; dataMap -> childMMI [ 2 ] = & ( dataMap ->
child2 . mmi ) ; Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child2
) , "controllerVodorod/Model2" ) ; dataMap -> childMMI [ 3 ] = & ( dataMap ->
child3 . mmi ) ; Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child3
) , "controllerVodorod/Model3" ) ; dataMap -> childMMI [ 4 ] = & ( dataMap ->
child4 . mmi ) ; pwmModule_host_InitializeDataMapInfo ( & ( dataMap -> child4
) , "controllerVodorod/Model4" ) ; dataMap -> childMMI [ 5 ] = & ( dataMap ->
child5 . mmi ) ; pwmModule_host_InitializeDataMapInfo ( & ( dataMap -> child5
) , "controllerVodorod/Model5" ) ; dataMap -> childMMI [ 6 ] = & ( dataMap ->
child6 . mmi ) ; pwmModule_host_InitializeDataMapInfo ( & ( dataMap -> child6
) , "controllerVodorod/Model6" ) ; dataMap -> childMMI [ 7 ] = & ( dataMap ->
child7 . mmi ) ; pwmTriangle_host_InitializeDataMapInfo ( & ( dataMap ->
child7 ) , "controllerVodorod/Model7" ) ; dataMap -> childMMI [ 8 ] = & (
dataMap -> child8 . mmi ) ; pwmTriangle_host_InitializeDataMapInfo ( & (
dataMap -> child8 ) , "controllerVodorod/Model8" ) ; dataMap -> childMMI [ 9
] = & ( dataMap -> child9 . mmi ) ; pwmTriangle_host_InitializeDataMapInfo (
& ( dataMap -> child9 ) , "controllerVodorod/Model9" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 10 ) ; }
#ifdef __cplusplus
}
#endif
#endif
