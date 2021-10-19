#ifndef Matrix_h
#define Matrix_h

#include <initializer_list>
#include <iostream>

using namespace std;

typedef unsigned int uint;
typedef initializer_list<initializer_list<double>> i_list;

class Matrix
{
private:
    double **data;
    uint rows, cols;

    void deleteMatrix();

public:
    Matrix(uint rows, uint cols);
    Matrix(const i_list &list);
    Matrix(const Matrix &m);
    Matrix &operator=(const Matrix &M);    // assignment operator
    Matrix &operator=(const i_list &list); // assignment with initializer list
    ~Matrix();
    Matrix add(double s) const;
    Matrix add(const Matrix &m) const;
    Matrix subtract(double s) const;
    Matrix subtract(const Matrix &m) const;
    Matrix multiply(double s) const;
    Matrix multiply(const Matrix &m) const;
    Matrix divide(double s) const;

    friend ostream &operator<<(ostream &out, const Matrix &mat);
    Matrix operator+(double s) const;
    Matrix operator+(const Matrix &m) const;
    Matrix operator-(double s) const;
    Matrix operator-(const Matrix &m) const;
    Matrix operator*(double s) const;
    Matrix operator*(const Matrix &m) const;
    Matrix operator/(double s) const;
    Matrix operator-() const; // unary minus
    double &operator()(uint row, uint col);
    const double operator()(uint row, uint col) const;
    Matrix t() const;
    const uint numRows() const;
    const uint numCols() const;
    double &at(uint row, uint col);
    const double &at(uint row, uint col) const; // get element at row,col (when using a const object)
};                                              // Matrix
#endif                                          /* Matrix_h*/