#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // find the length of a string
    char str[] = "This is a C String.";
    cout << str << endl;
    cout << "sizeof str: " << sizeof(str) << endl;

    // pointer size of pointer
    char *ptr = str;
    //	const char* const ptr = str; // means not changable by pointers
    cout << *ptr << endl;
    cout << "sizeof ptr: " << sizeof(ptr) << endl;

    // replace element in the string.

    *(ptr + 1) = '@';
    cout << ptr[1] << endl;
    cout << str << endl;

    // ptr++; // const ptr, ptr++ will popup errors.

    // for
    for (unsigned int i = 0; i < sizeof(str); i++)
    {
        // cout << prt[i];
        // cout << *(ptr + i); // same the above line
        cout << *(ptr++); // () is not necessary
    }                     // for
    cout << endl;

    return EXIT_SUCCESS;
} // main

// ptr_func
void passPtr(int *ptr)
{
    *ptr = 1;
    int y;
    ptr = &y;
} // passPtr
