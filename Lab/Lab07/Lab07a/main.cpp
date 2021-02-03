// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 2/03/2021
 * Lab 7a
 * LAB TOPIC
 */

// Description:
/* Description from Blackboard
 */

#include "intio.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    cout << "Input a number: " << endl;
    int a = getInt();
    cout << "Input another number: " << endl;
    int b = getInt();
    cout << "Input a third number: " << endl;
    int c = getInt();

    putInt(a, 10);
    cout << endl;
    putInt(b, 10);
    cout << endl;
    putInt(c, 10);
    cout << endl;

    return 0;
}
