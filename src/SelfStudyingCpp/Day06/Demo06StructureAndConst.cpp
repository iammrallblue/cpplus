#include <iostream>
#include <string>

using namespace std;

/*
    Structure and Const:
        const modifies structure parameter for preventing misoperating.

        Key point:
            using pointer as parameter is better than variable, because, variable and other data types
            occupies more memory space.
*/

// A student structure
struct Student
{
    /* data */
    string name;
    int age;
    double score;
};

// printStudent() function
void printStudent(const Student st_param)
{
    // st_param.score = 100; // Error, const-qualified
    cout << "Below are defined inside printStudent() function." << endl;
    cout << "Name: " << st_param.name << endl;
    cout << "Age: " << st_param.age << endl;
    cout << "Score: " << st_param.score << endl;
}

// printStudent2() function, passing pointer
void printStudent2(Student *st_param)
{
    st_param->score = 100;
    cout << "Below are defined inside printStudent2() function." << endl;
    cout << "Name: " << st_param->name << endl;
    cout << "Age: " << st_param->age << endl;
    cout << "Score: " << st_param->score << endl;
}
int main()
{
    // instance of Student structure
    Student stu_1 = {"Abby", 18, 120};

    // calling printStudent function and passing Student structure variable stu_1 as an argument
    printStudent(stu_1);

    // calling printStudent() function and passing  pointer
    printStudent2(&stu_1);
    return 0;
}