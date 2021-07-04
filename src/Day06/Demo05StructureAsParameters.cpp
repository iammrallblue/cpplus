#include <iostream>
#include <string>

using namespace std;

/*
    Structure as Parameter:
        the difference b/w value passing and the address passing is
        when the structure variable is changed in sub function
*/

// A Student Structure
struct Student
{
    /* data */
    string name;
    int age;
    double score;
};

// printStudent() function for printing student information. (value passing)
void printStudent(Student st_param)
{
    // st_param.name = "Johnson"; // vairable name is ONLY changed inside of this function scope
    // print student information
    cout << "Below information is inside of printStudent() function." << endl;
    cout << "value passing" << endl;
    cout << "Name: " << st_param.name << endl;
    cout << "Age: " << st_param.age << endl;
    cout << "Score: " << st_param.score << endl;
}

// printStudent() function for the address of structure passing
void printStudent(struct Student *st_param_2)
{
    st_param_2->name = "Abby"; // since pointer changed the value in the memory, therefore, variable name will be changed everywhere.
    st_param_2->age = 20;
    // print student information by pointer
    cout << "Below information is inside of printStudent() function. " << endl;
    cout << "The address of Student Structure passing" << endl;
    cout << "Name: " << st_param_2->name << endl;
    cout << "Age: " << st_param_2->age << endl;
    cout << "Score: " << st_param_2->score << endl;
}

int main()
{
    // instance of student structure
    Student stu_1= {"Bella", 19, 101};
    
    // Print in main() function
    cout << "Below Information Print inside of main() function. " << endl;
    cout << "Name: " << stu_1.name << endl;
    cout << "Age: " << stu_1.age << endl;
    cout << "Score: " << stu_1.score << endl;

    // call printStudent() function
    // printStudent(stu_1);

    // call printStudent() function, passing the addess of the Student structure
    printStudent(&stu_1);

    return 0;
}