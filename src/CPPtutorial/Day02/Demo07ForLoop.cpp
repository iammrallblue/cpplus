#include <iostream>

using namespace std;

/*
    C++ For Loop            
        When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop
        otherwise, when you don't know exactly how many times you want to loop through, then you have to use while loop
    
    for loop steps:
        1. int i = 0; (initial condition which executed ONLY once)
        2. cout << i << endl; (a block of code)
        3. i++ (steps condition)
        4. i <= 10 (loop condition)
    
    for loop example:
        Conditions for  skipping number 7, (7)
        its multiple,  (7, 14, 21, 28, 35, ... ) % 7 == 0;
        numbers which digit has 7: (7, 17, 27, 37, 47, ...) % 10 == 7; 
        numbers which tens has 7: (70, 71, 72, 73, 74, 75, ...) / 10 == 7; (ignored remainder)
        Steps: 
            1. Get number from 0 to 100;
            2. Get specified numbers which satisfied all conditions above
            3. 
*/
int main()
{
    // example, print out 0 to 10 by for loop
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    // for loop example
    // cout << 71 / 10 << endl;
    for (int i = 0; i < 100; i++)
    {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
        {
            cout << "Skip" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}