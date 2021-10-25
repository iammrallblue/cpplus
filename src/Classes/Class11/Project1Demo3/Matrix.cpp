#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(uint rows, uint cols)
{
    this->rows = rows;
    this->cols = cols;
    data = new double *[rows];
    for (int i = 0; i < rows; i++)
    {
        data[i] = new double[cols];
        for (int j = 0; j < cols; j++)
            data[i][j] = 0;
    }
}
Matrix::Matrix(const i_list &list)
{
    data = NULL;
    *this = list;
}

Matrix &Matrix::operator=(const i_list &list) // assignment with initializer list
{
    deleteMatrix();

    rows = list.size();
    i_list::iterator it1 = list.begin();
    cols = (*it1).size();
    data = new double *[rows];
    for (int i = 0; it1 != list.end(); i++, it1++)
    {
        data[i] = new double[cols];
        initializer_list<double>::iterator it2 = (*it1).begin();
        for (int j = 0; it2 != (*it1).end(); it2++, j++)
            data[i][j] = *it2;
    }
    return *this;
}
Matrix &Matrix::operator=(const Matrix &rhs)
{
    if (this != &rhs) // avoid self copy
    {
        deleteMatrix();
        rows = rhs.rows;
        cols = rhs.cols;
        data = new double *[rows];
        for (int i = 0; i < rows; i++)
        {
            data[i] = new double[cols];
            for (int j = 0; j < cols; j++)
                data[i][j] = rhs.data[i][j];
        }
    }
    return *this;
}

Matrix::Matrix(const Matrix &rhs)
{
    data = NULL;
    *this = rhs;
}

void Matrix::deleteMatrix()
{
    if (data == NULL)
        return;
    for (int i = 0; i < rows; i++)
        delete[] data[i];
    delete[] data;
    rows = cols = 0;
    data = NULL;
}
Matrix::~Matrix()
{
    deleteMatrix();
}

Matrix Matrix::add(double s) const
{
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] + s;
        }
    }
    return result;
}
Matrix Matrix::add(const Matrix &m) const
{
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] + m.data[i][j];
        }
    }
    return result;
}
Matrix Matrix::subtract(double s) const
{
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] - s;
        }
    }
    return result;
}
Matrix Matrix::subtract(const Matrix &m) const
{
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result.data[i][j] = data[i][j] - m.data[i][j];
            }
        }
        return result;
    }
}
Matrix Matrix::multiply(double s) const
{
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] * s;
        }
    }
    return result;
}
Matrix Matrix::multiply(const Matrix &m) const
{
    Matrix result(rows, m.cols);

    for (int i = 0; i < result.rows; i++)
    {
        for (int j = 0; j < result.cols; j++)
        {
            result.data[i][j] = 0;
            for (int k = 0; k < cols; k++)
                result.data[i][j] += data[i][k] * m.data[k][j];
        }
    }
    return result;
}
Matrix Matrix::divide(double s) const
{
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] / s;
        }
    }
    return result;
}
Matrix Matrix::operator-() const
{
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = -data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator+(double s) const
{
    return this->add(s);
}
Matrix Matrix::operator+(const Matrix &m) const
{
    return this->add(m);
}
Matrix Matrix::operator-(double s) const
{
    return this->subtract(s);
}
Matrix Matrix::operator-(const Matrix &m) const
{
    return this->subtract(m);
}
Matrix Matrix::operator*(double s) const
{
    return this->multiply(s);
}
Matrix Matrix::operator*(const Matrix &m) const
{
    return this->multiply(m);
}
Matrix Matrix::operator/(double s) const
{
    return this->divide(s);
}

double &Matrix::operator()(uint row, uint col)
{
    return this->at(row, col);
}

const double Matrix::operator()(uint row, uint col) const
{
    return this->at(row, col);
}
Matrix Matrix::t() const
{
    Matrix result(cols, rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            result.data[j][i] = data[i][j];
    }
    return result;
}
const uint Matrix::numRows() const
{
    return rows;
}
const uint Matrix::numCols() const
{
    return cols;
}
double &Matrix::at(uint row, uint col)
{
    return data[row][col];
}
const double &Matrix::at(uint row, uint col) const // get element at row,col (when using a const object)
{
    return data[row][col];
}

ostream &operator<<(ostream &out, const Matrix &mat)
{
    for (int i = 0; i < mat.rows; i++)
    {
        out << endl;
        for (int j = 0; j < mat.cols; j++)
            out << mat(i, j) << "\t";
    }
    out << endl;
    return out;
}
