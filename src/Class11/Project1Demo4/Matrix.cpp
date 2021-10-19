#include <iostream>
#include "Matrix.h"

using namespace std;

// This is also a initializer list
Matrix::Matrix(int r, int c) : m(r), n(c)
{

   mat = new int *[m];

   for (int i = 0; i < m; i++)
      mat[i] = new int[n];
}

Matrix::Matrix(const Matrix &ma)
{

   m = ma.getRows();
   n = ma.getCols();

   mat = new int *[m];

   for (int i = 0; i < m; i++)
      mat[i] = new int[n];

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         mat[i][j] = ma.at(i, j);
}

Matrix::~Matrix()
{

   delete[] mat;
}

Matrix Matrix::add(int &s)
{

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         mat[i][j] += s;

   return *this;
}

Matrix Matrix::add(Matrix &ma)
{

   int r = ma.getRows();
   int c = ma.getCols();

   if (r != m || c != n)
   {
      cout << "Unable to add matrices of different size" << endl;
      return *this;
   }

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         mat[i][j] += ma.at(i, j);

   return *this;
}

Matrix Matrix::subtract(int &s)
{

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         mat[i][j] -= s;

   return *this;
}

Matrix Matrix::subtract(Matrix &ma)
{

   int r = ma.getRows();
   int c = ma.getCols();

   if (r != m || c != n)
   {
      cout << "Unable to subtract matrices of different size" << endl;
      return *this;
   }

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         mat[i][j] -= ma.at(i, j);

   return *this;
}

Matrix Matrix::multiply(int &s)
{

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         mat[i][j] *= s;

   return *this;
}

Matrix Matrix::multiply(Matrix &ma)
{

   int r = ma.getRows();
   int c = ma.getCols();

   if (n != r)
   {
      cout << "Unable to multiply matrices of incompatible size" << endl;
      return *this;
   }

   Matrix tmp(m, c);

   for (int i = 0; i < m; i++)
      for (int j = 0; j < c; j++)
         for (int k = 0; k < n; k++)
            tmp.at(i, j) += (mat[i][k] * ma.at(k, j));

   delete[] mat;
   *this = tmp;
   this->n = c;

   return *this;
}

Matrix Matrix::divide(int &s)
{

   if (s == 0)
   {
      cout << "Can't divide bye 0" << endl;
      return *this;
   }

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         mat[i][j] /= s;

   return *this;
}

Matrix Matrix::t() // transpose
{
   Matrix tmp(n, m);

   for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
         tmp.at(i, j) = mat[j][i];

   *this = tmp;

   return *this;
}

Matrix Matrix::operator+(int s)
{

   return add(s);
}

Matrix Matrix::operator+(Matrix &s)
{

   return add(s);
}

Matrix Matrix::operator-(int s)
{

   return subtract(s);
}

Matrix Matrix::operator-(Matrix &s)
{

   return subtract(s);
}

Matrix Matrix::operator*(int s)
{

   return multiply(s);
}

Matrix Matrix::operator*(Matrix &s)
{

   return multiply(s);
}

Matrix Matrix::operator/(int s)
{

   return divide(s);
}

ostream &operator<<(ostream &out, const Matrix &ma)
{
   int m = ma.m;
   int n = ma.n;

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cout << ma.mat[i][j] << " ";
      }
      cout << endl;
   }
}

istream &operator>>(istream &in, Matrix &ma)
{
   cout << "enter " << (ma.m * ma.n) << " values separated by space" << endl;

   for (int i = 0; i < ma.m; i++)
      for (int j = 0; j < ma.n; j++)
         in >> ma.mat[i][j];
}

Matrix &Matrix::operator=(const Matrix &ma)
{

   int r = ma.getRows();
   int c = ma.getCols();

   this->m = r;
   this->n = c;

   mat = new int *[m];

   for (int i = 0; i < m; i++)
      mat[i] = new int[n];

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         mat[i][j] = ma.at(i, j);

   return *this;
}

int &Matrix::at(int r, int c)
{
   return mat[r][c];
}

const int &Matrix::at(int r, int c) const
{

   return mat[r][c];
}
