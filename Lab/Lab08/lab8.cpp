// Boilerplate
/*
 * Austin Klein
 * CS 201
 * February/5/2021
 * Lab 8
 * Functions that return a value
 * lab8.cpp
 */

// Description:
/* Add the downloaded files to a project, along with another source
 * file named “lab8.cpp”, which you will write.
 *
 * In file lab8.cpp, write two functions: doInput and compute,
 * both of which are prototyped in lab8.hpp.
     * Function doInput should call function getInt (defined in
     *  files intio.hpp & intio.cpp) and return its return value.
     * Function compute should take an integer parameter and return its square.
 *
 * Note. Do not write function main ! In this lab, I write it.
 *
 * Rewrite your function compute so that it behaves as follows.
 *
 * If it is given a number that is zero or less, then it returns zero.
 * If it is given a positive integer n, then it returns the number of positive integers
 *  less than n that n is divisible by.
 * For example, compute(12) should return 5, since there are 5 positive integers less than
 *  12 that divide 12 evenly: 1,2,3,4,6. Similarly, compute(25) should return 2, and
 *  compute(31) should return 1.
 */

#include <iostream>
#include "lab8.hpp"
#include "intio.hpp"

using std::cout;
using std::cin;
using std::endl;

int doInput() {
    return getInt();
}

int compute(int n) {
    return n * n;
}
