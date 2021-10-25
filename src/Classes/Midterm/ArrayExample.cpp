#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    // declare an array, size of array is 5
    int my_arr[5];

    // using pointer to get the length of the array
    int length = *(&my_arr + 1) - my_arr;
    // int lenght = sizeof(my_arr)/ sizeof(my_arr[0]);

    // for loop to input all elements into the array
    for (int i = 0; i < length; i++)
    {
        cout << "input " << (i+1) << " elemnt into the array: "; // (i+1) is number of element
        cin >> my_arr[i];
    }

    // print out all elements in array
    for (int j = 0; j < length; j++)
    {
        cout << my_arr[j] << " ";
    } // for

    cout << endl;
    return 0;
} // main
