#include <iostream>
using namespace std;

void transposeMatrix(double **mat, int rows, int columns)
{

    double temp;

    for (int i = 0; i < rows; i++)
    {

        for (int j = i + 1; j < columns; j++)
        {

            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    cout << "\n";

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {

            cout << mat[i][j] << " \t";
        }

        cout << "\n";
    }
} // transposeMatrix

int main()
{

    double **mat = new double *[rows];
    for (int i = 0; i < rows; i++)
        mat[i] = new double[columns];
        
    int rows = 10;
    int columns = 10;
    double mat[rows][columns];

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {

            mat[i][j] = j;
        }
    }

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {

            cout << mat[i][j] << " \t";
        }

        cout << "\n";
    }

    // mat = new double[50][1];
    transposeMatrix(mat, 10, 10);

    system("pause");
    return 0;
}