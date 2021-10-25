#include <iostream>
#include <string>

using namespace std;

/*
    How to input those data types by cin function from <iostream>
        1. Integer
            int x = 0;

        2. Float point
        3. Character
        4. String
        5. Boolean
*/
int main()
{
    // 1. Integer
    int x = 0;
    cout << "Input a value for variable x: " << endl;
    cin >> x;
    cout << "The input number " << x << " is assigned to x." << endl;

    // // 2. Float point
    // float y = 3.24F;
    // cout << "Input a float number: " << endl;
    // cin >> y;
    // cout << "The input float number is: " << y << endl;

    // 3. Character
    // char ch = 'a';
    // cout << "Input a letter: " << endl;
    // cin >> ch;
    // cout << "The input letter is: " << ch << endl; 

    // 4. String
    string str = "Bella";
    cout << "Input a string: " << endl;
    cin >> str;
    cout << "The input string is: " << str << endl;

    return EXIT_SUCCESS;
}