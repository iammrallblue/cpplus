#include <iostream>
#include <string>

using namespace std;

string toLowerCase(string str)
{
    string result = "";
    for (char ch : str)
    {
        result += tolower(ch);
    }
    return result;
} // toLowerCase

int main()
{
    string result = toLowerCase("DSFDS");
    cout << result << endl;
} // main