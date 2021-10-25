#include <iostream>
#include <cstdlib>

using namespace std;

// create an array
int int_array[] = {1, 2, 3, 4, 5, 6};
int length = sizeof(int_array) / sizeof(int_array[0]);

// function with reference type return value
int &setValues(int i)
{
    return int_array[i];
} // setValues

int main(int argc, char const *argv[])
{
    cout << "Before changing values: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "The element of Array[ " << i << " ] = ";
        cout << int_array[i] << endl;
    } // for

    // set new value to the elements in the Array
    setValues(1) = 999; // replace new value 999
    setValues(5) = 888; // replace new value 888

    // print out new array
    cout << "After changing values: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "The Array[ " << i << " ] = ";
        cout << int_array[i] << endl;
    } // for

    return 0;
} // main
