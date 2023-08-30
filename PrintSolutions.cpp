#include <stdio.h>

#include "PrintSolutions.h"

 void print_solutions(int nRoots, double x1, double x2) {
     switch (nRoots) {
        case ZERO_ROOTS: printf("This equation doesn't have any roots\n");
                break;

        case ONE_ROOT: printf("x = %lg\n", x1);
                break;

        case TWO_ROOTS: printf("x1 = %lg, x2 = %lg\n", x1, x2);
                break;

        case INF_ROOTS: printf("This equation has infinite number of roots\n");
                break;

        default: printf ("main(): ERROR: nRoots =  %d\n",
                         nRoots);
    }
}
