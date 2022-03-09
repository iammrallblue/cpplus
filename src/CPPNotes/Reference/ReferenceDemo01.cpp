#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int &r = a; // &r is a reference

    cout << "a is: " << a << endl;   // a's value
    cout << "&r is: " << &r << endl; // a's address
    r++;
    cout << "r is: " << r << endl; // a++, 11 a's value
    cout << "a is: " << a << endl; // a++, 11 a's value

    int b = 25;
    r = b;                         // when changing r, a is changed as well.
    cout << "a is: " << a << endl; // 25
    cout << "r is: " << r << endl; // 25
    return 0;
}
