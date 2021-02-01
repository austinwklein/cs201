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

void InputAmount(vector<string> &money) {string designator;
    for (int i = 0; i < 5; i++) {
        switch(i){
            case(0):
                designator = "pennies";
                break;
            case(1):
                designator = "nickles";
                break;
            case(2):
                designator = "dimes";
                break;
            case(3):
                designator = "quarters";
                break;
            case(4):
                designator = "one dollar coins";
                break;
        }
        string number;
        cout << "How many " << designator << " do you have: " << endl;
        getline(cin, number);
        money.push_back(number);
    }
}

void PrintAmounts(const vector<string> &money){
    for (int i = 0; i < 5; i++) {
        cout << money[i] << endl;
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
    vector<string> money;
    InputAmount(money);

    // Print out the vector of names
    PrintAmounts(money);

    // Counts how many total characters are in the vector of names
    //CountCharacters(names);

    return 0;
}

