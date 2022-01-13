#include <iostream>
#include <string>

using namespace std;

/*
    Structure and Pointer:

*/

// a student type structure.
struct Student
{
    /* data */
    string name;
    int age;
    double score;
};

int main()
{
    // create an instance of Student structure
    Student stu_1 = {"Bella", 18, 102};

    // bind a pointer to the address of structure variable
    struct Student *ptr_1 = &stu_1;

    // access structure variables by using pinter ptr_1 and operator " -> "
    cout << "Name: " << ptr_1->name << endl;
    cout << "Age: " << ptr_1->age << endl;
    cout << "Score: " << ptr_1->score << endl;

    return 0;
}