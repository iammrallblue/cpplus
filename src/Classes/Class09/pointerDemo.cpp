#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Pointer Example 1:
        assign values to variables by pointer.
*/
int main()
{
    // assign values to variable by a pointer
    int first_val, second_val;
    int *my_ptr; 

    my_ptr = &first_val;
    *my_ptr = 10;

    my_ptr = &second_val;
    *my_ptr = 20;
    cout << "first value is: " << first_val << endl;   //10
    cout << "second value is: " << second_val << endl; //20

    // ONLY assign value to x variable, y has no value.
    int x, y;
    int *ptr_1;
    ptr_1 = &x;
    *ptr_1 = 10;
    *ptr_1 = 20;
    cout << "the value of x is: " << x << endl; // 20
    cout << "the value of y is: " << y << endl; // 0

    //
    int m = 5, n = 15;
    int *ptr_2, *ptr_3;

    // these steps are like binding the addesses
    // of m and n to pointer 2, and pointer3
    ptr_2 = &m; // ptr_2 = the address of variable m
    ptr_3 = &n; // ptr_3 = the address of variable n

    // assgin value to m by pointer
    *ptr_2 = 10; // value pointed to by ptr_2 = 10;

    // assign pointer 2 to pointer 3
    *ptr_3 = *ptr_2;                         // value pointed to by ptr_3 = value pointed by ptr_2,
    cout << "*ptr_3 is: " << *ptr_3 << endl; // *ptr_3 is 10

    //
    ptr_2 = ptr_3; // ptr_2 = ptr_3 (value of pointer is copied) the address of variable.
    cout << "ptr_2 is: " << ptr_2 << endl;

    *ptr_2 = 20; // value pointed by ptr_2 = 20;

    cout << "m is: " << m << endl; // 10
    cout << "n is: " << n << endl; // 20

    //
    int a = 5, b = 15;
    int *ptr_a, *ptr_b;

} // main