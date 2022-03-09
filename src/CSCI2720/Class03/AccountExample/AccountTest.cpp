/*
    Test-Driving an Account Object
        main function is refereed to as a driver program.
        main function can "drive" an Account object by
        calling its member functions - w/o
        knowing how the class is implemented.

    Example AccountTest.cpp
        - AccountTest.cpp is the main function located.
*/
#include <iostream>
#include <string>
#include "Account.h" // include Account.h which is Account class inside of it.
using namespace std;

/*
int main()
{
    // create Account object myAccount
    Account myAccount;

    // show that the initial value of myAccount's name is the empty string
    cout << "Initial account name is: " << myAccount.getName();

    // prompt for and read name
    cout << "\nPlease enter the account name: ";

    string theName;
    getline(cin, theName); // read a line of text
    myAccount.setName(theName); // put theName in myAccount

    // display the name stored in object myAccount
    cout << "Name in object myAccount is: " << myAccount.getName() << endl;
} // main
*/

/*
    Using the Account constructor to initilize the name
    data member at the time each Account object created.
*/
/*
int main()
{
    // create two Account objects
    Account account1 = Account("Abby");
    Account account2 = Account("Becky");

    // display initial value of name for each account
    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account2 name is: " << account2.getName() << endl;

    return 0;
} // main
*/
// display account info
void displayAccount(Account accountToDisplay)
{
    // display balances
    cout << "\n\naccount: " << accountToDisplay.getName() << " Balance is $" << accountToDisplay.getBalance();
   

} // displayAccount
/*
    Manipulating Account objects with balances

    Displaying and updating Account balances
*/
int main()
{
    // Creating two Account objects by Account contructor with 2 parameters
    Account account1 = Account("Cindy", 100);
    Account account2 = Account("May", 2);

    // display account info
    displayAccount(account1);
    displayAccount(account2);

    // deposit by calling deposit function
    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // stores user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance

    // display account info
    displayAccount(account1);
    displayAccount(account2);

    // deposit by calling diposit funciton
    cout << "\n\nEnter deposit amout for account2: "; // prompt
    cin >> depositAmount;                             // stores user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2's balance

    // display account info
    displayAccount(account1);
    displayAccount(account2);

    return 0;
}
