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
