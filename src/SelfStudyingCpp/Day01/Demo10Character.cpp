#include <iostream>

using namespace std;

/*
    Character Types
        1. The char data type is used to store a single character. 

        2. The character must be surrounded by single quotes, like 'A' or 'c':
        
        ** Typically a single octet (one byte). This is an integer type.
    Syntax:
        char ch = 'a';
        char ch = "a"; // Error

        char16_t ch16 = 
              
*/

int main()
{
    // char type
    char ch = 'A';

    cout << "Size of char: " << sizeof(ch) << endl; // size is 1.

    char char_var = 65;

    // ASCII code 65 is A
    cout << "char_var is: " << char_var << endl; // 65 is A.

    // convert a char to ASCII code
    char charVar = ',';
    cout << "the ASCII code of a comma is: " << (int)charVar << endl;

    char ch_x = 'a';
    cout << "a= " << (int)ch_x << endl; // 97

    char ch_y = 'A';
    cout << "A= " << (int)ch_y << endl; // 65

    char ch_z = '1';
    cout << "1= " << (int)ch_z << endl; // 49
    return 0;
}