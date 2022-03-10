#include <iostream>
#include <stdio.h>

using namespace std;

// Arithmetic class
class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic(int a, int b);
    int add();
    int sub();
    ~Arithmetic();

}; // Arithmetic

Arithmetic::Arithmetic(int a, int b)
{
    this->a = a;
    this->b = b;

} // constructor

int Arithmetic::add()
{
    int c;
    c = a + b;

    return c;
} // add

int Arithmetic::sub()
{
    int c;
    c = a - b;

    return c;

} // sub

int main(int argc, char const *argv[])
{

    return 0;
} // main