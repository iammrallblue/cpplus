#include <iostream>
#include <string>

using namespace std;

/*
    Two-Dimensional Arrays Example:
        declare an Array to store three people's final scores,
        which array is [3]by [3]
*/
int main()
{
    // declare an array[3][3]
    int score[3][3] = {
        {90, 99, 95},
        {91, 95, 89},
        {99, 100, 94}};

    // array for student names;
    string names[3] = {"Bella", "Abby", "Danielle"};

    // iterating Array
    for (int i = 0; i < 3; i++) // for rows
    {
        int sum = 0;                // amount of scores.
        for (int j = 0; j < 3; j++) // for columns
        {
            sum += score[i][j]; // sum up all scores.
            // cout << score[i][j] << " ";
        }
        cout << "Total score of " << names[i] << " is: " << sum << endl; // i+1 to show which person's score
    }
    return 0;
}