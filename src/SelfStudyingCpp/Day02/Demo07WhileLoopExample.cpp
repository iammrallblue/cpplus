#include <iostream>
#include <ctime>

using namespace std;

/*
    Example:
        Randoming a guessing number within range 0 to 100.

        Steps of Guessing number example:
            ** srand((unsigned int)time(NULL));
                to prevent generating same number each time by srand() function.
            1. generate a random number by rand() function.
            2. user input a guessing number.
            3. matching guessing and random number
            4. matched , exit game
            5. not match , guessing number is too larger.
                or guessing number is too smaller.
*/

int main()
{
    // random number seed to prevent the same random number each time.
    srand((unsigned int)time(NULL));

    // generating a random number (range 1 - 100)
    // beware that rand() % 100 will be ONLY generated a number from 0 to 99,
    // therefore, + 1 will be extended range to 1 ~ 100.
    int random_number = rand() % 100 + 1; // rand() % 100 + 1 = (1 to 100)
    
    // // show the random number which is the answer.
    // cout << "The random number is: " << random_number << endl; 

    int user_guessing = 0;

    while (1)
    {
        cout << "Input your guessing number: ";
        cin >> user_guessing;

        if (user_guessing > random_number)
        {  
            cout << "Too large." << endl;
        }
        else if (user_guessing < random_number)
        {
            cout << "Too small." << endl;
        }
        else
        {
            cout << "Bingo!!" << endl;
            cout << "The number is: " << user_guessing << endl;
            break; // if number is matched, exit code.
        }
    }
    return 0;
}