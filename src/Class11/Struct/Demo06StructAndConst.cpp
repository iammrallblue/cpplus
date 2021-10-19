#include <iostream>

using namespace std;

/*
    Using struct and const together

        const modify the "Student *stu" parameter
            to prevent the misoperation.
                such as the assignment
        Key points:
            1. Student *stu  is a pointer, using pointer to save space in memory.
*/

// a struct Student
struct Student
{
    string name;
    int age;
    int score;
};

// // a function for print students information with pointers as parameter
// void printStudentInfo(Student *stu)
// {
//     cout << "Name: " << stu->name << "\t";
//     cout << "Age: " << stu->age << "\t";
//     cout << "Score: " << stu->score << endl;
// } // printStudentInfo

// a function for print students information with pointers as parameter
void printStudentInfo(const Student *stu)
{
    // stu->name = "Bella"; // when const is involved, the value of the pointer pointed to is unchangeable
    cout << "Name: " << stu->name << "\t";
    cout << "Age: " << stu->age << "\t";
    cout << "Score: " << stu->score << endl;
} // printStudentInfo

int main(int argc, char const *argv[])
{
    // create an instance of the struct Student
    Student student = {"Abby", 17, 190};

    // call printStudentInfo pass the address of student as argument
    printStudentInfo(&student);

    return 0;
} // main
