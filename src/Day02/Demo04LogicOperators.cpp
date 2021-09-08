#include <iostream>

using namespace std;

/*
    C++ Logical Operators
        Logical Operators
        Logical operators are used to determine the logic between variables or values:

        Operator	        Name	        Description	                                                Example	Try it
        && 	                Logical and	    Returns true if both statements are true	                x < 5 &&  x < 10	
        || 	                Logical or	    Returns true if one of the statements is true	            x < 5 || x < 4	
        !	                Logical not	    Reverse the result, returns false if the result is true	    !(x < 5 && x < 10)
*/

int main()
{
    // ! logical not
    int x = 10;         // x is true which is 1
    cout << !x << endl; // !x return false which is 0

    cout << !!x << endl; // !!x return true, b/c reversed false is true which is 1

    // && logical and
    int m = 10; // m is true, non-zero
    int n = 15; // n is true, non-zero
    cout << (m && n) << endl; // 1 true. because m and n are both true (1),

    m = 0;
    cout << (m && n) << endl; // 0 false, because m is 0 which is false.

    n = 0;
    cout << (m && n) << endl; // 0 false, because m and n are 0, which is false.

    // || logical or
    int a = 10;
    int b = 10;
    cout << (a || b) << endl; // true 1

    a = 0;
    b = 10;
    cout << (a || b) << endl; // true 1

    a = 0;
    b = 0;
    cout << (a || b) << endl; // false 0
    return 0;
}