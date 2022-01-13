#include <iostream>

using namespace std;

/*
    Structure Pointer in C++:
        Operator: ->
            to access member variables in a Structure datatype.



*/

// a structure Student
struct Student
{
    /* Data members*/
    string name;
    int age;
    int score;
};

int main(int argc, char const *argv[])
{
    // create an object of Student structure
    // Initialize all the data members inside of the Student structure
    Student stu = {"Bella", 18, 120};

    // create a Student pointer, pointed to the address of stu.
    Student *stu_ptr = &stu;

    stu_ptr->score = 99; // change value by pointer

    // access the members in the Student structure by pointer
    cout << "The pointer: " << stu_ptr << endl;
    cout << "Name: " << stu_ptr->name << endl;
    cout << "Age: " << stu_ptr->age << endl;
    cout << "Score: " << stu_ptr->score << endl;
    return 0;
} // main
