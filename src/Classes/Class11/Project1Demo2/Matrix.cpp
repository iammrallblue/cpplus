#include <iostream>
#include "Matrix.h"

using namespace std;

/* ___________ constructors/destructors ____________ */

Matrix::Matrix(uint rows, uint cols) : rows(rows), cols(cols), values(new double *[rows])
{
    for (uint i = 0; i < rows; i++)
    {
        this->values[i] = new double[cols];
    }
} // constructor (all indices of 'values' initialized to 0)

Matrix::Matrix(const i_list &list) : Matrix::Matrix(list.size(), list.begin()->size())
{
    uint row = 0, col = 0;
    for (const initializer_list<double> *i = list.begin(); i != list.end(); i++, row++)
    {
        for (const double *j = i->begin(); j != i->end(); j++, col++)
        {
            this->values[row][col] = *j;
        }
        col = 0;
    }
} // constructor (using initializer list)

Matrix::Matrix(const Matrix &m) : Matrix::Matrix(m.numRows(), m.numCols())
{
    for (uint i = 0; i < rows; i++)
    {
        for (uint j = 0; j < cols; j++)
        {
            values[i][j] = m.at(i, j);
        }
    }
} // copy constructor

Matrix::~Matrix()
{
    for (uint i = 0; i < rows; i++)
    {
        delete[] values[i];
    }
    delete[] values;
} // destructor

// ___________ addition ____________ //

Matrix Matrix::add(double s) const
{
    Matrix temp(this->rows, this->cols);
    for (uint i = 0; i < this->rows; i++)
    {
        for (uint j = 0; j < this->cols; j++)
        {
            temp.at(i, j) = this->at(i, j) + s;
        }
    }
    return temp;
} // add scalar to this matrix

Matrix Matrix::add(const Matrix &m) const
{
    if (this->rows == m.numRows() && this->cols == m.numCols())
    {
        Matrix temp(this->rows, this->cols);
        for (uint i = 0; i < this->rows; i++)
        {
            for (uint j = 0; j < this->cols; j++)
            {
                temp.at(i, j) = this->at(i, j) + m.at(i, j);
            }
        }
        return temp;
    }
    else
    {
        Matrix same(*this);
        return same;
    }
} // add this matrix and another matrix ONLY if dimensions are the same. if not, returns copy of calling matrix.

// ___________ subtraction ____________ //

Matrix Matrix::subtract(double s) const
{
    Matrix temp(this->rows, this->cols);
    for (uint i = 0; i < this->rows; i++)
    {
        for (uint j = 0; j < this->cols; j++)
        {
            temp.at(i, j) = this->at(i, j) - s;
        }
    }
    return temp;
} // subtract scalar from this matrix

Matrix Matrix::subtract(const Matrix &m) const
{
    if (this->rows == m.numRows() && this->cols == m.numCols())
    {
        Matrix temp(this->rows, this->cols);
        for (uint i = 0; i < this->rows; i++)
        {
            for (uint j = 0; j < this->cols; j++)
            {
                temp.at(i, j) = this->at(i, j) - m.at(i, j);
            }
        }
        return temp;
    }
    else
    {
        Matrix same(*this);
        return same;
    }
} // subtract another matrix from this matrix ONLY if dimensions are the same. if not, returns copy of calling matrix.

// ___________ multiplication ____________ //

Matrix Matrix::multiply(double s) const
{
    Matrix temp(this->rows, this->cols);
    for (uint i = 0; i < this->rows; i++)
    {
        for (uint j = 0; j < this->cols; j++)
        {
            temp.at(i, j) = this->at(i, j) * s;
        }
    }
    return temp;
} // multiply this matrix by a scalar

Matrix Matrix::multiply(const Matrix &m) const
{
    if (this->cols == m.numRows())
    {
        Matrix temp(this->rows, m.numCols());
        double sum;
        for (uint i = 0; i < temp.numRows(); i++)
        {
            for (uint j = 0; j < temp.numCols(); j++)
            {
                sum = 0;
                for (uint k = 0; k < this->cols; k++)
                {
                    sum += this->at(i, k) * m.at(k, j);
                }
                temp.at(i, j) = sum;
            }
        }
        return temp;
    }
    else
    {
        Matrix same(*this);
        return same;
    }
} // multiply this matrix by another matrix ONLY if numCols() of the first == numRows() of the second. if not, returns copy of calling matrix.

// ___________ division ____________ //

Matrix Matrix::divide(double s) const
{
    if (s != 0)
    {
        Matrix temp(this->rows, this->cols);
        for (uint i = 0; i < this->rows; i++)
        {
            for (uint j = 0; j < this->cols; j++)
            {
                temp.at(i, j) = this->at(i, j) / s;
            }
        }
        return temp;
    }
    else
    {
        Matrix same(*this);
        return same;
    }
} // divide this matrix by a scalar ONLY if the scalar is not 0. if it is, returns copy of calling matrix.

Matrix Matrix::t() const
{
    Matrix temp(this->cols, this->rows);
    for (uint i = 0; i < temp.numRows(); i++)
    {
        for (uint j = 0; j < temp.numCols(); j++)
        {
            temp.at(i, j) = this->at(j, i);
        }
    }
    return temp;
} // transposition of this matrix

// ___________ numRows/Cols ____________ //

const uint Matrix::numRows() const
{
    return this->rows;
} // returns the number of rows

const uint Matrix::numCols() const
{
    return this->cols;
} // returns the number of cols

// ___________ at() ____________ //

double &Matrix::at(uint row, uint col)
{
    return this->values[row][col];
} // get/set element at row/col

const double &Matrix::at(uint row, uint col) const
{
    return this->values[row][col];
} // get elem at row/col when using a const object

//_____________ member operator overloads _____________ //

// ---- ()

double &Matrix::operator()(uint row, uint col)
{
    return this->at(row, col);
} // Ex. 'a(0,0)'

// ---- =

Matrix &Matrix::operator=(const Matrix &param)
{
    for (uint i = 0; i < rows; i++)
    {
        delete[] values[i];
    }
    delete[] values;

    this->rows = param.numRows();
    this->cols = param.numCols();

    this->values = new double *[this->rows];
    for (uint i = 0; i < this->rows; i++)
    {
        this->values[i] = new double[this->cols];
        for (uint j = 0; j < this->cols; j++)
        {
            this->at(i, j) = param.at(i, j);
        }
    }
    return *this;
} // Ex. 'my_matrix = other_matrix'

// ---- unary -

Matrix Matrix::operator-()
{
    Matrix temp(*this);
    return temp.multiply(-1);
} // Ex. '-my_matrix'

//_____________ non-member operator overloads _____________ //

// ---- +

Matrix operator+(const Matrix &lhs, double rhs)
{
    return lhs.add(rhs);
} // Ex. 'my_matrix + 2.5'

Matrix operator+(double lhs, const Matrix &rhs)
{
    return rhs.add(lhs);
} // Ex. '2.5 + my_matrix'

Matrix operator+(const Matrix &lhs, const Matrix &rhs)
{
    return lhs.add(rhs);
} // Ex. 'my_matrix + other_matrix'

// ---- -

Matrix operator-(const Matrix &lhs, double rhs)
{
    return lhs.subtract(rhs);
} // Ex. 'my_matrix - 2.5'

Matrix operator-(double lhs, const Matrix &rhs)
{
    return rhs.multiply(-1) + lhs;
} // Ex. '2.5 - my_matrix'

Matrix operator-(const Matrix &lhs, const Matrix &rhs)
{
    return lhs.subtract(rhs);
} // Ex. 'my_matrix - other_matrix'

// ---- *

Matrix operator*(const Matrix &lhs, double rhs)
{
    return lhs.multiply(rhs);
} // Ex. 'my_matrix * 2.5'

Matrix operator*(double lhs, const Matrix &rhs)
{
    return rhs.multiply(lhs);
} // Ex. '2.5 * my_matrix'

Matrix operator*(const Matrix &lhs, const Matrix &rhs)
{
    return lhs.multiply(rhs);
} // Ex. 'my_matrix * other_matrix'

// ---- /

Matrix operator/(const Matrix &lhs, double rhs)
{
    return lhs.divide(rhs);
} // Ex. 'my_matrix / 2.5'

Matrix operator/(double lhs, const Matrix &rhs)
{
    Matrix temp(rhs.numRows(), rhs.numCols());
    bool foundZero = false;
    for (uint i = 0; i < temp.numRows(); i++)
    {
        for (uint j = 0; j < temp.numCols(); j++)
        {
            if (rhs.at(i, j) == 0)
            {
                foundZero = true;
                break;
            }
            else
            {
                temp.at(i, j) = lhs / rhs.at(i, j);
            }
        }
        if (foundZero)
        {
            break;
        }
    }
    if (foundZero)
    {
        Matrix same(rhs);
        return same;
    }
    else
    {
        return temp;
    }
} // Ex. '2.5 / my_matrix', ONLY if none of the elements in my_matrix are 0. if a zero is found, a copy of my_matrix is returned.

// ---- <<

ostream &operator<<(ostream &output, const Matrix &rhs)
{
    for (uint i = 0; i < rhs.numRows(); i++)
    {
        output << "[ ";
        for (uint j = 0; j < rhs.numCols(); j++)
        {
            output << rhs.at(i, j);
            if (j < rhs.numCols() - 1)
            {
                output << ", ";
            }
        }
        output << " ]"
               << "\n";
    }
    return output;
} // Ex. 'cout << my_matrix' --> "[1, 2, 3]"
