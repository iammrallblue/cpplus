#include <iostream>
#include <string>

using namespace std;

void toLowerCase(string str)
{
    int diff = 'a' - 'A'; // 97 - 65 = 32
    // cout << (int)'a' << endl;

    for (char &ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch += diff;
            cout << ch;
        }
    } // for

    cout << endl;
} // toLowerCase

int main()
{
    // call toLowerCase
    toLowerCase("AFDSFDS");
} // main