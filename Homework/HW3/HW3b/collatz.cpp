// Boilerplate ******************************************************************
/*
 * collatz.cpp
 * Austin Klein
 * CS 201
 * Feb/11/2021
 * HW 3:
 * Collatz
 */

// Description:******************************************************************
/*
 * This program prints out the Collatz sequence for any number a user inputs.
 * If the user enters a negative number it will be filtered out and they will be
 * re-prompted.
 * Continues to re-prompt until user chooses to quit.
 * Sequence is output to one line with a space between each number and a \n
 * at the end of each line.
 *
 * Collatz sequence:
 *          Piecewise:
 *
 *              { 3n + 1    if  n is odd
 *      c(n) =  { n/2       if  n is even
 *
 * ******************************************************************************
 */


// ******************************************************************************
// **********       Preprocessing         ***************************************
// ******************************************************************************

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ws;
using std::vector;
using std::to_string;



// ******************************************************************************
// **********       Functions             ***************************************
// ******************************************************************************

// Clears vector since this is a loop based program
// Intakes user input and checks that it is at least 1, if so -> pushback
void getNumber(vector<int> & collatz) {
    int firstNumber = 0;
    collatz.clear();
    cout << "Enter a number to see it's collatz sequence: ";
    cin >> firstNumber;
    while (firstNumber < 1) {
        cout << "The start of the sequence must be at least 1. " << endl;
        cout << "Enter a different number to see it's collatz sequence: ";
        cin >> firstNumber;
    }
    collatz.push_back(firstNumber);
}

// Loop runs if last element is not a 1, if it is the sequence is complete
// Follows logic of the description at the top
// Pushes back the result onto the collatz vector
void processSequence(vector<int> & collatz){
    int temp = collatz.back();
    while (temp != 1) {
        if (temp % 2 == 1) {
            collatz.push_back(temp * 3 + 1);
        }
        else {
            collatz.push_back(temp / 2);
        }
        temp = collatz.back();
    }
}

// Appends a space followed by each element of the vector
// onto a string named output. Returns this string to main()
string printSequence(vector<int> & collatz) {
    string output = to_string(collatz.front());
    for (int i = 1; i < collatz.size(); i++) {
        output += " " + to_string(collatz[i]);
    }
    return output;
}

// When prompted, if user enters '1', the program will re-run
// any other output ends the program
bool RunAgain(){
    /* loop = temporary variable for user input to loop the program for additional
     * entry
     */
    string loop;

    cout << "Press '1' to enter another number or press any other key and "
            "ENTER to QUIT: ";

    // getline used to erase anything left in the stream from the last time through
    // the loop and then take new input from the user
    getline(cin >> ws, loop);
    if (loop == "1") {
        return true;
    }
    else {
        return false;
    }
    }



// ******************************************************************************
// **********       Main                  ***************************************
// ******************************************************************************

int main() {
    // Variables
        // Stores Collatz sequence
    vector<int> collatz;
        // While loop controller
    bool runAgain = true;

    // Program run loop
    while (runAgain) {
        getNumber(collatz);
        processSequence(collatz);
        // printSequence has return type of a string
        cout << printSequence(collatz) << endl;
        // Prompts user to enter another number or exit
        runAgain = RunAgain();
    }

    return 0;
}
