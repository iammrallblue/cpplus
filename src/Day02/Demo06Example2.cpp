#include <iostream>

using namespace std;

/*
    Ternary Operator:
        Key Point:
            Ternary is variable, it is assignable.
            (x > y ? x : y) = 100;
*/
int main()
{
    int x = 10;
    int y = 20;
    int z = 0;

    z = x > y ? x : y; // if x > y then assign x to z, otherwise, assign y to z
    cout << "z is: " << z << endl; // 20, x < y, assign y to z

    (x > y ? x : y) = 100; // since x < y, keep y then assign value 100 to y
    cout << "x = " << x << endl; // 10;
    cout << "y = " << y << endl; // y = 100;
    cout << "z = " << z << endl; // z = 20; 
    return 0;
}