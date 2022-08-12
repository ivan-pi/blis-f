module blis_typed_l2
  
  use blis_kinds, only: conj_t, dim_t, inc_t, c_float, c_double
  implicit none

  private
  !
  ! BLIS Level-2
  !
  public :: gemv, ger, hemv, her, her2, symv, syr, syr2, trmv, trsv
  

  include "interface/t-blis2.inc"

end module