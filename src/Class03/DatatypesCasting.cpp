#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    double m, n;

    x = 6;   // int
    y = 6.6; // y is int, value will be lose accuracy

    m = 3.33;
    n = (double)x; // casting x to double type.

    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "m= " << m << endl;
    cout << "n= " << n << endl;
    return 0;
}
