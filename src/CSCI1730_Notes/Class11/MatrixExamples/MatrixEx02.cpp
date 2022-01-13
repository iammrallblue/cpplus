#include <iostream>
#include <iomanip>
using namespace std;

// Create a class Matrix
class Matrix
{
private:
    int **matrix;
    int dim;

public:
    Matrix(int = 5);
    Matrix(const Matrix &);
    ~Matrix();
    Matrix operator+(const Matrix &);
    Matrix operator-(const Matrix &);
    Matrix operator*(int);
    Matrix operator*(const Matrix &);
    Matrix operator^(const Matrix &);
    friend istream &operator>>(istream &, Matrix &);
    friend ostream &operator<<(ostream &, Matrix);
};

// Destructor
Matrix::~Matrix()
{
    for (int i = 0; i < this->dim; i++)
    {
        // delete[](Matrix::matrix)[i];
        delete[] matrix[i];
    }
    delete[] matrix;
} // ~Matrix

// Parameterized constructor
Matrix::Matrix(int dim)
{
    Matrix::matrix = new int *[dim];
    for (int j = 0; j < dim; j++)
    {
        Matrix::matrix[j] = new int[dim];
    }
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
            Matrix::matrix[i][j] = 0;
    }
    this->dim = dim;
} // Constructor

// Copy constructor
Matrix::Matrix(const Matrix &mat)
{
    Matrix::matrix = new int *[mat.dim];
    for (int j = 0; j < mat.dim; j++)
    {
        Matrix::matrix[j] = new int[mat.dim];
    }
    for (int i = 0; i < mat.dim; i++)
    {
        for (int j = 0; j < mat.dim; j++)
            Matrix::matrix[i][j] = mat.matrix[i][j];
    }
    this->dim = mat.dim;
} // Copy Constructor

// This function is used to perform the addition operation
Matrix Matrix::operator+(const Matrix &mat)
{
    Matrix tmp(mat.dim);
    for (int i = 0; i < mat.dim; i++)
    {
        for (int j = 0; j < mat.dim; j++)
        {
            tmp.matrix[i][j] = Matrix::matrix[i][j] + mat.matrix[i][j];
        }
    }
    return tmp;
} // operator+

// This function is used to perform the subtraction operation
Matrix Matrix::operator-(const Matrix &mat)
{
    Matrix tmp(mat.dim);
    for (int i = 0; i < mat.dim; i++)
    {
        for (int j = 0; j < mat.dim; j++)
        {
            tmp.matrix[i][j] = Matrix::matrix[i][j] - mat.matrix[i][j];
        }
    }
    return tmp;
} // operator-

// This function is used to perform the multiplication operation with a scalar value
Matrix Matrix::operator*(int c)
{
    Matrix tmp(this->dim);
    for (int i = 0; i < this->dim; i++)
    {
        for (int j = 0; j < this->dim; j++)
            tmp.matrix[i][j] = Matrix::matrix[i][j] * c;
    }
    return tmp;
} // operator*

// This function is used to perform the multiplication operation between two square matrices
Matrix Matrix::operator*(const Matrix &mat)
{
    Matrix tmp(this->dim);
    for (int i = 0; i < this->dim; i++)
    {
        for (int j = 0; j < this->dim; j++)
        {
            tmp.matrix[i][j] = 0;
            for (int k = 0; k < this->dim; k++)
            {
                tmp.matrix[i][j] = tmp.matrix[i][j] + Matrix::matrix[i][k] * mat.matrix[k][j];
            }
        }
    }
    return tmp;
} // operator*

// This function is used to get transpose of a square matrix
Matrix Matrix::operator^(const Matrix &mat)
{
    for (int i = 0; i < this->dim; i++)
    {
        for (int j = 0; j < this->dim; j++)
            mat.matrix[i][j] = Matrix::matrix[j][i];
    }
    return mat;
}

// Overload >>(cin) operator which takes a square matrix as input
istream &operator>>(istream &s, Matrix &mat)
{
    cout << "Enter " << mat.dim * mat.dim << " Elements :-" << endl;
    for (int i = 0; i < mat.dim; i++)
    {
        for (int j = 0; j < mat.dim; j++)
        {
            cout << "Element at row " << i + 1 << " col " << j + 1 << " : ";
            s >> mat.matrix[i][j];
        }
    }
    return s;
}
// Overload <<(cout) operator which displays a square matrix
ostream &operator<<(ostream &s, Matrix mat)
{
    for (int i = 0; i < mat.dim; i++)
    {
        for (int j = 0; j < mat.dim; j++)
        {
            s << setw(10);
            s << mat.matrix[i][j];
        }
        cout << "\n";
    }
    return s;
}
int main()
{
    int dim;

    cout << "Enter dimension:";
    cin >> dim;

    Matrix test(dim);
    cin >> test;
    cout << "Original Matrix:" << endl;
    cout << test;

    Matrix cpy(test);
    cout << "Copy of the original Matrix:" << endl;
    cout << cpy;

    Matrix test1(dim);
    cout << "Enter another matrix to add with the original:\n";
    cin >> test1;

    cout << "Result of addition:\n";
    Matrix cpy1 = test + test1;
    cout << cpy1;

    Matrix test2(dim);
    cout << "Enter another matrix to subtract with the original:\n";
    cin >> test2;

    cout << "Result of subtraction:\n";
    Matrix cpy2 = test - test2;
    cout << cpy2;

    int sc;
    cout << "Enter a scalar value:";
    cin >> sc;

    cout << "multiplying with scalar value with the original: " << endl
         << endl;
    Matrix cpy3 = test * sc;
    cout << cpy3;

    Matrix test3(dim);
    cout << "Enter another matrix to multiply with the original:\n";
    cin >> test3;

    cout << "Result of multiplication:\n";
    Matrix cpy4 = test * test3;
    cout << cpy4;

    Matrix test4(dim);
    cout << "\nTranspose of original matrix:\n";
    Matrix cpy5 = test ^ test4;
    cout << cpy5;

    return 0;
}