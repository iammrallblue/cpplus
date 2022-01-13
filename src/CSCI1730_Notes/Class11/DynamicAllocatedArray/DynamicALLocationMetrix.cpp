#include <iostream>

using namespace std;

int main()
{
    int **matrix;
    int i, j, count;
    int row;
    int col;

    cout << "\n Enter the number of rows and columns for the matrix.";
    cin >> row >> col;

    matrix = new int *[row];
    for (count = 0; count < row; count++)
        matrix[count] = new int[col];

    cout << "\nNow enter the element for the matrix.";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "\nRow " << (i + 1) << " Col " << (j + 1) << " :";
            cin >> *(*(matrix + i) + j);
        }
    }

    for (int count = 0; count < row; count++)
    {
        delete[] matrix[count];
    }
    delete[] matrix;
    matrix = 0;
    return 0;
} // main

// class Matrix
// {
// private:
//     int rows;
//     int cols;
//     int **matrix;

// public:
//     void delMatrix()
//     {
//         for (int i = 0; i < rows; i++)
//         {
//             delete[] matrix[i];
//                 }
//         delete[] matrix;
//         matrix = 0;
//     } // delMatrix

// }; // Matrix

// int main(int argc, char const *argv[])
// {
//     Matrix matrix;
//     // input rows and columns
//     cout << "Input the number of row and column for the matrix; " << endl;
//     cin >> >> cols;

//     cout << "Input elements for the matrix: " << endl;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << "Row: " << (i + 1) << "Column: " << (j + 1) << endl;
//             cin >> *(*matrix +i) +j);
//         }
//     }
//     return 0;
// } // main
