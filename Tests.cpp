#include <stdio.h>

#include "SolveSquare.h"
#include "Tests.h"
#include "IsZero.h"

int single_test (TestData *data) {
    printf("%s ", data->name);

    double x1ref = data->equat.x1;
    double x2ref = data->equat.x2;
    double nRootsref = data->nRoots;
    int nRoots = solve_square(&data->equat);


    if ((is_zero(x1ref  - data->equat.x1)  == 0) ||
        (is_zero(x2ref  - data->equat.x2)  == 0) ||
        (is_zero(nRoots - nRootsref)  == 0)) {
        printf("FAILLED:\n"
               "got: x1 = %lg, x2 = %lg, nRoots = %d\n"
               "expected: x1 = %lg, x2 = %lg, nRoots = %lg\n",
               data->equat.x1, data->equat.x1, nRoots,
               x1ref, x2ref, nRootsref);
        return 0;
    }
    else {
        printf("SUCCEED\n");
        return 1;
    }
}

void all_tests() {
    printf("Doing several tests...\n");
    FILE *datafile = fopen("Testsdata.txt", "r");
    if (datafile == NULL) {
        printf("There's no fie with data for tests");
    }
    else {
        for (int i = 0; i < NUMBER_OF_TESTS; i++) {
            TestData data1 = {{0, 0, 0, 0, 0}, 0, "ABC"};
            fscanf(datafile, "%lg %lg %lg %lg %lg %lg", &data1.equat.a, &data1.equat.b,
            &data1.equat.c, &data1.equat.x1, &data1.equat.x2, &data1.nRoots);
            fgets(data1.name, TEST_NAME_LEN, datafile);
            single_test(&data1);
        }
    }
    fclose(datafile);
}

