module blis_typed_l1d
  
  use blis_kinds, only: conj_t, dim_t, inc_t, c_float, c_double
  implicit none

  private

  !
  ! BLIS Level-1d
  !
  public :: addd, axpyd, copyd, invertd, scald, scal2d, setd, setid, &
            shiftd, subd, xpbyd


  include "interface/t-blis1d.inc"

end module