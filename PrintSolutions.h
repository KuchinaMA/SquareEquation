#ifndef PRINTSOLUTIONS_H_INCLUDED
#define PRINTSOLUTIONS_H_INCLUDED

#include <stdio.h>
#include "SolveSquare.h"

// doxygen: prototypes, enums, structs
// makefile + flags from the guide
// make

/**
 * Prints the roots of the quadratic equation depending on their number
 * \param [in] nRoots number of roots of the quadratic equation
 * \param [in] x1 root of the equation
 * \param [in] x2 root of the equation
*/
void print_solutions(int nRoots, double x1, double x2);


#endif // PRINTSOLUTIONS_H_INCLUDED
