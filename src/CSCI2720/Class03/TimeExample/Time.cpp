/*
    Time class member function definitions
        Scope Resolution Operator (作用域解析運算符)
        Syntax:
            Time::member_function()
            the "Time::" tells the compiler that each member function
            is within that class's scope

*/
#include <iostream>
#include <iomanip>   // for setw and setfill stream manipulators
#include <stdexcept> // for invalid_argument exception class
#include <sstream>   // for ostringstream class
#include <string>
#include "Time.h" // include defintion of class Time from Time.h

using namespace std;

// Time constructor initializes each data member to zero.
// Ensures all Time objects start in a consistent state.
Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second); // validate and set time
}

// set new Time value using universal time
// void Time::setTime(int h, int m, int s)
// {
//     // validate hour, minute and second
//     if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
//     {
//         hour = h;
//         minute = m;
//         second = s;
//     }
//     else
//     {
//         // any of the values is out its range, setTime() throws an exception
//         // this throw statement creates a new object of type "invalid_argument"
//         throw invalid_argument("hour, minute or second was out of range");
//     } // if
// } // setTime

// set new Time value using universal time
void Time::setTime(int h, int m, int s)
{
    setHour(h);   // set private field hour
    setMinute(m); // set private field minute
    setSecond(s); // set private field second
} // setTime

// set hour value
void Time::setHour(int h)
{
    if (h >= 0 && h < 24)
    {
        hour = h;
    }
    else
    {
        throw invalid_argument("hour must be 0-23");
    }
} // setHour

// set minute value
void Time::setMinute(int m)
{
    if (m >= 0 && m < 60)
    {
        minute = m;
    }
    else
    {
        throw invalid_argument("minute must be 0-59");
    }

} // setMinute

// set second value
void Time::setSecond(int s)
{
    if (s >= 0 && s < 60)
    {
        second = s;
    }
    else
    {
        throw invalid_argument("second must bve 0-59");
    }

} // setSecond

// return hour value
unsigned int Time::getHour() const
{
    return hour;
} // getHour

// return minute value
unsigned int Time::getMinute() const
{
    return minute;
} // getMinute

// return second value
unsigned int Time::getSecond() const
{
    return second;
} // getSecond

// return time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const
{
    // Object of class ostringstream, output to string objects in memory by str().
    ostringstream output;
    output << setfill('0') << setw(2) << hour << ":"
           << setw(2) << minute << ":" << setw(2) << second;

    return output.str(); // return the formatted string
} // to UniversalString

// return time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const
{
    ostringstream output;
    output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
           << setfill('0') << setw(2) << minute << ":" << setw(2)
           << second << (hour < 12 ? " AM" : " PM");
    return output.str(); // returns the formatted string
}
