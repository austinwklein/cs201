/*
 * file name
 * Austin Klein
 * CS 201
 * MONTH/DAY/2021
 * Lab LAB NUMBER
 * LAB TOPIC
 */
#ifndef LAB09_MODIFYSTRING_HPP
#define LAB09_MODIFYSTRING_HPP

#include<iostream>
#include <string>

using std::string;
using std::to_string;
using std::cout;
using std::endl;

int modifyString(string & referencedString, int n) {
    referencedString = referencedString + " " + to_string(n);
    n = referencedString.size();
    return n;
}

void printOut(string & referencedString, int n) {
    cout << endl;
    cout << "Length: " << n << endl;
    cout << "stringInMain: " << referencedString << endl;
}

#endif //LAB09_MODIFYSTRING_HPP
