module blis_typed_l3
  
  use blis_kinds, only: conj_t, dim_t, inc_t, c_float, c_double
  implicit none

  private

  !
  ! BLIS Level-3
  !
  public :: gemm, &
            hemm, herk, her2k, &
            symm, syrk, syr2k, &
            trmm, trmm3, trsm

  include "interface/blis-typed-l3.inc"

end module
