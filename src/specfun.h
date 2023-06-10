/* GNUPLOT - specfun.h */

/*[
 * Copyright 1999, 2004   Thomas Williams, Colin Kelley
 *
 * Permission to use, copy, and distribute this software and its
 * documentation for any purpose with or without fee is hereby granted,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.
 *
 * Permission to modify the software is granted, but not the right to
 * distribute the complete modified source code.  Modifications are to
 * be distributed as patches to the released version.  Permission to
 * distribute binaries produced by compiling modified sources is granted,
 * provided you
 *   1. distribute the corresponding source modifications from the
 *    released version in the form of a patch file along with the binaries,
 *   2. add special version identification to distinguish your version
 *    in addition to the base release version number,
 *   3. provide your name and address as the primary contact for the
 *    support of your modified version, and
 *   4. retain our contact information in regard to use of the base
 *    software.
 * Permission to distribute the released version of the source code along
 * with corresponding source modifications in the form of a patch file is
 * granted with same provisions 2 through 4 for binary distributions.
 *
 * This software is provided "as is" without express or implied warranty
 * to the extent permitted by applicable law.
]*/

#ifndef GNUPLOT_SPECFUN_H
# define GNUPLOT_SPECFUN_H

#include "syscfg.h"
#include "eval.h"


/* These are the more 'special' functions built into the stack machine. */
void f_erf(union argument *x);
void f_erfc(union argument *x);
void f_ibeta(union argument *x);
void f_gamma(union argument *x);
void f_lgamma(union argument *x);
void f_rand(union argument *x);
void f_normal(union argument *x);
void f_inverse_normal(union argument *x);
void f_inverse_erf(union argument *x);
void f_inverse_igamma(union argument *x);
void f_inverse_ibeta(union argument *x);
void f_lambertw(union argument *x);
void f_airy(union argument *x);
void f_expint(union argument *x);
void f_besin(union argument *x);

#ifndef HAVE_COMPLEX_FUNCS
void f_igamma(union argument *x);
#endif
void f_uigamma(union argument *x);

double chisq_cdf(int dof, double chisqr);

#ifndef HAVE_LIBCERF
void f_voigt(union argument *x);
#endif

void f_SynchrotronF(union argument *x);

#endif /* GNUPLOT_SPECFUN_H */
