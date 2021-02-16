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



// ******************************************************************************
// **********       Functions             ***************************************
// ******************************************************************************

void getNumber(int & firstNumber, vector<int> & collatz) {
    collatz.clear();
    cout << "Enter a number to see it's collatz sequence: ";
    cin >> firstNumber;
    collatz.push_back(firstNumber);
}

//void processSequence();

//void printSequence();

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

void printVector(vector<int> &vectorName) {
    for (int i : vectorName) {
        cout << i << endl;
    }
}



// ******************************************************************************
// **********       Main                  ***************************************
// ******************************************************************************

int main() {

    // Variables
        // Number input to be processed by sequence
    int firstNumber = 0;
        // Stores Collatz sequence
    vector<int> collatz;
        // Collatz sequence
    string sequenceOut;
        // While loop controller
    bool runAgain = true;

    // Determines how many times program will run
        // Program happens entirely in this loop
    while (runAgain) {
        getNumber(firstNumber, collatz);
        printVector(collatz);
        runAgain = RunAgain();
    }

    return 0;
}
