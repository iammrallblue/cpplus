#include <iostream>

using namespace std;

class Matrix
{
    private:
        int ** matrix;
        int mRows;
        int mCols;
    
    public:

        // default constructor
        Matrix()
        {
            mRows = 0;
            mCols = 0;
            matrix = NULL;
        } // 

        Matrix(int rows, int cols)
        {
            srand(time(NULL));

            mRows = rows;
            mCols = cols;
            matrix = new int *[mRows];
            for (int i = 0; i < mRows; i++)
            {
                matrix[i] = new int[mCols];
            }
            
            for (int i = 0; i < mRows; i++)
            {
                for (int j = 0; j < mCols; j++)
                {
                    matrix[i][j] = rand() % 100;
                }
                
            }
            
        } // Matrix

        Matrix(const Matrix &m)
        {
            mRows = m.mRows;
            mCols = m.mCols;

            matrix = new int *[mRows];

            for (int i = 0; i < mRows; i++)
            {
                matrix[i] = new int[mCols];
            }
            
            for (int  i = 0; i < mRows; i++)
            {
                for (int j = 0; j < mCols; j++)
                {
                    matrix[i][j] = m.matrix[i][j];
                }
                
            }
            
        } // Matrix

        ~Matrix()
        {
            for (int i = 0; i < mRows; i++)
            {
                delete[] matrix[i];
            }
            delete[] matrix;
            
        } // ~Matrix

        void printMatrix()
        {
            for (int i = 0; i < mRows; i++)
            {
                for (int j = 0; j < mCols; j++)
                {
                    cout << matrix[i][j] << " ";
                }

                cout << endl << endl;                
            }
            
        }
}; // Matrix


int main(int argc, char const *argv[])
{
    Matrix ma(3,3);
    ma.printMatrix();
    return 0;
}
