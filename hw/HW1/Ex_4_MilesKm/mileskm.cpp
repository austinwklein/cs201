// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 1/25/2021
 * HW 1
 * mileskm.cpp
 */

// Design
/* Write a C++ program that converts from miles to kilometers. Program should have a reasonable prompt for the user to
 * enter a number of miles.
 * Note: 1.609 km = 1 mile
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    // m will be miles, entered by the user in the next part
    float m;

    // Read in number to be converted
    cout << "Input a distance in miles as numerical characters :";
    cin >> m;

    // Conversion
    float k;
    k = m * 1.609;

    // 'r' created to take rounded 'k' value for checking the conditional statement due to 'k' previously causing unexpected rounding behavior
    int r;
    r = round(k);


    // Desired program output
    // Output for 1 mile
    if (m == 1) {
        cout << m << " mile is equal to " << k << " kilometers." << endl;
    }
    // 'r' implemented as previously commented
    // Output for 1 kilometer
    else if (r == 1) {
        cout << m << " miles is equal to " << k << " kilometer." << endl;
    }
    // Output for plural miles and kilometers
    else {
        cout << m << " miles is equal to " << k << " kilometers." << endl;
    }

    return 0;
}
