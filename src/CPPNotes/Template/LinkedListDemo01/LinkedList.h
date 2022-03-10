#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
struct Nodetype
{
    T info;
    Nodetype<T> *next;
};

template <typename T>
class LinkedList
{
public:
    LinkedList();
    void InsertItem(T item);
    void PrintList();

private:
    Nodetype<T> *head;
    int length;
};

#endif