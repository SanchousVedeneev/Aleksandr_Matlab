#include "__cf_controllerBat.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "controllerBat_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "controllerBat.h"
#include "controllerBat_capi.h"
#include "controllerBat_private.h"
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
rtDimensionArray } , "float" , { 390179287U , 2360854829U , 2204520374U ,
54289990U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * controllerBat_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void controllerBat_InitializeSystemRan ( btoxbdzh04 * const b4o3tq21jf
, sysRanDType * systemRan [ ] , fkzi5l1lut * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( b4o3tq21jf ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = b4o3tq21jf ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void controllerBat_InitializeDataMapInfo ( btoxbdzh04 * const b4o3tq21jf ,
fkzi5l1lut * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( b4o3tq21jf -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( b4o3tq21jf -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( b4o3tq21jf -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( b4o3tq21jf -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( b4o3tq21jf -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( b4o3tq21jf -> DataMapInfo . mmi , &
b4o3tq21jf -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
b4o3tq21jf -> DataMapInfo . mmi , b4o3tq21jf -> DataMapInfo . childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( b4o3tq21jf -> DataMapInfo . mmi , 10 ) ;
controllerBat_InitializeSystemRan ( b4o3tq21jf , b4o3tq21jf -> DataMapInfo .
systemRan , localDW , b4o3tq21jf -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( b4o3tq21jf -> DataMapInfo . mmi ,
b4o3tq21jf -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( b4o3tq21jf
-> DataMapInfo . mmi , b4o3tq21jf -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( b4o3tq21jf -> DataMapInfo . mmi , & b4o3tq21jf ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void controllerBat_host_InitializeDataMapInfo (
controllerBat_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"controllerBat/Model" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap -> child1 .
mmi ) ; Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
"controllerBat/Model1" ) ; dataMap -> childMMI [ 2 ] = & ( dataMap -> child2
. mmi ) ; Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child2 ) ,
"controllerBat/Model2" ) ; dataMap -> childMMI [ 3 ] = & ( dataMap -> child3
. mmi ) ; Regulator_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
"controllerBat/Model3" ) ; dataMap -> childMMI [ 4 ] = & ( dataMap -> child4
. mmi ) ; pwmModule_host_InitializeDataMapInfo ( & ( dataMap -> child4 ) ,
"controllerBat/Model4" ) ; dataMap -> childMMI [ 5 ] = & ( dataMap -> child5
. mmi ) ; pwmModule_host_InitializeDataMapInfo ( & ( dataMap -> child5 ) ,
"controllerBat/Model5" ) ; dataMap -> childMMI [ 6 ] = & ( dataMap -> child6
. mmi ) ; pwmModule_host_InitializeDataMapInfo ( & ( dataMap -> child6 ) ,
"controllerBat/Model6" ) ; dataMap -> childMMI [ 7 ] = & ( dataMap -> child7
. mmi ) ; pwmTriangle_host_InitializeDataMapInfo ( & ( dataMap -> child7 ) ,
"controllerBat/Model7" ) ; dataMap -> childMMI [ 8 ] = & ( dataMap -> child8
. mmi ) ; pwmTriangle_host_InitializeDataMapInfo ( & ( dataMap -> child8 ) ,
"controllerBat/Model8" ) ; dataMap -> childMMI [ 9 ] = & ( dataMap -> child9
. mmi ) ; pwmTriangle_host_InitializeDataMapInfo ( & ( dataMap -> child9 ) ,
"controllerBat/Model9" ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi ,
dataMap -> childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 10 ) ;
}
#ifdef __cplusplus
}
#endif
#endif
