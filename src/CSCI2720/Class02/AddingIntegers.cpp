#include <iostream>
using namespace std;


int main()
{
    // declaring and initializing variables.
    int number1{0}; //  == int number1 = 0;
    int number2{0}; // number2{0} known as list initialization in C++11
    int sum{0};

    cout << "Enter first integer: ";
    cin >> number1; // read first integer from user into number1

    cout << "Enter second integer: ";
    cin >> number2; // read second integer from user into number2

    // add number1 and number2, store result in variable sum
    sum = number1 + number2;

    // display sum; end line
    cout << "Sum is: " << sum << endl; // endl = \n
} // main