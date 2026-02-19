#include "ne_ds.h"
#include "EVC_e9d0b336_49_ds_sys_struct.h"
#include "EVC_e9d0b336_49_ds_f.h"
#include "EVC_e9d0b336_49_ds.h"
#include "EVC_e9d0b336_49_ds_externals.h"
#include "EVC_e9d0b336_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T EVC_e9d0b336_49_ds_f ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t31 , NeDsMethodOutput * out ) { real_T
AC_Voltage_Source_p_v ; real_T Diode2_private_Diode_v_diode ; real_T Diode4_i
; real_T Diode4_private_Diode_v_diode ; real_T Diode7_i ; real_T
Diode_private_Diode_v_diode ; real_T
MOSFET_Ideal_Switching1_diode_private_Diode_v_diode ; real_T
MOSFET_Ideal_Switching1_mosfet_equation_v ; real_T
MOSFET_Ideal_Switching2_mosfet_equation_v ; real_T
MOSFET_Ideal_Switching4_diode_private_Diode_v_diode ; real_T
MOSFET_Ideal_Switching4_mosfet_equation_v ; real_T t0 ; real_T t12 ; real_T
t13 ; real_T t2 ; real_T t20 ; real_T t22 ; real_T t25 ; real_T t26 ; real_T
t27 ; real_T t3 ; real_T t6 ; real_T t7 ; real_T zc_int1 ; real_T zc_int3 ;
real_T zc_int7 ; boolean_T intrm_sf_mf_24 ; AC_Voltage_Source_p_v = - t31 ->
mX . mX [ 0ULL ] + t31 -> mX . mX [ 14ULL ] ; t2 = - t31 -> mX . mX [ 17ULL ]
+ t31 -> mX . mX [ 20ULL ] ; Diode_private_Diode_v_diode = - t31 -> mX . mX [
26ULL ] + t31 -> mX . mX [ 27ULL ] ; t3 = ( - t31 -> mX . mX [ 8ULL ] - t31
-> mX . mX [ 27ULL ] ) + t31 -> mX . mX [ 26ULL ] ; t6 = t31 -> mX . mX [
17ULL ] + t31 -> mX . mX [ 21ULL ] ; Diode2_private_Diode_v_diode = - t31 ->
mX . mX [ 26ULL ] + t31 -> mX . mX [ 30ULL ] ; t7 = ( - t31 -> mX . mX [ 8ULL
] - t31 -> mX . mX [ 30ULL ] ) + t31 -> mX . mX [ 26ULL ] ; Diode4_i = ( -
t31 -> mX . mX [ 33ULL ] + t31 -> mX . mX [ 19ULL ] * 1.0E-9 ) + t31 -> mX .
mX [ 7ULL ] ; Diode4_private_Diode_v_diode = ( - t31 -> mX . mX [ 6ULL ] -
t31 -> mX . mX [ 19ULL ] ) + t31 -> mX . mX [ 34ULL ] ; t12 = ( ( ( ( ( t31
-> mX . mX [ 34ULL ] * 0.1 - t31 -> mX . mX [ 33ULL ] ) + t31 -> mX . mX [
36ULL ] * - 0.1 ) + t31 -> mX . mX [ 37ULL ] * 0.1 ) + t31 -> mX . mX [ 19ULL
] * 1.0E-9 ) + t31 -> mX . mX [ 38ULL ] * - 0.1 ) + t31 -> mX . mX [ 7ULL ] ;
t13 = ( - t31 -> mX . mX [ 6ULL ] - t31 -> mX . mX [ 19ULL ] ) + t31 -> mX .
mX [ 36ULL ] ; Diode7_i = ( ( ( t31 -> mX . mX [ 34ULL ] * - 0.1 + t31 -> mX
. mX [ 36ULL ] * 0.1 ) + t31 -> mX . mX [ 37ULL ] * - 0.1 ) + t31 -> mX . mX
[ 38ULL ] * 0.1 ) + t31 -> mX . mX [ 33ULL ] ; t20 = ( ( ( ( ( t31 -> mX . mX
[ 34ULL ] * 0.1 + t31 -> mX . mX [ 36ULL ] * - 0.1 ) + t31 -> mX . mX [ 37ULL
] * 0.1 ) - t31 -> mX . mX [ 23ULL ] ) + t31 -> mX . mX [ 38ULL ] * - 0.1 ) +
t31 -> mX . mX [ 43ULL ] ) + t31 -> mX . mX [ 22ULL ] ;
MOSFET_Ideal_Switching1_diode_private_Diode_v_diode = ( - t31 -> mX . mX [
8ULL ] - t31 -> mX . mX [ 37ULL ] ) + t31 -> mX . mX [ 26ULL ] ;
MOSFET_Ideal_Switching1_mosfet_equation_v = ( - t31 -> mX . mX [ 26ULL ] +
t31 -> mX . mX [ 8ULL ] ) + t31 -> mX . mX [ 37ULL ] ; t22 = - t31 -> mX . mX
[ 26ULL ] + t31 -> mX . mX [ 37ULL ] ;
MOSFET_Ideal_Switching2_mosfet_equation_v = - t31 -> mX . mX [ 37ULL ] + t31
-> mX . mX [ 26ULL ] ; t26 = ( ( ( ( ( t31 -> mX . mX [ 34ULL ] * - 0.1 + t31
-> mX . mX [ 36ULL ] * 0.1 ) + t31 -> mX . mX [ 37ULL ] * - 0.1 ) + t31 -> mX
. mX [ 38ULL ] * 0.1 ) - t31 -> mX . mX [ 25ULL ] ) + t31 -> mX . mX [ 46ULL
] ) + t31 -> mX . mX [ 24ULL ] ; t25 = ( - t31 -> mX . mX [ 8ULL ] - t31 ->
mX . mX [ 38ULL ] ) + t31 -> mX . mX [ 26ULL ] ; t27 = ( - t31 -> mX . mX [
26ULL ] + t31 -> mX . mX [ 8ULL ] ) + t31 -> mX . mX [ 38ULL ] ;
MOSFET_Ideal_Switching4_diode_private_Diode_v_diode = - t31 -> mX . mX [
26ULL ] + t31 -> mX . mX [ 38ULL ] ;
MOSFET_Ideal_Switching4_mosfet_equation_v = - t31 -> mX . mX [ 38ULL ] + t31
-> mX . mX [ 26ULL ] ; intrm_sf_mf_24 = ( t31 -> mD . mX [ 1ULL ] < 0.5 ) ;
if ( t31 -> mM . mX [ 6ULL ] != 0 ) { zc_int1 = t31 -> mX . mX [ 12ULL ] /
5.0E+8 ; } else { zc_int1 = t31 -> mX . mX [ 12ULL ] * 2.0 + ( real_T ) t31
-> mM . mX [ 5ULL ] * - 1689.9999983100001 ; } zc_int7 = t31 -> mM . mX [
16ULL ] != 0 ? t31 -> mX . mX [ 10ULL ] : 1.0E-8 ; zc_int3 = ( 1.0 / ( zc_int7
== 0.0 ? 1.0E-16 : zc_int7 ) - 0.0033540164346805303 ) * 3100.0 ; zc_int7 =
t31 -> mM . mX [ 28ULL ] != 0 ? t31 -> mX . mX [ 11ULL ] : 1.0E-8 ; t0 = ( 1.0
/ ( zc_int7 == 0.0 ? 1.0E-16 : zc_int7 ) - 0.0033540164346805303 ) * 3100.0 ;
if ( t31 -> mM . mX [ 27ULL ] != 0 ) { zc_int7 = pmf_exp ( zc_int3 ) * 6.8 ;
} else { zc_int7 = ( zc_int3 - 39.0 ) * 1.6006198144917358E+18 ; } if ( t31
-> mM . mX [ 29ULL ] != 0 ) { zc_int3 = pmf_exp ( t0 ) * 6.8 ; } else {
zc_int3 = ( t0 - 39.0 ) * 1.6006198144917358E+18 ; } if ( t31 -> mM . mX [
8ULL ] != 0 ) { out -> mF . mX [ 15ULL ] = Diode_private_Diode_v_diode - ( t31
-> mX . mX [ 28ULL ] + 0.6 ) ; } else { out -> mF . mX [ 15ULL ] =
Diode_private_Diode_v_diode - ( t31 -> mX . mX [ 28ULL ] * 0.3 + 0.6 ) ; } if
( t31 -> mM . mX [ 8ULL ] != 0 ) { out -> mF . mX [ 16ULL ] = t2 - ( t31 ->
mX . mX [ 28ULL ] * 1.0E-8 + 6.0E-9 ) ; } else { out -> mF . mX [ 16ULL ] =
t2 - ( t31 -> mX . mX [ 28ULL ] + 6.0E-9 ) ; } if ( t31 -> mM . mX [ 9ULL ]
!= 0 ) { out -> mF . mX [ 17ULL ] = t3 - ( t31 -> mX . mX [ 29ULL ] + 0.6 ) ;
} else { out -> mF . mX [ 17ULL ] = t3 - ( t31 -> mX . mX [ 29ULL ] * 0.3 +
0.6 ) ; } if ( t31 -> mM . mX [ 9ULL ] != 0 ) { out -> mF . mX [ 18ULL ] =
t31 -> mX . mX [ 20ULL ] - ( t31 -> mX . mX [ 29ULL ] * 1.0E-8 + 6.0E-9 ) ; }
else { out -> mF . mX [ 18ULL ] = t31 -> mX . mX [ 20ULL ] - ( t31 -> mX . mX
[ 29ULL ] + 6.0E-9 ) ; } if ( t31 -> mM . mX [ 10ULL ] != 0 ) { out -> mF .
mX [ 19ULL ] = Diode2_private_Diode_v_diode - ( t31 -> mX . mX [ 31ULL ] +
0.6 ) ; } else { out -> mF . mX [ 19ULL ] = Diode2_private_Diode_v_diode - ( t31
-> mX . mX [ 31ULL ] * 0.3 + 0.6 ) ; } if ( t31 -> mM . mX [ 10ULL ] != 0 ) {
out -> mF . mX [ 20ULL ] = t6 - ( t31 -> mX . mX [ 31ULL ] * 1.0E-8 + 6.0E-9
) ; } else { out -> mF . mX [ 20ULL ] = t6 - ( t31 -> mX . mX [ 31ULL ] +
6.0E-9 ) ; } if ( t31 -> mM . mX [ 11ULL ] != 0 ) { out -> mF . mX [ 21ULL ]
= t7 - ( t31 -> mX . mX [ 32ULL ] + 0.6 ) ; } else { out -> mF . mX [ 21ULL ]
= t7 - ( t31 -> mX . mX [ 32ULL ] * 0.3 + 0.6 ) ; } if ( t31 -> mM . mX [
11ULL ] != 0 ) { out -> mF . mX [ 22ULL ] = t31 -> mX . mX [ 21ULL ] - ( t31
-> mX . mX [ 32ULL ] * 1.0E-8 + 6.0E-9 ) ; } else { out -> mF . mX [ 22ULL ]
= t31 -> mX . mX [ 21ULL ] - ( t31 -> mX . mX [ 32ULL ] + 6.0E-9 ) ; } if ( t31
-> mM . mX [ 12ULL ] != 0 ) { out -> mF . mX [ 23ULL ] =
Diode4_private_Diode_v_diode - ( t31 -> mX . mX [ 35ULL ] + 0.6 ) ; } else {
out -> mF . mX [ 23ULL ] = Diode4_private_Diode_v_diode - ( t31 -> mX . mX [
35ULL ] * 0.3 + 0.6 ) ; } if ( t31 -> mM . mX [ 12ULL ] != 0 ) { out -> mF .
mX [ 24ULL ] = Diode4_i - ( t31 -> mX . mX [ 35ULL ] * 1.0E-8 + 6.0E-9 ) ; }
else { out -> mF . mX [ 24ULL ] = Diode4_i - ( t31 -> mX . mX [ 35ULL ] +
6.0E-9 ) ; } if ( t31 -> mM . mX [ 13ULL ] != 0 ) { out -> mF . mX [ 25ULL ]
= - t31 -> mX . mX [ 34ULL ] - ( t31 -> mX . mX [ 39ULL ] + 0.6 ) ; } else {
out -> mF . mX [ 25ULL ] = - t31 -> mX . mX [ 34ULL ] - ( t31 -> mX . mX [
39ULL ] * 0.3 + 0.6 ) ; } if ( t31 -> mM . mX [ 13ULL ] != 0 ) { out -> mF .
mX [ 26ULL ] = t12 - ( t31 -> mX . mX [ 39ULL ] * 1.0E-8 + 6.0E-9 ) ; } else
{ out -> mF . mX [ 26ULL ] = t12 - ( t31 -> mX . mX [ 39ULL ] + 6.0E-9 ) ; }
if ( t31 -> mM . mX [ 14ULL ] != 0 ) { out -> mF . mX [ 27ULL ] = t13 - ( t31
-> mX . mX [ 40ULL ] + 0.6 ) ; } else { out -> mF . mX [ 27ULL ] = t13 - ( t31
-> mX . mX [ 40ULL ] * 0.3 + 0.6 ) ; } if ( t31 -> mM . mX [ 14ULL ] != 0 ) {
out -> mF . mX [ 28ULL ] = t31 -> mX . mX [ 33ULL ] - ( t31 -> mX . mX [
40ULL ] * 1.0E-8 + 6.0E-9 ) ; } else { out -> mF . mX [ 28ULL ] = t31 -> mX .
mX [ 33ULL ] - ( t31 -> mX . mX [ 40ULL ] + 6.0E-9 ) ; } if ( t31 -> mM . mX
[ 15ULL ] != 0 ) { out -> mF . mX [ 29ULL ] = - t31 -> mX . mX [ 36ULL ] - ( t31
-> mX . mX [ 41ULL ] + 0.6 ) ; } else { out -> mF . mX [ 29ULL ] = - t31 ->
mX . mX [ 36ULL ] - ( t31 -> mX . mX [ 41ULL ] * 0.3 + 0.6 ) ; } if ( t31 ->
mM . mX [ 15ULL ] != 0 ) { out -> mF . mX [ 30ULL ] = Diode7_i - ( t31 -> mX
. mX [ 41ULL ] * 1.0E-8 + 6.0E-9 ) ; } else { out -> mF . mX [ 30ULL ] =
Diode7_i - ( t31 -> mX . mX [ 41ULL ] + 6.0E-9 ) ; } if ( intrm_sf_mf_24 ) {
out -> mF . mX [ 31ULL ] = ( AC_Voltage_Source_p_v - t31 -> mX . mX [ 1ULL ]
) - t31 -> mX . mX [ 13ULL ] * - 0.01 ; } else { out -> mF . mX [ 31ULL ] = -
t31 -> mX . mX [ 13ULL ] - ( AC_Voltage_Source_p_v - t31 -> mX . mX [ 1ULL ]
) * 1.0E-8 ; } if ( intrm_sf_mf_24 ) { out -> mF . mX [ 32ULL ] = t31 -> mX .
mX [ 42ULL ] ; } else { out -> mF . mX [ 32ULL ] = t31 -> mX . mX [ 42ULL ] -
1.0 ; } if ( t31 -> mM . mX [ 17ULL ] != 0 ) { out -> mF . mX [ 33ULL ] =
MOSFET_Ideal_Switching1_diode_private_Diode_v_diode - ( t31 -> mX . mX [
44ULL ] + 0.8 ) ; } else { out -> mF . mX [ 33ULL ] =
MOSFET_Ideal_Switching1_diode_private_Diode_v_diode - ( t31 -> mX . mX [
44ULL ] * 0.001 + 0.8 ) ; } if ( t31 -> mM . mX [ 17ULL ] != 0 ) { out -> mF
. mX [ 34ULL ] = t20 - ( t31 -> mX . mX [ 44ULL ] * 1.0E-5 +
8.0000000000000013E-6 ) ; } else { out -> mF . mX [ 34ULL ] = t20 - ( t31 ->
mX . mX [ 44ULL ] + 8.0000000000000013E-6 ) ; } if ( t31 -> mM . mX [ 18ULL ]
!= 0 ) { out -> mF . mX [ 35ULL ] = MOSFET_Ideal_Switching1_mosfet_equation_v
- t31 -> mX . mX [ 43ULL ] * 0.01 ; } else { out -> mF . mX [ 35ULL ] =
MOSFET_Ideal_Switching1_mosfet_equation_v * 1.0E-6 - t31 -> mX . mX [ 43ULL ]
; } if ( t31 -> mM . mX [ 19ULL ] != 0 ) { out -> mF . mX [ 36ULL ] = t22 - ( t31 -> mX . mX [ 45ULL ] + 0.8 ) ; } else { out -> mF . mX [ 36ULL ] = t22 - ( t31 -> mX . mX [ 45ULL ] * 0.001 + 0.8 ) ; } if ( t31 -> mM . mX [ 19ULL ] != 0 ) { out -> mF . mX [ 37ULL ] = t31 -> mX . mX [ 22ULL ] - ( t31 -> mX . mX [ 45ULL ] * 1.0E-5 + 8.0000000000000013E-6 ) ; } else { out -> mF . mX [ 37ULL ] = t31 -> mX . mX [ 22ULL ] - ( t31 -> mX . mX [ 45ULL ] + 8.0000000000000013E-6 ) ; } if ( t31 -> mM . mX [ 20ULL ] != 0 ) { out -> mF . mX [ 38ULL ] = MOSFET_Ideal_Switching2_mosfet_equation_v - t31 -> mX . mX [ 23ULL ] * 0.01 ; } else { out -> mF . mX [ 38ULL ] = MOSFET_Ideal_Switching2_mosfet_equation_v * 1.0E-6 - t31 -> mX . mX [ 23ULL ] ; } if ( t31 -> mM . mX [ 21ULL ] != 0 ) { out -> mF . mX [ 39ULL ] = t25 - ( t31 -> mX . mX [ 47ULL ] + 0.8 ) ; } else { out -> mF . mX [ 39ULL ] = t25 - ( t31 -> mX . mX [ 47ULL ] * 0.001 + 0.8 ) ; } if ( t31 -> mM . mX [ 21ULL ] != 0 ) { out -> mF . mX [ 40ULL ] = t26 - ( t31 -> mX . mX [ 47ULL ] * 1.0E-5 + 8.0000000000000013E-6 ) ; } else { out -> mF . mX [ 40ULL ] = t26 - ( t31 -> mX . mX [ 47ULL ] + 8.0000000000000013E-6 ) ; } if ( t31 -> mM . mX [ 22ULL ] != 0 ) { out -> mF . mX [ 41ULL ] = t27 - t31 -> mX . mX [ 46ULL ] * 0.01 ; } else { out -> mF . mX [ 41ULL ] = t27 * 1.0E-6 - t31 -> mX . mX [ 46ULL ] ; } if ( t31 -> mM . mX [ 23ULL ] != 0 ) { out -> mF . mX [ 42ULL ] = MOSFET_Ideal_Switching4_diode_private_Diode_v_diode - ( t31 -> mX . mX [ 48ULL ] + 0.8 ) ; } else { out -> mF . mX [ 42ULL ] = MOSFET_Ideal_Switching4_diode_private_Diode_v_diode - ( t31 -> mX . mX [ 48ULL ] * 0.001 + 0.8 ) ; } if ( t31 -> mM . mX [ 23ULL ] != 0 ) { out -> mF . mX [ 43ULL ] = t31 -> mX . mX [ 24ULL ] - ( t31 -> mX . mX [ 48ULL ] * 1.0E-5 + 8.0000000000000013E-6 ) ; } else { out -> mF . mX [ 43ULL ] = t31 -> mX . mX [ 24ULL ] - ( t31 -> mX . mX [ 48ULL ] + 8.0000000000000013E-6 ) ; } if ( t31 -> mM . mX [ 24ULL ] != 0 ) { out -> mF . mX [ 44ULL ] = MOSFET_Ideal_Switching4_mosfet_equation_v - t31 -> mX . mX [ 25ULL ] * 0.01 ; } else { out -> mF . mX [ 44ULL ] = MOSFET_Ideal_Switching4_mosfet_equation_v * 1.0E-6 - t31 -> mX . mX [ 25ULL ] ; } out -> mF . mX [ 0ULL ] = - 0.0 ; out -> mF . mX [ 1ULL ] = - 0.0 ; out -> mF . mX [ 2ULL ] = - 0.0 ; out -> mF . mX [ 3ULL ] = - 0.0 ; out -> mF . mX [ 4ULL ] = - 0.0 ; out -> mF . mX [ 5ULL ] = - 0.0 ; out -> mF . mX [ 6ULL ] = - ( t31 -> mM . mX [ 7ULL ] != 0 ? - 1.0 : - 0.0 ) ; out -> mF . mX [ 7ULL ] = - 0.0 ; out -> mF . mX [ 8ULL ] = - 0.0 ; out -> mF . mX [ 9ULL ] = - 0.0 ; out -> mF . mX [ 10ULL ] = - 0.0 ; out -> mF . mX [ 11ULL ] = - 0.0 ; out -> mF . mX [ 12ULL ] = zc_int1 ; out -> mF . mX [ 13ULL ] = - ( sin ( t31 -> mT . mX [ 0ULL ] * 376.99111843077515 ) * 220.0 ) ; out -> mF . mX [ 14ULL ] = 0.0 ; out -> mF . mX [ 45ULL ] = - ( - t31 -> mX . mX [ 17ULL ] * zc_int7 ) / 6.8 ; out -> mF . mX [ 46ULL ] = - ( t31 -> mX . mX [ 17ULL ] * zc_int3 ) / 6.8 ; out -> mF . mX [ 47ULL ] = 0.0 ; out -> mF . mX [ 48ULL ] = - 0.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
