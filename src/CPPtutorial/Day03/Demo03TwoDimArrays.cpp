#include <iostream>
#define WIDTH 5
#define HEIGHT 3

using namespace std;

/*
    Two-Dimensional Arrays:
        A two-dimensional array defines a structured data type in which 
        two indices are used to define the location of elements in rows and columns. 

        Four forms of Two-Dim Arrays:
            Define a 5 rows and 3 columns TD Arrays
                1. int my_array[5][3]; (my_array[row][column])
                2. int my_array [5][3] = { {82, 65, 72}, 
                                         {73, 70, 80}, 
                                         {91, 76, 40}, 
                                         {72, 72, 68},
                                         {65, 90, 80} };
                3. int my_array [5][3] = {1,2,3,4,5,6,...}; w/o the curly bracket for each row.
                4. int my_array [ ][3] = {1,2,3 ,4,5,6};
*/

int main()
{
    // Form 1 of Two-Dim Arrays,
    // declare and initial
    int my_array[5][3];
    // assign values to each row and column
    my_array[0][0] = 1;
    my_array[0][1] = 2;
    my_array[0][2] = 3;
    my_array[1][0] = 4;
    my_array[1][1] = 5;
    my_array[1][2] = 6;
    my_array[2][0] = 7;
    my_array[2][1] = 8;
    my_array[2][2] = 9;
    my_array[3][0] = 10;
    my_array[3][1] = 11;
    my_array[3][2] = 12;
    my_array[4][0] = 13;
    my_array[4][1] = 14;
    my_array[4][2] = 15;

    // iterating two-dem arrays my_array by nested for loop
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << my_array[i][j] << " ";
        }
        cout << endl; // next line for data.
    }

    // Form 2 of Two-Dim Arrays
    int my_array2[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};

    // Form 3 of Two-Dim Arrays
    cout << "Form 3 of Two-Dim Array: " << endl;
    int my_array3[2][3] = {1, 2, 3, 4, 5, 6}; // w/o curly bracket for each row
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << my_array3[i][j] << " ";
        }
        cout << endl;
    }

    // Form 4 of Two-Dim Arrays:
    cout << "Form 4 of Two-Dim Array: " << endl;
    int my_array4[][3] = {11, 22, 33, 44, 55, 66}; // will count row asthmatically,
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << my_array4[i][j] << " ";
        }
        cout << endl;
    }

    // example of multi-Dem Array
    int demArray[HEIGHT][WIDTH];
    int x;
    int y;
    for (x = 0; x < HEIGHT; x++)
    {
        for (y = 0; y < WIDTH; y++)
        {
            demArray[x][y] = (x + 1) * (y + 1);
        } // inner for
    }     // outer for
    cout << demArray[x][y] << endl;
    return 0;
}