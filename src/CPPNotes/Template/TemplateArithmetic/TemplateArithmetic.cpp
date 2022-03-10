#include <iostream>
#include <stdio.h>

using namespace std;

/**
 * Creating template class
 * data members need to turn to unknow
 * datatype like T, T is a parameter of class template
 */
template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();

}; // Arithmetic

/**
 * Initializing Contructor for
 * Arithmetic<T> has T with it, b/c Arithemtic
 * is defined as a template class
 */
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;

    return c;

} // add

template <class T>
T Arithmetic<T>::sub()
{
    int c;
    c = a - b;

    return c;

} // sub

int main(int argc, char const *argv[])
{
    Arithmetic<int> ar(10, 5);
    // add
    cout << ar.add() << endl;
    cout << ar.sub() << endl;

    Arithmetic<float> f_ar(2.3, 5.4);
    cout << f_ar.add() << endl;
    cout << f_ar.sub() << endl;

    Arithmetic<char> c_ar('A','B');
    cout << (int)c_ar.add() << endl;
    cout << (int)c_ar.sub() << endl;

    return 0;
}
