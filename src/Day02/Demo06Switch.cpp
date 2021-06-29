#include <iostream>

using namespace std;

/*
    C++ Switch Statements
        Use the switch statement to select one of many code blocks to be executed.

        rating movies (example).
            10 ~ 9, A wonderful movie, fantastic 
            8 ~ 7,  A good movie,
            6 ~ 5,  a general movie,
            5 ~ 1,  bad tomato movie,
        Key Point:
            every case should have a break. 

        This is how it works:
            The switch expression is evaluated once
            The value of the expression is compared with the values of each case
            If there is a match, the associated block of code is executed
            The break and default keywords are optional, and will be described later in this chapter

    difference b/t if and switch statement:
        switch ONLY accepts Integer or string (char) as expressions, can't use an interval or a range.
        the structure of switch statement is clear, and high execution efficiency
*/

int main()
{
    // show rating movie
    cout << "Rating the movie: (1 ~ 10)" << endl;

    int score = 0;
    cin >> score;
    cout << "You rated the movie: " << score << endl;

    switch (score)
    {
    case 10:
        cout << "A wonderful movie, fantastic.";
        break;
    case 9:
        cout << "A wonderful movie, fantastic.";
        break;
    case 8:
        cout << "A good movie.";
        break;
    case 7:
        cout << "A good movie.";
        break;
    default:
        cout << "Error, Input a number from 1 to 10. " << endl;
        break;
    }
    return 0;
}