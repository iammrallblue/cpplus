#include <iostream>

using namespace std;

/*
    Using Function Declaration: Declarations (prototypes)
    
        Declaration and Definition are separated.
        Key point:
            1. put the prototype of a function before the function call.
            2. then the function definition after the function call.
            3. A semicolon is needed at the end of a function declaration.
*/

// The Prototype of a function 
int maxFunction(int x, int y); // it is similar with initializing a variable.

int main()
{
    // call maxFunction()
    cout << "The max value is: " << maxFunction(1, 2) << endl;
    return 0;
}

// maxFunction()
int maxFunction(int x, int y)
{
    return x > y ? x : y;
}