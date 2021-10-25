#include <iostream>

using namespace std;

/*
    Ex. 
        converting char type to ascii value;

        Arithmetic in char type
*/
int main(int argc, char const *argv[])
{
    char ch;
    int ascii_value;

    cout << "input a character: " << endl;
    cin >> ch;

    // converting the input character to ascii value
    ascii_value = (int)ch;

    cout << "The ASCII value of the character " << ch << " is: " << ascii_value << endl;

    // Arithmetic in char type
    char ch1, ch2;
    ch1 = 'a';
    ch2 = 'a' + 1; // output letter 'b'

    cout << ch2 << endl;     // 'a' + 1 = 'b'
    cout << ch1 + 1 << endl; // output number 98

    return 0;
}
