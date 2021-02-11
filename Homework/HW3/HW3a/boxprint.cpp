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
#include <ostream>
#include <limits>
#include "boxer.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::streamsize;
using std::numeric_limits;
using std::flush;
using std::to_string;
using std::ws;

void inputInfo(string &word, int &number){
    cout << "Input a string: ";
    getline(cin >> ws,word);
    cout << "Input number of box perimeters desired: ";
    cin>>number;
    cout << endl;

    if (number < 1) {
        // Nesting while loop because the only time it needs to
        // be used is if the number is less than one
        while (number < 1){
            cout << "You must have a minimum of one border. " << endl;
            cout << "Please try again. " << endl;
            cin >> number;
        }
    }
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
