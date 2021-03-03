// Boilerplate
/*
 * Austin Klein
 * CS 201
 * Mar/02/2021
 * HW 4 Main
 * tokenizer.cpp
 */

// Description:******************************************************************
/*
 * A token is used in lexical analysis, that is when we want to interpret small
 * pieces of a string. For example "hello 5 world" has three tokens, a string, a
 * number, and a string. The C runtime library contains
 *      char* strtok(char* str, const char *delim)
 * which allows us to take a string and divide it into smaller tokens that are
 * delimited by certain kinds of characters. We would like to reproduce this
 * functionality in C++, but using std::string and std::vector.
 *
 * Write a C++ program, with code in three files, that repeatedly does the
 * following
 *
 * 1.   Implement bool ReadLine(std::getline() to get a line of text from the
 * user. It should return thue if it read the string and false if the string was
 * a blank line.
 * 2.   Implement unsigned StringToTokensWS(const
 *          std::string &input, std::vector<std::string>? &token);
 * which uses std::istringstream to read strings separated by whitespace
 * characters. Push a blank string at the end of each line. It should return the
 * number of tokens read from the string.
 * 3.   Implement void AnalyzeTokens(const std::vector<std::string> &tokens_;
 * and try to determine if the token is
 *          a.  an integer literal (all the characters are numbers)
 *          b.  an identifier literal (starts with a letter of underscore character
 *                  and followed by A-Z, a-z, 0-9, or _)
 *          c.  a string literal (starts and ends with a double quote)
 *          d.  a whitespace literal (a blank string)
 *          e.  an unknown (undetermined from the input)
 *          f.  If you would like, handle the case of special characters
 *                  ('+','-','*','/','=','%',)
 * 4.   AnalyzeTokens should print out the type of token and the token itself
 * surrounded by quotation marks.
 * 5.   If the user enters "end" or "End" or "END" the program should stop
 * inputting any more data. Then the program should do the analysis on the
 * characters.
 *
 * Example:
 *      Please type in some text. When you are done, type "End", "end" or "END":
 *      Program helloworld
 *      Begin
 *          Print ""Hello"
 *          I = 3 + 5
 *      End
 *
 * Then the program should output
 *      [identifier]        "Program"
 *      [identifier]        "helloworld"
 *      [whitespace]        ""
 *      [identifier]        "Begin"
 *      [whitespace]        ""
 *      [identifier]        "Print"
 *      [string]            "\"Hello\""
 *      [whitespace]        ""
 *      [identifier]        "I"
 *      [other]             "="
 *      [integer]           "3"
 *      [other]             "+"
 *      [integer]           "5"
 *      [whitespace]        ""
 *      [identifier]        "End"
 * ******************************************************************************
 */



// ******************************************************************************
// **********       Preprocessing         ***************************************
// ******************************************************************************

#include "tokenizer.hpp"

using std::ws;


// ******************************************************************************
// **********       Main                  ***************************************
// ******************************************************************************

int main() {

    /*\**********************
    ***    Variables     ****
    **********************\*/
    bool runAgain = true;
    // Stores tokens
    vector<string> tokens;
    string word;


    // Message outside the loop that executes once
    cout << endl;
    cout << R"(Please type in some text. When you are done, type "End", "end" or "END": )" << endl;

    // Program run loop
    while (runAgain) {
        getline(cin >> ws, word);
        tokens.push_back(word);
        // checks if the last thing entered to the tokens vector is an end command
        runAgain = RunAgain(tokens);
    }

    return 0;
}
