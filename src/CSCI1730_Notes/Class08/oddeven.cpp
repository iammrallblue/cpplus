#include <iostream>
#include "oddeven.h"

using namespace std;

void odd(int x)
{
    if ((x % 2) != 0)
    {
        cout << "It is odd." << endl;
    }
    else
    {
        even(x);
    }
} // odd

void even(int x)
{
    if ((x % 2) == 0)
    {
        cout << "It is even." << endl;
    }
    else
    {
        odd(x);
    }
} // even