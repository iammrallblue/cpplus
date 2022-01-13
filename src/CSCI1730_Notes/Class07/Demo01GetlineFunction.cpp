#include <iostream>
#include <string>

using namespace std;

/*
    getline() function:
        cin:
            when using cin to input, don't include the "space " or "tab ",
            when cin "reads" the space and tab, it will stop "reading".
        to void the cin "space and tab " problem, we use getline() 
        which can read all lines user input.
*/
int main(int argc, char const *argv[])
{
    // how to read a line from  the console in C++
    string my_str, name, city;

    // getline() function will store data to variable my_str
    getline(cin, my_str);
    // cout << "Variable my_str stored the data: " << getline(cin, my_str) << endl;
    cout << "Welcome, " << my_str << endl;

    // to use getline()
    cout << "Input your name: " << endl;
    // cin >> name; // replaced by getline()
    getline(cin, name); // stores input value to variable name

    cout << "Input your city: " << endl;
    // cin >> city;
    getline(cin, city);

    cout << "Hello, " << name << endl;
    cout << "Your city is: " << city << endl;

    // Example 2, getline() function
    char ch[30];
    cout << "Input anything: " << endl;
    cin.getline(ch, 10); //

    // iterating the array ch[30]
    for (int i = 0; i < 10; i++)
    {
        cout << "The " << i + 1 << "'s value is: " << ch[i] << endl;
    } // for

    return 0;
} // main
