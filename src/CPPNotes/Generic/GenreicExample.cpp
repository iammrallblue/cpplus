#include <iostream>
#include "GenericExample.h"

using namespace std;

template <class T>
class Arithmetic
{
private:
    /* data members */
    T a; // generic datatype a, b
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    ~Arithmetic();
};


template <class T>
Arithmetic<T> :: Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T> :: add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmetic<T> :: sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<int> ar1(10, 5);
    cout<<ar1.add();
    cout<<ar1.sub();
    
    Arithmetic<float> ar2(10.56, 5.25);
    cout<<ar2.add();
    cout<<ar2.sub();
}