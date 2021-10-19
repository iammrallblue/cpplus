#include <iostream>

using namespace std;

/*
    Example:
        Self Defined the size and length of an Array
*/
int main(int argc, char const *argv[])
{
    int length;
    cout << "input the legnth of an Array: " << endl;
    cin >> length;

    int *intArr = new int[length];
    for (int i = 0; i < length; i++)
    {
        cin >> intArr[i];
    } // for

    cout << "The Array have elements: " << endl;
    // show all elements in array intArr
    for (int i = 0; i < length; i++)
    {
        cout << intArr[i] << " ";
    }
    return 0;
} // main