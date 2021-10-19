#include <iostream>
#include "Matrix.h"

using namespace std;

int main(void)
{
    Matrix m1(2, 2), m2(2, 2);

    cin >> m1;
    cin >> m2;

    cout << m1;
    cout << m2;

    m1 = m1 + m2;

    m1 = m1 * 2;
    cout << m1;

    m1 = m1 * m2;
    cout << "After matrix multiplaction:" << endl;
    cout << "Matrix 1:" << endl;
    cout << m1;
    cout << "Matrix 2:" << endl;
    cout << m2;
    cout << "Resultant Matrix after multiplication:" << endl;
    cout << m1;

    m1.t();
    cout << "Transposed matrix:" << endl;
    cout << m1;

    return 0;
}