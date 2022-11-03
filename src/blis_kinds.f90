module blis_kinds

  use, intrinsic :: iso_c_binding, only: c_int, c_float, c_double

  implicit none

  integer, parameter :: dim_t     = c_int
  integer, parameter :: trans_t   = c_int
  integer, parameter :: conj_t    = c_int
  integer, parameter :: side_t    = c_int
  integer, parameter :: diag_t    = c_int
  integer, parameter :: invdiag_t = c_int
  integer, parameter :: struc_t   = c_int

end module