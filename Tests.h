#ifndef TESTS_H_INCLUDED
#define TESTS_H_INCLUDED

#include <stdio.h>

/// Maximum length of the test name
const int TEST_NAME_LEN = 30;

//const char *DEFAULT_TEST_FILE = "Testsdata.txt";


/**
 * Stores the reference values for the test
 * Coefficients of the quadratic equation, correct roots,
 * correct number of roots, name of the test
*/
struct TestData {
    struct SquareEquation equat;
    double nRoots;
    char name[TEST_NAME_LEN];
    };

/**
 * Tests the program
 * Compares the result of program execution with reference values
 * \param [in, out] *data reference values for the test
 * \returns error code
*/
int single_test (TestData *data);

/**
 * Does several tests of the program
*/
void all_tests(const char *test_file);

#endif // TESTS_H_INCLUDED
