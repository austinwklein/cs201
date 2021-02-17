// Boilerplate ******************************************************************
/* Austin Klein
 * CS 201
 * Feb/[DAY]/2021
 * Lab [LAB NUMBER]
 * [ASSIGNMENT FILE NAME]
 * */

// Description:******************************************************************
/*
 * [DESCRIPTION FROM BLACKBOARD]
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

// When prompted, if user enters '1', the program will re-run
// any other output ends the program
bool RunAgain(){
    /* loop = temporary variable for user input to loop the program for additional
     * entry
     */
    string loop;

    cout << "Press '1' to [WHATEVER PROGRAM DOES] or press any other key and "
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


    // Message outside the loop that executes once
    cout << endl;
    cout << "Welcome! " << endl;

    // Program run loop
    while (runAgain) {

        // Prompts user to enter another number or exit
        runAgain = RunAgain();
    }

    return 0;
}
