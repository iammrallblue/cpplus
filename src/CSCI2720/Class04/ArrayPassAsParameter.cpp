#include <iostream>
#include <array>

using namespace std;

// constants
const int CAPACITY = 39;

// function prototype
void fillArray(int[], int &);

void printArray(const int[], int); // const to prevent modifying the received array.

int main(int argc, char const *argv[])
{
    // define an array
    int scores[CAPACITY];

    // define the number of element
    int numOfElements = 0;

    // call functions
    fillArray(scores, numOfElements);

    printArray(scores, numOfElements);

    return 0;

} // main

/**
 *  The function fillArray
 * @param int[] - scores of students
 * @param int& - number of students
 *
 */
void fillArray(int newScores[], int &numberOfElements)
{
    int i = 0;
    int score;
    cout << "Type in scores of students (-1 to stop): ";

    while ((score != -1) && (i < CAPACITY))
    {
        numberOfElements++;
        newScores[i] = score;
        i++;
        cin >> score;
    } // while

} // fillArray

/**
 *
 */
void printArray(const int newScores[], int numberOfElement)
{
    cout << "Scores: ";

    // print out by for loop
    for (int i = 0; i < numberOfElement; i++)
    {
        cout << newScores[i] << " ";

    } // for

} // printArray
