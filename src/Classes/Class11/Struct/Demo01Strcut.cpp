#include <iostream>

using namespace std;

/*
    Struct in C++: (self-defined)
        Def'n:
            A structure is a user-defined data type in C/C++.
            A structure creates a data type that can be used
                to group items of possibly different types into a single type.
            結構體是一個數據集合
        1. Struct can contain two types of members.
            a. Data member
                Normal C++ variables
            b. Member function
                Normal C++ functions

        Key points:
            1. Three methods to create struct type variable (結構體變量)
                or an instance of a structure
                a. struct Student stu;
                b. struct Student stu = {....};
                c. struct Student {Data members; Members functions} stu;
                    NOT recommended this declaration.

            2. When a structure is created, no memory is allocated.
            3. if using data members before initialized them. 
                these data members will have "null" values or 0
                    (see stu_3) 
*/

// define a struct Student
struct Student
{
    /* data fields */
    int age;
    string name;
    int score;
} stu_3;

int main(int argc, char const *argv[])
{
    // 1. create an instance of a structure,
    struct Student stu;

    // access member variables
    // assgin values
    stu.name = "Bella";
    stu.age = 18;
    stu.score = 100;
    cout << "First method to create a structure variable, " << endl;
    cout << "Name: " << stu.name << " Age: " << stu.age << " Score: " << stu.score << endl;

    // 2. create a stucture variable
    static Student stu_1 = {19, "Abby", 120};
    cout << "Second method to create a structure variable," << endl;
    cout << "Name: " << stu_1.name << " Age: " << stu_1.age << " Score: " << stu_1.score << endl;

    // 3. create a structure variable (back see struct Student)
    // declare the "stu_3" after the structure.
    cout << "Third method to create a structure variable," << endl;
    cout << "Name: " << stu_3.name << " Age: " << stu_3.age << " Score: " << stu_3.score << endl;
    return 0;
} // main