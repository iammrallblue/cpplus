#include <iostream>

using namespace std;

/*
    C++ While Loop
        Loops can execute a block of code as long as a specified condition is reached.
        Loops are handy because they save time, reduce errors, and they make code more readable.

        Key point:
            should be careful the dead loop, like while (1)
*/

int main()
{
    // print out number 0 - 10
    int num = 0;
    while (num <= 10)
    {
        cout << num << endl;
        num++;
    }
    return 0;
}