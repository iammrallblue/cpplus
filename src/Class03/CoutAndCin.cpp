#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Ex.
        Users input 2 integers, and sum up

*/
int main(int argc, char const *argv[])
{
    int x;
    int y;
    int sum;

    // prompt users to input number separated by space
    cout << "Input two numbers separated by space: " << endl;

    // key point, cin will assign input values to x and y
    cin >> x >> y;

    y = x + 10;

    sum = x + y;
    
    cout << x << " + " << y << " = " << sum << endl;
    return 0;
}
