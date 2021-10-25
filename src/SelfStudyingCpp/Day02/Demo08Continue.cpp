#include <iostream>

using namespace std;

/*
    C++ Continue
        The continue statement breaks one iteration (in the loop), 
        if a specified condition occurs, and continues with the next iteration in the loop.
    
    Continue in for loop example:
        to skip all even numbers from 0 to 100; i % 2 == 0
        to skip all odd numbers from 0 to 100; i % 2 != 0
*/
int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << "  ";
    }
    return 0;
}