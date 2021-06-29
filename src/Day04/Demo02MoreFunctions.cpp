#include <iostream>

using namespace std;

/*
    Four Categories of Functions:
        1. Void function with no parameters 
            void myFunction() {
                    1) The function takes no parameters and returns nothing
                    2) Can't use it where a value is needed.
                return; // can be voided.
            }
        2. Void function with parameters
            void myFunction(type parameters...) {
                     1) The function is passed values (arguments) that sit in the place of parameters.
                     2) has a side effect but does not return data.
                     3) used when we need only the side effect of the function but we also need to pass some information
                return; // can be voided.
            }
        3. Value-returning function with no parameters 
            type myFunction() {
                    1) function is designed only for its return value.
                    2) normally has an input side effect and 
                        returns the input value to the calling function.
                    3) a good choice for the input module in the input-process-output design
                return value; // value should be the same type of the function type.
            }
        4. Value-returning function with parameters
            type myFunction(type parameters ...) {
                return value; 
            }
*/

// Void function with no parameters.
void voidFunction()
{
    cout << "This is a void function with no parameters" << endl;
}

// Void function with parameters.
void voidFuncion2(int x)
{
    cout << "This is a void function with parameters." << endl;
    cout << "Parameter is received: " << x << endl;
}

void patternFunction(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "*_*"
                 << " ";
        }
        cout << endl;
    }
}

// Value-returning function with no parameters.
int myFunction()
{
    cout << "Value-returning function with no parameters." << endl;
    return 666;
}

int getData()
{
    int data;
    do
    {
        cout << "Input a positive integer: ";
        cin >> data;
    } while (data <= 0);
    return data;
}

// Value-returning function with parameters.
int largerCom(int x, int y)
{
    int max;
    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    return max;
}

int main()
{
    // // call functions
    // voidFunction();

    // voidFuncion2(2333); // pass an argument.

    // int pattern_size;
    // do
    // {
    //     cout << "Input a pattern size: " << endl;
    //     cin >> pattern_size;
    // } while (pattern_size <= 0);
    // // call patternFunction
    // patternFunction(pattern_size);

    // int var = myFunction();
    // cout << "The return value of myFunction() is: " << var << endl;

    // // call getData() function
    // int number = getData();
    // cout << "Right-most digit: " << number % 10 << endl;

    int fst_number, snd_number;
    // input numbers
    cout << "Input the first number: " << endl;
    cin >> fst_number;
    cout << "Input second number: " << endl;
    cin >> snd_number;
    // call largerCom() function
    int max_number = largerCom(fst_number, snd_number);
    cout << "The max value of " << fst_number << " and " << snd_number << " is: " << max_number;
    return 0;
}