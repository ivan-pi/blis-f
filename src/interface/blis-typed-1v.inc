#:mute
#:include "blis-macros.fypp"

#:def addv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,n,x,incx,y,incy)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer, parameter :: wp = ${ckind}$
    integer(conj_t), value :: conjx
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(inout) :: y(*)
    integer(inc_t), value :: incy
  end subroutine
#:enddef

#:def amaxv(name,ctype,ckind)
  subroutine ${HEAD(name,"(n,x,incx,index)")}$
    import :: dim_t, inc_t, ${ckind}$
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    integer(dim_t), intent(out) :: index
  end subroutine
#:enddef

#:def axpyv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,n,alpha,x,incx,y,incy)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: alpha
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(inout) :: y(*)
    integer(inc_t), value :: incy
  end subroutine
#:enddef

#:def axpbyv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,n,alpha,x,incx,beta,y,incy)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: alpha
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(in) :: beta
    ${ctype}$, intent(inout) :: y(*)
    integer(inc_t), value :: incy
  end subroutine
#:enddef

#:def copyv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,n,x,incx,y,incy)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(inout) :: y(*)
    integer(inc_t), value :: incy
  end subroutine
#:enddef

#:def dotv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,conjy,n,x,incx,y,incy,rho)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(conj_t), value :: conjy
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(in) :: y(*)
    integer(inc_t), value :: incy
    ${ctype}$, intent(out) :: rho
  end subroutine
#:enddef

#:def dotxv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,conjy,n,x,incx,y,incy,rho)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(conj_t), value :: conjy
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(in) :: y(*)
    integer(inc_t), value :: incy
    ${ctype}$, intent(in) :: beta
    ${ctype}$, intent(inout) :: rho
  end subroutine
#:enddef

#:def invertv(name,ctype,ckind)
  subroutine ${HEAD(name,"(n,x,incx)")}$
    import :: dim_t, inc_t, ${ckind}$
    integer(dim_t), value :: n
    ${ctype}$, intent(inout) :: x(*)
    integer(inc_t), value :: incx
  end subroutine
#:enddef

#:def scalv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,n,alpha,x,incx)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjalpha
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: alpha
    ${ctype}$, intent(inout) :: x(*)
    integer(inc_t), value :: incx
  end subroutine
#:enddef

#:def scal2v(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,n,alpha,x,incx,y,incy)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: alpha
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(inout) :: y(*)
    integer(inc_t), value :: incy
  end subroutine
#:enddef

#:def setv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjalpha,n,alpha,x,incx)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjalpha
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: alpha
    ${ctype}$, intent(out) :: x(*)
    integer(inc_t), value :: incx
  end subroutine
#:enddef

#:def subv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,n,x,incx,y,incy)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(inout) :: y(*)
    integer(inc_t), value :: incy
  end subroutine
#:enddef

#:def swapv(name,ctype,ckind)
  subroutine ${HEAD(name,"(n,x,incx,y,incy)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(dim_t), value :: n
    ${ctype}$, intent(inout) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(inout) :: y(*)
    integer(inc_t), value :: incy
  end subroutine
#:enddef

#:def xpbyv(name,ctype,ckind)
  subroutine ${HEAD(name,"(conjx,n,x,incx,beta,y,incy)")}$
    import :: conj_t, dim_t, inc_t, ${ckind}$
    integer(conj_t), value :: conjx
    integer(dim_t), value :: n
    ${ctype}$, intent(in) :: x(*)
    integer(inc_t), value :: incx
    ${ctype}$, intent(in) :: beta
    ${ctype}$, intent(inout) :: y(*)
    integer(inc_t), value :: incy
  end subroutine
#:enddef

!
! -- Level-1f --
!
$:blis_interface('?addv',chars,addv)
$:blis_interface('?amaxv',chars,amaxv)
$:blis_interface('?axpyv',chars,axpyv)
$:blis_interface('?axpbyv',chars,axpbyv)
$:blis_interface('?copyv',chars,copyv)
$:blis_interface('?dotv',chars,dotv)
$:blis_interface('?dotxv',chars,dotxv)
$:blis_interface('?invertv',chars,invertv)
$:blis_interface('?scalv',chars,scalv)
$:blis_interface('?scal2v',chars,scal2v)
$:blis_interface('?setv',chars,setv)
$:blis_interface('?subv',chars,subv)
$:blis_interface('?swapv',chars,swapv)
$:blis_interface('?xpbyv',chars,xpbyv)
