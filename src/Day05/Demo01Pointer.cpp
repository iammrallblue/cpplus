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
            int * pointerName = &variable; &variable is the address of the variable.

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
    cout << "The value of variable x: " << x << endl;

    // define a pointer
    int *p = &x; // &x is the address of the variable x, usually &x will assgin to a pointer.
    
    // show the value of the pointer p
    cout << "Pointer p = " << p << endl; // 0x7ffeecb0f208, which mean pointer p got the variable x's memory address

    // Indirection (Dereference) change value of variable x by pointer *p
    *p = 2333;
    cout << "Changing value of variable x by *p (dereference), x = " << x << endl;   // value of variable x
    cout << "*p = " << *p << endl; // value of variable x
    cout << "p = " << p << endl;   // the address of variable x.

    int n =1;
    int &m = n;  //Declare an int type reference name m, which is an alias of variable n

    cout << "n= " << n << endl; // print out the values of int variable n
    cout << "&m= " << &m << endl; // print out the address of int variable n

    // declare an Array
    int a[3];
    int *xx = a;
    int *yy = xx + 2;
    cout << "xx= " << xx << endl;
    cout << "yy= " << yy << endl;
    cout << "*xx= " << *xx << endl;

    // Dynamic allocation of pointers-dynamic allocation of arrays
    int *pnt = new int[3];
    
    return 0;
}