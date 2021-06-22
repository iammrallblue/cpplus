#include <iostream>

using namespace std;

/*
    C++ Assignment Operators
        Assignment operators are used to assign values to variables.

        Operator	    Example	        Same As
        =	            x = 5	        x = 5	
        +=	            x += 3	        x = x + 3	
        -=	            x -= 3	        x = x - 3	
        *=	            x *= 3	        x = x * 3	
        /=	            x /= 3	        x = x / 3	
        %=	            x %= 3	        x = x % 3	
        &=	            x &= 3	        x = x & 3	
        |=	            x |= 3	        x = x | 3	
        ^=	            x ^= 3	        x = x ^ 3	
        >>=	            x >>= 3	        x = x >> 3	
        <<=	            x <<= 3	        x = x << 3        
  
*/

int main()
{
    // =
    int x = 10;
    cout << "x: " << x << endl; // x = 10

    // +=
    x += 2;
    cout << "x+=2: " << x << endl;

    // -=
    x -= 4;
    cout << "x-=4: " << x << endl;

    // *=
    x *= 2;
    cout << "x*=2: " << x << endl;

    // /=
    x /= 4;
    cout << "x/=2: " << x << endl;

    // %=
    x %= 2;
    cout << "x%=2: " << x << endl;
    return 0;
}