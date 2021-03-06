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

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::vector;

void InputAmount(vector<int> &money) {string designator;
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
                designator = "one-dollar coins";
                break;
        }
        string number;
        cout << "How many " << designator << " do you have: " << endl;
        //cin >> number;
        getline(cin, number);
        money.push_back(std::stoi(number));
    }
}

void PrintAmounts(const vector<int> money){
    for (int i = 0; i < 5; i++) {
        string designator;
        if (money[i] == 1) {
            switch (i) {
                case (0):
                    designator = " penny";
                    break;
                case (1):
                    designator = " nickle";
                    break;
                case (2):
                    designator = " dime";
                    break;
                case (3):
                    designator = " quarter";
                    break;
                case (4):
                    designator = " one-dollar coin";
                    break;
            }
        } else {
            switch (i) {
                case (0):
                    designator = " pennies";
                    break;
                case (1):
                    designator = " nickles";
                    break;
                case (2):
                    designator = " dimes";
                    break;
                case (3):
                    designator = " quarters";
                    break;
                case (4):
                    designator = " one-dollar coins";
                    break;
            }
        }
        cout << "You have " << money[i] << designator <<endl;
    }
}

void CountMoney(const vector<int> money) {
    int cents = 0;
    cents += money[0] * 1;
    cents += money[1] * 5;
    cents += money[2] * 10;
    cents += money[3] * 25;
    cents += money[4] * 100;

    // Convert cents to dollars
    float dollars = cents;
    dollars = dollars / 100;

    // Output total value of money
    cout << "For a grand total of $" << dollars << "." << endl;
}

int main() {
    // Initialize and fill vector with number of coins
    vector<int> money;
    InputAmount(money);

    // Print out the vector of coins
    PrintAmounts(money);

    // Counts how much the coins are worth
    CountMoney(money);

    return 0;
}

