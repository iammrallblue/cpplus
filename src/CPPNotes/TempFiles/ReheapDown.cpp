//  HEAP SPECIFICATION

//  Assumes  ItemType  is either a built-in simple data
// type or a class with overloaded relational operators.

template <class ItemType>
struct HeapType
{
    void ReheapDown(int root, int bottom);
    void ReheapUp(int root, int bottom);

    ItemType *elements; // ARRAY to be allocated dynamically

    int numElements;
};

//  IMPLEMENTATION  OF RECURSIVE HEAP MEMBER FUNCTIONS

template <class ItemType>
void HeapType<ItemType>::ReheapDown(int root, int bottom)

// Pre:  root is the index of the node that may violate the
// heap order property
// Post: Heap order property is restored between root and bottom

{
    int maxChild;
    int rightChild;
    int leftChild;

    leftChild = root * 2 + 1;
    rightChild = root * 2 + 2;
    if (leftChild <= bottom) // ReheapDown continued
    {
        if (leftChild == bottom)
            maxChild = leftChld;
        else
        {
            if (elements[leftChild] <= elements[rightChild])
                maxChild = rightChild;
            else
                maxChild = leftChild;
        }
        if (elements[root] < elements[maxChild])
        {
            Swap(elements[root], elements[maxChild]);
            ReheapDown(maxChild, bottom);
        }
    }
}
