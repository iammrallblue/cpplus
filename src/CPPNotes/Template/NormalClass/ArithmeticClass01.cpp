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
    Arithmetic(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    int add()
    {
        int c;
        c = a + b;

        return c;
    }

    int sub()
    {
        int c;
        c = a - b;

        return c;
    }

}; // Arithmetic

int main(int argc, char const *argv[])
{
    Arithmetic ar(10,5);

    cout << "Add " << ar.add() << endl;
    cout << "Sub " << ar.sub() << endl;
    return 0;
} // main