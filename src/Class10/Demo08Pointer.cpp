#include <iostream>

using namespace std;

/*
    Pointer in C++:
        1. A variable for storing another variable's address in memory
        2.
        Key pointes:
            1. in x86 Architecture, all type pointers are occupied 4 bytes in memory
            2. in x64 Architecture, all type pointers are occupied 8 bytes in memory.
    Null Pointer:
        1. A null pointer has values the NULL, nullptr, and 0. and IT CANNOT accessible.
            until the pointer re-points to another address of a variable later.
            int * ptr = NULL, // ptr is a null pointer.
            *ptr = 100; // error, a null pointer is inaccessiable.

        2. It usually points to 0x00000000000000 (0) in memory for initial purpose.
        
    Wild Pointer:
        1. A pointer don't point to anything, which is a WILD POINTER
            int * p; /* wild pointer
            util p is pointed to a variable. 
                int a = 10;
                p = &a; // p is not a wild pointer anymore.

        2. Uninitialized pointers are known as WILD POINTERS
            because they point to some arbitrary memory location 
            and may cause a program to crash or behave badly.
            指針可以指向一個隨即地址在內存，指針可以申明，但是不可操作 
            int * w_ptr = (int *)0x0000; // statement is valid, but it's inoperable
        3. 
*/

int main(int argc, char const *argv[])
{
    // A pointer example
    double d = 23.33;
    double *d_ptr = &d; // d_ptr pointed to the address of variable d.
    cout << "the size of double *: " << sizeof(d_ptr) << endl; // 8 bytes.

    // A null pointer example
    int * ptr = nullptr;
    // *ptr is inoperable, it's pointed to null, 
    return 0;
} // main
