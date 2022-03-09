#ifndef LIST2_H
#define LIST2_H

#include <iostream>

using namespace std;

template <typename T>
struct Nodetype
{
    T info;
    Nodetype<T> *next;
};

template <typename T>
class List2
{
public:
    List2();
    void InsertItem(T item);
    void PrintList();

private:
    Nodetype<T> *head;
    int length;
};

template <typename T>
List2<T>::List2()
{
    length = 0;
    head = NULL;

} // List2

template <typename T>
void List2<T>::InsertItem(T item)
{
    Nodetype<T> *elem = new Nodetype<T>
                            elem->info = item;
    elem->next = NULL;
    if (head == NULL)
    {
        head = elem;
    }
} // InsertItem

template <typename T>
void List2<T>::PrintList()
{
    Nodetype<T> *elem = head;
    while (elem != NULL)
    {
        cout << elem->info << " ";
        elem = elem->next;

    } // while
    cout << endl;

} // PrintList

#endif
