/*
 * Austin Klein
 * CS 201
 * 1/25/2021
 * HW 1
 * diamond.cpp
 */

// Design
/* Write a C++ program that inputs a positive integer from the user (using the line-oriented input with proper error
 * handling) and then prints a correspondingly sized diamond made of pound signs.
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // User inputs int into variable 'w' for widest row in the output diamond
    int w;
    cout << "Please enter a positive integer for the widest row of the diamond: " << endl;
    cin >> w;

    // Variable to track current row of diamond
    int r = 1;

    if(r <= w){
        // Variable to track spaces before asterisks for diamond output
        int s = w - 1;

        // While loop for building the top half of the diamond. Stops after the row where there are no more spaces.
        while(s >= 0){

            // String is part of std: it creates a string 's' digits long- filled with ' '
            cout << string(s, ' ');
            s -= 1;

            cout << string((2 * r - 1), '*') << endl;
            r += 1;
        }

        // Resetting values in order to not cause the widest part of the diamond to have 2 rows (Following loop mirrors
        // top half but backwards)
        s = 1;
        // First row of bottom half number of asterisks
        r = (w - 1);

        // While loop for building the bottom half of the diamond.
        while(s <= w, r > 0){

            cout << string(s, ' ');
            s += 1;

            cout << string((2 * r - 1), '*') << endl;
            r -= 1;
        }
    }
    return 0;
}
