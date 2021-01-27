// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 1/25/2021
 * Lab 03b
 * More iterations
 */

// Description:
/* Write a C++ program that has a for-loop going through the numbers 1 to 100.
 *      For each number divisible by 3, the program prints “Fizz”.
 *      For each number divisible by 5, the program prints “Buzz”.
 *      If a number is divisible by both 3 and 5, then the program prints “Fizz Buzz”.
 *      For other numbers—divisible by neither 3 nor 5—the number itself is printed.
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {

    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            cout << "fizz ";
            if(i % 5 == 0) {
                cout << "buzz ";
            }
        cout << endl;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}