// Boilerplate
/*
 * Austin Klein
 * CS 201
 * Mar/02/2021
 * HW 4 Main
 * tokenizer.hpp
 */

// Description:******************************************************************
/*
 * See description from tokenizer.cpp
 *
 * ******************************************************************************
 */

#ifndef HOMEWORK_TOKENIZER_HPP
#define HOMEWORK_TOKENIZER_HPP

// ******************************************************************************
// **********       Preprocessing         ***************************************
// ******************************************************************************

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;

// ******************************************************************************
// **********       Functions             ***************************************
// ******************************************************************************

bool RunAgain(vector<string> &token);

bool ReadLine(std::string& str);

#endif //HOMEWORK_TOKENIZER_HPP
