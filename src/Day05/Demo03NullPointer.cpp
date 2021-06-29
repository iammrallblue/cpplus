#include <iostream>

using namespace std;

/*
    Null Pointer in C++:
        1. The NULL pointer is a constant with a value of zero defined 
            in several standard libraries, including iostream
        2. the value specified for a null pointer was 0 or NULL.
        3. A pointer to nowhere (sometimes called a null pointer) 
            is a pointer that points to no memory location. or 
        4. When a pointer is not null, its value can be interpreted as true; 
            when it is null, its value can be interpreted as false. 
        Key point:
            Why having Null Pointer?
                to initialize POINTER VARIABLE.
                    int *i= 0 or NULL;
                    double *d = 0 or NUll;
            Null Pointer pointing to memory location which can be accessible.
                b/c, 099 ~ 255 in Memory is occupied by OPERATING SYSTEM. so it CANNOT be accessible.

            Memory location for Null Pointer and Wild Pointer are assigned by SYSTEM, 
            therefore, we can access them, it will show errors.
*/
int main()
{
    // Null Pointer is for initializing pointer variable
    int *i = NULL; // o or NULL

    // Null Pointer can't be accessible.
    // cout << "Null Pointer *i: " << *i << endl; // Error. null pointer is unaccessiable.

    // wild pointer (野指針)
    // int *ii = (int *)0x1100; // hexa casted to (int *) pointer type. ERROR.
    // should have void wild pointer in any c++ code.
    return 0;
}