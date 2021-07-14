#include <iostream>

using namespace std;

/*
    Booleans:
        C++ has a bool data type, which can take the values true (1) or false (0).
*/

int main()
{
    bool is_true = true;
    bool is_email = false;

    // sizeof()
    cout << "Size of boolean variable " << "is_true" << " is: " << sizeof(is_true) << endl;
    cout << "Size of boolean value false: " << sizeof(false) << endl;

    return 0;
}