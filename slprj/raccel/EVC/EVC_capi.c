#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EVC_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "EVC.h"
#include "EVC_capi.h"
#include "EVC_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING ( "EVC/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 1 , TARGET_STRING ( "EVC/MATLAB Function" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 1 , TARGET_STRING ( "EVC/MATLAB Function" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 3 , 1 , TARGET_STRING ( "EVC/MATLAB Function" ) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "EVC/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING ( "EVC/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING ( "EVC/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 7 , 0 , TARGET_STRING ( "EVC/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 8 , 0 , TARGET_STRING ( "EVC/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 9 , 0 , TARGET_STRING ( "EVC/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 10 , 0 , TARGET_STRING ( "EVC/PID Controller/I Gain/Internal Parameters/Integral Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 11 , 0 , TARGET_STRING ( "EVC/PID Controller/Integrator/Continuous/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING ( "EVC/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 13 , TARGET_STRING ( "EVC/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 14 , TARGET_STRING ( "EVC/PID Controller" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 15 , TARGET_STRING ( "EVC/PID Controller" ) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 16 , TARGET_STRING ( "EVC/PID Controller" ) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING ( "EVC/PID Controller" ) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 18 , TARGET_STRING ( "EVC/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 19 , TARGET_STRING ( "EVC/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING ( "EVC/Unit Delay" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . jqjrlqhlud , & rtB . dmbbrzl210 ,
& rtB . bfmwzy2tgj , & rtB . dz4tkvheoh , & rtB . n2zjnmjrjy [ 0 ] , & rtB .
oulrffswqe [ 0 ] , & rtB . a1x4jqjrz3 [ 0 ] , & rtB . de1iwfzprb [ 0 ] , &
rtB . pvkxn5iea4 [ 0 ] , & rtB . nb2mgk54cj [ 0 ] , & rtB . a2wukx04zp , &
rtB . hjppveyjwl , & rtB . c0iubncf4i , & rtP . PIDController_P , & rtP .
PIDController_I , & rtP . PIDController_InitialConditionForIntegrator , & rtP
. PIDController_UpperSaturationLimit , & rtP .
PIDController_LowerSaturationLimit , & rtP . Constant_Value , & rtP .
Constant1_Value , & rtP . UnitDelay_InitialCondition , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 5 , 1 , 83 , 1 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0E-6 , 1.0E-8 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 1 , ( uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 13 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 8 , rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 316564415U , 973842810U , 3474574295U , 24498208U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * EVC_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void EVC_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EVC_host_InitializeDataMapInfo ( EVC_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
