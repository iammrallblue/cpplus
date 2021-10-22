#include <iostream>

using namespace std;

// search function, the alg for searching item
int search(int arr[], int length, int item)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == item)
        {
            return i;
        } // if
    }     // for
    return -1;
} // search

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 4, 7, 8, 77, 84, 33, 100};
    int number;
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "input a number to check if the number is in the array: " << endl;
    cin >> number;

    // call function
    int result = search(arr, length, number);
    if (result == -1)
    {
        cout << "The number is not is the array.";
    }
    else
    {
        cout << "Number " << number << " is in the array." << endl;
    }
    return 0;
} // main