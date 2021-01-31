/*
 * Austin Klein
 * CS 201
 * 1/25/2021
 * HW 1
 * greatest.cpp
 */

// Write a C++ program that inputs positive integers from the user until the user inputs a number that is zero or
// negative. The program then prints the greatest positive number entered. If no positive numbers are entered output an
// error message.

#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    float i;
    float j;
    cout << "Input a positive integer: " << endl;
    cin >> i;
    cout << 1 % i;

    while((i < 0) && (i % 1 != 0)){
        cout << "That is not a positive integer. Please try again." << endl;
        cout << "Please enter a positive integer: " << endl;
        cin >> i;
    }

    return 0;
}
