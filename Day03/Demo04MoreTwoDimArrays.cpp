#include <iostream>

using namespace std;

/*
    More about Two-Dim Arrays:

*/

int main()
{
    // 3 rows * 4 columns, if elements are not matched to 12, zeroes will be filled in.
    int my_array[][4] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << my_array[i][j] << " ";
        }
        cout << endl;
    }

    // check allocated memory location for Arrays
    cout << "Allocated Memory Location: " << sizeof(my_array) << endl;                      // 12*4= 48
    cout << "Allocated Memory Location for an element: " << sizeof(my_array[0][0]) << endl; // 4

    // check allocated memory location for first row
    cout << "Allocated Memory Location for first row: " << sizeof(my_array[0]) << endl;

    // check numbers of elements in Arrays:
    cout << "Elements in Arrays: " << sizeof(my_array) / sizeof(my_array[0][0]) << endl;

    // find numbers of row and column:
    cout << "Rows of Arrays: " << sizeof(my_array) / sizeof(my_array[0]) << endl;
    cout << "Columns of Arrays: " << sizeof(my_array[0]) / sizeof(my_array[0][0]) << endl;

    // find memory address for the Arrays:
    cout << "The Memory Address is: " << my_array << endl;       // 0x7ffeebd301c0(Hexadecimal)
    cout << "The Memory Address is: " << (long)my_array << endl; // 140732854895040 (Binary)

    // find memory address for elements:
    cout << "The Memory Address of first row my_array[0] is: " << &my_array[0] << endl;           // 0x7ffeebd301c0(Hexadecimal)
    cout << "The Memory Address of first element my_array[0][0] is: " << &my_array[0][0] << endl; // 0x7ffeebd301c0(Hexadecimal)

    cout << "The Memory Address of second row my_array[1] is: " << &my_array[1] << endl;
    cout << "The Memory Address of fourth element my_array[1][0] is: " << &my_array[1][0] << endl; // 0x7ffee1a981d0
    return 0;
}