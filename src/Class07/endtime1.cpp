#include <iostream>
using namespace std;
int checkTime(int time)
{
    int min = time % 100;  //gets the minutes
    int hour = time / 100; //gets the hours
    if (min >= 60)         //checks if min is > 60 if so adds an hour and subtracts the minutes
    {
        min -= 60;
        hour++;
    }
    hour %= 24;                //mods the hour by 24 incase it's 24+
    time = (hour * 100) + min; //corrects the time format
    return time;
}
void printTime(int time)
{
    if (time < 60)
    {
        cout << "00"; //checks if its like 30 which should be 0030
        if (time < 10)
            cout << "0"; //incase it's like 9 which should be 09
    }
    else if ((time / 100) < 10)
        cout << "0"; //checks if its like 130 which should be 0130
    else if ((time / 100) == 0)
        cout << "00"; //checks if its like 23 which should be 0023
    cout << time;
    cout << endl;
}
int main()
{
    int time, duration;
    cout << "Input the time in 24 hour format: ";
    cin >> time;
    cout << "Input the duration in minutes: ";
    cin >> duration;
    time = checkTime(time);
    cout << "Start time: ";
    printTime(time);
    cout << "Duration: ";
    printTime(duration);
    time = checkTime(time + duration);
    cout << "End time: ";
    printTime(time);
    return 0;
}