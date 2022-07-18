#include <iostream>

using namespace std;

template <class ItemType>
int MinIndex(ItemType values[], int start, int end) 
// Post: Function value = index of the smallest value 
// in values [start] . . values [end].
{
    int indexOfMin = start;
    for (int index = start + 1; index <= end; index++)
    {
        if (values[index] < values[indexOfMin])
        {
            indexOfMin = index;
        }
    } // for

    return indexOfMin;

} // MinIndex

template <class ItemType>
void SelectionSort(ItemType values[], int numValues)
// Post: Sorts array values[0 . . numValues-1 ] 
// into ascending order by key
{
    int endIndex = numValues - 1;
    for (int current = 0; current < endIndex; current++)
    {
        Swap(values[current], values[MinIndex(values, current, endIndex)]); // Selection Sort
    }
    
} // SelectionSort
