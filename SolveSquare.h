#ifndef SOLVESQUARE_H_INCLUDED
#define SOLVESQUARE_H_INCLUDED

#include <stdio.h>
#include <math.h>
#include <assert.h>

/// Number of solutions to the quadratic equation
enum NumberOfRoots {
     INF_ROOTS  = -1,
     ZERO_ROOTS =  0,
     ONE_ROOT   =  1,
     TWO_ROOTS  =  2
};

/// Coefficients and roots of the quadratic equation
struct SquareEquation {
    double a;
    double b;
    double c;
    double x1;
    double x2;
    };

/**
 * Solves a quadratic equation a*x^2 + b*x + c = 0
 * \param [in, out] *equat coefficients of the quadratic equation
 * \returns number of roots
*/
int solve_square (SquareEquation *equat);

/**
 * Solves a linear equation b*x + c = 0
 * \param [in, out] *equat coefficients of the quadratic equation
 * \returns number of roots
*/
int solve_linear (SquareEquation *equat);


#endif // SOLVESQUARE_H_INCLUDED
