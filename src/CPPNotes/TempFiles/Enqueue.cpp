#include <iostream>
#include "PQType.h"

template <class ItemType>
void PQType<ItemType>::Enqueue(ItemType newItem)
{
    if (length == maxItems)
        throw FullPQ();
    else
    {
    
        items.elements[length] = newItem;
        items.ReheapUp(0, length);
        length++;
    }
}
