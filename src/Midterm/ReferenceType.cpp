#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Values of x and y: " << endl;
    int x = 30;
    double y = 130.14;
    cout << "Before using reference type: x= " << x << " y= " << y << endl;

    // using reference
    int &i_ref = x;
    double &d_ref = y;
    cout << "After using reference type: x= " << i_ref << " y= " << d_ref << endl; // get values of x and y
    cout << "The Addresses of x and y: &x= " << &i_ref << " &y= " << &d_ref << endl;

    return 0;
} // main
