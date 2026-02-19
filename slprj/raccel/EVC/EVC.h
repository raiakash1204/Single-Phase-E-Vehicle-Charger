#ifndef EVC_h_
#define EVC_h_
#ifndef EVC_COMMON_INCLUDES_
#define EVC_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "EVC_e9d0b336_1_gateway.h"
#endif
#include "EVC_types.h"
#include "rtGetNaN.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME EVC
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (13) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (1)   
#elif NCSTATES != 1
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T c0iubncf4i ; real_T hjppveyjwl ; real_T n2zjnmjrjy [
4 ] ; real_T oulrffswqe [ 4 ] ; real_T a1x4jqjrz3 [ 4 ] ; real_T de1iwfzprb [
4 ] ; real_T nb2mgk54cj [ 83 ] ; real_T pvkxn5iea4 [ 5 ] ; real_T a2wukx04zp
; real_T jqjrlqhlud ; real_T dmbbrzl210 ; real_T bfmwzy2tgj ; real_T
dz4tkvheoh ; } B ; typedef struct { real_T jn1awjdycf ; real_T lbwbw4v34o [ 2
] ; real_T nmu3pm4gsh [ 2 ] ; real_T nlay0xkdy1 [ 2 ] ; real_T hstriw4kds [ 2
] ; real_T c120umlquw [ 63 ] ; real_T dm450re0u0 ; real_T nhs4i0oop3 ; real_T
pnwv0yaeoj ; void * grmxtx5znz ; void * mssb0f0axp ; void * itkizwkr3o ; void
* kruo422nt2 ; void * ok3bdaj0yi ; void * gbesfepxhv ; void * hsy2asj3hf ;
void * pdwdnpbbqr ; void * fmxmi2htdo ; void * hbmmoyavhp ; struct { void *
LoggedData ; } fshgbqwtfd ; struct { void * LoggedData [ 4 ] ; } p5aw1ajtmj ;
struct { void * LoggedData ; } hakqed3lm4 ; struct { void * LoggedData ; }
cvwbrkg2o0 ; struct { void * LoggedData ; } dx3c0khkea ; struct { void *
LoggedData ; } ihocpzo3au ; int32_T mxpyqqyhrn ; int_T nk4oir5gfd [ 30 ] ;
int_T c4jv40xoip ; uint8_T fvh0bui1sn ; uint8_T gd0zjzcdyx ; uint8_T
i42fw2bikb ; uint8_T lff33sozbu ; boolean_T pbxpasx5pt ; boolean_T ie1yhqqgxx
; boolean_T ko5svduf1s ; } DW ; typedef struct { real_T l0caxubn3q ; } X ;
typedef struct { real_T l0caxubn3q ; } XDot ; typedef struct { boolean_T
l0caxubn3q ; } XDis ; typedef struct { real_T l0caxubn3q ; } CStateAbsTol ;
typedef struct { real_T l0caxubn3q ; } CXPtMin ; typedef struct { real_T
l0caxubn3q ; } CXPtMax ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T PIDController_I ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController_LowerSaturationLimit ; real_T PIDController_P ; real_T
PIDController_UpperSaturationLimit ; real_T UnitDelay_InitialCondition ;
real_T Constant_Value ; real_T Constant1_Value ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_EVC_GetDWork ( ) ; extern void
mr_EVC_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_EVC_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * EVC_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
