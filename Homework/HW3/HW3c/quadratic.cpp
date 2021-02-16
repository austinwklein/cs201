// Boilerplate ******************************************************************
/*
 * Austin Klein
 * CS 201
 * Feb/15/2021
 * HW 3
 * quadratic.cpp
 */

// Description:******************************************************************
/*
 * Create a program that solves the quadratic formula for a function in the
 * form of:
 *              Ax^2 + Bx + c = 0
 *
 * Solve for all real answers
 * If none are found give the user a message to confirm this
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
using std::ws;
using std::string;
using std::sqrt;



// ******************************************************************************
// **********       Functions             ***************************************
// ******************************************************************************

// Takes in variables used in computations
void inputVariables(float &a,float &b,float &c){
    cout << "Input a, b, and c separated by spaces and press ENTER: ";
    cin >> a >> b >> c;
}

// Logic function of program
void processRoots(float &a,float &b,float &c, float &xPlus, float &xMinus){
    xPlus = (-1 * b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    xMinus = (-1 * b - sqrt((b * b) - (4 * a * c))) / (2 * a);
}

void printResults(float &xPlus, float &xMinus) {
    // Get special case of 1 root out of the way first
    if (xPlus == xMinus) {
        if (std::to_string(xMinus) != "-nan(ind)") cout << "X = " << -1 * xMinus << endl;
    }
    else {
        // Check each root individually to see if they had a solution, if so, output
        if (std::to_string(xPlus) != "-nan(ind)") cout << "X = " << -1 * xPlus << endl;
        if (std::to_string(xMinus) != "-nan(ind)") cout << "X = " << -1 * xMinus << endl;

        // If both the + and - are not real numbers or cannot be found, output message
        if (std::to_string(xPlus) == "-nan(ind)" && std::to_string(xMinus) == "-nan(ind)") {
            cout << "There are no real roots for this function. " << endl;
        }
    }
}

// When prompted, if user enters '1', the program will re-run
// any other output ends the program
bool RunAgain(){
    /* loop = temporary variable for user input to loop the program for additional
     * entry
     */
    string loop;

    cout << "Press '1' to calculate another set of roots or press any other key and "
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

    /*\**********************
    ***    Variables     ****
    **********************\*/
    bool runAgain = true;
    // Quadratic variables
    float a = 0;
    float b = 0;
    float c = 0;
    // Roots
    float xPlus = 0;
    float xMinus = 0;

    // Welcome: placed outside the loop as it will only be run one time
    cout << endl;
    cout << "Welcome to the Quadra-Solver 4000: the best quadratic formula calculator "
            "around! " << endl;

    // Program run loop
    while (runAgain) {
        // Formatting and resetting roots to 0
        xPlus = 0;
        xMinus = 0;
        cout << endl;

        // Variables for quadratic function
        inputVariables(a, b, c);
        cout << endl;

        processRoots(a, b, c, xPlus, xMinus);
        cout << endl;

        printResults(xPlus, xMinus);
        cout << endl;

        // Prompts user to enter another number or exit
        runAgain = RunAgain();
    }

    return 0;
}
