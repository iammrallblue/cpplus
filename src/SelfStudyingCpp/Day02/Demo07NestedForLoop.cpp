#include <iostream>

using namespace std;

/*
    Nested For Loop:
        
    Nested For Loop Example:
        print out 10 rows of line;
    
    Nested for loop example:
        print out multiplication table
*/
int main()
{
    // print out 10 row of line (-*)
    for (int j = 0; j < 10; j++)
    {
        // print out 1 row line (-*)
        for (int i = 0; i < 10; i++)
        {
            cout << "-*";
        }
        cout << endl;
    }

    // print multiplication table
    for (int i = 1; i <= 9; i++)
    {
        // cout << i << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << j << " * " << i << " = " << j * i << "\t";
        }
        cout << endl;
    }
    return 0;
}