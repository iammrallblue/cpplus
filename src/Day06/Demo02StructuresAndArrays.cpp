#include <iostream>

using namespace std;

/*
    Structures and Arrays:
        1. Define a Student Structure
        2. Declare a structure array
*/

// 1. Define a Student Structure
struct Student
{
    /* data */
    string name;
    int age;
    double score;
};

int main()
{
    // 2. Declare a structure Array and assign values to each element:
    struct Student stu_1[] = {{"Becky", 18, 100}, {"Cath", 19, 101}, {"Bella", 17, 99}};

    // 2 Declare a structure Array and assign values to each element;
    Student stu_2[4] = {{"Becky", 18, 100}, {"Cath", 19, 101}, {"Bella", 17, 99}};

    // 3. Re-assign values to each element by Array names
    stu_2[0].name = "Abby";
    stu_2[0].age = 16;
    stu_2[0].score = 110;

    // 4. Iterating Array by for loop statement
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: " << stu_2[i].name << endl;
        cout << "Age: " << stu_2[i].age << endl;
        cout << "Score: " << stu_2[i].score << endl;
    }
    return 0;
}