// Boilerplate
/*
 * boxer.cpp
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

int main() {

    // Program behavior: closes program if user types anything other than 1
    int loop = 1;

    while (loop == 1){
        // Passed by reference for user input
        string word;
        int number;

        // The box can be split into 3 distinct sections from top to bottom.
        // The strings below will track those sections and will pass into
        // functions by reference.
        string secA;
        string secB;
        string secC;

        inputInfo(word, number);
        createBox(word, number, secA, secB, secC);
        printBox(secA, secB, secC);


        cout << "Press '1' to create a new box, or anything else to EXIT. ";
        cin >> loop;
        cout << endl;
    }





    return 0;
}
