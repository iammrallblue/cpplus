#include <iostream>

using namespace std;

/*
    Nested struct:
        One struct is defined inside of another struct.

        Key points:
            A struct inside of another struct should be defined first.
*/

// A Teacher struct
struct Teacher
{
    // Struct can include any datatype, include itself
    int id;
    string name;
    int age;

    // invoke a struct inside of another struct
    struct Student stu;
};

struct Student
{
    int id;
    string name;
    int age;
};

int main(int argc, char const *argv[])
{
    // a Teacher instance
    Teacher teacher;

    // assign values to member in Teacher struct
    teacher.name = "Dr.Ameri";
    teacher.age = 18;
    teacher.id = 100;

    // assign values to member of Student struct inside Teacher struct.
    teacher.stu.name = "Lee";
    teacher.stu.age = 18;
    teacher.stu.id = 1000;

    return 0;
} // main
