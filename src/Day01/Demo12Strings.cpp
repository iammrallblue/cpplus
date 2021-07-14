#include <iostream>
//#include <string> // when using C++ style string, import <string>

using namespace std;

/*
    Strings in C++:
        String Types
            The string type is used to store a sequence of characters (text). 
            This is not a built-in type, but it behaves like one in its most basic usage. 
            String values must be surrounded by double quotes.

        Two styles of String in C++
            1. C lang style 
                char cha_array[] = "This is a C style string.";
            2. C++ lang style
                string str = "This is a C++ style string.";
*/

int main()
{
    // C style
    char str[] = "Hello, World!"; // str is an array
    cout << str << endl;

    // C++ style import <string> before using this style
    string str_value = "Hello, World!!!";
    cout << str_value << endl;

    // C++ String Concatenation (Mehtod 1)
    string first_name = "Bella";
    string last_name = "Wang";
    string full_name = first_name + " " + last_name;
    cout << full_name << endl;

    // C++ String Concatenation by append()  (Method 2)
    string str1 = "Rock ";
    string str2 = "N Roll";
    string rock_n_roll = str1.append(str2);
    cout << rock_n_roll << endl;

    // C++ String Length by length() or size()
    cout << "the length of text is: " << rock_n_roll.length() << endl;
    // or
    cout << "the length of text is: " << rock_n_roll.size() << endl;

    // Access String
    cout << rock_n_roll[0] << endl; // return R

    // Change elements in a String
    str_value[0] = 'Z';
    cout << str_value << endl; // replace H by Z
    return 0;
}