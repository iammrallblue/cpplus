#include <iostream>

using namespace std;

template <class ItemType>
void Merge(ItemType values[], int leftFirst, int leftLast, int rightFirst, int rightLast, ItemType tempArray[])
// Post: values[leftFirst]..values[leftLast] and
// values[rightFirst]..values[rightLast] have been merged
// values[leftFirst]..values[rightLast] are now sorted.
{
    int index = leftFirst;
    int saveFirst = leftFirst;
    while ((leftFirst <= leftLast) && (rightFirst <= rightLast))
    {
        if (values[leftFirst] < values[rightFirst])
        {
            tempArray[index] = values[leftFirst];
            leftFirst++;
        }
        else
        {
            tempArray[index] = values[rightFirst];
            rightFirst++;
        }
        index++;
    }
    while (leftFirst <= leftLast)
    // Copy remaining items from left half.
    {
        tempArray[index] = values[leftFirst];
        leftFirst++;
        index++;
    }
    while (rightFirst <= rightLast)
    // Copy remaining items from right half.
    {
        tempArray[index] = values[rightFirst];
        rightFirst++;
        index++;
    }

} // Merge

// Recursive merge sort algorithm
template <class ItemType>
void MergeSort(ItemType values[], int first, int last)
//  Pre: first <= last
//  Post: Array values[first..last] sorted into
//  ascending order.
{
    if (first < last) // general case
    {
        int middle = (first + last) / 2;
        MergeSort(values, first, middle);
        MergeSort(values, middle + 1, last);

        // now merge two subarrays
        // values [ first . . . middle ] with
        // values [ middle + 1,  . . . last ].

        Merge(values, first, middle, middle + 1, last);
    }

} // MergeSort