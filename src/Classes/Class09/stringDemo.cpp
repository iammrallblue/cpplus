#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

    // Null-terminated character sequences to string
    char myntcs[] = "Some Text Here...";
    string my_str = myntcs;
    cout << my_str << endl; // print as a library string

    // string to Null-terminated character sequences
    cout << my_str.c_str() << endl; // print as a c-string

} // mainim