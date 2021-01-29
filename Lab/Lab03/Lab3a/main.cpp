/*
 * Austin Klein
 * CS 201
 * Lab 03
 * 1/25/2021
 */

// Write a C++ program that prints the numbers 1 to 20, using a while-loop.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int c = 1;
    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;

    while (c <= n) {
        cout << c << endl;
        ++c;
    }

    return 0;
}
