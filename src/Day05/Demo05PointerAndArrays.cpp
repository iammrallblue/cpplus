#include <iostream>

using namespace std;

/*
    Pointer and Arrays:
        access each element in Arrays by using pointer
*/

int main()
{
    // Array
    int my_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Binding pointer to my_array
    int *p = my_array;

    //
    cout << "First element of my_array: " << my_array[0] << endl;       // 1
    cout << "&my_array: " << &my_array << endl;                         // 0x7ffee10921c0
    cout << "&my_array[0]: " << &my_array[0] << endl;                   //0x7ffeefbde1c0
    cout << "&my_array[1]: " << &my_array[1] << endl;                   //0x7ffee8c191c4
    cout << "Pointer p is: " << p << endl;                              // 0x7ffeef5d81c0
    cout << "Accessing elements of Array by pointer p: " << *p << endl; // 1
    // p++;                                                                // move pointer p, 4 bytes as the offset.
    // cout << "Accessing second element of Array by pointer p: " << *p << endl;
    //
    //

    // iterating the Array by pointer p and for loop
    for (int i = 0; i < 9; i++)
    {
        // cout << my_array[i] << endl;
        cout << *p << endl; // using *p.
        p++;                // moving pointer p, 4 bytes as the offset.
    }
    return 0;
}