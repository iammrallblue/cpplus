#include "Matrix.h"

// __________ Main __________ //

int main()
{
    Matrix a(2, 5);                                   // uninitialized 2x5
    Matrix b{{0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9}}; // initialized 5x2
    Matrix c(a);                                      // copy of 'a'
    Matrix d{{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}};       // initialized 2x5

    cout << "Different types of initialization: " << endl;
    cout << "------------------------------------" << endl;
    cout << "2x5 matrix created with row/col constructor:" << endl;
    cout << a << endl;
    cout << "5x2 matrix created with sequence constructor:" << endl;
    cout << b << endl;
    cout << "2x5 matrix created with copy constructor (of 1st matrix):" << endl;
    cout << c << endl;

    cout << "Different operations being performed on matrix: " << endl;
    cout << "---------------------------------------" << endl;
    cout << "~~~ Add/subtract/multiply/divide by scalar 5 ~~~" << endl;
    cout << "Original:" << endl;
    cout << b << endl;
    cout << "After add:" << endl;
    cout << b.add(5) << endl;
    cout << "After subtract:" << endl;
    cout << b.subtract(5) << endl;
    cout << "After multiply:" << endl;
    cout << b.multiply(5) << endl;
    cout << "After divide:" << endl;
    cout << b.divide(5) << endl;
    cout << "~~~ Add/subtract/multiply by another matrix ~~~" << endl;
    cout << "Originals:" << endl;
    cout << b << endl;
    cout << d << endl;
    cout << "After adding the 1st with the 1st:" << endl;
    cout << b.add(b) << endl;
    cout << "After subtracting the 1st from the 1st:" << endl;
    cout << b.subtract(b) << endl;
    cout << "After multiplying the 1st with the 2nd:" << endl;
    cout << b.multiply(d) << endl;
    cout << "~~~ Transposing/negating a matrix ~~~" << endl;
    cout << "Original:" << endl;
    cout << d << endl;
    cout << "Transposed version:" << endl;
    cout << d.t() << endl;
    cout << "Negated version:" << endl;
    cout << -d << endl;

    cout << "Get/set matrix data:" << endl;
    cout << "---------------------" << endl;
    cout << "Original:" << endl;
    cout << a << endl;
    cout << "~~~ Get number of rows/cols ~~~" << endl;
    cout << "numRows() returns: " << a.numRows() << endl;
    cout << "numCols() returns: " << a.numCols() << endl;
    cout << "~~~ Set index values using at(row,col) ~~~" << endl;
    cout << "Setting value at (0,0) = 5, (1,3) = 7, (1,4) = 9 ... " << endl;
    a.at(0, 0) = 5;
    a.at(1, 3) = 7;
    a.at(1, 4) = 9;
    cout << "To prove it, here is the modified matrix:" << endl;
    cout << a << endl;

    cout << "Arithmetic operator overload examples (from p1.pdf):" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Originals:" << endl;
    cout << b << endl;
    cout << d << endl;
    cout << "~~~ 1st + 5.2 ~~~" << endl;
    cout << (b + 5.2) << endl;
    cout << "~~~ 1st + 1st ~~~" << endl;
    cout << (b + b) << endl;
    cout << "~~~ 1st - 3.5 ~~~" << endl;
    cout << (b - 3.5) << endl;
    cout << "~~~ 1st - 1st ~~~" << endl;
    cout << (b - b) << endl;
    cout << "~~~ 1st * 2.1 ~~~" << endl;
    cout << (b * 2.1) << endl;
    cout << "~~~ 1st * 2nd ~~~" << endl;
    cout << (b * d) << endl;
    cout << "~~~ 1st / 2.0 ~~~" << endl;
    cout << (b / 2.0) << endl;
    cout << "(Now swap the order ... )" << endl;
    cout << "~~~ 4.0 + 1st ~~~" << endl;
    cout << (4.0 + b) << endl;
    cout << "~~~ 4.0 - 1st ~~~" << endl;
    cout << (4.0 - b) << endl;
    cout << "~~~ 2.0 * 1st ~~~" << endl;
    cout << (2.0 * b) << endl;
    cout << "~~~ 12.0 / 1st ~~~" << endl;
    cout << (12.0 / b) << endl;
    cout << "Ahh ... did this expression not work? Wrong. It just didn't divide because at least" << endl;
    cout << "one of the index values in the 1st matrix is a 0. Thus, if it had tried 12.0 / 0," << endl;
    cout << "the program would've crashed. This division operator overload works exactly as it should." << endl
         << endl;
    cout << "After changing the lone 0 in the 1st matrix to a 1, this is what the new matrix looks like" << endl;
    cout << "after dividing it into 12.0: " << endl;
    b.at(0, 0) = 1;
    cout << (12.0 / b) << endl
         << endl;

    cout << "Miscellaneous capabilities:" << endl;
    cout << "----------------------------------" << endl;
    cout << "Originals:" << endl;
    cout << a << endl;
    cout << b << endl;
    cout << "~~~ Overloaded function call operator '()' ~~~" << endl;
    cout << "Instead of using 'at(row,col)' to get/set matrix values, we can just" << endl;
    cout << "use the form 'matrix_name(row,col)' and get the same behavior." << endl;
    cout << "After calling '1st_matrix(0,0) = 7':" << endl;
    a(0, 0) = 7;
    cout << a << endl;
    cout << "~~~ Overloaded copy assignment operator '=' ~~~" << endl;
    cout << "Instead of only being able to copy a matrix during construction using" << endl;
    cout << "the copy constructor and taking in another matrix, like 'Matrix b(a)'," << endl;
    cout << "we can accomplish the same behavior using 'b = a'." << endl;
    cout << "After calling '1st_matrix = 2nd_matrix', the 1st looks like this: " << endl;
    a = b;
    cout << a << endl;
    cout << "~~~ Matrix assignment using initializer list ~~~" << endl;
    cout << "Instead of using the sequence constructor to initialize a matrix," << endl;
    cout << "like 'Matrix a{{1,2,3},{4,5,6}}', we can first construct an unitialized" << endl;
    cout << "matrix with a designated size, like 'Matrix a(2,3)' which creates a 2x3 matrix" << endl;
    cout << "with all values still set to the default value of 0, and then we can set the values" << endl;
    cout << "with double-brace initializer list syntax, like 'a = {{1,2,3},{4,5,6}}'." << endl;
    cout << "After calling '1st_matrix = {{1,2,3,4,5},{6,7,8,9,0}}', the 1st matrix looks like this:" << endl;
    a = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}};
    cout << a << endl;

    cout << "Welp, those were the capabilities of my Matrix class. Feel free to play around with your own main() implementations." << endl
         << endl;
    return 0;
} // main