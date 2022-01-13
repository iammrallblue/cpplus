#include <iostream>

using namespace std;

/*
    While Statement in C++:
        Loops can execute a block of code as long as a specified condition is reached.
        Loops are handy because they save time, reduce errors, and they make code more readable.

        Key point:
            should be careful the dead loop, like while (1)

            1. num <= 10 is the condition expression, when num is smaller than or equal to 10
                executing the body code
            2. body code, {
                cout << num << endl;
                num++; 
            }
            3. num++ is the condition for looping while statement.
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