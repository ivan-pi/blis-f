module blis_typed_l1f
  
  use blis_kinds, only: conj_t, dim_t, inc_t, c_float, c_double
  implicit none

  private

  !
  ! BLIS Level-1f
  !
  public :: axpy2v, dotaxpyv, axpyf, dotxf, dotxaxpyf
  

  include "interface/blis-typed-l1f.inc"

end module