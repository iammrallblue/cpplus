#include <iostream>

using namespace std;

/*
    C++ Operators:
        Operators are used to perform operations on variables and values.
        1. Arithmetic Operators:
            Arithmetic operators are used to perform common mathematical operations.

        Operator	                Name	                        Description	                                Example
            +	                    Addition	                    Adds together two values	                x + y	
            -	                    Subtraction	                    Subtracts one value from another	        x - y	
            *	                    Multiplication	                Multiplies two values	                    x * y	
            /	                    Division	                    Divides one value by another	            x / y	
            %	                    Modulus	                        Returns the division remainder	            x % y	
            ++	                    Increment	                    Increases the value of a variable by 1	    x++/++x	
            --	                    Decrement	                    Decreases the value of a variable by 1	    x--/--x	
        Key point:
            double or float can't use modulus. modulus is ONLY for Integer

*/
int main()
{
    // Arithmetic Operators: + - * /
    int x = 10;
    int y = 20;

    cout << "%d + %d = (&x, &y)" << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl; // 0, x and y are int

    // % Modulus
    int m = 10;
    int n = 3;
    cout << m % n << endl; // 1

    int a = 10;
    int b = 20;
    cout << "a % b: " << a % b << endl; // 10

    int c = 10;
    int d = 0;
    // cout << "c % d: " << c % d << endl;
    // ERROR floating point exception. modulus is based on division,
    // two number will bee divided first, but dividend can't be ZERO,

    // pre-increment
    // ++x;
    // cout << "++x is: " << x << endl; // 11
    // int z = ++x * 10; // ++x is 12, 12 * 10 = 120
    // cout << "z = " << z << endl; // 120

    // post-increment
    x++;
    cout << "x++ is: " << x << endl; // 11

    int z = x++ * 10;   // x++ is still 11, 11 * 10 = 110
    cout << "z = " << z << endl; // 110
    return 0;
}