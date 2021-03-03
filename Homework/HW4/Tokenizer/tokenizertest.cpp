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

#include "tokenizer.hpp"

using std::ws;



// ******************************************************************************
// **********       Functions             ***************************************
// ******************************************************************************

// When prompted, if user enters anything other than the end strings, the program
// will re-run

bool RunAgain(vector<string> &token){
    // getline(cin >> ws, loop);
    if (token.back() != "End" && token.back() != "end" && token.back() != "END") {
        return true;
    }
    else {
        return false;
    }
}
