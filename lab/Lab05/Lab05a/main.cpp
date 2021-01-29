// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 1/29/2021
 * Lab 05a
 * Switch statements
 */

// Description:
/* Write a C++ program that repeatedly does the following:
     * input a number, and do one of—at least!—three different things,
     * depending on the value of the number.
     * Note. Exiting the loop does not count as one of the three things.
     * Use a switch-statement to determine what to do.
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int n;

    cout << "Input a number :";
    cin >> n;

    switch (n%10)
    {
        case 2:
            std::cout << "two";
            break;
        case 1:
            std::cout << "one";
            break;
        case 3:
            std::cout << "BLAH BLAH";
            break;
        default:
            std::cout << "Something else";
            break;
    }


    return 0;
}
