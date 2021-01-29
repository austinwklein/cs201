/*
 * Austin Klein
 * CS 201
 * Lab 03 c
 * 1/25/2021
 */

// Change your program from part 2 so that the box alternates between 2 different characters.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int c = 1; // Starting number for lines
    int d = 1; // Starting number for boxes

    int n; // User entered (Lines per box)
    int m; // User entered (Characters per line)

    const char *a = "^";
    const char *b = "&";

    cout << "Enter characters per line: " << endl;
    cin >> m;

    cout << "Enter lines per box: " << endl;
    cin >> n;

    while (c <= n) {
        if(c % 2 == 0) {
            // Int e added so the starting value of d would virtually be reset each loop
            int e = d;
            while (e <= m) {
                if(e % 2 == 0) {
                    cout << a;
                    ++e;
                }
                else {
                    cout << b;
                    ++e;
                }
            }
            cout << endl;
            ++c;
        }
        else {
            // Int e added so the starting value of d would virtually be reset each loop
            int e = d;
            while (e <= m) {
                if(e % 2 == 0) {
                    cout << b;
                    ++e;
                }
                else {
                    cout << a;
                    ++e;
                }
            }
            cout << endl;
            ++c;
        }
    }

    return 0;
}