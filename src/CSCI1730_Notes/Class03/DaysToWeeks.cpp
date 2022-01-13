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

// A constant as days in a week
const int DAY_OF_WEEK = 7;

int main(int argc, char const *argv[])
{
    // variable for days
    int days = 0;
    int weeks, restOfDays;

    // prompt users to input a number to represent days
    cout << "Please input days to convert to weeks: " << endl;
    cin >> days;

    // convert days in weeks
    weeks = days / DAY_OF_WEEK;

    // get remaining days after convertion
    restOfDays = days % DAY_OF_WEEK; // remain days

    cout << "Your input: " << days << " day(s). " << endl;
    cout << days << " is equal to: " << weeks << " week(s) and " << restOfDays << " day(s). " << endl;

    return 0;
} // main
