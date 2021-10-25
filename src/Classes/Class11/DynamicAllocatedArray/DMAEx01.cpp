#include <iostream>

using namespace std;

class Matrix
{
private:
    int **matrix;
    int X; // Matrix rows
    int Y; // Matrix columns
public:
    // Default Constructor
    Matrix()
    {
        X = 0;
        Y = 0;
        matrix = NULL;
    }
    // Constructor with parameters
    Matrix(int _X, int _Y)
    {
        srand(time(NULL));

        X = _X;
        Y = _Y;
        matrix = new int *[X];

        for (int i = 0; i < X; i++)
            matrix[i] = new int[Y];

        for (int i = 0; i < X; i++)
        {
            for (int j = 0; j < Y; j++)
            {
                matrix[i][j] = rand() % 100;
            }
        }
    }
    // Copy constructor
    Matrix(const Matrix &N)
    {
        X = N.X;
        Y = N.Y;

        matrix = new int *[X];

        for (int i = 0; i < X; i++)
            matrix[i] = new int[Y];

        for (int i = 0; i < X; i++)
        {
            for (int j = 0; j < Y; j++)
            {
                matrix[i][j] = N.matrix[i][j];
            }
        }
    }
    // Destructor
    ~Matrix()
    {
        for (int i = 0; i < X; i++)
            delete[] matrix[X];
    }
    //--------------------------------------
    void ShowMatrixOnScreen()
    {
        for (int i = 0; i < X; i++)
        {
            for (int j = 0; j < Y; j++)
            {
                cout << matrix[i][j] << "   ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix x(4, 2);
    x.ShowMatrixOnScreen();
    return 0;
}