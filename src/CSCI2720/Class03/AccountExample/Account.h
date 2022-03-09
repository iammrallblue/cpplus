/*
    Account Class Definition (Account.h) (slide52)
        Account class contains data member name and balance
            The variable name stores the account holder's name
            The variable balance stores the account current balance
        
        A class's data members maintain data for each object of the class
        
        Account class also contain member function setName() and getName()

        Constructors and deposit function that each perform validation.
    
    Example Account.h
        Account class that contains a name data member and member function to set and get its value.
*/

#include <string>    // enable program to use C++ string data type ** string is a class in C++
using namespace std; // header files should not contain "using directives" or "using declarations"

class Account
{
public:
    // Account constructor initializes data member name with parameter accountName
    explicit Account(string accountName) //: name{accountName}
    {
        // empty body if using : name{accountName}
        name = accountName;
    }

    // Account constructor with two parameters
    Account(string accountName, int initialBalance)
    {
        name = accountName;

        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0
        if(initialBalance > 0) // if the initialBalance is valid
        {
            balance = initialBalance; // assign it to data member balance
        }
    }

    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount)
    {
        if(depositAmount > 0) // if the depositAmount is valid
        {
            balance = balance + depositAmount; // add it to the balance
        } // if
    } // deposit
    
    // function returns the account balance
    int getBalance() const
    {
        return balance;
    }

    // member function that sets the account name in the object
    void setName(string accountName)
    {
        name = accountName; // store the account name
    }                       // setName

    // member function that retrieves the account name from the object
    // const-modified function, which cannot change the Account object on which it's called
    string getName() const
    {
        return name; // return name's value to this functions's caller
    }

private:
    // data members
    string name;     // data member containing account holder's name
    int balance; // data member with default initial value
};                   // Account class
