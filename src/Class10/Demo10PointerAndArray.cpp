#include <iostream>

using namespace std;

/*
    Pointer and Array:
        Operating array by Pointer
            int * ptr = arr; a pointer pointed to array arr.

        The address of an Array;
            int arr[] {...};
            1. arr, arr[0], &arr, all can fetch the address of the array.
            2. &arr cannot assign to a pointer variable.


*/
int main(int argc, char const *argv[])
{
    int arr[] = {23, 1, 3, 8, 24, 33, 20, 99, 21, 55, 41, 15};

    cout << "The first element is: " << arr[0] << endl;
    cout << "The address of the first element is: " << &arr[0] << endl; // 0x7ffeed9d31b0
    cout << "The address of the Array is; " << arr << endl;             // 0x7ffeed9d31b0
    cout << "&arr is: " << &arr << endl;                                // 0x7ffeed9d31b0
    // we can see that &arr, &arr[0], and arr are the same.

    // cout << "The size of the array is: " << sizeof(arr) << endl; // 48/12 =4

    // using pointer to opt the Array
    // int *ptr = arr;
    // int * ptr = &arr[0];
    int *ptr = arr;
    // using first index to access the first element
    cout << "Fetch the first element by index: " << arr[0] << endl;

    // access elements in array by pointer arithematic
    ++ptr; // *** move to next address, not ++*ptr, both are different
    cout << "Fetch the second element by pointer arithmetic: " << *ptr << endl;

    // Iterating array by Pointer
    int length = sizeof(arr) / sizeof(arr[0]); // get the length of arr
    int *arr_ptr = arr;                        // point pointed to arr

    cout << "Iterating array by pointer. " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << *arr_ptr << " "; // fetch each element in array
        arr_ptr++; // move pointer to next one.
    }              // for

    return 0;
} // main
