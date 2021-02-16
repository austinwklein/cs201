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



// ******************************************************************************
// **********       Functions             ***************************************
// ******************************************************************************

// Takes in variables used in computations
void inputVariables(float &a,float &b,float &c){
    cout << endl;
    cout << "Input a, b, and c separated by spaces and press ENTER: ";
    cin >> a >> b >> c;
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

    // Welcome
    cout << endl;
    cout << "Welcome to the Quadra-Solver 4000: the best quadratic formula calculator "
            "around! " << endl;

    // Program run loop
    while (runAgain) {
        // Variables for quadratic function
        inputVariables(a, b, c);
        // processRoots(a, b, c);
        // printResults(a, b, c);
        // loopProgram(loop);
        // Program run loop

        // Prompts user to enter another number or exit
        runAgain = RunAgain();
    }

    return 0;
}
