#include <iostream>
#include <cstdlib>
#define WIDTH 5
#define HEIGHT 3

using namespace std;

// create a multidimensional array
int jimmy[HEIGHT][WIDTH];
// or the multidimensional array can be defined as:
// int jimmy[HEIGHT * WIDTH]; // it has the same result
int n, m;

int main()
{
    for (n = 0; n < HEIGHT; n++)
    {
        for (m = 0; m < WIDTH; m++)
        {
            jimmy[n][m] = (n + 1) * (m + 1);
            cout << jimmy[m][n] << endl;

        } // inner for
        cout << "n: " << n << endl;
        cout << "m: " << m << endl;
    } // outer for
} // main