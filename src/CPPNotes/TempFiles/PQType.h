class FullPQ(){};
class EmptyPQ(){};
template <class ItemType>
class PQType
{
public:
    PQType(int);
    ~PQType();
    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    void Enqueue(ItemType newItem);
    void Dequeue(ItemType &item);

private:
    int length;
    HeapType<ItemType> items;
    int maxItems;
};
