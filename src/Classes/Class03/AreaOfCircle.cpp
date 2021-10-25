#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

/*
    Ex.
        Calculate the area of the circle
            PI can be constant or using <cmath> library
*/

// const double PI = 3.14159;

int main(int argc, char const *argv[])
{
    double area, radius;

    cout << "input radius of a circle: " << endl;
    cin >> radius;

    // calculate the area of the circle （2 * radius) is not right
    area = (radius * radius) * M_PI;

    cout << "The area of the circle is: " << area << endl;
    return 0;
} // main
