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
    // variables for inputs two integers
    int start_time, duration, end_time;

    // input an integer for the starttime;
    cout << "Input the start time: " << endl;
    cin >> start_time;

    cout << "Input a duration: " << endl;
    cin >> duration;

    // get the end time
    end_time = start_time + duration;

    // convert times to 24-hour format;
    int minute = end_time % 100;    // 1234 % 100 = 34
    int hour = int(end_time / 100); // 1234 / 100 = 12 (not tp keep decimals)

    // convert minute if it is over 60, and hour adds 1
    if (minute >= 60)
    {
        minute -= 60;
        hour++;
    }

    // modulus hours if it is over 24, to keep time in 24-hour format
    hour %= 24;

    // assign 24-hour format to variable start_time
    end_time = (hour * 100) + minute;

    // cout << "the converted start time: " << start_time << endl;

    // coverting format if 10 > start_time < 60, add "00" or "0"
    if (end_time < 60)
    {
        cout << "00"; // add 00 to the front of start_time
        if (end_time < 10)
        {
            cout << "0"; // add 0 to the front of start_time
        }
        else if (int((end_time / 100)) < 10)
        {
            cout << "0";
        }
        else if (int((end_time / 100)) == 0)
        {
            cout << "00";
        }
    }

    // result of end time:
    cout << "End Time is: " << (end_time) << endl;

} // main