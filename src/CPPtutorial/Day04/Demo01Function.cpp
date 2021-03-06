#include <iostream>

using namespace std;

/*
    Functions:
        1. A function is a block of code which only runs when it is called.
        2. A function is an entity designed to do a task
        3. You can pass data, known as parameters, into a function.
        4. Functions are used to perform certain actions, 
        5. and they are important for reusing code: Define the code once, and use it many times.

        Syntax:
            void myFunction(int x, int y) {}  // x, y are parameters 

            // call myFunction(1,2) // 1,2 are arguments

            A parameter is a variable declared in the header of the function definition; 
            an argument is a value that initializes the parameter when the function is called.

        Key point:
            1. Arguments passing, when calling functions, arguments will pass to parameters.
            2. 

*/

// A function which can add up two int numbers
int myFunction(int x, int y) // x and y are parameters
{
    int sum = x + y;
    return sum;
}

// A function which can exchange numbers. void function w/o return value.
// 
void exchangeNumber(int m, int n)
{
    cout << "Before exchange two numbers: " << endl;
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;

    // exchange number
    int temp;
    temp = m;
    m = n;
    n = temp;

    cout << "After exchange two numbers: " << endl;
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
    // when arguments changed, it won't change parameters.
    return; // can be avoided
}

int main()
{
    // call myFunction, give arguments
    int result = myFunction(4,5);
    cout << result << endl; // 1 and 2 are arguments

    // call exchangNumber function , give arguments
    exchangeNumber(99, 33);

    return EXIT_SUCCESS;
}
