// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 1/25/2021
 * Lab 03
 * More iterations
 */

// Description:
/* Write a C++ program that has a for-loop going through the numbers 1 to 100.
 *      For each number divisible by 3, the program prints “Fizz”.
 *      For other numbers—not divisible by 3—the number itself is printed.
 *      The output for each number should be on a separate line.
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {

    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            cout << "fizz" << endl;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}
