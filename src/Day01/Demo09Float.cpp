#include <iostream>

using namespace std;

/*
    Floating point:
        1. Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
    
    Double floating point:
        2. Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

        float	        4bytes	
        double	        8bytes	
        long double	    12bytes	        

    Key Point:
        1. float variable should have "f" after value
*/

int main()
{
    // float point
    float float_numb = 3.14;  // if 3.14 does not have "f" with it, it will show double float point (double)(3.140000000000000000024)
    float float_num2 = 3.15F; // here 3.15 is the float point
    double double_num = 3.9999;
    // long double
    long double ld_num = 4.9983;

    // show memory space of float and double by sizeof()
    cout << "Size of float variable: " << sizeof(float_num2) << endl; //  size is 4

    cout << "Size of double variable: " << sizeof(double_num) << endl; // size is 8

    cout << "Size of long double variable: " << sizeof(ld_num) << endl; // size is 12

    return 0;
}