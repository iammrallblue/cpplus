#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{
    /** Member Variables */
    int rows;
    int cols;
    double **vals;

    public:
        Matrix(int rows, int cols);
        ~Matrix();
} // Matrix

#endif