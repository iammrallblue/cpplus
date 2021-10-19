#include <iostream>

using namespace std;

/*
    Struct Practice
        3 TAs teach 5 students,
            Student is an array
*/

// a struct Student
struct Student
{
    string stName;
    int score;
};

// a struct Teacher Assistant
struct TeacherAssistant
{
    string taName;

    // one ta should have 5 students.
    Student stuArray[5];
};

int main(int argc, char const *argv[])
{
    // create 3 instances of teacher assistant struct

    return 0;
} // main
