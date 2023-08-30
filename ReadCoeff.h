#ifndef READCOEFF_H_INCLUDED
#define READCOEFF_H_INCLUDED

#include <stdio.h>

/**
 * Reads the coefficients of the quadratic equation
 * Checks whether the coefficients are entered correctly
 * (the user didn't enter letters, symbols, etc)
 * \param [in, out] *n coefficient of the quadratic equation
*/
void read_coeff(double *n);

/// Clears one line
void clear_line();

#endif // READCOEFF_H_INCLUDED
