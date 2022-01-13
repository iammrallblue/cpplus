#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Examples:
        To change values of x and y variables by three different passings
            parameters pass by values:
            parameters pass by pointer:
            parameters pass by references:
*/

// function for changing values of variables.
// since no return value, the function is defined as void
// void changeValues(int m, int n)
// {
//     // 1. swap va lues of passing parameters.
//     int temp;
//     temp = m;
//     m = n;
//     n = temp;
//     cout << "After change values: x= " << m << " y= " << n << endl;

// } // changeValues

// // 2. change values by passing pointer
// void changeValues(int *m, int *n)
// {
//     int temp;
//     temp = *m;
//     *m = *n;
//     *n = temp;
// } // changeValues

// 3. change values by passing references
void changeValues(int &m, int &n)
{
    int temp;
    temp = m;
    m = n;
    n = temp;
} // changeValues

int main()
{
    // // 1. passing values
    // void changeValues(int, int); // overload function
    // int x = 1;
    // int y = 2;
    // cout << "Before change values: x= " << x << " y= " << y << endl;
    // // 1. call changeValues()
    // changeValues(x, y);
    // cout << "After change values: x= " << x << " y= " << y << endl;
    // // x, y are not changed at all, b/c changeValues function
    // // only working validly within its code scope.

    // // 2. call changeValues() by passing pointer
    // void changeValues(int *, int *);
    // int x = 1;
    // int y = 2;
    // cout << "Before change values: x= " << x << " y= " << y << endl;
    // // call changeValues() to change values
    // changeValues(&x, &y);
    // cout << "After change values: x= " << x << " y= " << y << endl;

    // 3. call changeValues() by passing references
    void changeValues(int &, int &); // overload function
    int x = 1;
    int y = 2;
    cout << "Before change values: x= " << x << " y= " << y << endl;

    // call changeValues to pass references
    changeValues(x, y);
    cout << "After change values: x= " << x << " y= " << y << endl;

} // main