#include <iostream>

using namespace std;

/*
    Pointer in C++:
        A POINT TYPE is a compound type representing the address of a memory location. 
        A pointer variable is a variable whose contents are of pointer type

        How to define and use pointer:

        Syntax:
            int * pointerName;
            pointerName = &variable; // 
            or
            int * pointerName = &variable;

        Key point:
            Pointer variables contain memory addresses as their values.

            1. &variable means the memory address of the variable.

            2. Addresses:
                1) Addresses in Memory:
                    computer memory is a sequence of bytes,
                    Each byte of memory has an address in hexadecimal format.

                2) Address of variable:
                    as known variable, different types of the variable: Boolean, 
                    character, integer, floating point, and class.

            3. Address (&) Operator
                to get address of variable by using address operator " & ".

            4. Indrection operator " * ".
                commonly referred to as the indirection operator or dereferencing operator

*/
int main()
{
    int x = 10;
    cout << "Memory Location of variable x: " << &x << endl; // 0x7ffee1b78208

    // define a pointer
    int *p = &x;
    // show the value of the pointer p
    cout << "Pointer p = " << p << endl; // 0x7ffeecb0f208, which mean pointer p got the variable x's memory address

    // change value of variable x by pointer *p
    *p = 2333;
    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;
    return 0;
}