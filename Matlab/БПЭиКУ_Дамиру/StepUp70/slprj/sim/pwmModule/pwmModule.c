#include "__cf_pwmModule.h"
#include "pwmModule_capi.h"
#include "pwmModule.h"
#include "pwmModule_private.h"
static RegMdlInfo rtMdlInfo_pwmModule [ 44 ] = { { "kumy01kfnx4" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "pwmModule" } , {
"lo11qnivjt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"pwmModule" } , { "hrj5oegt04" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "pwmModule" } , { "gyycqhc35i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "pwmModule" } , { "bhvde2gus2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "pwmModule" } , {
"gl3kfeadky" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"pwmModule" } , { "ahnqxf03em" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "pwmModule" } , { "prsazwldrt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "pwmModule" } , { "opycoxdwpb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "pwmModule" } , {
"ciszeeenjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"pwmModule" } , { "ehzfgw0pyn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "pwmModule" } , { "dojebtymbo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "pwmModule" } , { "li4serhh2n" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "pwmModule" } , {
"jdbkzszijr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"pwmModule" } , { "iz2mri0xqn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "pwmModule" } , { "jiiolryi0a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "pwmModule" } , { "mvylcaovxm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "pwmModule" } , {
"phg1nlb4kn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"pwmModule" } , { "jxd1sbex0j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "pwmModule" } , { "jirevkbeox" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "pwmModule" } , { "pwmModule" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "m5rldz0jexx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "pwmModule" } , {
"ce5l2z5kvyc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"pwmModule" } , { "oo0wmt024c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "pwmModule" } , { "lepovlsilfg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "pwmModule" } , { "fjvqy3nlqxb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "pwmModule" } , {
"m5rldz0jex" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"pwmModule" } , { "ce5l2z5kvy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "pwmModule" } , { "nadxwfuj1s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "pwmModule" } , { "gtrat43scy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "pwmModule" } , { "mr_pwmModule_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "pwmModule" } , { "mr_pwmModule_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "pwmModule" } , { "mr_pwmModule_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "pwmModule" } , {
"mr_pwmModule_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"pwmModule" } , { "pwmModule.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "pwmModule.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"pwmModule" } } ; brk4d55yako brk4d55yak = { { 0.0 , 1.0 } , 0.0 , 0.0 , 1.0
, 1.5707963267948966 , 0.63661977236758138 , 0.5 , 0.0 , 0.0 } ; void
jiiolryi0a ( const real_T * drnlh2epdm , dojebtymbo * localB , lo11qnivjt *
localZCSV ) { localZCSV -> ilvyzc4d2k = * drnlh2epdm ; localZCSV ->
onwysbp4ty = localB -> gopprsfl3j - localB -> a0ikczkuan ; localZCSV ->
ez4izwbuyo = * drnlh2epdm - brk4d55yak . P_1 ; localZCSV -> e50mazbf0y = *
drnlh2epdm - brk4d55yak . P_2 ; } void pwmModule ( gtrat43scy * const
o10hpotkpa , const real_T * drnlh2epdm , const real_T * p4t1g2jyh0 , real_T
ozitb2bfze [ 2 ] , dojebtymbo * localB , ehzfgw0pyn * localDW ) { real_T u0 ;
if ( rtmIsMajorTimeStep ( o10hpotkpa ) ) { localDW -> ph4iaxe1hi = ( *
drnlh2epdm >= 0.0 ) ; } localB -> gopprsfl3j = localDW -> ph4iaxe1hi > 0 ? *
drnlh2epdm : - * drnlh2epdm ; u0 = muDoubleScalarSin ( brk4d55yak . P_4 * *
p4t1g2jyh0 * brk4d55yak . P_3 ) ; if ( u0 > 1.0 ) { u0 = 1.0 ; } else { if (
u0 < - 1.0 ) { u0 = - 1.0 ; } } localB -> a0ikczkuan = ( brk4d55yak . P_5 *
muDoubleScalarAsin ( u0 ) * localB -> g2jejzvxtz + brk4d55yak . P_0 [ 0 ] ) +
localB -> g2jejzvxtz ; if ( rtmIsMajorTimeStep ( o10hpotkpa ) &&
rtmIsSampleHit ( o10hpotkpa , 1 , 0 ) ) { if ( rtmIsMajorTimeStep (
o10hpotkpa ) ) { localDW -> paqlck2xrn = ( localB -> gopprsfl3j >= localB ->
a0ikczkuan ) ; localDW -> pec4milqal = ( * drnlh2epdm > brk4d55yak . P_1 ) ;
localDW -> fpgbvpjdc3 = ( * drnlh2epdm <= brk4d55yak . P_2 ) ; } if ( !
localDW -> fpgbvpjdc3 ) { ozitb2bfze [ 0 ] = brk4d55yak . P_7 ; } else {
ozitb2bfze [ 0 ] = localDW -> paqlck2xrn ; } if ( ! localDW -> pec4milqal ) {
ozitb2bfze [ 1 ] = brk4d55yak . P_8 ; } else { ozitb2bfze [ 1 ] = localDW ->
paqlck2xrn ; } } } void pwmModuleTID2 ( dojebtymbo * localB ) { localB ->
g2jejzvxtz = ( brk4d55yak . P_0 [ 1 ] - brk4d55yak . P_0 [ 0 ] ) * brk4d55yak
. P_6 ; } void jdbkzszijr ( gtrat43scy * const o10hpotkpa ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( o10hpotkpa ->
_mdlRefSfcnS , "pwmModule" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ;
} } void phg1nlb4kn ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , int_T mdlref_TID2 , gtrat43scy * const o10hpotkpa , dojebtymbo
* localB , ehzfgw0pyn * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; { ( void ) memset ( ( void * ) o10hpotkpa , 0 , sizeof ( gtrat43scy ) ) ;
} o10hpotkpa -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; o10hpotkpa ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; o10hpotkpa -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; o10hpotkpa -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( o10hpotkpa -> _mdlRefSfcnS , "pwmModule" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> gopprsfl3j = 0.0
; localB -> g2jejzvxtz = 0.0 ; localB -> a0ikczkuan = 0.0 ; } { ( void )
memset ( ( void * ) localDW , 0 , sizeof ( ehzfgw0pyn ) ) ; }
pwmModule_InitializeDataMapInfo ( o10hpotkpa , localDW , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
o10hpotkpa -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( o10hpotkpa ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
o10hpotkpa -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_pwmModule_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_pwmModule , 44 ) ; * retVal = 1 ; } static void
mr_pwmModule_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_pwmModule_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_pwmModule_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_pwmModule_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_pwmModule_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_pwmModule_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_pwmModule_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_pwmModule_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_pwmModule_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_pwmModule_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_pwmModule_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_pwmModule_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_pwmModule_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_pwmModule_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_pwmModule_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_pwmModule_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_pwmModule_GetDWork ( const kumy01kfnx4 * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_pwmModule_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) ,
sizeof ( mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 4 ]
= { "mdlrefDW->rtdw.ph4iaxe1hi" , "mdlrefDW->rtdw.paqlck2xrn" ,
"mdlrefDW->rtdw.pec4milqal" , "mdlrefDW->rtdw.fpgbvpjdc3" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 4 , rtdwDataFieldNames ) ;
mr_pwmModule_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw .
ph4iaxe1hi ) , sizeof ( mdlrefDW -> rtdw . ph4iaxe1hi ) ) ;
mr_pwmModule_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( mdlrefDW -> rtdw .
paqlck2xrn ) , sizeof ( mdlrefDW -> rtdw . paqlck2xrn ) ) ;
mr_pwmModule_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW -> rtdw .
pec4milqal ) , sizeof ( mdlrefDW -> rtdw . pec4milqal ) ) ;
mr_pwmModule_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW -> rtdw .
fpgbvpjdc3 ) , sizeof ( mdlrefDW -> rtdw . fpgbvpjdc3 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_pwmModule_SetDWork ( kumy01kfnx4 * mdlrefDW , const mxArray * ssDW ) {
mr_pwmModule_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 ,
sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_pwmModule_restoreDataFromMxArray ( &
( mdlrefDW -> rtdw . ph4iaxe1hi ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . ph4iaxe1hi ) ) ; mr_pwmModule_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . paqlck2xrn ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
paqlck2xrn ) ) ; mr_pwmModule_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
pec4milqal ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . pec4milqal ) )
; mr_pwmModule_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . fpgbvpjdc3 ) ,
rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . fpgbvpjdc3 ) ) ; } } void
mr_pwmModule_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 1505341003U , 2509999411U , 1579448447U , 823262557U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "pwmModule" , & chksum [ 0 ] ) ; }
mxArray * mr_pwmModule_GetSimStateDisallowedBlocks ( ) { return NULL ; }
