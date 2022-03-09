/*
    Time Class Definition "Time.h"
        Separating the Interface from the Implementation, break up class Time
        into two files - the header Time.h, in which class Time is defined,
        and the source-code file Time.cpp
    Member functions are defined in Time.cpp
        #ifndef, #define and #endif preprocessing directives to from an
        include guard that prevents headers form being included more than
        once in a source-code file.
        Syntax: #ifndef TIME_H
                #define TIME_H
*/
#include <string>
using namespace std;

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time
{

public:
    // Constructors
    // Time(); // default hour, minute and second to 0
    explicit Time(int = 0, int = 0, int = 0); // default constructor, if only explicit one existed
    // Time(int,int); // initialize hour and minute; default second to 0
    // Time(int,int,int); // initialize hour, minute and second

    /* Time class member functions */

    // function setTime, to set hour, minute, and second
    void setTime(int, int, int);
    // set functions
    void setHour(int);   // set hour (after validation)
    void setMinute(int); // set minute (after validation)
    void setSecond(int); // set second (after validation)

    // get functions
    unsigned int getHour() const; // return hour
    unsigned int getMinute() const; // return minute
    unsigned int getSecond() const; // return second

    // function toUniversalString set 24-hour time format string
    string toUniversalString() const;

    // function toStandardString set 12-hour time format string
    string toStandardString() const;

private:
    /* Time class data member */
    unsigned int hour;   // 0 - 23 (24-hour format)
    unsigned int minute; // 0 - 59
    unsigned int second; // 0 - 59
};                       // Time class

#endif
