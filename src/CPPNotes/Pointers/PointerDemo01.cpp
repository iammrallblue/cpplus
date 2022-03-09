#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    int a = 10;

    // a pointer
    int *p;
    p = &a;

    cout << a; // 10

    cout << "address in p: " << p << endl; // print address, p is an addrbess variable
    cout << "address of a: " << &a << endl; // print address, same as p

    printf("using pointer %d", *p); // 10, a's value
*/

    /**
     * @brief A pointer points to an Array
     *
     *
     */
    /*
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    p = A; // p = A[0], wrong p = &A, or &A[0];

    for (int i = 0; i < 5; i++)
    {

        // cout << A[i] << " ";
        cout << p[i] << " ";
    }
    */

    /**
     * @brief In C lang and C++
     * creating an array in heap area by malloc function
     * creating an array in heap area by new operator
     * 
     */
    /*
    int *p;
    // create a size in heap memory
    // p = (int *)malloc(5 * sizeof(int));
    p = new int[5];
    p[0] = 10;
    p[1] = 15;
    p[2] = 14;
    p[3] = 21;
    p[4] = 31;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    
    // free/release the allocated memory
    delete []p; // delete p;

    // In Clang
    // free(p);
    */
   
    return 0;

} // main
