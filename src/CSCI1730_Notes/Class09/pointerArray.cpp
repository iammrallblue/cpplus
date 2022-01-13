#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Example of Pointers and Arrays:

*/

int main()
{
    // an Array of numbers: size is 5
    int numbers[5];

    // create a pointer
    int *p;

    // assign the address of array to pointer
    p = numbers;
    p++;

    p = &numbers[2];
    p = numbers + 3;

    p = numbers;
    *(p + 4) = 50;
    
    for (int n = 0; n < 5; n++)
    {
        cout << numbers[n] << ", ";
    } // for
} // main