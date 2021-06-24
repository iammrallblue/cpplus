#include <iostream>

using namespace std;

/*
    Keyword: Break;
        C++ Break Statement:
            It was used to "jump out" of a switch statement.
            The break statement can also be used to jump out of a loop.
        
        Key point:
            When to use break statement:
                1. while using switch statement,  call break statement to terminate case,
                    and exit switch statement.
                    // Donation system example.
                        break in every case statement, 
                2. while using for loop, call break statement to terminate for loop

                3. while using nested loop, call break statement to terminate nested loops. 
*/
int main()
{
    // // Donation system example.

    // // show donation system
    // cout << "Please help our kids: " << endl;
    // cout << "Any amount." << endl;

    // int donate_money = 0;
    // cin >> donate_money;

    // switch (donate_money)
    // {
    // case 5:
    //     cout << "You donated $" << donate_money << endl;
    //     break;
    // case 10:
    //     cout << "You donated $" << donate_money << endl;
    //     break;
    // case 20:
    //     cout << "You donated $" << donate_money << endl;
    //     break;
    // default:
    //     cout << "Thank you for your generosity." << endl;
    //     cout << "You donated $" << donate_money << endl;
    //     break;
    // }

    // // break in for loop
    // for (int i = 0; i <= 10; i++)
    // {
    //     //using break
    //     if (i == 5) {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    // break in while loop
    int x =0;
    while (x <=10) {
        cout << x << "\n";
        x++;
        if (x == 5) {
            break;
        }
    }
    return 0;
}