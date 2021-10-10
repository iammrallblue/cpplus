#include <iostream>
#include <string>

using namespace std;

/*
    Nested Structures:
*/

// a Student structure
struct Student
{
    /* data */
    string name;
    int age;
    double score;
};

// a Teatcher structure
struct Teatcher
{
    /* data */
    int id;
    string name;
    int age;
    // declare a student structure inside of another structure
    struct Student stu_1;
};

int main()
{
    // a Teatcher structure instance
    struct Teatcher ter;
    ter.id = 1000;
    ter.name = "Abby";
    ter.age = 47;
    // invoke Strudent structure
    ter.stu_1.name = "Bella";
    ter.stu_1.age = 17;
    ter.stu_1.score = 100;
    cout << "Teatcher Information: " << endl;
    cout << "Name: " << ter.name << endl;
    cout << "ID: " << ter.id << endl;
    cout << "Age: " << ter.age << endl;
    cout << "Student Information: " << endl;
    cout << "Name: " << ter.stu_1.name << endl;
    cout << "Age: " << ter.stu_1.age << endl;
    cout << "Score: " << ter.stu_1.score << endl;

    // Student struct size
    cout << "The size of Student struct is: " << sizeof(ter.stu_1) << endl;
    cout << "string name is: " << sizeof(ter.stu_1.name);

    return 0;
}