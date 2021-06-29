#include <iostream>

using namespace std;

/*
    C++ goto statement:
        The goto statement is a jump statement which is sometimes also referred to as unconditional jump statement. 
        The goto statement can be used to jump from anywhere to anywhere within a function.
*/
int main()
{
    int x = 10;

LOOP:
    do
    {
        if (x == 15)
        {
            x = x + 1;
            goto LOOP;
        }
        cout << "the value of x is: " << x << endl;
        x = x + 1;

    } while (x < 20);
    return 0;
}