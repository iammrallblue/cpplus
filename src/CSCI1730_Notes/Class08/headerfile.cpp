#include <iostream>
#include "oddeven.h" // self-defined header file

using namespace std;

int main()
{
    int i;
    do
    {
        cout << "Please, enter a number: ( 0 to exit)";
        cin >> i;
        odd(i);
    } while (i != 0);

    return EXIT_SUCCESS;
} // main