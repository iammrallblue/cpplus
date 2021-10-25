#include <iostream>

using namespace std;

/*
    Convert lower letter to upper letter
*/
int main(int argc, char const *argv[])
{
    char lowerCaseLetter, upperCaseLetter;
    int offset;

    cout << "Input a lower case letter: " << endl;
    cin >> lowerCaseLetter;

    offset = (int)(lowerCaseLetter - 'a');  // 'a' is 97
    upperCaseLetter = (char)('A' + offset); // 'A' is 65

    cout << "The upper case of " << lowerCaseLetter << " is " << upperCaseLetter << endl;
    return 0;
}
