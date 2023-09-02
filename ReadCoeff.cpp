#include <stdio.h>

#include "ReadCoeff.h"

void clear_line() {
    while (getchar() != '\n') {
    }
}


void read_coeff(double *n) {
    while (scanf("%lg", n) != 1) {
            clear_line();
            printf("Incorrect input. Try again\n");
    }
}
