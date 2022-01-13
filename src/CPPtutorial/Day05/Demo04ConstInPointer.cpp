#include <iostream>

using namespace std;

/*
    Using Constant Modifiers:
        Key point:
            1. int * is the pointer
            2. p is the pointer variable
            3. &x, read as the address of x.
            4. *p, 

        const in pointer:
            1. Constant Pointer: (常量指針)
                int x = 10;
                int y = 40;
                const int *p = &x;
                Error: *p = 20;
                Correct: p = &y;
                    or int *p = &y;
            2. Pointer Constant: (指針常量)
                int x = 10;
                int y = 40;
                int * const p = &x;
                Correct: *p = 20;
                Error: p = &y;
            3. 
                const int * const p = &x;  
                Error: *p = 20;
                Error: p = &y;
*/

int main()
{
    // Constant Pointer, const modifies pointer (int *)
    int x = 10;
    int y = 40;
    const int *p = &x; // const modifies, int *p, so *p is a constant pointer
    // *p = 20; // Error, the value of variable p can be changed by *p
    p = &y; // Correct, pointer can re-pointing to another address of variable.

    // Pointer Constant, const modifies pointer variable ( i )
    int *const i = &x;
    *i = 20;
    // i = &y;
    // Error, constant pointer i cannot pointing to another address of variable.

    // Pointer Constant
    // const modifies both pointer (int *) and pointer variable ( p )
    const int * const j = &x;
    // *j = 30; // Error, const modified, can't change
    // j = &y; // Error,  const modified, can't change
     return 0;
}