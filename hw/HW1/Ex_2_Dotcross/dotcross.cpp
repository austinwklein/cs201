/*
 * Austin Klein
 * CS 201
 * 1/25/2021
 * HW 1
 * dotcross.cpp
 */

// Design
/* Write a C++ program that calculates the dot product and cross product of a 3-component vector.
 *
 * Allow the user to type in 3 floating point numbers for x, y, z each for vector A and vector B
 * Calculate the dot product (AxBx + AyBy + AzBz) and print the result
 * Calculate the cross product and print the result
     * Cx = AyBz - AzBy
     * Cy = AzBx - AxBz
     * Cz = AxBy - AyBx
 * Print the  result in a nice format like "A dot B = answer" or "A cross B = (x, y, z)"
 * Use the <iomanip> header to format the numbers so they have exactly 5 decimal places using std::setprecision().
 * See documentation for guidance.
     * https://en.cppreference.com/w/cpp/io/manip/setprecision
     * https://en.cppreference.com/w/cpp/header/iomanip
 */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

int main() {

    // Variables for vector A (x, y, and z)
    float ax, ay, az;
    // Variables for vector B (x, y, and z)
    float bx, by, bz;

    // Vector A user input
    cout << "Input x, y, and z for vector A: " << endl;

        cout << "Ax:";
        cin >> setprecision(5) >> ax;
        cout << "Ay:";
        cin >> setprecision(5) >> ay;
        cout << "Az:";
        cin >> setprecision(5) >> az;

    cout << endl;

    // Vector B user input
    cout << "Input x, y, and z for vector B: " << endl;

        cout << "Bx:";
        cin >> setprecision(5) >> bx;
        cout << "By:";
        cin >> setprecision(5) >> by;
        cout << "Bz:";
        cin >> setprecision(5) >> bz;

    cout << endl;

    // Dot product of A and B
    float dp = (ax * bx + ay * by + az * bz);
    cout << "Dot product:" << endl;
    cout << "   A: (" << ax << ", " << ay << ", " << az << ")" << endl;
    cout << " * B: (" << bx << ", " << by << ", " << bz << ")" << endl;
    cout << " = " << dp << endl;

    cout << endl;

    // Cross product of A and B
    float cx = (ay * bz - az * by);
    float cy = (az * bx - ax * bz);
    float cz = (ax * by - ay * bx);
    cout << "Cross product:" << endl;
    cout << "   A: (" << ax << ", " << ay << ", " << az << ")" << endl;
    cout << " * B: (" << bx << ", " <<  by << ", " << bz << ")" << endl;
    cout << " = C: (" << cx << ", " << cy << ", " << cz << ")" << endl;

    return 0;
}
