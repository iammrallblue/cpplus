#include <iostream>

using namespace std;

// alias for unsigned int
typedef unsigned int uint;

int main(int argc, char const *argv[])
{
    // number of rows and columns
    uint rows, cols, tmp;

    // Using dynamic allocation array (pointers)
    double **matx_1, **matx_2, **matx_3;

    // ask input for matrices
    cout << "Enter the number of rows and columns for the first matrix: " << endl;
    cin >> rows >> cols;

    // ask input for matrices
    cout << "Enter the number of columns of first matrix: " << endl;
    cin >> tmp;

    // allocated memory for matrices
    // dimension of matx_1 is rows * cols
    matx_1 = new double *[rows];
    for (uint i = 0; i < rows; i++)
    {
        matx_1[i] = new double[cols];
    }

    // dimension fo matx_2 is cols * tmp
    matx_2 = new double *[cols];
    for (uint i = 0; i < cols; i++)
    {
        matx_2[i] = new double[tmp];
    }

    // matrix for the result of matrix multiplication
    matx_3 = new double *[rows];
    for (uint i = 0; i < rows; i++)
    {
        matx_3[i] = new double[tmp];
    }

    // input for all matrices from console
    cout << "Enter element for matrix A: " << endl;
    for (uint i = 0; i < rows; i++)
    {
        for (uint j = 0; j < cols; j++)
        {
            cin >> matx_1[i][j];
        }
    }

    cout << "Enter element for matrix B: " << endl;
    for (uint i = 0; i < cols; i++)
    {
        for (uint j = 0; j < tmp; j++)
        {
            cin >> matx_2[i][j];
        }
    }

    // print out elements in matrix A and B:
    cout << "Matrix A: " << endl;
    for (uint i = 0; i < rows; i++)
    {
        for (uint j = 0; j < cols; j++)
        {
            cout << matx_1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Matrix B: " << endl;
    for (uint i = 0; i < cols; i++)
    {
        for (uint j = 0; j < tmp; j++)
        {
            cout << matx_2[i][j] << "\t";
        }
        cout << endl;
    }

    // multiply matrix A and matrix B, then assign to matrix C
    for (uint i = 0; i < rows; i++)
    {
        for (uint j = 0; j < cols; j++)
        {
            for (uint k = 0; k < tmp; k++)
            {
                matx_3[i][j] += matx_1[i][k] * matx_2[k][j];
            }
        }
    }

    // print out the result of matrices multiplication
    cout << "The result of matrices multiplication is: " << endl;

    for (uint i = 0; i < rows; i++)
    {
        for (uint j = 0; j < tmp; j++)
        {
            cout << matx_3[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
} // main
