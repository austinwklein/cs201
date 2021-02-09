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
 * For option 3, when you enter a name, the program should output the corresponding score, or name not found.
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

        if (names.empty()) {
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

void SearchNames(vector<string> &names, vector<int> &scores) {
    cout << "Type a name and press ENTER to search: ";
    string name;
    cin >> name;

    // Formatting
    cout << endl;

    // Automate the keyword search to run a search through the names vector searching for the name
    auto search = find(names.begin(), names.end(), name);
    // If the search comes back with results the index of that name will be applied to the
    // scores vector to give the corresponding score to the user
    if (search != names.end()){
        int index = search - names.begin();
        cout << name << " has a score of " << scores[index] << endl;
    }
    else {
        cout << name << " was not found" << endl;
    }

}

void SearchScores(vector<string> &names, vector<int> &scores) {
    cout << "Type a score and press ENTER to find the players at that score: ";
    int score;
    cin >> score;

    // Formatting
    cout << endl;

    // Vector to keep track of indices of matching scores
    vector<int> index;

    // Creates a new temp vector with all the indices of the scores that match
    for (int i = 0; i < names.size(); i++) {
        if (scores[i] == score) {
            index.push_back(i);
        }
        else {

        }
    }

    // If index vector has anything in it, names will be outputted to the console.
    // If it is empty sizeof will return 0 triggering cout No player found
    if (!index.empty()) {
        cout << "The following players have the score of " << score << endl;
        for (int i = 0; i < index.size(); i++) {
            cout << names[index[i]] << endl;
        }
    }
    else {
        cout << "No players were found with a score of " << score << endl;
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

    // Function for printing out the two vectors for the user
    PrintScores(names, scores);


    // Formatting
    cout << endl;

    cout << "Enter a number to continue or press enter to quit. " << endl;
    cout << "       1.  Add names and scores" << endl;
    cout << "       2.  Print names and scores" << endl;
    cout << "       3.  Search for a name" << endl;
    cout << "       4.  Search for a score" << endl;

    int user = 0;
    cin >> user;

    while (user != 0) {
        switch (user) {
            case 1:
                InputPairs(names, scores);
                break;
            case 2:
                PrintScores(names, scores);
                break;
            case 3:
                SearchNames(names, scores);
                break;
            case 4:
                SearchScores(names, scores);
                break;
            default:
                break;
        }
        cout << endl;

        cout << "Enter a number to continue or press enter to quit. " << endl;
        cout << "       1.  Add names and scores" << endl;
        cout << "       2.  Print names and scores" << endl;
        cout << "       3.  Search for a name" << endl;
        cout << "       4.  Search for a score" << endl;

        cout << endl;
        cin >> user;
    }






    return 0;
}

