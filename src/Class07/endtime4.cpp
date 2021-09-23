#include <iostream>

int main()

{

    using namespace std;

    const int sec_per_min = 60;
    const int min_per_hr = 60;
    const int hr_per_day = 24;

    cout << "Enter numbers of second: ";
    long long seconds;
    cin >> seconds;
    int day, hr, min, sec;

    day = seconds / (sec_per_min * min_per_hr * hr_per_day);
    hr = (seconds - day * hr_per_day * min_per_hr * sec_per_min) / (sec_per_min * min_per_hr);
    sec = seconds % sec_per_min;
    min = (seconds - sec) / sec_per_min % min_per_hr;

    cout << seconds << " seconds = ";
    cout << day << " days, ";
    cout << hr << " hours, ";
    cout << min << " minutes, ";
    cout << sec << " seconds.";
    return 0;
}