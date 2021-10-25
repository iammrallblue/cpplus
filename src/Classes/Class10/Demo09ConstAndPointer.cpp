#include <iostream>

using namespace std;

/*
    const and Pointer in C++:

        Pointer to a const value: (cons int *ptr;)
            is a (non-const) pointer that points to a constant value.
            1. To declare a pointer to a const value, use the const keyword before the data type.
            2. A pointer can re-pointed to another const values(addresses).
            3. A pointer cannot modify the value in the current const value.

        const Pointers:
            is a const pointer that points to ONLY one constant value, (pointed is unchangable)
            1. A const pointer CANNOT re-point to others address.
            2. A const pointer can modify the value of its pointed address

        A const Pointer to a const value;
            is a const pointer that points to a constant value.
            1. Can not be set to point to another address, 
                nor can the value it is pointing to be changed through the pointer.


*/
int main(int argc, char const *argv[])
{
    int a = 11;
    // a const Pointer
    const int *ptr = &a; // ptr pointed to the address of variable a.

    // constant pointer cannot modify the value of the current pointed address
    // since variable a has value 11.
    // *ptr = 20; // error, because constant pointer cannot modify the value

    // constant pointer can re-point to another address
    int b = 12;

    // re-pointed ptr to variable b.
    ptr = &b;
    cout << "*ptr is: " << *ptr << endl;

    // const Pointer
    int *const c_ptr = &a; // c_ptr cannot point to others address
    // c_ptr = &b; // error, c_ptr is a const pointer

    // change the value of a by the const pointer
    *c_ptr = 999;

    cout << "a is: " << a << endl; // 999
    // or
    cout << "*c_ptr is: " << *c_ptr << endl; // 999

    // A const pointer to a const value
    int c = 0;
    const int * const cc_ptr = &c; // both pointer and address are not changable.

    // change value and point to another address
    // *cc_ptr = 1111; // error , const value
    // cc_ptr = &a; // error , const pointer
    return 0;
} // main
