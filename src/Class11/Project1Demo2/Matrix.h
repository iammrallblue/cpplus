#ifndef MATRIX_H
#define MATRIX_H

#include <cstdlib>
#include <iostream>
#include <initializer_list>

using namespace std;

typedef unsigned int uint;
typedef initializer_list<initializer_list<double>> i_list;

class Matrix
{
private:
    uint rows;
    uint cols;
    double **values;

public:
    /**
     * Constructor. All elements initialized to 0.
     *
     * @param rows the number of desired rows
     * @param cols the number of desired cols
     */
    Matrix(uint rows, uint cols); // constructor (all elements initialized to 0)

    /**
     * Constructor. Uses initializer list.
     *
     * @param list the reference to the initializer list of doubles passed by the user. these will be the values in the matrix indices
     */
    Matrix(const i_list &list); // constructor (using initializer list)

    /**
     * Copy Constructor.
     *
     * @param m the matrix from which the calling matrix will copy
     */
    Matrix(const Matrix &m); // copy constructor
    
    /**
     * Deallocates memory that was created for 'values'.
     */
    ~Matrix(); // destructor

    /**
     * Adds the scalar s to all of the values of the calling matrix.
     *
     * @param s the double value to add
     * @return new matrix with updated values reflecting the addition by the scalar s
     */
    Matrix add(double s) const;

    /**
     * Adds all the values in the given matrix to all the values in the calling matrix.
     * Note: 2 matrices can only be added if numRows() and numCols() of first == numRows() and numCols() of second
     *
     * @param m the const matrix that will be added to the calling matrix
     * @return new matrix reflecting the addition
     */
    Matrix add(const Matrix &m) const;

    /**
     * Subtracts the scalar s from all the values of the calling matrix.
     *
     * @param s the double value to subtract
     * @return new matrix with updated values reflecting the subtraction by the scalar s
     */
    Matrix subtract(double s) const;

    /**
     * Subtracts all the values in the given matrix from the values of the calling matrix.
     * Note: 2 matrices can only be subtracted if numRows() and numCols() of first == numRows() and numCols() of second
     *
     * @param m the const matrix that will be subtracted from the calling matrix
     * @return new matrix reflecting the subtraction
     */
    Matrix subtract(const Matrix &m) const;

    /**
     * Multiplies all the values in the calling matrix by the specified scalar.
     *
     * @param s the double value to multiply by
     * @return new matrix with updated values reflecting the multiplication by the scalar s
     */
    Matrix multiply(double s) const;

    /**
     * Multiplies all the values in the calling matrix by the values in the given matrix. Uses matrix multiplication rules.
     * Note: 2 matrices can only be multiplied if numCols() of first == numRows() of second.
     *
     * @param m the const matrix that will be multiplied with the calling matrix
     * @return new matrix reflecting the multiplication. size will be numRows() of first x numCols() of second
     */
    Matrix multiply(const Matrix &m) const;

    /**
     * Divides all the values in the calling matrix by the specified scalar.
     *
     * @param s the double value to divide by
     * @return new matrix with updated values reflecting the division by the scalar s
     */
    Matrix divide(double s) const;

    /**
     * Transposes the calling matrix, i.e. swaps the row values with the col values.
     *
     * @return a new, transposed version of the calling matrix
     */
    Matrix t() const;

    /**
     * Gets the number of rows of the calling matrix.
     *
     * @return the number of rows
     */
    const uint numRows() const;

    /**
     * Gets the number of cols of the calling matrix.
     *
     * @return the number of cols
     */
    const uint numCols() const;

    /**
     * Gets the element at row/col index.
     *
     * @param row the row of the desired value
     * @param col the col of the desired value
     * @return the double value at the specified row/col index
     */
    double &at(uint row, uint col);

    /**
     * Gets the element at row/col index. For use with const matrix.
     *
     * @param row the row of the desired value
     * @param col the col of the desired value
     * @return the const double value at the specified row/col index
     */
    const double &at(uint row, uint col) const;

    /**
     * Function call operator overload. Allows access of values at row/col indices of calling matrix without using at() function.
     *
     * @param row the row of the desired value
     * @param col the col of the desired value
     * @return the reference to the double value at the specified row/col index
     */
    double &operator()(uint row, uint col);

    /**
     * Copy assignment operator overload. Copies values from one matrix into another without copy constructor.
     *
     * @param param the reference to the matrix whose values are being copied over
     * @return a reference to the matrix pointed to by 'this'
     */
    Matrix &operator=(const Matrix &param);

    /**
     * Unary minus operator overload. Negates the values of the calling matrix.
     *
     * @return a matrix containing the negated values of the calling matrix
     */
    Matrix operator-();

}; // Matrix

// ___________________ Non-member operator overload prototypes _____________________ //

// ---- +

/**
 * Creates a new matrix whose values reflect the result of the scalar rhs being added to lhs's values.
 *
 * @param lhs the matrix
 * @param rhs the scalar
 * @return a new matrix containing the added values
 */
Matrix operator+(const Matrix &lhs, double rhs);
/**
 * Creates a new matrix whose values reflect the result of the scalar lhs being added to rhs's values.
 *
 * @param lhs the scalar
 * @param rhs the matrix
 * @return a new matrix containing the added values
 */
Matrix operator+(double lhs, const Matrix &rhs);
/**
 * Creates a new matrix whose values reflect the result of lhs's values being added to rhs's values.
 * Note: Only does the addition if dimensions of both matrices are the same
 *
 * @param lhs the left Matrix
 * @param rhs the right Matrix
 * @return a new matrix containing the added values
 */
Matrix operator+(const Matrix &lhs, const Matrix &rhs);

// ---- -

/**
 * Creates a new matrix whose values reflect the result of the scalar rhs being subtracted from lhs's values.
 *
 * @param lhs the Matrix whose values will be subtracted by rhs
 * @param rhs the scalar that will be subtracted from lhs's values
 * @return a new matrix containing the subtracted values
 */
Matrix operator-(const Matrix &lhs, double rhs);
/**
 * Creates a new matrix whose values reflect the result of the scalar lhs being subtracted from rhs's values.
 *
 * @param lhs the scalar that will be subtracted from rhs's values
 * @param rhs the Matrix whose values will be subtracted by lhs
 * @return a new matrix containing the subtracted values
 */
Matrix operator-(double lhs, const Matrix &rhs);
/**
 * Creates a new matrix whose values reflect the result of rhs's values being subtracted from lhs's values.
 * Note: Only does the subtraction if dimensions of both matrices are the same
 *
 * @param lhs the Matrix whose values will be subtracted by rhs's values
 * @param rhs the Matrix whose values will subtract from lhs's values
 * @return a new matrix containing the subtracted values
 */
Matrix operator-(const Matrix &lhs, const Matrix &rhs);

// ---- *

/**
 * Creates a new matrix whose values reflect the result of lhs's values being multiplied by rhs.
 *
 * @param lhs the Matrix whose values will be multiplied
 * @param rhs the scalar to multiply by
 * @return a new matrix containing the multiplied values
 */
Matrix operator*(const Matrix &lhs, double rhs);
/**
 * Creates a new matrix whose values reflect the result of rhs's values being multiplied by lhs.
 *
 * @param lhs the scalar to multiply by
 * @param rhs the Matrix whose values will be multiplied
 * @return a new matrix containing the multiplied values
 */
Matrix operator*(double lhs, const Matrix &rhs);
/**
 * Creates a new matrix whose values reflect the result of multiplying the given 2 matrices.
 * Note: Only does the multiplication if numCols() of lhs == numRows() of rhs
 *
 * @param lhs the left Matrix
 * @param rhs the right Matrix
 * @return a new matrix containing the multiplied values
 */
Matrix operator*(const Matrix &lhs, const Matrix &rhs);

// ---- /

/**
 * Creates a new matrix whose values reflect the result of lhs's values being divided by rhs.
 * Note: Only does the division if the divisor is not 0.
 *
 * @param lhs the dividend
 * @param rhs the divisor
 * @return a new matrix containing the divided values
 */
Matrix operator/(const Matrix &lhs, double rhs);
/**
 * Creates a new matrix whose values reflect the result of rhs's values being divided into lhs.
 * Note: Only does the division if NONE of the index values of the divisor are 0.
 *
 * @param lhs the dividend
 * @param rhs the divisor
 * @return a new matrix containing the divided values
 */
Matrix operator/(double lhs, const Matrix &rhs);

// ---- <<

/**
 * Stream insertion operator overload.
 *
 * @param output the ostream reference into which the matrix output will be directed
 * @param rhs the matrix reference whose data will be directed into the ostream
 * @return reference to the ostream containing the desired matrix output
 */
ostream &operator<<(ostream &output, const Matrix &rhs);

#endif