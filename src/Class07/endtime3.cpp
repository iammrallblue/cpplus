#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
{
    int duration, durationHours, duration_Minutess, time, inputHours, minutes;
    cout << "Enter in a start time: ";
    cin >> time;
    int input2;
    cout << "Enter a duration: ";
    cin >> duration;
    inputHours = time / 100;
    minutes = time - (inputHours * 100);
    durationHours = duration / 100;
    duration_Minutess = duration - (durationHours * 100);
    minutes += duration_Minutess;
    while (minutes > 60)
    {
        inputHours++;
        minutes -= 60;
    }
    time = (inputHours * 100) + minutes;
    if (time >= 2400)
    {
        time -= 2400;
    }
    cout << "End time is: " << time << endl;
    return 0;
}