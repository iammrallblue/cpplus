#include <iostream>
using namespace std;

/*
    Constants;
        When variable values are immutable, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):

        const int myNum = 15;  // myNum will always be 15
        myNum = 10;  // error: assignment of read-only variable 'myNum'
        INT_MAX, the largest value of int type
        #define Day 9
        const DAY 9;

*/

int main()
{
    const int minutesPerHour = 60;
    const float PI = 3.14;
    cout << minutesPerHour << "\n";
    cout << PI;
    return 0;
}