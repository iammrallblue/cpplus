#include <iostream>
using namespace std;

#define DAY 7; // macros

/*
    Constants:
        1. A constant is a storage entity whose value CANNOT BE CHANGED.
        2. A constant is an IMMUTABLE VARIABLE which means it is a READ-ONLY VARIABLE.

        Syntax:
            1. const int MY_NUM = 15;  // MY_NUM is an immutable variable.
                if reassign MY_NUM = 10;  // error: assignment of read-only variable 
            
            2. INT_MAX, the largest value of int type
        
            3. constant definition by using #define preprocessor (Macros, 宏定義)
                #define Day 9
                
                #define macros constant is always defined on the header of cpp file.
                    it can use anywhere in the current cpp file

                *** Macro names cannot be overloaded, 
                    and the macro preprocessor cannot handle recursive calls: ***


            4. const DAY 9;
                    const is ONLY available within its scope
                    
                    fun1() {
                        const VAR = 13;
                    }
                    fun2() {
                        cout << VAR << endl; // ERROR. 
                    }
*/

int main()
{
    const int MIN_PER_HOUR = 60;
    const float PI = 3.141592658579;
    cout << MIN_PER_HOUR << "\n";
    cout << PI << "\n";

    // using #define constant.
    cout << "How many day of week: " << DAY;
    cout << endl;

    return 0;
}