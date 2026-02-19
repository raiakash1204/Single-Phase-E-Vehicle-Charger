#include "ne_ds.h"
#include "EVC_e9d0b336_49_ds_sys_struct.h"
#include "EVC_e9d0b336_49_ds_zc.h"
#include "EVC_e9d0b336_49_ds.h"
#include "EVC_e9d0b336_49_ds_externals.h"
#include "EVC_e9d0b336_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T EVC_e9d0b336_49_ds_zc ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { real_T intrm_sf_mf_38
; real_T intrm_sf_mf_40 ; intrm_sf_mf_40 = t1 -> mX . mX [ 10ULL ] > 1.0E-8 ?
t1 -> mX . mX [ 10ULL ] : 1.0E-8 ; intrm_sf_mf_38 = ( 1.0 / ( intrm_sf_mf_40
== 0.0 ? 1.0E-16 : intrm_sf_mf_40 ) - 0.0033540164346805303 ) * 3100.0 ;
intrm_sf_mf_40 = t1 -> mX . mX [ 11ULL ] > 1.0E-8 ? t1 -> mX . mX [ 11ULL ] :
1.0E-8 ; out -> mZC . mX [ 0ULL ] = ( real_T ) ( t1 -> mX . mX [ 28ULL ] <
0.0 ) ; out -> mZC . mX [ 1ULL ] = ( real_T ) ( t1 -> mX . mX [ 29ULL ] < 0.0
) ; out -> mZC . mX [ 2ULL ] = ( real_T ) ( t1 -> mX . mX [ 31ULL ] < 0.0 ) ;
out -> mZC . mX [ 3ULL ] = ( real_T ) ( t1 -> mX . mX [ 32ULL ] < 0.0 ) ; out
-> mZC . mX [ 4ULL ] = ( real_T ) ( t1 -> mX . mX [ 35ULL ] < 0.0 ) ; out ->
mZC . mX [ 5ULL ] = ( real_T ) ( t1 -> mX . mX [ 39ULL ] < 0.0 ) ; out -> mZC
. mX [ 6ULL ] = ( real_T ) ( t1 -> mX . mX [ 40ULL ] < 0.0 ) ; out -> mZC .
mX [ 7ULL ] = ( real_T ) ( t1 -> mX . mX [ 41ULL ] < 0.0 ) ; out -> mZC . mX
[ 8ULL ] = ( real_T ) ( t1 -> mX . mX [ 44ULL ] < 0.0 ) ; out -> mZC . mX [
9ULL ] = ( real_T ) ( t1 -> mX . mX [ 45ULL ] < 0.0 ) ; out -> mZC . mX [
10ULL ] = ( real_T ) ( t1 -> mX . mX [ 47ULL ] < 0.0 ) ; out -> mZC . mX [
11ULL ] = ( real_T ) ( t1 -> mX . mX [ 48ULL ] < 0.0 ) ; out -> mZC . mX [
12ULL ] = fabs ( - t1 -> mX . mX [ 13ULL ] ) - 10.0 ; out -> mZC . mX [ 13ULL
] = - t1 -> mX . mX [ 13ULL ] - 10.0 ; out -> mZC . mX [ 14ULL ] = - 10.0 - ( -
t1 -> mX . mX [ 13ULL ] ) ; out -> mZC . mX [ 15ULL ] = 10.0 - ( - t1 -> mX .
mX [ 13ULL ] ) ; out -> mZC . mX [ 16ULL ] = - t1 -> mX . mX [ 13ULL ] - -
10.0 ; out -> mZC . mX [ 17ULL ] = ( t1 -> mX . mX [ 9ULL ] - t1 -> mD . mX [
0ULL ] ) - 0.04 ; out -> mZC . mX [ 18ULL ] = t1 -> mX . mX [ 10ULL ] ; out
-> mZC . mX [ 19ULL ] = t1 -> mX . mX [ 10ULL ] - 1.0E-8 ; out -> mZC . mX [
20ULL ] = 40.0 - intrm_sf_mf_38 ; out -> mZC . mX [ 21ULL ] = t1 -> mX . mX [
11ULL ] ; out -> mZC . mX [ 22ULL ] = t1 -> mX . mX [ 11ULL ] - 1.0E-8 ; out
-> mZC . mX [ 23ULL ] = 40.0 - ( 1.0 / ( intrm_sf_mf_40 == 0.0 ? 1.0E-16 :
intrm_sf_mf_40 ) - 0.0033540164346805303 ) * 3100.0 ; out -> mZC . mX [ 24ULL
] = t1 -> mM . mX [ 6ULL ] == 0 ? t1 -> mX . mX [ 12ULL ] : 0.0 ; out -> mZC
. mX [ 25ULL ] = 845.0 - fabs ( t1 -> mX . mX [ 12ULL ] ) ; out -> mZC . mX [
26ULL ] = t1 -> mU . mX [ 1ULL ] - 2.0 ; out -> mZC . mX [ 27ULL ] = t1 -> mU
. mX [ 0ULL ] - 2.0 ; out -> mZC . mX [ 28ULL ] = t1 -> mU . mX [ 3ULL ] -
2.0 ; out -> mZC . mX [ 29ULL ] = t1 -> mU . mX [ 2ULL ] - 2.0 ; ( void ) sys
; ( void ) out ; return 0 ; }
