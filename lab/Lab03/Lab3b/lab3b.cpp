/*
 * Austin Klein
 * CS 201
 * Lab 03 b
 * 1/25/2021
 */

// Write a C++ program that prints a 60 × 10 box made of some single character, using nested while-loops.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int c = 1; // Starting number for lines
    int d = 1; // Starting number for boxes

    int n; // User entered (Lines per box)
    int m; // User entered (Characters per line)

    cout << "Enter characters per line: " << endl;
    cin >> m;

    cout << "Enter lines per box: " << endl;
    cin >> n;

    while (c <= n) {

        // Int e added so the starting value of d would virtually be reset each loop
        int e = d;
        while (e <= m) {
            cout << "*";
            ++e;
        }
        cout << endl;
        ++c;
    }

    return 0;
}