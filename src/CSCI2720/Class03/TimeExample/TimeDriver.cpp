/**
 *  Program to test class Time
 *  NOTE: This file MUST BE compiled with Time.cpp
 *
 *  Constructor with default arguments
 */

#include <iostream>
#include <stdexcept> // invalid_argument exception class.
#include "Time.h"    // definition of class Time from Time.h

using namespace std;

// displays a Time in 24-hour and 12-hour formats
void displayTime(const string &message, const Time &time)
{
    cout << message << "\nUniversal time: " << time.toUniversalString()
         << "\nStandard time: " << time.toStandardString() << "\n\n";

} // displayTime

// int main(int argc, char const *argv[])
// {
//     // instantiate object t of class Time
//     Time t;

//     displayTime("Initial time: ", t);  // display t's initial value
//     t.setTime(13, 27, 6);              // change time
//     displayTime("After setTime: ", t); // display t's new value

//     // attempt to set the time with invalid values
//     try
//     {
//         t.setTime(99, 99, 99); // all values out of range
//     }
//     catch (invalid_argument &e) // const std::exception& e
//     {
//         // std::cerr << e.what() << '\n';
//         cout << "Exception: " << e.what() << "\n\n";
//     }

//     // display t's value after attempting to set an invalid time
//     displayTime("After attempting to set an invalid time: ", t);

//     return 0;
// } // main

// Constructor with default arguments
int main(int argc, char const *argv[])
{
    Time t1;                    // all arguments defaulted
    Time t2 = Time(2);          // hour specified; minute and second defaulted
    Time t3 = Time(21, 34);     // hour and minute specified; second defaulted
    Time t4 = Time(12, 25, 42); // hour, minute and second specified.

    cout << "Constructed with:\n\n";
    displayTime("t1: all arguments defaulted", t1);
    displayTime("t2: hour specified; minute and second defaulted", t2);
    displayTime("t3: hour and minute specified; second defaulted", t3);
    displayTime("t4: hour, minute and second specified", t4);

    // attempt to initialize t5 with invalid values
    try
    {
        Time t5 = Time(27, 74, 99); // all bad values specified
        displayTime("t5", t5);
    }
    catch (invalid_argument &e)
    {
        cerr << "Exception while initializing t5: " << e.what() << endl;
    }

    return 0;
} // main
