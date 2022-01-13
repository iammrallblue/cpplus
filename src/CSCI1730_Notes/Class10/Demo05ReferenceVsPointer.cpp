#include <iostream>

using namespace std;

/*
    Reference VS Pointer:
        1. Both can be used to change local variables of one function inside another function.
        2. Both can also be used to save copying of big objects
            when passed as arguments to functions or returned from functions, to get efficiency gain.

        Key points:
            1. Pointer can be declared as void type
                but a reference can never be void For example
                int a = 10;
                void *a_ptr = &a; // valid
                void &a_ref = a; // invalid
            2. The pointer variable has n-levels/multiple levels of indirection
                i.e. single-pointer, double-pointer, triple-pointer.
                Whereas, the reference variable has only one/single level of indirection.
            3. Reference variable cannot be updated.
            4. Reference variable is an internal pointer.
            5. Declaration of Reference variable is preceded with ‘&’ symbol
                ( but do not read it as “address of”).


*/
int main(int argc, char const *argv[])
{
    int x = 10;
    int *x_ptr = &x;        // single pointer, &x, the address of x.
    int **p_ptr = &x_ptr;   // double pointer, &x_ptr, the address of pointer x_ptr
    int ***p2_ptr = &p_ptr; // triple pointer, &p_ptr, the address of pointer p_ptr

    // All pointers are different in the value they stored or pointed to.
    cout << "x= " << x << "\t"
         << "x_ptr= " << x_ptr << endl;
    cout << "p_ptr= " << p_ptr << "\t"
         << "p2_ptr= " << p2_ptr << endl;

    cout << "the size of *x_ptr: " << sizeof(*x_ptr) << endl;       // 4 bytes
    cout << "the size of pointer x_ptr: " << sizeof(x_ptr) << endl; // 8 bytes.

    int y = 9;
    int &ref = y;
    int &ref_1 = ref;
    int &ref_2 = ref_1;

    // All References are some in their values, b/c they all refer to the same variable
    cout << "y= " << y << "\t" // 9
         << "Reference ref= " << ref << endl; // 9
    cout << "Reference ref_1= " << ref_1 << "\t" // 9
         << "Reference ref_2= " << ref_2 << endl; // 9

    cout << "Reference &ref= " << &ref << endl; // 0x7ffee2ce01ac
    cout << "Reference &ref_1= " << &ref_1 << endl; // 0x7ffee2ce01ac

    return 0;
} // main
