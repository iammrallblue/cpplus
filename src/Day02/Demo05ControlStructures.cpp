#include <iostream>

using namespace std;

/*
    Control Structures in C++:

        THREE types of Control Structures:
            A. Sequential Control: GOTO and NULL Statements
                1. Statements executed one after the other in the order written
                2. We can write as many statements as we want but all statements are executed exactly once.
                2. Sequential Control can be executed with GOTO or NULL statements, but it's not crucial.
                    It means that no statement is skipped and no statement is repeated as in sequential control.

            B. Selective Control/Conditional Control: If, if/else, and switch statements 
                1. Program executed is based on conditional statement.
                    (See Demo06Conditions.cpp)

            C. Iteration Control/Loop Control: LOOP and EXIT Statements
                1. programmer to specifies an action to be repeated while some condition remains TRUE.  
                2. LOOP: for, for...while, while, do...while

        REF:
            https://docs.oracle.com/cd/A87860_01/doc/appdev.817/a77069/03_struc.htm#484
        
*/
int main()
{
    // Selective Control (Single if example)
    int score = 0;
    cout << "Input a score: " << endl;
    cin >> score; // cin, to assgin input number to variable score

    // print out input number
    cout << "Your input score: " << score << endl;

    // single if statement to determin if score is greater than 60, if true, print out passed test.
    if (score >= 60)
    {
        cout << "You passed test." << endl;
    }

    return 0;
}