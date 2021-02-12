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

using std::cout;
using std::cin;
using std::endl;
using std::string;



// ******************************************************************************
// **********       Functions             ***************************************
// ******************************************************************************

//void getNumber();

//void processSequence();

//void printSequence();



// ******************************************************************************
// **********       Main                  ***************************************
// ******************************************************************************

int main() {

    // Variables
    int firstNumber = 0;
    string sequenceOut;
    bool runAgain = true;

    while (runAgain) {
        cout << "Press '1' to enter another number or press any other key and "
                "ENTER to QUIT: ";
        cin >> runAgain;
    }

    return 0;
}
