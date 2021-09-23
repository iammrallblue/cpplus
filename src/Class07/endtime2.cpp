#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int z;
    cout << "Enter your choice of time (24 hours format): " << endl;
    cin >> x;

    cout << "Enter you choice of another time: " << endl;
    cin >> y;

    z = ((x / 100) + (y / 100)) % 24;

    if (((x % 100) + (y % 100)) > 60)
    {
        z++;
    }

    z = (z * 100) + ((x % 100) + (y % 100));

    cout << "Time is: " << z;
    return EXIT_SUCCESS;
}
