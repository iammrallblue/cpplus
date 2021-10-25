#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Using reference type as parameters in C++
*/

//function declaration
void swap(int &x, int &y);

int main(int argc, char const *argv[])
{
    int a;
    int b;
    cout << "input two values: " << endl;
    cin >> a >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call swap function
    swap(a, b); // int &x = a; int &y = b;
    cout << "After swap: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
} //main

// swap funciton
void swap(int &x, int &y) // &x &y will receive the addresses of a, b
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    return;
} // swap