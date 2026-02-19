#include "ne_ds.h"
#include "EVC_e9d0b336_49_ds_sys_struct.h"
#include "EVC_e9d0b336_49_ds_assert.h"
#include "EVC_e9d0b336_49_ds.h"
#include "EVC_e9d0b336_49_ds_externals.h"
#include "EVC_e9d0b336_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T EVC_e9d0b336_49_ds_assert ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t3 , NeDsMethodOutput * out ) { real_T Capacitor2_v ;
real_T Capacitor4_i ; real_T intrm_sf_mf_37 ; real_T intrm_sf_mf_38 ; real_T
intrm_sf_mf_40 ; real_T intrm_sf_mf_41 ; real_T t2 ; Capacitor2_v = t3 -> mX
. mX [ 0ULL ] + t3 -> mX . mX [ 1ULL ] ; Capacitor4_i = ( - t3 -> mX . mX [
3ULL ] + t3 -> mX . mX [ 16ULL ] * - 1.0E-9 ) + t3 -> mX . mX [ 17ULL ] ;
Capacitor4_i = Capacitor4_i * Capacitor4_i * 0.0001 + t3 -> mX . mX [ 2ULL ]
* t3 -> mX . mX [ 2ULL ] * 2.0E-13 ; t2 = ( ( t3 -> mX . mX [ 3ULL ] * - 0.1
+ t3 -> mX . mX [ 16ULL ] * - 1.000000082740371E-10 ) + t3 -> mX . mX [ 17ULL
] * 0.1 ) + t3 -> mX . mX [ 2ULL ] ; intrm_sf_mf_37 = t3 -> mX . mX [ 10ULL ]
> 1.0E-8 ? t3 -> mX . mX [ 10ULL ] : 1.0E-8 ; intrm_sf_mf_38 = ( 1.0 / ( intrm_sf_mf_37 == 0.0 ? 1.0E-16 : intrm_sf_mf_37 ) - 0.0033540164346805303 ) * 3100.0 ; intrm_sf_mf_40 = t3 -> mX . mX [ 11ULL ] > 1.0E-8 ? t3 -> mX . mX [ 11ULL ] : 1.0E-8 ; intrm_sf_mf_41 = ( 1.0 / ( intrm_sf_mf_40 == 0.0 ? 1.0E-16 : intrm_sf_mf_40 ) - 0.0033540164346805303 ) * 3100.0 ; out -> mASSERT . mX [ 0ULL ] = ( int32_T ) ( t3 -> mX . mX [ 0ULL ] > - 500.0 ) ; out -> mASSERT . mX [ 1ULL ] = ( int32_T ) ( t3 -> mX . mX [ 0ULL ] < 500.0 ) ; out -> mASSERT . mX [ 2ULL ] = 1 ; out -> mASSERT . mX [ 3ULL ] = ( int32_T ) ( Capacitor2_v > - 310.0 ) ; out -> mASSERT . mX [ 4ULL ] = ( int32_T ) ( Capacitor2_v < 310.0 ) ; out -> mASSERT . mX [ 5ULL ] = ( int32_T ) ( t3 -> mX . mX [ 15ULL ] * t3 -> mX . mX [ 15ULL ] * 0.0001 + t3 -> mX . mX [ 5ULL ] * t3 -> mX . mX [ 5ULL ] * 2.0E-13 < pmf_get_inf ( ) ) ; out -> mASSERT . mX [ 6ULL ] = ( int32_T ) ( t2 > - 310.0 ) ; out -> mASSERT . mX [ 7ULL ] = ( int32_T ) ( t2 < 310.0 ) ; out -> mASSERT . mX [ 8ULL ] = ( int32_T ) ( Capacitor4_i < pmf_get_inf ( ) ) ; out -> mASSERT . mX [ 9ULL ] = ( int32_T ) ( t3 -> mM . mX [ 25ULL ] != 0 ) ; out -> mASSERT . mX [ 10ULL ] = ( int32_T ) ( t3 -> mM . mX [ 26ULL ] != 0 ) ; out -> mASSERT . mX [ 11ULL ] = ( int32_T ) ( intrm_sf_mf_37 != 0.0 ) ; out -> mASSERT . mX [ 12ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_38 < 40.0 ) ) || ( intrm_sf_mf_38 < 663.67513503334737 ) ) ; out -> mASSERT . mX [ 13ULL ] = ( int32_T ) ( intrm_sf_mf_40 != 0.0 ) ; out -> mASSERT . mX [ 14ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_41 < 40.0 ) ) || ( intrm_sf_mf_41 < 663.67513503334737 ) ) ; ( void ) sys ; ( void ) out ; return 0 ; }
