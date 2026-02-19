#include "ne_ds.h"
#include "EVC_e9d0b336_49_ds_sys_struct.h"
#include "EVC_e9d0b336_49_ds_acon.h"
#include "EVC_e9d0b336_49_ds.h"
#include "EVC_e9d0b336_49_ds_externals.h"
#include "EVC_e9d0b336_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T EVC_e9d0b336_49_ds_acon ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t34 , NeDsMethodOutput * out ) { real_T t1 [ 8 ] ;
real_T t10 [ 8 ] ; real_T t4 [ 7 ] ; real_T t2 [ 6 ] ; real_T t11 [ 5 ] ;
real_T t3 [ 5 ] ; real_T t12 [ 4 ] ; real_T t9 [ 4 ] ; size_t t22 ; ( void )
t34 ; t1 [ 0ULL ] = 1.001E-6 ; t1 [ 1ULL ] = 1.0E-6 ; t1 [ 2ULL ] = - 1.0 ;
t1 [ 3ULL ] = 1.0 ; t1 [ 4ULL ] = - 0.14705882352941177 ; t1 [ 5ULL ] = -
0.14705882352941177 ; t1 [ 6ULL ] = - 1.0 ; t1 [ 7ULL ] = - 1.0E-9 ; t2 [
0ULL ] = 1.001E-6 ; t2 [ 1ULL ] = 1.0E-6 ; t2 [ 2ULL ] = - 1.0 ; t2 [ 3ULL ]
= 1.0 ; t2 [ 4ULL ] = - 1.0 ; t2 [ 5ULL ] = - 1.0E-9 ; t3 [ 0ULL ] = - 1.0E-9
; t3 [ 1ULL ] = 2.0E-10 ; t3 [ 2ULL ] = 1.0 ; t3 [ 3ULL ] =
0.14705882352941177 ; t3 [ 4ULL ] = 1.0E-9 ; t4 [ 0ULL ] =
1.0000000000000002E-10 ; t4 [ 1ULL ] = - 1.0 ; t4 [ 2ULL ] = 1.0 ; t4 [ 3ULL
] = 0.001 ; t4 [ 4ULL ] = - 0.1 ; t4 [ 5ULL ] = - 0.014705882352941178 ; t4 [
6ULL ] = - 1.0000000001 ; t9 [ 0ULL ] = 1.0 ; t9 [ 1ULL ] = 1.0 ; t9 [ 2ULL ]
= - 1.0 ; t9 [ 3ULL ] = - 0.1 ; t10 [ 0ULL ] = 1.0000000001E-9 ; t10 [ 1ULL ]
= - 1.0E-9 ; t10 [ 2ULL ] = 1.0E-9 ; t10 [ 3ULL ] = - 1.0 ; t10 [ 4ULL ] = -
1.0000000001 ; t10 [ 5ULL ] = - 0.14705882354411765 ; t10 [ 6ULL ] = -
0.14705882352941177 ; t10 [ 7ULL ] = - 2.0000000001E-9 ; t11 [ 0ULL ] = -
1.0000000000000002E-10 ; t11 [ 1ULL ] = - 1.0 ; t11 [ 2ULL ] = 0.1 ; t11 [
3ULL ] = 0.014705882352941178 ; t11 [ 4ULL ] = 1.000000082740371E-10 ; t12 [
0ULL ] = 1.0 ; t12 [ 1ULL ] = 1.0 ; t12 [ 2ULL ] = - 1.0 ; t12 [ 3ULL ] =
0.01 ; for ( t22 = 0ULL ; t22 < 8ULL ; t22 ++ ) { out -> mACON . mX [ t22 ] =
t1 [ t22 ] ; } for ( t22 = 0ULL ; t22 < 6ULL ; t22 ++ ) { out -> mACON . mX [
t22 + 8ULL ] = t2 [ t22 ] ; } for ( t22 = 0ULL ; t22 < 5ULL ; t22 ++ ) { out
-> mACON . mX [ t22 + 14ULL ] = t3 [ t22 ] ; } for ( t22 = 0ULL ; t22 < 7ULL
; t22 ++ ) { out -> mACON . mX [ t22 + 19ULL ] = t4 [ t22 ] ; } out -> mACON
. mX [ 26ULL ] = 1.0 ; out -> mACON . mX [ 27ULL ] = 0.001 ; out -> mACON .
mX [ 28ULL ] = - 1.0 ; out -> mACON . mX [ 29ULL ] = 2.0E-10 ; out -> mACON .
mX [ 30ULL ] = - 1.0 ; out -> mACON . mX [ 31ULL ] = 0.1 ; out -> mACON . mX
[ 32ULL ] = - 1.0 ; out -> mACON . mX [ 33ULL ] = - 0.0 ; out -> mACON . mX [
34ULL ] = - 0.0 ; out -> mACON . mX [ 35ULL ] = 1.0 ; out -> mACON . mX [
36ULL ] = 1.0 ; out -> mACON . mX [ 37ULL ] = 1.0 ; out -> mACON . mX [ 38ULL
] = 1.0 ; for ( t22 = 0ULL ; t22 < 4ULL ; t22 ++ ) { out -> mACON . mX [ t22
+ 39ULL ] = t9 [ t22 ] ; } for ( t22 = 0ULL ; t22 < 8ULL ; t22 ++ ) { out ->
mACON . mX [ t22 + 43ULL ] = t10 [ t22 ] ; } for ( t22 = 0ULL ; t22 < 5ULL ;
t22 ++ ) { out -> mACON . mX [ t22 + 51ULL ] = t11 [ t22 ] ; } for ( t22 =
0ULL ; t22 < 4ULL ; t22 ++ ) { out -> mACON . mX [ t22 + 56ULL ] = t12 [ t22
] ; } out -> mACON . mX [ 60ULL ] = - 1.0E-9 ; out -> mACON . mX [ 61ULL ] =
- 1.0 ; out -> mACON . mX [ 62ULL ] = - 1.0 ; out -> mACON . mX [ 63ULL ] = -
1.0 ; out -> mACON . mX [ 64ULL ] = - 1.0 ; out -> mACON . mX [ 65ULL ] = 1.0
; out -> mACON . mX [ 66ULL ] = - 1.0 ; out -> mACON . mX [ 67ULL ] = 1.0 ;
out -> mACON . mX [ 68ULL ] = - 0.14705882352941177 ; out -> mACON . mX [
69ULL ] = - 0.14705882352941177 ; ( void ) sys ; ( void ) out ; return 0 ; }
