// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 1/29/2021
 * Lab 05b
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

    cout << "Input a single digit number between 1 and 9:";
    cin >> n;

    cout << endl;

    if (n == 1) {
        cout << "one";
    }
    else if (n == 2) {
        cout << "two";
    }
    else if (n == 3) {
        cout << "three";
    }
    else if (n == 4) {
        cout << "four";
    }
    else if (n == 5) {
        cout << "five";
    }
    else if (n == 6) {
        cout << "six";
    }
    else if (n == 7) {
        cout << "seven";
    }
    else if (n == 8) {
        cout << "eight";
    }
    else if (n == 9) {
        cout << "nine";
    }
    else {
        cout << "incorrect entry";
    }

    cout << endl;


    return 0;
}
