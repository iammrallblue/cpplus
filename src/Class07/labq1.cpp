#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>

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

    // call the getline function to save the input to variable str_line
    getline(cin, str_line);
    // cout << "str_line: " << str_line << endl;

    int number = 0;
    char temp;

    istringstream ss(str_line);
    // iterate elements from the string str_line by eachfor
    while (ss >> temp)
    {
        number ^= (temp - '0');
    }
    cout << "The exclusive number is: " << number << endl;

} // main

// version 2
// int main()
// {
//     cout << "Input a string of integers seprated by space: " << endl;

//     // a string for storing input
//     string str_line;

//     // call the getline function to save the input to variable str_line
//     getline(cin, str_line);
//     // cout << "str_line: " << str_line << endl;

//     int number = 0;

//     // iterate elements from the string str_line by eachfor
//     for (auto &x : str_line)
//     {
//         // check all elements by xor operator
//         number ^= ((int)x - 48);
//     } // for

//     cout << "The exclusive number is: " << number << endl;
//     ;

//     return EXIT_SUCCESS;
// } // main
