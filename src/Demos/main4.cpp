#include <iostream>
#include <bitset>

using namespace std;

//node class defintion
class node
{
public:
    int data;
    node *next;
};

//creating a head node
node *head;

//function defintion
void evenPrint()
{
    //creating a temporary pointer
    node *curr;

    //cheking if the list is empty
    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    //if the list is not empty
    else
    {
        curr = head;
        //using a pos counter to keep track of position of the node
        int pos = 0;

        //use while loop to traverse the list
        while (curr != NULL)
        {
            curr = curr->next;
            pos++;

            //if the position is even then print the data
            if (pos % 2 == 0)
            {
                cout << "Data = " << curr->data;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    evenPrint();
    return 0;
}
