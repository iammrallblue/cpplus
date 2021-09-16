#include <iostream>

using namespace std;

/*
    Selective Control/Condition Control in C++:
        1. is a statement or set of statements to execute on the basis of a condition. 

        2. statement or set of statements is executed when a particular condition 
            is true and ignored when the condition is false. 
        
        There are different types of selection structures in C++ like:
·         IF Statement
            Example, if score greater than 600, students can go IVY colleges
·         IF...ELSE Statement

          If ... else if ... else if ... else ... statement
            example:
                The first batch of undergraduate, score > 600
                The second batch of undergraduate, score > 500
                The third batch of undergraduate, score > 400
                else < 400 
          Nested if ... else statement

·         SWITCH Statement

*/
int main()
{
    // 1. Condition and single if statement
    int score = 0;
    // cout << "Input the score: " << endl;
    // cin >> score;

    // cout << "your score is: " << score << endl;

    // if (score >= 600)
    // {
    //     cout << "You can go IVY colleges." << endl;
    // }

    // 1. Condition and if ... else ... statement
    // cout << "Input your score: ";
    // cin >> score;
    // cout << "Your score is: " << score << endl;

    // if (score >= 600)
    // {
    //     cout << "You can go IVY colleges.";
    // }
    // else
    // {
    //     cout << "You can go Community Colleges.";
    // }

    // 2. Condition and if ... else ... statement
    // int num;
    // cout << "Input a number: " << endl;
    // cin >> num;

    // if (num >= 0)
    // {
    //     cout << num << " is a positive number.";
    // }
    // else
    // {
    //     cout << num << " is a negative number.";
    // }

    // 1. Condition and if ...else if ... else if ... else ... statement
    // cout << "Input your score: ";
    // cin >> score;
    // cout << "Your score is: " << score << endl;

    // if (score >= 600)
    // {
    //     cout << "You are intended to the first batch of undergraduate.";
    // }
    // else if (score >= 500)
    // {
    //     cout << "You are intended to the second batch of undergraduate.";
    // }
    // else if (score >= 400)
    // {
    //     cout << "You are intended to the third batch of undergraduate.";
    // }
    // else
    // {
    //     cout << "You are intended to the community colleges. ";
    // }

    // 2. Condition and if ...else if ... else if ... else ... statement
    // int num;
    // cout << "input a number: " << endl;
    // cin >> num;

    // if (num > 0)
    // {
    //     cout << num << " is a positive number." << endl;
    // }
    // else if (num < 0)
    // {
    //     cout << num << " is a negative number." << endl;
    // }
    // else
    // {
    //     cout << num << " is zero." << endl;
    // }


    // 1. Nested if ... if ... else if... else .... statement
    // cout << "Input your score: ";
    // cin >> score;
    // cout << "Your score is: " << score << endl;

    // if (score >= 600)
    // {
    //     cout << "You can go the first batch undergraduate." << endl;
    //     if (score >= 700)
    //     {
    //         cout << "You can go studying aboard MIT." << endl;
    //     }
    //     else if (score >= 650)
    //     {
    //         cout << "You can go studying aboard Harvard." << endl;
    //     }
    // }
    // else if (score >= 500)
    // {
    //     cout << "You can go the second batch undergraduate." << endl;
    // }
    // else if (score >= 400)
    // {
    //     cout << "You can go the third batch undergraduate." << endl;
    // }
    // else
    // {
    //     cout << "You can go the community colleges." << endl;
    // }
    return 0;
}