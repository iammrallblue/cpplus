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

//  IMPLEMENTATION		continued

template <class ItemType>
void HeapType<ItemType>::ReheapUp(int root, int bottom)

//  Pre:  bottom is the index of the node that may violate the heap
//  order property.  The order property is satisfied from root to
//  next-to-last node.
//  Post:  Heap order property is restored between root and bottom

{
    int parent;

    if (bottom > root)
    {
        parent = (bottom - 1) / 2;
        if (elements[parent] < elements[bottom])
        {
            Swap(elements[parent], elements[bottom]);
            ReheapUp(root, parent);
        }
    }
}
