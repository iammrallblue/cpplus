#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

/*
    Stringstream in C++:
        Example 1:
            Divide the string with "words" into separate strings by using stringstream.

        Example 2:
            Convert Deicmal to Hexadecimal using string stream.
*/
int main(int argc, char const *argv[])
{
    // Example 1
    string my_str = "Hello from the dark side,";
    string temp_str;

    // using stringstream to split my_str into word by word.
    stringstream s_stream(my_str);
    vector<string> word;
    while (s_stream >> temp_str)
    {
        // stores the split word from string my_str
        word.push_back(temp_str);
    } // while

    // iterating vector word by for loop
    for (int i = 0; i < word.size(); i++)
    {
        cout << word[i] << endl;
    } // for

    // Example 2:
    int deci = 61;
    stringstream my_sstream;
    my_sstream << hex << deci;
    string my_str_hex = my_sstream.str();
    cout << "The hexadecimal value of " << deci << " is: " << my_str_hex << endl;

    return 0;
} // main
