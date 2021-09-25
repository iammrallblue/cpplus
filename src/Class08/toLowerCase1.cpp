#include <iostream>
#include <string>

using namespace std;

/*
    Example, to convert all letters to the lower case:

*/

string toLowerCase(string str)
{
    for (char &c : str)
    {
        c = tolower(c);
    }
    return str;
} // toLowerCase


int main()
{
    string result = toLowerCase("ASWEFC");
    cout << result << endl;
    return EXIT_SUCCESS;
} // main