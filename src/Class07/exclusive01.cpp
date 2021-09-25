#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "Input a string of integers seprated by space: " << endl;

    // a string for storing input
    string str_line;

    // call the getline function to save the input to variable str_line
    getline(cin, str_line);
    // cout << "str_line: " << str_line << endl;

    int number = 0, temp;

    istringstream ss(str_line);
    // iterate elements from the string str_line by eachfor
    while (ss >> temp)
    {
        number ^= temp;
    }
    cout << "The exclusive number is: " << number << endl;

} // main
