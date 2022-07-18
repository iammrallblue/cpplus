#include <iostream>

using namespace std;

/*
    Error Notes:

        1. Compiling Errors
            error: expected ';' after expression
                cout << "Compiling Errors. " << endl
                1 error generated.

            This is a compiling error.

            Correct Format: 
                cout << "Compiling Error. " << endl;

        2. Runtime Errors
                warning: expression result unused [-Wunused-value]
                    1/0;
    
                warning: division by zero is undefined [-Wdivision-by-zero]
                    1/0;
                2 warnings generated.

                warning: division by zero is undefined [-Wdivision-by-zero]
                    int value = 1/0;
                    1 warning generated.
        3. Warnings
*/
int main(int argc, char const *argv[])
{
    // Compiling Errors

    // cout << "Compiling Errors. " << endl  // compiling error orrcured.
    cout << "Compiling Errors. " << endl;

    // Runtime Errors

    // 1/0;
    int value = 1/0;
    cout << value << endl;

    return 0;
} // main
 