#include <iostream>

using namespace std;

/*
    TRANSPOSE OF A MATRIX using DYNAMIC MEMORY ALLOCATION
*/

class Matrix
{
    int **mat1, **mat2;
    int rows, cols;

public:
    void initialize();
    void transpose();
    void display();
    void deallocate();

}; // Matrix

// initialize function for having matrices
void Matrix::initialize()
{
    // Input rows and columns
    cout << "Enter the number of rows and columns: " << endl;
    cin >> rows >> cols;

    // Allocating Memory for matrices
    mat1 = new int *[rows]; // set up rows
    for (int i = 0; i < rows; i++)
    {
        mat1[i] = new int[cols]; // set up cols
    }                            // for

    cout << "Enter elements: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat1[i][j];
        }
    }

    mat2 = new int *[cols]; // for transpose matrix
    for (int i = 0; i < cols; i++)
    {
        mat2[i] = new int[rows];
    }

} // initialize

void Matrix::transpose()
{
    // store transpose result
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat2[j][i] = mat1[i][j]; // exchange rows and columns
        }
    }
} // transpose

// display function for printing result
void Matrix::display()
{
    // print out transposed result
    cout << "Transposed: \n";

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

} // display

// deallocate function for empty allocated memory
void Matrix::deallocate()
{
    for (int i = 0; i < rows; i++)
    {
        delete mat1;
    }
    for (int j = 0; j < cols; j++)
    {
        delete mat2;
    }
}
int main(int argc, char const *argv[])
{
    Matrix ma;
    ma.initialize();
    ma.display();

    ma.transpose();
    ma.display();

    ma.deallocate();
    return 0;
}
