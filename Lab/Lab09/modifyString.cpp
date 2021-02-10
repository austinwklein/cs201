// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 02/8/2021
 * Lab 9
 * Passing by reference
 */

// Description:
/*
 * PURPOSE
 *
 * In this lab, you will write a function that sends information back to its caller using both a return value and a parameter passed by reference.
 * What to Do
 * Do as many of the following steps as you can. When you complete step 1, get it checked off.
 *
 * REQUIRED
 * Write source and header files named modifyString.hpp and
     *  modifyString.cpp containing a function that takes an int parameter
     *  by value and a string parameter by reference. The function should return an int.
     *  So the prototype would look something like the following.
 *
 * Append an integer to a string
 * @param referencedString (string to append integer to)
 * @param n (append (n % 10) to referencedString)
 * @return (New length of referencedString)
 *
 * int modifyString(std::string & referencedString, int n);
 * Write the function to match the function comments in the header
     *  file so that you send data back to its caller via  both the return
     *  value and the referenced  string.  You will probably need the
     *  std::to_string() function from the   library to do this.
     *  You should "wire up" your program with "function stubs" to ensure
     *  your program compiles before trying to tackle the logic of your program.
 *
 * After calling modifyString once:
 * int stringInMain = "Hello";
 * std::cout << "length: " << modifyString(stringInMain, 0) << std::endl;
 * std::cout << "stringInMain: " << stringInMain << std::endl;
 * Output:
 * length: 6
 * stringInMain: Hello0
     *  Your  main function in  modifyStringMai n.cpp should call the above
     *  function  at least three times, passing a different number each
     *  time, and print the information it receives each time.
 *  What your program does, and what the function and its parameters are called,
     *  is entirely up to you.
 *
 *  ADDITIONAL
 *      Rewrite your program from step 1 so that the function returns a string,
 *      and an int is passed by reference.
 */

#include "modifyString.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

int main() {

    string stringInMain = "Good-evening";
    int x = 0;

    x = modifyString(stringInMain, x);
    printOut(stringInMain, x);

    stringInMain = "Hello";
    x = 4;

    x = modifyString(stringInMain, x);
    printOut(stringInMain, x);

    stringInMain = "Good day";
    x = 300;

    x = modifyString(stringInMain, x);
    printOut(stringInMain, x);

    return 0;
}
