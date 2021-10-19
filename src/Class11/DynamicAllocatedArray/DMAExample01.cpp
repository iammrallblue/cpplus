#include <iostream>
#include <string>

using namespace std;

// void function for user input
void userInput(int **param_ptr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            cout << "Enter value at index (" << i << ", " << j << "): ";
            cin >> param_ptr[i][j];
        } // inner for
    }     // outer for

} // userInput

// void function for print out matrix result
void print(int **tmp_ptr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            cout << "Enter value at index (" << i << ", " << j << "): \t";
            cout << tmp_ptr[i][j];
        } // inner for
    }     // outer for

    cout << endl;
} // print

int main(int argc, char const *argv[])
{
    int rows, cols;
    cout << "Enter rows of matrix: " << endl;
    cin >> rows;

    cout << "Enter columns of matrix: " << endl;
    cin >> cols;

    // Dynamic Allocation Array for matrix
    // *** new is operator of Dynamic Allocation
    int **mtx_ptr;
    mtx_ptr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        mtx_ptr[i] = new int[cols];
    } // for

    // call userInput function
    userInput(mtx_ptr, rows, cols);

    // call print function
    print(mtx_ptr, rows, cols);

    return 0;
} // main
