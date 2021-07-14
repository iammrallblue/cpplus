#include <iostream>
#include <string>
#define CAPACITY 1000
using namespace std;

/*

*/

// New contact
struct Contacts
{
    /* data */
    string con_name;
    int con_gender;
    int con_age;
    string con_phone;
    string con_address;
};

// max capacity of new contact
struct Addressbook
{
    /* data */
    struct Contacts contact_array[CAPACITY];
    int con_size;
};

void mainMenu()
{
    cout << "*************************************" << endl;
    cout << "***** \t1. New Contact \t\t*****" << endl;
    cout << "***** \t2. Display Contact\t*****" << endl;
    cout << "***** \t3. Delete Contact\t*****" << endl;
    cout << "***** \t4. Search Contact \t*****" << endl;
    cout << "***** \t5. Edit Contact \t*****" << endl;
    cout << "***** \t6. Purge Contact\t*****" << endl;
    cout << "***** \t0. Exit.  \t \t*****" << endl;
    cout << "*************************************" << endl;
}

// 1. add new contact
void addContact(Addressbook *add_book)
{
    if (add_book->con_size == CAPACITY)
    {
        cout << "Contact is full. Can not add new one." << endl;
        return;
    }
    else
    {
        string first_name;
        cout << "Input Fist Name: " << endl;
    }
}

int main()
{
    Addressbook add_book;
    add_book.con_size = 0;

    // Exit
    int option = 0;
    while (true)
    {
        //call mainMenu() function
        mainMenu();

        cin >> option;

        switch (option)
        {
        case 1: // 1. New Contact
            addContact(&add_book);
            break;

        case 2: // 2. Display contact
            break;
        case 3: // 3. Delete contact
            break;
        case 4: // 4. Search Contact
            break;
        case 5: // 5. Edit contact
            break;
        case 6: // 6. Purge contact
            break;
        case 0: // 0. Exit
            cout << "Exit." << endl;
            system("read");
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}