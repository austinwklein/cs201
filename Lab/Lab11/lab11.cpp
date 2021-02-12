// Boilerplate
/*
 * lab11.cpp
 * Austin Klein
 * CS 201
 * Feb/12/2021
 * Lab 11
 * Characters in a string
 */

// Description:
/* Write a program that repeatedly inputs a word from the user and then
 * prints the characters in the word that are lower-case letters, in
 * the order in which they appear in the word.
 *
 * A = D 65
 * Z = D 90
 * a = D 97
 * z = D 122
 *
 * Here, a  word is any sequence of non-space characters.
 * For example, “ 3rq%d$EzZ@[x” counts as a word.
 * If the above word is entered by the user, then the program should
 * output the following.
 *
 *      rqdzx
 *
 * Can you make use of auto in your program?
 * Possibly not. The use of the  auto keyword that we covered was introduced
 * into C++ in the 2011 Standard, while your compiler may be configured to use
 * an older standard. We will cover this issue in a forthcoming assignment.
 * For now, give  auto a try, and see if your compiler will accept it.
 *
 * Expand your program so that it prints the lower-case letters, as in part 1,
 * followed by the upper-case letters, on a separate line, followed by all
 * other characters, on a third line.
 *
 * If the word from part 1 is entered by the user, then the program should
 * output the following.
 *
 *      rqdzx
 *      EZ
 *      3%$@[
 */

#include <iostream>
#include "lab11.hpp"

using std::cout;
using std::cin;
using std::endl;

int main() {

    /*cout << int(char(122)) << endl;
    cout << char(int('z')) << endl;*/

    // A
    cout << char(65) << endl;

    // Z
    cout << char(90) << endl;

    // a
    cout << char(97) << endl;

    // z
    cout << char(122) << endl;

    return 0;
}
