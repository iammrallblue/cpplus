#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int **mtxArray;
    int rows, columns;

    cout << "Number of Rows:" << endl;
    cin >> rows;

    cout << "Number of Columns: " << endl;
    cin >> columns;

    // Allocating the row space in heap dynamically
    mtxArray = new int *[rows];

    // Allocating the column space in heap dynamicall
    for (int i = 0; i < rows; i++)
    {
        mtxArray[i] = new (nothrow) int[columns];
    } // for

    // Giving inputs to the array
    cout << "Enter " << (rows * columns) << " numbers to the array" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the elements at Rows " << (i + 1) << " Columns " << (j + 1) << endl;
            cin >> mtxArray[i][j];
        } // inner for
    }     // outer for

    // Display the array
    cout << "Here is your 2D Array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mtxArray[i][j] << ' ';
        } // inner for
    }     // outer for

    cout << endl; // nextline

    // Free the memory after the use of array
    for (int i = 0; i < rows; i++)
    {
        delete[] mtxArray[i];
    } // for

    delete[] mtxArray;

    return 0;
} // main
