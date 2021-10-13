#include <iostream>
using namespace std;

/*
    sizeof() function:
        1. It is a compile-time operator that determines the size, in bytes, of a variable or data type.

        2. The sizeof operator can be used to get the size of classes, 
            structures, unions and any other user defined data type.

        sizeof() also accepts defined variable. (see variable int_var)
        Syntax:
            sizeof (data type)
            sizeof (variable)
*/

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;           // 1 byte
    cout << "Size of int : " << sizeof(int) << endl;             // 4 bytes
    cout << "Size of short int : " << sizeof(short int) << endl; // 2 bytes
    cout << "Size of long int : " << sizeof(long int) << endl;   // 8 bytes
    cout << "Size of float : " << sizeof(float) << endl;         // 4 bytes
    cout << "Size of double : " << sizeof(double) << endl;       // 8 bytes
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;     // 4 bytes

    int int_var = 100;
    cout << "Size of int_var: " << sizeof(int_var) << endl; // 4 bytes, an int variable

    return 0;
}