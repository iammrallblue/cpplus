#include <iostream>

using namespace std;

/*
    Pointer and Function:
        1. Pass by value as parameters
            (see swap() function)
            *** pass by value wont change the variables outside the function
        2. Pass by pointer as parameters
            (see swap_2() function)
            *** pass by pointer will change the variables outside the function
*/          

// a function switch two values of variables by passing values
void swap(int a, int b)
{
    cout << "Parameters are passed by values." << endl;
    // a and b swapped the values of x and y
    int temp = a;
    a = b;
    b = temp;
    cout << "a in side of swap function: " << a << endl;
    cout << "b in side of swap function: " << b << endl;
} // swap

// a function switch two values of variable by passing pointers
// define two parameters a and b as pointers. MUST be the addresses pass in
void swap_2(int *a, int *b)
{
    cout << "Parameters are passed by pointers." << endl;
    // swap the values which pass in by the addresses.
    // *a and *b are the values in the addresses in memory
    int temp = *a;
    *a = *b;
    *b = temp;

} // swap_2 
int main(int argc, char const *argv[])
{
    int x = 10;
    int y = 666;

    // call swap function
    swap(x, y); //

    // call swap_2 function
    swap_2(&x, &y); // passing the addresses of x and y to pointers.

    cout << "x and y are changed in main function?" << endl;
    cout << "x= " << x << endl; // x = 
    cout << "y= " << y << endl; // y = 

    // cout << "x and y are changed in main function?" << endl;
    // cout << "x= " << x << endl; // x = 10
    // cout << "y= " << y << endl; // y = 666,
    // // x and y did not change by passing values

    return 0;
} // main
