#include <iostream>

using namespace std;

/*
    Operators Overloading
    Example is from https://youtu.be/bMAvdT8RQko

*/

// A Matrix Class
class Matrix
{
private:
    int rows;
    int cols;
    int **matrix; // 2D array

public:
    Matrix(int rows, int cols);
    Matrix operator+(const Matrix &);
    Matrix operator-(const Matrix &);
    Matrix operator*(const Matrix &);
    Matrix operator/(const Matrix &);
    Matrix operator=(const Matrix &);

    // friend, for operator>> function accessing all members of Matrix Class
    friend istream &operator>>(istream &in, Matrix &ma);
    // print out matrices
    friend ostream &operator<<(ostream &out, const Matrix &ma);

}; // Matrix

// for user input elements into matrices
istream &operator>>(istream &in, Matrix &ma)
{
    cout << "Input data in Matrix: " << endl;

    for (int i = 0; i < ma.rows; i++)
    {
        for (int j = 0; j < ma.cols; j++)
        {
            in >> ma.matrix[i][j];
        }
    }
    return in;

} // operator>>

ostream &operator<<(ostream &out, const Matrix &ma)
{
    out << "Output: " << endl;
    for (int i = 0; i < ma.rows; i++)
    {
        for (int j = 0; j < ma.cols; j++)
        {
            out << ma.matrix[i][j] << " ";
        }
        out << endl;
    }
    out << endl;
    return out;
} // operator<<

// invoke constructor
Matrix::Matrix(int rows, int cols)
{
    this->rows = rows;
    this->cols = rows;

    matrix = new int *[rows]; // allocating dynamic memory
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

} // Matrix

Matrix Matrix::operator+(const Matrix &ma) // addition for two matrices
{
    // addition result
    Matrix add_result(ma.rows, ma.cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            add_result.matrix[i][j] = ma.matrix[i][j] + this->matrix[i][j];
        }
    }
    return add_result;
} // operator+

Matrix Matrix::operator-(const Matrix &ma) // substraction for two matrices
{
    // substraction result
    Matrix substr_result(ma.rows, ma.cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            substr_result.matrix[i][j] = ma.matrix[i][j] - this->matrix[i][j];
        }
    }
    return substr_result;

} // operator-

Matrix Matrix::operator*(const Matrix &ma) // multiplication for two matrices
{
    // multiplication result
    Matrix multi_result(ma.rows, ma.cols);
    for (int i = 0; i < ma.rows; i++)
    {
        for (int j = 0; j < ma.cols; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                multi_result.matrix[i][j] += matrix[i][k] * ma.matrix[k][j];
            }
        }
    }
    return multi_result;

} // operator*

Matrix Matrix::operator=(const Matrix &ma)
{
    rows = ma.rows;
    cols = ma.cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            this->matrix[i][j] = ma.matrix[i][j];
        }
    }
    return *this;
} // operator=
int main(int argc, char const *argv[])
{
    Matrix matxA(2, 2);
    cin >> matxA;
    cout << endl;

    Matrix matxB(2, 2);
    cin >> matxB;
    cout << endl;

    Matrix matxC(2, 2);
    matxC = matxA + matxB;

    cout << "Addition of Tow Matrix: " << endl;
    cout << matxC;
    return 0;
} // main
