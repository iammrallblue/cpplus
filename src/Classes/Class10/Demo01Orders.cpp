#include <iostream>

using namespace std;

// Bubble Sort Function
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // compare two element beside each other
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
} // bubbleSort

// Selection Sort Function
void choiceSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
        {

            // if j is smaller than m, assigning j to m
            if (arr[j] < arr[m])
            {
                m = j;
            }
        }
        // swap the positions of m and i
        if (i != m)
        {
            int t = arr[i];
            arr[i] = arr[m];
            arr[m] = t;
        }
    }
} // choiceSort

// Insertion Sort Function
void insertSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
            if (j == -1)
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
} // insertSort()

// Quick Sort Function
void quickSort(int *arr, int l, int r)
{
    // block of code for quick sort alg.
    int i, j, x, temp;
    if (l < r)
    {
        i = l;
        j = r;
        x = arr[(l + r) / 2];

        // take the middle element
        while (1)
        {
            while (i <= r && arr[i] < x)
                i++;
            while (j >= 0 && arr[j] > x)
                j--;
            if (i >= j) // skip if i is greater than j
                break;
            else
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                //swap
            }
        }
        quickSort(arr, l, i - 1); // quick sort for the left part
        quickSort(arr, j + 1, r); // quick sort for the right part
    }
}

int main()
{

    int i;
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10};

    //bubbleSort(a,10);
    //choiceSort(a,10);
    //insertSort(a,10);
    quickSort(a, 0, 9);

    for (i = 0; i <= 9; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}