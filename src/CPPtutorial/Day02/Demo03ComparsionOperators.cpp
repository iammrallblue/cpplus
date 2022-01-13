#include <iostream>

using namespace std;

/*
    C++ Comparison Operators
        Comparison Operators:
            Comparison operators are used to compare two values, return 0 and 1, (F and T)

        Operator	        Name	                    Example
        ==	                Equal to	                x == y	
        !=	                Not equal	                x != y	
        >	                Greater than	            x > y	
        <	                Less than	                x < y	
        >=	                Greater than or equal to	x >= y	
        <=	                Less than or equal to	    x <= y	

*/

int main()
{
    int x = 10;
    int y = 20;
    bool is_true = x == y; // 0
    cout << "x == y is: " << is_true << endl;

    bool is_true2 = x != y; // 1
    cout << "x != y is: " << is_true2 << endl;

    bool is_true3 = x < y; // 1
    cout << "x < y is: " << is_true3 << endl;

    return 0;
}