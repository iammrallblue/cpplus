// The following definitions go into file ItemType.cpp.
#include <fstream>
#include "ItemType.h"
ItemType::ItemType()
{
}
RelationType ItemType::ComparedTo(ItemType otherItem) const
{
    if (value < otherItem.value)
        return LESS;
    else if (value > otherItem.value)
        return GREATER;
    else
        return EQUAL;
}
void ItemType::Initialize(int number)
{
    value = number;
}
void ItemType::Print(std::ofstream &out) const
// Pre:  out has been opened.
// Post: value has been sent to the stream out.
{
    out << value << " ";
}