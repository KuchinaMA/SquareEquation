#include <stdio.h>
#include <math.h>

#include "IsZero.h"

int is_zero(double n) {
    return fabs(n) < EPSILON;
}
