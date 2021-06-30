#include <iostream>

using namespace std;

/*
    Example of Pointer, Arrays, and Function:
        Encapsulating a function called bubbleSort() to achieve alg bubble sort
        no return value; (void method())

        Encapsulating a function called printArray() to print out Array after sorted by bubble sort
        no return value;
        
*/

// bubbleSort() function for sorting Array
void bubbleSort(int *arr, int len) // int *arr is a pointer, can use int arr[] as well.
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            // if j < j + 1, swap numbers.
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// printArray() function for print out sorted Array
void printArray(int *arr, int len)
{
    // print sorted array
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // create an unordered array.
    int my_array[] = {4, 3, 6, 5, 9, 8, 1, 2, 0, 7};

    // print the original Array by pointer p
    int *p = my_array;
    cout << "The original array is: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    // length of Array
    int len = sizeof(my_array) / sizeof(my_array[0]);

    // call bubbleSort() to sort the Array
    bubbleSort(my_array, len);

    // call printArray() to print the Array
    printArray(my_array, len);
    return 0;
}