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

    int loop = 1;

    while (loop == 1){
        string word;
        int number;

        inputInfo(word, number);
        createBox(word, number);

        cout << "Press '1' to create a new box, or anything else to EXIT. ";
        cin >> loop;
        cout << endl;
    }





    return 0;
}
