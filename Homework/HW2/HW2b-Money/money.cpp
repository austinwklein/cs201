// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 1/31/2021
 * HW 2b
 * money.cpp
 */

// Design
/* Write a C++ program that prompts the user to enter some number of pennies, nickles, dimes, quarters,
 * and one-dollar coins.Each value is separately quarried and then printed out to reflect the quantity of each coin.
 * Also print out the total amount of money in cents.
 *
 * Improvements:
 * Print grammatically correct for case: 1 coin
 * Print output in dollars and cents- in correct format. "$xx.xx"
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

void PrintNames(const vector<string> &names){
    for (int i = 0; i < 10; i++) {
        cout << names[i] << endl;
    }
}

void CountCharacters(const vector<string> &names) {
    int characters = 0;
    // Iterate through each name in the vector
    for (int i = 0; i < 10; i++) {

        // Iterate through each letter in the name
        //   ea letter/  current letter index < total letters in name
        for (int letter = 0; letter < names[i].length(); letter++) {
            characters ++;
        }
    }
    cout << "The list of names contains " << characters << " characters." << endl;
}

int main() {
    // Initialize and fill vector with 10 names
    vector<string> names;
    InputNames(names);

    // Ask for a name to search for
    string nameToFind;
    cout << "Type in a name to search: ";
    cin >> nameToFind;

    // Search the vector for the name and give the user feedback
    if (DoesNameExist(nameToFind, names)) {
        cout << nameToFind << " is on the list." << endl;
    }
    else {
        cout << nameToFind << " was not found." << endl;
    }

    // Print out the vector of names
    PrintNames(names);

    // Counts how many total characters are in the vector of names
    CountCharacters(names);

    return 0;
}

