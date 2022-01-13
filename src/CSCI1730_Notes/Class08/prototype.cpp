#include <iostream>

using namespace std;

/*
    Example for the prototype of a function
*/

void odd(int x);
void even(int x);

int main()
{
    int i;
    do
    {
        cout << "Please, Enter number (0 to exit): ";
        cin >> i;
        odd(i);
    } while (i != 0); // do...while..

    return EXIT_SUCCESS;

} // main

void odd(int x)
{
    if ((x % 2) != 0)
    {
        cout << "It is odd," << endl;
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