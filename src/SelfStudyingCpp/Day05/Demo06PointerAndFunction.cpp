#include <iostream>
using namespace std;

/*
    Pointer and Function:
        using pointer as parameters.

*/

// passing variables as parameters
void swapNumbers(int x, int y)
{
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "after swap, x is: " << x << endl;
    cout << "after swap, y is: " << y << endl;
}

// passing pointers (the address of variable) as parameters
void swapNumbers(int *ptr1, int *ptr2)
{
    cout << "*ptr1 is: " << *ptr1 << endl;
    cout << "*ptr2 is: " << *ptr2 << endl;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "after swap, *ptr1 is: " << *ptr1 << endl;
    cout << "after swap, *ptr2 is: " << *ptr2 << endl;
}
int main()
{
    // call swapNumbers() function
    int i = 10;
    int j = 20;
    swapNumbers(i, j);

    // call swapNumbers() function
    int m = 99;
    int n = 233;
    int *mm = &m;
    int *nn = &n;
    swapNumbers(&m, &n);

    return 0;
}