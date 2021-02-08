// Boilerplate
/*
 * Austin Klein
 * CS 201
 * 2/3/2021
 * HW 2c
 * scores.cpp
 */

// Design
/* Write a C++ program that prompts the user to enter a set of name-and-value pairs, such as Joe 17 and Barbara 22.
 * For each pair, add the name to a vector called names and the number to a vector called scores
 * ( in corresponding positions) Terminate input with 'NoName, 0'.
 *
 * Check that each name is unique and terminate with an error message if a name is entered twice.
 * Write out all the (name, score) pairs, one on each line.
 *
 * Next, display a prompt asking the user whether they want to
     * 1) add names and scores,
     * 2) print the names and scores,
     * 3) search for a name, or
     * 4) search for a score.
 * For option 1, use the code you wrote to add names until the input 'NoName, 0' is entered.
 * For option 2, print the list of names and scores, one per line.
 * For option 3, when you enter a name, the program should output the corresponding score, of name not found.
 * For option 4 when you enter an integer, the program will output all the names with that score, or score not found.
 */

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::vector;
using std:: find;


void InputPairs(vector<string> &names, vector<int> &scores) {
    string name;
    int score = 0;
    cout << "Input players name and score separated by a single space: ";
    cin >> name >> score;
    //cout << name << " " << score;
    while (!(name == "NoName" && score == 0)) {

        if (names.size() == 0) {
            names.push_back(name);
            scores.push_back(score);
        }
        else {
            if (find(names.begin(), names.end(), name) != names.end()) {
                cout << "They are already in the list" << endl;
            }
            else {
                names.push_back(name);
                scores.push_back(score);
            }
        }

        cout << "Please enter another name and score separated "
                "by a space or type 'NoName 0' if all names are added: ";
        cin >> name >> score;
    }
}


void PrintScores(vector<string> &names, vector<int> &scores) {
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " has a score of " << scores[i] << endl;
    }
}

int main() {
    // Initialize vectors to store names and scores at the same indices
    vector<string> names;
    vector<int> scores;

    // Function created to read in user input
    InputPairs(names, scores);

    // Formatting
    cout << endl;

    PrintScores(names, scores);





    return 0;
}

