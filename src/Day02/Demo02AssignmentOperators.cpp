#include <iostream>

using namespace std;

/*
    C++ Assignment Operators
        Assignment operators are used to assign values to variables.

        Operator	    Example	        Same As             Description
        =	            x = 5	        x = 5	            Simple Assignment Operator
        +=	            x += 3	        x = x + 3	        Add AND assignment operator
        -=	            x -= 3	        x = x - 3	        Subtract AND assignment operator
        *=	            x *= 3	        x = x * 3	        Multiply AND assignment operator
        /=	            x /= 3	        x = x / 3	        Divide AND assignment operator
        %=	            x %= 3	        x = x % 3	        Modulus AND assignment operator
        &=	            x &= 3	        x = x & 3	        Bitwise AND assignment operator.
        |=	            x |= 3	        x = x | 3	        Bitwise inclusive OR and assignment operator.
        ^=	            x ^= 3	        x = x ^ 3	        Bitwise exclusive OR and assignment operator.
        >>=	            x >>= 3	        x = x >> 3	        Right shift AND assignment operator.
        <<=	            x <<= 3	        x = x << 3          Left shift AND assignment operator
  
*/

int main()
{
    // =
    int x = 10;
    cout << "x: " << x << endl; // x = 10

    // +=, x = x + 2;
    x += 2;
    cout << "x+=2: " << x << endl;

    // -=, x = x - 4;
    x -= 4;
    cout << "x-=4: " << x << endl;

    // *=, x = x * 2;
    x *= 2;
    cout << "x*=2: " << x << endl;

    // /=, x = x / 4; 
    x /= 5;
    cout << "x/=2: " << x << endl;

    // %=, x = x % 2; 
    x %= 2;
    cout << "x%=2: " << x << endl;
    return 0;
}