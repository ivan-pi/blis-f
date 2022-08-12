module blis_typed_l1m
  
  use blis_kinds, only: conj_t, dim_t, inc_t, c_float, c_double
  implicit none

  private

  !
  ! BLIS Level-1m
  !
  public :: addm, axpym, copym, scalm, scal2m, setm, subm


  include "interface/t-blis1m.inc"

end module
