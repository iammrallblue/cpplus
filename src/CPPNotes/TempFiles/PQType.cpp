#include <iostream>
#include "PQType.h"

template <class ItemType>
PQType<ItemType>::PQType(int max)
{
    maxItems = max;
    items.elements = new ItemType[max];
    length = 0;
}
template <class ItemType>
void PQType<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
PQType<ItemType>::~PQType()
{
    delete[] items.elements;
}
