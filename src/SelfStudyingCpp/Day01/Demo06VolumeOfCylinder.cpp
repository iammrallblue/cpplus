#include <iostream>
#include <cmath>

using namespace std;

/*
    Example:
        Find a cylinder volume by its radius and height
        float radius = 4.5f;
        float height = 90.0f;
*/

int main()
{
    // radius and height of cylinder
    float cylinder_radius = 4.5f;
    float cylinder_height = 90.0f;
    // declare a constant PI
    const float PI = 3.1415f;
    //    double cylinder_volume = PI * cylinder_radius * cylinder_radius;
    // call pow() method from cmath library
    double cylinder_volume = PI * pow(cylinder_radius, 2) * cylinder_height;
    cout << "The volume of cylinder is: " << cylinder_volume << endl;
}
