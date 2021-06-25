#include <iostream>

using namespace std;

/*
    Bubble Sort in C++:
        Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
        to sort an array by ascending.


*/

int main()
{
    // create an unordered array.
    int my_array[] = {4, 3, 6, 5, 9, 8, 1, 2, 0, 7};

    // print the unordered array.
    cout << "The unordered array is: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << my_array[i] << " ";
    }
    cout << endl;

    // ascending by bubble sort
    // set up comparing rounds - 1 which is numbers of element - 1
    for (int i = 0; i < 10 - 1; i++)
    {
        // numbers of loop inside of Array, (to compare all elements one by one)
        for (int j = 0; j < 10 - 1 - i; j++)
        {
            if (my_array[j] > my_array[j + 1])
            {
                int temp = my_array[j];
                my_array[j] = my_array[j + 1];
                my_array[j + 1] = temp;
            }
        }
    }

    // print sorted result by bubble sort
    cout << "The ordered array is: " << endl;
    for (int k = 0; k < 10; k++)
    {
        cout << my_array[k] << " ";
    }
    return 0;
}