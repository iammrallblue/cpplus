#include <iostream>

using namespace std;

template <class ItemType>
void HeapSort(ItemType values[], int numValues)

//  Post: Sorts array values[ 0 . . numValues-1 ] into
//   ascending order by key
{
    int index;

    // Convert array  values[0..numValues-1] into a heap
    for (index = numValues / 2 - 1; index >= 0; index--)
        ReheapDown(values, index, numValues - 1);

    //  Sort the array.
    for (index = numValues - 1; index >= 1; index--)
    {
        Swap(values[0], values[index]);
        ReheapDown(values, 0, index - 1);
    }
}

template <class ItemType>
void ReheapDown(ItemType values[], int root, int bottom)

//  Pre:  root is the index of a node that may violate the
//    heap order property
//  Post:  Heap order property is restored between root and
//    bottom

{
    int maxChild;
    int rightChild;
    int leftChild;

    leftChild = root * 2 + 1;
    rightChild = root * 2 + 2;
    if (leftChild <= bottom) // ReheapDown continued
    {
        if (leftChild == bottom)
            maxChild = leftChild;
        else
        {
            if (values[leftChild] <= values[rightChild])
                maxChild = rightChild;
            else
                maxChild = leftChild;
        }
        if (values[root] < values[maxChild])
        {
            Swap(values[root], values[maxChild]);
    ReheapDown ( maxChild, bottom  ;
        }
    }
}
