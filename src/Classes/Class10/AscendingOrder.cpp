#include <iostream>

using namespace std;

int main()
{
    int i, a[10], temp, j;

    cout << "Enter any 10 num in array: \n";
    for (i = 0; i <= 10; i++)
    {
        cin >> a[i];
    }
    cout << "\nData before sorting: ";
    for (j = 0; j < 10; j++)
    {
        cout << a[j];
    }
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= 10 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "\nData after sorting: ";
    for (j = 0; j < 10; j++)
    {
        cout << a[j];
    }

    return 0;
} // main