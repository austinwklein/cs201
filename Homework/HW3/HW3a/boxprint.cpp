// Boilerplate
/*
 * boxprint.cpp
 * Austin Klein
 * CS 201
 * Feb/11/2021
 * HW 3
 */

// Description:
/* Description from Blackboard
 */

#include <iostream>
#include "boxer.hpp"

using std::cout;
using std::cin;
using std::endl;

void inputInfo(string &word, int &number){
    cout << "Input a string: ";
    cin >> word;
    cout << "Input number of box perimeters desired: ";
    cin >> number;
    cout << endl;
}

// Each box has 3 repeating patterns.
// These are based on the input of the user.
// They will be labeled as sections (sec_) secA secB and secC
void createBox(string &word, int &number, string & a, string & b, string & c){
    a.append(word.size() + 2 + 2 * number,'*');
    string temp = a;
    if (number > 1) {
        for (int i = 1; i < number; i++) {
            a.append('\n' + temp);
        }
    }

    b.append(number, '*');
    b.append(word.size() + 2, ' ');
    b.append(number, '*');

    c.append(number, '*');
    c.append(' ' + word + ' ');
    c.append(number, '*');

}

void printBox(string & a, string & b, string & c){
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << b << endl;
    cout << a << endl;
}
