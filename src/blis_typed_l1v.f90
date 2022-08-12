module blis_typed_l1v
  
  use blis_kinds, only: conj_t, dim_t, inc_t, c_float, c_double
  implicit none

  private

  !
  ! BLIS Level-1v
  !
  public :: addv, amaxv, axpyv, axpbyv, copyv, dotv, dotxv, &
            invertv, scalv, scal2v, setv, subv, swapv, xpbyv


  include "interface/t-blis1v.inc"

end module
