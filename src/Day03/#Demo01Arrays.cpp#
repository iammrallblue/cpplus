#include <iostream>
#include <array>

using namespace std;

/*
    C++ Arrays
        ONE-DIMENSIONAL ARRAYS
            Arrays are used to store multiple values in a single variable, 
            instead of declaring separate variables for each value.
        
            To declare an array, define the variable type, (three forms of array)
            specify the name of the array followed by square brackets and specify the number of elements.   

            The compiler allocates memory locations for the array when it is declared.

        Key points:
            1. An array is a collection of elements of the same type 
                placed in contiguous memory locations

        Array example:
            to find the max value in an array:
*/

int main()
{
    // first form of array, it's only initialized, not assigned any values to elements of this array
    int my_array[5];

    // assign values to all elements
    my_array[0] = 2;
    my_array[1] = 7;
    my_array[2] = 4;
    my_array[3] = 9;

    cout << my_array[0] << endl;

    // second form of array
    int my_array2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << my_array2[3] << endl;

    // iterating by for loop
    for (int i = 0; i < 8; i++)
    {
        cout << my_array2[i] << " ";
    }

    cout << endl;
    // third form of array
    int my_array3[] = {1, 2, 3, 4, 5, 10, 20, 30, 40};
    // int my_array3[] {1, 2, 3, 4, 5, 10, 20, 30, 40}; // equals to above

    // using with sizeof()
    // find out size of array in memory:
    cout << "sizeof(my_array3): " << sizeof(my_array3) << endl;

    // find out size of each element in an array:
    cout << "sizeof(my_array[0]: " << sizeof(my_array3[0]) << endl;

    // find out how many elements in an array.
    cout << "Elements in Array: " << sizeof(my_array3) / sizeof(my_array3[0]) << endl;

    // find out memory address of an array:
    cout << "Memory address of the Array is: " << my_array3 << endl;       // 0x7ffee01711b0 (Hexadecimal)
    cout << "Memory address of the Array is: " << (long)my_array3 << endl; //140732783403440 (Binary)

    // find out memory address of an element:
    cout << "Memory address of first element: " << &my_array3[0] << endl; // 0x7ffee5ad31b0
    cout << "memory address of first element: " << (long)&my_array3[0] << endl;

    cout << "Memory address of second element: " << &my_array3[1] << endl;
    cout << "Memory address of second element: " << (long)&my_array3[1] << endl;

    //*** IMPORTANT Array variable is Constant, it's unassailable
    // my_array3 = 100; // Error, must be a modifiable lvalue

    // Example, Find the max value in an Array:
    int my_array4[] = {200, 400, 100, 500, 350, 600};
    int max_value = 0;

    // iterating the array by for loop
    for (int i = 0; i < 6; i++)
    {

        if (my_array4[i] > max_value)
        {
            max_value = my_array4[i];
        }
    }
    cout << "The max value in the Array is: " << max_value << endl;

    // Example, reverse the Array,
    cout << "The original Array: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << my_array4[i] << " ";
    }

    // create start and end index for reversing the Array:
    int start_index = 0;                                          // first index (start)
    int end_index = sizeof(my_array4) / sizeof(my_array4[4]) - 1; // last index (end)

    while (start_index < end_index)
    {
        // switch elements between start and end
        int temp_index = my_array4[start_index];
        my_array4[start_index] = my_array4[end_index];
        my_array4[end_index] = temp_index;

        start_index++;
        end_index--;
    }

    // print reversed result
    cout << "Reversed Array: " << endl;
    for (int j = 0; j < 6; j++)
    {
        cout << my_array4[j] << " ";
    }
    return 0;
}