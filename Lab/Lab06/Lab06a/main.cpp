// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 2/01/2021
 * Lab 6a
 * LAB TOPIC
 */

// Description:
/* Write a function that takes a string parameter. The function should print the string and its
 * length in some neat, understandable manner. Make your function part of a program that calls
 * the function with various strings of different lengths.
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void InputString(string &input){
    cout << "Input your favorite word: ";
    cin >> input;
    cout << endl;
}

int main() {
    string input;
    InputString(input);
    cout << "You printed: " << input << endl;
    cout << "Your word contains " << input.size() << " characters." << endl;
    return 0;
}
