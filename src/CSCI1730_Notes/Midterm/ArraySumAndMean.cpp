#include <iostream>

using namespace std;

/*
    Array Eaxmple:
        1. print out all elements by loop statements

        2. Sum up all element, and find the mean/average of all elements
*/
int main(int argc, char const *argv[])
{
    // define an array
    int my_arr[] = {8, 4, 2, 1, 23, 344, 12};

    // get the size of the array
    int length = sizeof(my_arr) / sizeof(my_arr[0]);

    // 1. print out all elements
    for (int i = 0; i < length; i++)
    {
        cout << my_arr[i] << " ";
    } // for
    cout << endl;

    // 2. sum up all elements,
    // sum must be initialized
    int sum = 0;
    for (int j = 0; j < length; j++)
    {
        // sum up
        sum += my_arr[j];
    }

    cout << "Total of all elements in array is: " << sum << endl;
    cout << "The mean of all elements in array is: " << sum / length << endl;

    return 0;
} // main
