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

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::cout << "Hello, dotcross!" << std::endl;
    return 0;
}
