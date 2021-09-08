#include <iostream>

using namespace std;

/*
    example for if statement
        compare weight of three pigs.
            if ( a > b) {
                if ( a> c){
                    cout a is heaviest. 
                    }
                }
            else if (a < b) {
                if (b < c) {
                    cout c is heaviest.
                }
            }
            else if ( a< b) {
                if (b > c) {
                    cout b is heaviest.
                }
            }
*/

int main()
{
    // three pigs
    int pig_1 = 0;
    int pig_2 = 0;
    int pig_3 = 0;
    cout << "Input the weight of first pig: ";
    cin >> pig_1;

    cout << "Input the weight of second pig: ";
    cin >> pig_2;

    cout << "Input the weight of third pig: ";
    cin >> pig_3;

    // show three pigs' weight
    cout << "The first pig is: " << pig_1 << " LBS" << endl;
    cout << "The second pig is: " << pig_2 << " LBS" << endl;
    cout << "The third pig is: " << pig_3 << " LBS" << endl;

    if (pig_1 == pig_2 == pig_3)
    {
        cout << "Three pigs have same weight " << pig_1 << " LBS" << endl;
    }
    else
    {
        if (pig_1 > pig_2)
        {
            if (pig_1 > pig_3)
            {
                cout << "The pig 1 is heaviest." << endl;
            }
            else
            {
                cout << "The pig 3 is heaviest." << endl;
            }
        }
        else
        {
            if (pig_2 > pig_3)
            {
                cout << "The pig 2 is heaviest." << endl;
            }
            else
            {
                cout << "The pig 3 is heaviest." << endl;
            }
        }
    }

    return 0;
}