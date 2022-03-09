#include "LinkedList.h"

int main()
{
    LinkedList<int> intList;
    intList.InsertItem(5);
    intList.PrintList();
    LinkedList<char> charList;
    charList.InsertItem('a');
    charList.PrintList();

    return 0;

} // main
