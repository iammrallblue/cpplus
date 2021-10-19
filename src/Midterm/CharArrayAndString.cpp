#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // char array
    // const char ch[] = {'H', 'e', 'l', 'l', 'o'}; // H e l l o p b  � �  %

    // '\0' is null character, to determine the end of elements in an array
    // const char ch[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // H e l l o
    
    const char ch[] = "Hello"; // H e l l o

    // const char ch[5] = {'H', 'e', 'l', 'l', 'o'};

    // char pointer pointes to char array
    const char *ch_prt = ch;

    while (*ch_prt)
    {
        cout << *ch_prt << " ";
        ++ch_prt;

    } // while

    return 0;
} // main
