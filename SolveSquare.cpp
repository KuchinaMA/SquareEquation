#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "SolveSquare.h"
#include "IsZero.h"


int solve_linear (SquareEquation *equation) {

    assert(equation->x1 != NAN);
    assert(&equation->x1 != NULL);

    assert(isfinite(equation->b));
    assert(isfinite(equation->c));

    if (is_zero(equation->b)) {
        return (is_zero(equation->c)) ? INF_ROOTS : ZERO_ROOTS;
    }
    else {
        equation->x1 = -equation->c/equation->b;
        return ONE_ROOT;
    }
}


int solve_square (SquareEquation *equation) {

    assert(equation->x1 != NAN);
    assert(equation->x2 != NAN);

    assert(equation != NULL);
    assert(&equation->x1 != NULL);
    assert(&equation->x2 != NULL);

    assert(&equation->x1 != &equation->x2);

    assert(isfinite(equation->a));
    assert(isfinite(equation->b));
    assert(isfinite(equation->c));

    if (is_zero(equation->a)) {
        return solve_linear (equation);
    }
    else {
        double d = equation->b*equation->b - 4*equation->a*equation->c;

        if (is_zero(d)) {
            equation->x1 = equation->x2 = -equation->b / (2*equation->a);
            return ONE_ROOT;
        }

        if (d < 0) {
            return ZERO_ROOTS;
        }

        else {
            double sqrt_d = sqrt(d);

            equation->x1 = (-equation->b - sqrt_d) / (2*equation->a);
            equation->x2 = (-equation->b + sqrt_d) / (2*equation->a);

            return TWO_ROOTS;
        }
    }
}
