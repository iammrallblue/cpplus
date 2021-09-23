#include <iostream>

using namespace std;

/*
    endtime.cpp: Write a program to read two integers with the 
    following significance. The first integer value represents 
    a time of day on a 24 hour clock, so that 1245 represents 
    quarter to one mid-day, for example. The second integer 
    represents a time duration in a similar way, so that 345 
    represents three hours and 45 minutes. This duration is to
    be added to the first time, and the result printed out in the
    same notation, in this case 1630 which is the time 3 hours 
    and 45 minutes after 12:45. Another example is given below.
    
    
    Enter in a start time: 1415
    Enter in a duration: 50
    End time is: 1505
*/

int main()
{
    // for inputs two integers
    int start_time, duration;

    // convert integers to 24-hour format

    // input an integer for the starttime;
    cout << "Input the start time: " << endl;
    cin >> start_time;

    cout << "Input a duration: " << endl;
    cin >> duration;
    
}