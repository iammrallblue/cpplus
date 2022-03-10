#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string food = "Pizza";
    string &meal = food; // &meal is a reference variable

    cout << meal << endl;
    cout << "&meal is: " << &meal << endl; // &meal, to get the memory address of variable
    return 0;
}
