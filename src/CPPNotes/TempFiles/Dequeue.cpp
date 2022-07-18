#include <iostream>
#include "PQType.h"

template <class ItemType>
void PQType<ItemType>::Dequeue(ItemType &item)
{
    if (length == 0)
        throw EmptyPQ();
    else
    {
        item = items.elements[0];
        items.elements[0] = items.elements[length - 1];
        length--;
        items.ReheapDown(0, length - 1);
    }
}
