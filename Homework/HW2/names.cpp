// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 1/31/2021
 * HW 2
 * names.cpp
 */

// Design
/* Write a C++ program that uses the std::vector class with a variety of loops.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::vector;

int main() {
    vector<string> names;
    for (int i = 0; i < 10; i ++){
        string name;
        cout << "Please enter a name: ";
        getline(cin, name);
        names.push_back(name);
    }
    return 0;
}
