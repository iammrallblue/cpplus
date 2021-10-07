#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Ex.
        Input a number represent days,
        converting days to weeks.

         key points:
            1. days in a week is 7, 
                it can be set as a constant
*/

// a constant represent days in a week
const int A_WEEK = 7;

int main(int argc, char const *argv[])
{
    // days
    int days = 0;
    int full_week, remaining_day;
    // prompt users to input a number to represent days
    cout << "Please input a number to represent days: " << endl;
    cin >> days;

    full_week = days / A_WEEK;     // covert days to weeks
    remaining_day = days % A_WEEK; // get remaining days

    cout << "You input: " << days << endl;
    cout << days << " is equal to: " << full_week << " week(s) and " << remaining_day << " day(s)." << endl;

    return 0;
}
