// Boilerplate
/*
 * Austin Klein
 * CS 201
 * Mar/02/2021
 * HW 4 Main
 * tokenizertest.cpp
 */

// Description:******************************************************************
/*
 * See description from tokenizer.cpp
 *
 * ******************************************************************************
 */



// ******************************************************************************
// **********       Preprocessing         ***************************************
// ******************************************************************************

#include <iostream>
#include <string>
#include "tokenizer.hpp"


using std::cout;
using std::cin;
using std::endl;
using std::ws;
using std::string;
using std::sqrt;



// ******************************************************************************
// **********       Functions             ***************************************
// ******************************************************************************

// When prompted, if user enters anything other than the end strings, the program
// will re-run

bool RunAgain(){
    /* loop = temporary variable for user input to loop the program for additional
     * entry
     */
    string loop;

    cout << R"(Type anything and press ENTER to run the tokenizer again or type "end", "End", or "END" to QUIT: )";

    // getline used to erase anything left in the stream from the last time through
    // the loop and then take new input from the user
    getline(cin >> ws, loop);
    if (loop != "End" && loop != "end" && loop != "END") {
        return true;
    }
    else {
        return false;
    }
}
