#ifndef ISZERO_H_INCLUDED
#define ISZERO_H_INCLUDED

#include <stdio.h>

/// Accuracy with which numbers are compared to zero
const double EPSILON = 1e-6;

/**
 * Compares a double number to zero.
 * Checks how close a double number is to zero with an accuracy of 0.000001
 * \param [in] n double number
 * \returns error code
*/
int is_zero(double n);

#endif // ISZERO_H_INCLUDED
