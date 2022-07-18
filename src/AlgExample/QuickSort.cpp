#include <iostream>
#include "ItemType.h"
using namespace std;

void Split();

template <class ItemType>
inline void Swap(ItemType &item1, ItemType &item2)
// Post: Contents of item1 and item2 have been swapped.
{
    ItemType tempItem;
    tempItem = item1;
    item1 = item2;
    item2 = tempItem;

} // Swap

// Recursive quick sort algorithm

template <class ItemType>
void QuickSort(ItemType values[], int first, int last)

//  Pre:   first <= last
//  Post: Sorts array values[ first .  . last ] into ascending order
{
    if (first < last) //  general case
    {
        int splitPoint;
        Split(values, first, last, splitPoint);
        // values [first]..values[splitPoint - 1] <= splitVal
        // values  [splitPoint] = splitVal
        // values [splitPoint + 1]..values[last] > splitVal
        QuickSort(values, first, splitPoint - 1);
        QuickSort(values, splitPoint + 1, last);
    }
}

void Split(ItemType values[], int first, int last, int &splitPo)
{
    ItemType splitVal = values[first];
    int saveFirst = first;
    bool onCorrectSide;
    first++;
    do
    {
        onCorrectSide = true;
        while (onCorrectSide)
            if (values[first] > splitVal)
                onCorrectSide = false;
            else
            {
                first++;
                // Move first toward la
                onCorrectSide = (first <= last);
            }
        onCorrectSide = (first <= last);
        while (onCorrectSide)
            if (values[last] <= splitVal)
                onCorrectSide = false;
            else
            {
                last--;
                // Move last toward fir
                onCorrectSide = (first <= last);
            }
        if (first < last)
        {
            Swap(values[first], values[last]);
            first++;
            last--;
        }
    } while (first <= last);

    splitPoint = last;
    Swap(values[saveFirst], values[splitPoint]);
}