#include <iostream>
#include "LinkedList.h"

using namespace std;

template <class T>

// instantiate constructor
LinkedList<T>::LinkedList()
{
    length = 0;
    head = NULL;

} // LinkedList

template <class T>
void LinkedList<T>::InsertItem(T item)
{
    Nodetype<T> *elem = new Nodetype<T>;
    elem->info = item;
    elem->next = NULL;
    if (head == NULL)
    {
        head = elem;
    }

} // InsertItem

template <class T>
void LinkedList<T>::PrintList()
{
    Nodetype<T> *elem = head;
    while (elem != NULL)
    {
        cout << elem->info << " ";
        elem = elem->next;

    } // while

} // PrintList

/**
 * template class LinkedList<int>;
 * template class LinkedList<char>;
 * the assianment needs to declare those template class
 */
