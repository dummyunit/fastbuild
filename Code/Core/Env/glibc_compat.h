// glibc_compat
//
// Target older versions of glibc for better Linux distro compatibility
//------------------------------------------------------------------------------
#pragma once

// Avoid "Fortify Source" checks
//------------------------------------------------------------------------------
#undef _FORTIFY_SOURCE

// Use older implementations of glibc functions
//------------------------------------------------------------------------------
__asm__( ".symver clock_gettime,clock_gettime@GLIBC_2.2.5" );
__asm__( ".symver memcpy,memcpy@GLIBC_2.2.5" );

//------------------------------------------------------------------------------
