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

    cout << "Input a single digit number between 1 and 9:";
    cin >> n;

    cout << endl;

    switch (n)
    {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        default:
            cout << "incorrect entry";
            break;
    }

    cout << endl;


    return 0;
}
