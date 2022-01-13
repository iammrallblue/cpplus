#include <iostream>

using namespace std;

/*
    Built-in Datatypes:
        Boolean - boolean - either true (1) or false (0)
            YES/NO, ON/OFF, and 1/0
        Characters - alphabets and all the symbols. Defined using char.
        Integers - whole numbers which can be both positive and negative.
                    Defined using int (4 bytes) or short int (2 bytes)
                    or long int (8 bytes) based on the size of the numbers used.
        Floating point numbers - real numbers (numbers with fractions).
                                    Defined using float and double.
        Valueless using the void keyword
        Wide character using the wchar_t keyword
*/
int main()
{
    // numerical boolean values -1, 0, and 1
    bool boo = -1;
    cout << "boolean value -1: " << boo << endl; // result is 1
    boo = 0;                                     // same as boolean false
    cout << "boolean value 0: " << boo << endl;  // result is 0

    boo = 1;                                    // same as boolean true
    cout << "boolean value 1: " << boo << endl; // result is 1

    boo = 10000; // same as boolean true
    cout << "boolean value 10000: " << boo << endl; // result is 1

    boo = -10000; // same as boolean true
    cout << "boolean value -10000: " << boo << endl; // resut is 1
    return 0;
}
