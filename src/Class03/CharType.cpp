#include <iostream>

using namespace std;

/*
    Ex. 
        converting char type to acsii value;
*/
int main(int argc, char const *argv[])
{
    char ch;
    int acsii_value;

    cout << "input a character: " << endl;
    cin >> ch;

    // converting the input character to acsii value
    acsii_value = (int)ch;

    cout << "The ACSII value of the character " << ch << " is: " << acsii_value << endl;
    return 0;
}
