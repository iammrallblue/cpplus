#include "swap.h"

// define swap() function
void swap(int m, int n)
{
    int temp = m;
    m = n;
    n = temp;

    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
}