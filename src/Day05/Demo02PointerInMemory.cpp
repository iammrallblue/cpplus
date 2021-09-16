#include <iostream>

using namespace std;

/*
    Pointer in Memory (RAM):
        Key point:
            1. Pointer is one kind of data types.
            2. pointer in x86 architecture, a pointer occupies 4 bytes,
                but in x64 architecture, a pointer occupies 8 bytes.
*/

int main()
{
    // declare a variable
    int x = 10;

    // assign variable x's address to pointer p
    int *p = &x;

    // x86 x64 have different memory space.
    cout << "size of (int *): " << sizeof(int *) << endl; // 8
    cout << "size of pointer *p: " << sizeof(*p) << endl; // 4
    cout << "size of (double *): " << sizeof(double *) << endl; // 8
    return 0;
}