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

void InputNames(vector<string> &names) {
        for (int i = 0; i < 10; i++) {
            string name;
            cout << "Please enter a name: ";
            getline(cin, name);
            names.push_back(name);
        }
}

bool DoesNameExist(const string & nameToFind, vector<string> &names) {
    for (int i = 0; i < 10; i++) {
        if (names[i] == nameToFind){
            return true;
        }
        else continue;
    }
    return false;
}

void PrintNames(const vector<string> &names) {
    for (int i = 0; i < 10; i++) {
        cout << names[i] << endl;
    }
}

int main() {
    vector<string> names;
    InputNames(names);

    string nameToFind;
    cout << "Type in a name to search: ";
    cin >> nameToFind;
    if (DoesNameExist(nameToFind, names) == true) {
        cout << nameToFind << " is on the list." << endl;
    }
    else {
        cout << nameToFind << " was not found." << endl;
    }

    PrintNames(names);

    return 0;
}
