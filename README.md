# blis-f

BLIS Fortran Bindings

## Contents

## Introduction

`blis-f` contains the Fortran bindings to BLIS - the BLAS-like Library Instantiation Software Framework.
It can be used to perform high-performance dense linear algebra operations via a BLAS-like API. 
Since BLIS is written in ISO C99, BLIS procedures can be called safely from Fortran
by using the C interoperability features that became available in Fortran 2003. This includes
type safety established by the use of interface blocks and modules.

It is worth mentioning that the original BLIS library already includes a thin wrapper
providing a BLAS interface. However, BLIS is not BLAS, and BLIS exposes some extra functionality
which is not available in BLAS.

## Getting started

_NOTE: This section assumes you have already downloaded and installed the
original BLIS library. If not, read [How to Download BLIS](https://github.com/flame/blis#how-to-download-blis) first._




## Example Code

## Documentation

For documentation please refer to the original [BLIS Typed API Reference](https://github.com/flame/blis/blob/master/docs/BLISTypedAPI.md).

## Contributing

## Acknowledgements

This project draws inspiration from [mfi]() - the Modern Fortran Interface to BLAS and LAPACK -
by @14NGiestas. We also tahnk Balínt Aradi (@aradi) for the excellent [fypp]() 
preprocessor used for template instantiation.