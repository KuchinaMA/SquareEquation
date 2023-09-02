#include <stdio.h>

#include "SolveSquare.h"
#include "ReadCoeff.h"
#include "PrintSolutions.h"
#include "Tests.h"

#define TestMode

const char *DEFAULT_TEST_FILE = "Testsdata.txt";

// command line arguments in c

int main(int argc, const char *argv[]) {
    printf("# Square equations solver\n"
           "# (ñ)Marina Kuchina, 2023\n\n");

    // argv[1] -> tests.txt
    // func
    // FILE *
    // file tests

    #ifdef TestMode
        if (argc == 1) {
            all_tests(DEFAULT_TEST_FILE);
        }
        else {
            all_tests(argv[1]);
        }
    #endif

    SquareEquation equation = {0, 0, 0, 0, 0};

    printf("Enter coefficients of the equation ax^2 + bx + c = 0\n");
    read_coeff(&equation.a);
    read_coeff(&equation.b);
    read_coeff(&equation.c);


    int nRoots = solve_square (&equation);
    print_solutions(nRoots, equation.x1, equation.x2);

    return 0;
}



