#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch = '0';
    char *ch_ptr = &ch;
    // There is an issue when print out &ch or pointer ch_ptr
    // both result will be like "0xb���", unreadable code
    // solution for this issue, is convert them with (void *)
    cout << "&ch is: " << (void *)&ch << endl;       // the address of variable
    cout << "ch_ptr is: " << (void *)ch_ptr << endl; // the address of variable
    // result after added (void *) is 0x7ffee92c323f for both
    cout << "*ch_ptr is: " << *ch_ptr << endl;       // the value of variable
    return 0;
} // main
