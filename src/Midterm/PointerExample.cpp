#include <iostream>

using namespace std;

/*
    Pointer:
        Syntax:
            Datatype * Pointer variable;
                 int * int_ptr;
        Key points:
            1. (int* ptr),(int *ptr),and(int * ptr) are the same, but (int * ptr) is recommand
            2. Note that the * sign can be confusing here, as it does two different things in our code:
                a) When used in declaration (string* ptr), it creates a pointer variable.
                b) When not used in declaration, it act as a dereference operator.
*/
int main(int argc, char const *argv[])
{
    int var = 100;
    int *int_ptr;
    int_ptr = &var; // &var is the address of variable var in memory
    // Read as: pointer int_ptr is pointed to the address of the variable "&var".
    // Read as: Assign the address value of the variable to pointer variable "int_ptr"

    // dereferece
    *int_ptr = 200;
    cout << "*int_ptr is: " << *int_ptr << endl; // *int_ptr has the value of the variable
    cout << "the value of var is: " << var << endl; // the value of var is changed by the dereferencing 
    cout << "int_ptr is: " << int_ptr << endl;
    return 0;
} // main
