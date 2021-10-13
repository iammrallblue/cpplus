#include <iostream>
#include <cstdlib>

using namespace std;
/*
    Construct in C++:
        Construct and Class have same name.
*/
// Circle class and its constructor
class Circle
{
public:
    // member fields
    int x, y;
    int radius;

public:
    // constructors
    Circle()
    {
        cout << "non-parameterized constructor is called." << endl;
        x = y = 0;
        radius = 1;
    } // constructor

    // construct with parameters
    Circle(int x, int y, int rad)
    {
        this->x = x;
        this->y = y;
        // this->z = z;
        this->radius = rad;
        cout << "constructor with parameters." << endl;
    } // constructor

}; // Circle class

int main(int argc, char const *argv[])
{
    // when creating objects of a class,
    // the constructor will be executed.
    Circle cir;            // call non-parameterized constructor
    Circle cir_2(1, 2, 3); // call parameterized constructor
    return 0;
} // main
