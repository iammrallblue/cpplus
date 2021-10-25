#include <iostream>
#include <string>

using namespace std;

/*
    Using Struct as function parameters:

        pass values:
            make new copies when passing parameters.
        pass pointer:
            don't have new copy, a pointer
*/

// a struct Student
struct Student
{
    string name;
    int age;
    int score;
};

// a function print out student info by pass values
void printStudentInfo(Student s)
{
    cout << "Parameters are passed by values." << endl;
    cout << "Name: " << s.name << "\t";
    cout << "Age: " << s.age << "\t";
    cout << "Score: " << s.score << endl;
} // printStudentInfo

// a function print out student info by pass pointers
void printStudentInfo2(Student *s)
{
    cout << "Parameters are passed by pointers." << endl;
    s->name = "Abby";
    s->age = 16;
    s->score = 120;
    cout << "Name: " << s->name << "\t";
    cout << "Age: " << s->age << "\t";
    cout << "Score: " << s->score << endl;
} // printStudentInfo2
int main(int argc, char const *argv[])
{

    // create an instance of the Student struct
    Student stu;
    stu.name = "Bella";
    stu.age = 18;
    stu.score = 100;

    // call printStudentInfo function
    printStudentInfo(stu);

    // call printStudentInfo2 function
    printStudentInfo2(&stu); // pass the address of struct student

    return 0;
} // main
