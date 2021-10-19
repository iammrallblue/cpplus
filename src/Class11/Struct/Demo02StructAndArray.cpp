#include <iostream>

using namespace std;

/*
    Structure Array in C++:
        An Array contains all struct datatype elements.
        consider a struct type as an element in the array

        Key point:
            1. The values of each struct datatype element can be re-assginned.

*/
// define a structure Student
struct Student
{
    int age;
    string name;
    int score;
};

int main(int argc, char const *argv[])
{
    // create a structure array (datatype Student)
    Student stu[] = {
        {18, "Bella", 100},
        {19, "Abby", 120},
        {20, "Cathy", 111},
    };

    // print out the original values of the third element in array
    cout << "The original values of stu[2] are: " << endl;
    cout << "Name: " << stu[2].name << " Age: " << stu[2].age << " Score: " << stu[2].score << endl;

    // re-assign values of the element in array
    stu[2].name = "Eva";
    stu[2].age = 17;
    stu[2].score = 150;
    cout << "the values of stu[2] after re-assignned are: " << endl;
    cout << "Name: " << stu[2].name << " Age: " << stu[2].age << " Score: " << stu[2].score << endl;

    // Iterating a structure array
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: " << stu[i].name << "\t"
             << "Age: " << stu[i].age << "\t"
             << "Score: " << stu[i].score << "\t";

        cout << endl; // split three information into 3 lines.
    }                 // for

    return 0;
} // main