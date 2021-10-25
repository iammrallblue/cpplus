// function template
#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b)
{
    T result;
    result = (a > b) ? a : b;
    return (result);
} // GetMax

template <typename T>
T sum(T a, T b)
{
    return a + b;
} // sum

int main()
{
    int i = 5, j = 6, k;
    long l = 10, m = 5, n;
    k = GetMax<int>(i, j);
    n = GetMax<long>(l, m);
    cout << k << endl;
    cout << n << endl;

    // 2rd template
    int n1 = sum<int>(1, 2);
    double n2 = sum<double>(2.0, 3.0);
    cout << n1 << ", " << n2 << endl;

    return 0;
} // main