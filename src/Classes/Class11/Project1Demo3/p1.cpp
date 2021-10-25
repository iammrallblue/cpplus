#include "Matrix.h"
#include <iostream>

using namespace std;

int main()
{
    Matrix a(2, 2);
    a.at(0, 0) = 1; // [ 1, 2 ]
    a.at(0, 1) = 2; // [ 1, 3 ]
    a.at(1, 0) = 1;
    a.at(1, 1) = 3;
    Matrix b(2, 1);
    b.at(0, 0) = 3; // [ 3 ]
    b.at(1, 0) = 2; // [ 2 ]

    Matrix c = a.multiply(b);
    cout << "[" << c.at(0, 0) << "]" << endl    //[7]
         << "[ " << c.at(1, 0) << " ]" << endl; // [ 9 ]
    Matrix d = {{1, 2},                         // this will implicitly call the overloaded constructor
                {3, 4}};                        // that takes an initializer list

    d = {{1, 2},
         {3, 4}}; // using initializer list
    cout << "Matrix A " << endl
         << a << endl;
    cout << "Matrix B " << endl
         << b << endl;
    cout << "Matrix C" << endl
         << c << endl;
    cout << "Matrix D" << endl
         << d << endl;
    Matrix c0 = a + 5.2;
    Matrix c1 = a + a;   // NOTE: these examples actually end up calling the copy constructor
    Matrix c2 = a - 3.5; // e.g., this line is the same as Matrix c2(a - 3.5);
    Matrix c3 = b - b;
    Matrix c4 = a * 2.1;
    Matrix c5 = a * b;
    Matrix c6 = a / 2.0;

    cout << "Matrix c0" << endl
         << c0 << endl;
    cout << "Matrix c1" << endl
         << c1 << endl;
    cout << "Matrix c2" << endl
         << c2 << endl;
    cout << "Matrix c3" << endl
         << c3 << endl;
    cout << "Matrix c4" << endl
         << c4 << endl;
    cout << "Matrix c5" << endl
         << c5 << endl;
    cout << "Matrix c6" << endl
         << c6 << endl;
    cout << "Matrix -A" << endl
         << -a << endl;
    cout << "Matrix Transpose A" << endl
         << a.t() << endl;
}