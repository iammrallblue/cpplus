#include <iostream>
#include <stdio.h>

using namespace std;
/**
 * C and C++ can coding together
 *
 */
int main(int argc, char const *argv[])
{
    // create an array
    int A[10] = {2, 4, 6, 8, 10, 12, 14};
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;

    // all elements are 0.
    int B[10] = {0};

    // enter array size  by user
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int C[n] = {}; // variable size array can not be initialized.
    C[0] = 2;

    // check size of Array A
    cout << sizeof(A) << endl; // 20, b/c 4*5

    // print out the value under index 1
    cout << A[1] << endl; // 15, 4

    printf("%d\n", A[2]); // 6, c-lang code.

    // print out the index which does not have element
    cout << A[7] << endl; // default value is 0

    // iterating an array B
    cout << "Array B: ";
    for (int i = 0; i < 10; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    // for each loop ***
    for (int x:A)
    {
        cout << x << " ";
    }
    cout << endl;
    
    for(int x:C)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;

} // main