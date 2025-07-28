#include "__cf_Regulator.h"
#include "Regulator_capi.h"
#include "Regulator.h"
#include "Regulator_private.h"
static RegMdlInfo rtMdlInfo_Regulator [ 49 ] = { { "br0gwccfleh" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Regulator" } , {
"o2puchajdl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Regulator" } , { "fvtyfjlprp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Regulator" } , { "ob4hn3nqcw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Regulator" } , { "a5g5hhduza" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Regulator" } , {
"fdkuladq3a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Regulator" } , { "jaxjs552rk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Regulator" } , { "kxh3ab0i4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Regulator" } , { "gipfw3b4l0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Regulator" } , {
"muvs0oonoz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Regulator" } , { "aqbcrgf4oo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Regulator" } , { "edcwpfdroz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Regulator" } , { "ofu2gtd1gg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Regulator" } , {
"oore1qfowu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Regulator" } , { "diwkvaztpq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Regulator" } , { "a1kktpeqsn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Regulator" } , { "oxtlubq4bc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Regulator" } , {
"m2owyfvrk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Regulator" } , { "idsv0brghs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Regulator" } , { "m5ee4bufou" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Regulator" } , { "fmb2ktd0j1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Regulator" } , {
"e2xgo54cfw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Regulator" } , { "Regulator" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , (
NULL ) } , { "n4kwte0smz4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Regulator" } , { "j0agkm50cgs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Regulator" } , { "gbz5gvy1vu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Regulator" } , {
"es445cuqxpw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Regulator" } , { "obu5wtwla2b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Regulator" } , { "gweremzl1gc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Regulator" } , {
"n4kwte0smz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Regulator" } , { "j0agkm50cg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Regulator" } , { "faa3x2e0mg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Regulator" } , { "kikxfoo4lu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Regulator" } , {
"cufix8_En7" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "ufix8_En7"
} , { "ufix8_En7" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_Regulator_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Regulator" } , {
"mr_Regulator_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Regulator" } , {
"mr_Regulator_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Regulator" } , {
"mr_Regulator_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Regulator" } , {
"mr_Regulator_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Regulator" } , {
"mr_Regulator_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Regulator" } , { "mr_Regulator_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Regulator" } , {
"mr_Regulator_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Regulator" } , { "mr_Regulator_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Regulator" } , {
"mr_Regulator_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Regulator" } , { "mr_Regulator_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Regulator" } , {
"mr_Regulator_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Regulator" } , { "Regulator.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "Regulator.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Regulator" } } ; fl5wnhhacm0 fl5wnhhacm = { 0.0 , 0.0 , 0.0 , 0.0 , 128U } ;
void idsv0brghs ( real_T * f3lqcojisn , real_T ky3ccizsrx [ 4 ] , aqbcrgf4oo
* localDW ) { localDW -> dh1ogsmu22 = fl5wnhhacm . P_2 ; * f3lqcojisn =
fl5wnhhacm . P_0 ; ky3ccizsrx [ 0 ] = fl5wnhhacm . P_1 ; ky3ccizsrx [ 1 ] =
fl5wnhhacm . P_1 ; ky3ccizsrx [ 2 ] = fl5wnhhacm . P_1 ; ky3ccizsrx [ 3 ] =
fl5wnhhacm . P_1 ; } void m2owyfvrk5 ( aqbcrgf4oo * localDW ) { localDW ->
dh1ogsmu22 = fl5wnhhacm . P_2 ; } void a1kktpeqsn ( const real_T * kkl0mi2dyw
, o2puchajdl * localZCSV ) { localZCSV -> gohryr5uag = * kkl0mi2dyw ; } void
Regulator ( kikxfoo4lu * const pu00cljalq , const real_T * lrtdp4zowk , const
real_T * nhbn4np3vs , const real_T * prbdejp50q , const real_T * mtrakqwbtt ,
const real_T * bfcmyat3ck , const real_T * ppol3mwvsd , const real_T *
laygfjs102 , const real_T * kkl0mi2dyw , real_T * f3lqcojisn , real_T
ky3ccizsrx [ 4 ] , aqbcrgf4oo * localDW , kxh3ab0i4q * localZCE ) {
ZCEventType zcEvent ; real_T o03qxna0xj ; real_T kih5xummis ; real_T
fr1zuhtqre ; real_T mv1hot0aur ; if ( rtmIsMajorTimeStep ( pu00cljalq ) ) {
zcEvent = rt_ZCFcn ( ANY_ZERO_CROSSING , & localZCE -> h2oxdb2d5v , ( *
kkl0mi2dyw ) ) ; if ( zcEvent != NO_ZCEVENT ) { o03qxna0xj = * lrtdp4zowk - *
nhbn4np3vs ; kih5xummis = o03qxna0xj * * prbdejp50q ; fr1zuhtqre = (
o03qxna0xj * * mtrakqwbtt + localDW -> dh1ogsmu22 ) * ( * laygfjs102 >
fl5wnhhacm . P_3 ? ( real_T ) fl5wnhhacm . P_4 * 0.0078125 : 0.0 ) ; if (
fr1zuhtqre > * bfcmyat3ck ) { fr1zuhtqre = * bfcmyat3ck ; } else { if (
fr1zuhtqre < * ppol3mwvsd ) { fr1zuhtqre = * ppol3mwvsd ; } } mv1hot0aur =
fr1zuhtqre + kih5xummis ; if ( mv1hot0aur > * bfcmyat3ck ) { mv1hot0aur = *
bfcmyat3ck ; } else { if ( mv1hot0aur < * ppol3mwvsd ) { mv1hot0aur = *
ppol3mwvsd ; } } * f3lqcojisn = * laygfjs102 * mv1hot0aur ; ky3ccizsrx [ 0 ]
= o03qxna0xj ; ky3ccizsrx [ 1 ] = fr1zuhtqre ; ky3ccizsrx [ 2 ] = kih5xummis
; ky3ccizsrx [ 3 ] = * nhbn4np3vs ; localDW -> dh1ogsmu22 = fr1zuhtqre ;
localDW -> aytsio1uad = 4 ; } } } void oore1qfowu ( kikxfoo4lu * const
pu00cljalq ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( pu00cljalq -> _mdlRefSfcnS , "Regulator" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void m5ee4bufou (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , kikxfoo4lu
* const pu00cljalq , aqbcrgf4oo * localDW , kxh3ab0i4q * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; { ( void ) memset ( ( void * )
pu00cljalq , 0 , sizeof ( kikxfoo4lu ) ) ; } pu00cljalq -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; pu00cljalq -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; pu00cljalq -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( pu00cljalq -> _mdlRefSfcnS , "Regulator" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { ( void ) memset ( ( void *
) localDW , 0 , sizeof ( aqbcrgf4oo ) ) ; } localDW -> dh1ogsmu22 = 0.0 ;
Regulator_InitializeDataMapInfo ( pu00cljalq , localDW , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
pu00cljalq -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( pu00cljalq ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
pu00cljalq -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } localZCE -> h2oxdb2d5v =
UNINITIALIZED_ZCSIG ; } void mr_Regulator_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Regulator , 49 ) ; * retVal = 1 ; } static void
mr_Regulator_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Regulator_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Regulator_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Regulator_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Regulator_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Regulator_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Regulator_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Regulator_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Regulator_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Regulator_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Regulator_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Regulator_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Regulator_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Regulator_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Regulator_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Regulator_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Regulator_GetDWork ( const br0gwccfleh * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "NULL->rtb" , "rtdw" , "rtzce" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ; {
static const char * rtdwDataFieldNames [ 2 ] = { "mdlrefDW->rtdw.dh1ogsmu22"
, "mdlrefDW->rtdw.aytsio1uad" , } ; mxArray * rtdwData = mxCreateStructMatrix
( 1 , 1 , 2 , rtdwDataFieldNames ) ; mr_Regulator_cacheDataAsMxArray (
rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw . dh1ogsmu22 ) , sizeof ( mdlrefDW ->
rtdw . dh1ogsmu22 ) ) ; mr_Regulator_cacheDataAsMxArray ( rtdwData , 0 , 1 ,
& ( mdlrefDW -> rtdw . aytsio1uad ) , sizeof ( mdlrefDW -> rtdw . aytsio1uad
) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_Regulator_cacheDataAsMxArray ( ssDW , 0 , 2 , & ( mdlrefDW -> rtzce ) ,
sizeof ( mdlrefDW -> rtzce ) ) ; return ssDW ; } void mr_Regulator_SetDWork (
br0gwccfleh * mdlrefDW , const mxArray * ssDW ) { { const mxArray * rtdwData
= mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Regulator_restoreDataFromMxArray (
& ( mdlrefDW -> rtdw . dh1ogsmu22 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . dh1ogsmu22 ) ) ; mr_Regulator_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . aytsio1uad ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
aytsio1uad ) ) ; } mr_Regulator_restoreDataFromMxArray ( & ( mdlrefDW ->
rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce ) ) ; } void
mr_Regulator_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 3048451786U , 2352176624U , 125511705U , 3171479382U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "Regulator" , & chksum [ 0 ] ) ; }
mxArray * mr_Regulator_GetSimStateDisallowedBlocks ( ) { return NULL ; }
