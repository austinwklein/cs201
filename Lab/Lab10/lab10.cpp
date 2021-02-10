// Boilerplate
/*
 * lab10.cpp
 * Austin Klein
 * CS 201
 * Feb/10/2021
 * Lab 10
 * Boolean Values
 */

// Description:
/*
 * RULES
 *
 * Use functions described in separate header and source files.
 * All data transferred between functions in your program must be
 *  handled via function parameters or return values.
 * If a function in your program has a return value, then that
 *  function must not print anything.
 *
 * REQUIRED
 *
 * Write a program that prints all multiples of 3 between 1 and 40 (inclusive).
 *  The program should be structured as follows.
 * Write a function isDiv3 that takes one int parameter and returns a bool.
 *  The return value should be true if the parameter is divisible by 3, and
 *  false otherwise.
 * Optional. Or, if you like, write instead a function with a different name that
 *  computes something more complicated and/or interesting. Regardless, your function
 *  must take a single int parameter and return a bool.
 *
 * Next, in function main, write a loop that goes from 1 to 40
 *  (or something like that). Inside this loop, call the above function, passing the
 *  loop counter. Print the loop counter if the function returns true; otherwise,
 *  do not print it.
 *
 *  Hint: Suppose a and b are int values. Then a is divisible by b if a % b == 0.
 *
 *  ADDITIONAL
 *
 *  Based on the above idea, write a function isADivB that takes two int
 *      parameters a and b and prints all integers between 1 and a, inclusive,
 *      that are divisible by b.
 *  Then write a program that calls this function.
 *
 *  Optional. Or do something along similar lines, but more interesting ....
 */

#include "lab10.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    for (int i = 1; i <= 40; i++) {
        if (isDiv3(i)){
            cout << i << " is divisible by 3. " << endl;
        }
    }

    return 0;
}