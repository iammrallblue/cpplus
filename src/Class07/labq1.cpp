#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

/*
    exclusive.cpp: Let the user input an odd number of positive integers, space separated, 
    on a single line (as seen below). Assume that each integer except for one, 
    the exclusive integer, appears an even number of times in the input. 
    Your program should output the exclusive integer. 
    Hint: a particular bitwise operator may be helpful.

    2 1 55 3 2 1 4 4 2 2 55

*/
int main()
{
    cout << "Input a string of integers seprated by space: " << endl;
    // a string for storing input
    string str_line;

    // call the getline function to save input to variable str_line
    getline(cin, str_line);
    // cout << "str_line: " << str_line << endl;
    
    




    // separate the str_line one by one.
    // stringstream ss(str_line);

    return EXIT_SUCCESS;
} // main