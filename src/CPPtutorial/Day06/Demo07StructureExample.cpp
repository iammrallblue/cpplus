#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*
    Example:
        Structure,
*/

struct Student
{
    /* data */
    string s_name;
    double score;
};

struct Teacher
{
    /* data */
    string t_name;
    struct Student stu_array[5];
};

// assign each value to Teacher and Student
void allocateValues(struct Teacher t_param[], int length)
{
    string name_tail = "ABCDEF";

    //assign values for each teacher by for loop statement
    for (int i = 0; i < length; i++)
    {
        t_param[i].t_name = "Teacher_";
        t_param[i].t_name += name_tail[i];

        // assgin values for each student by for loop statement.
        // length is 5, b/c each teacher has 5 students
        for (int j = 0; j < 5; j++)
        {
            t_param[i].stu_array[j].s_name = "Student_";
            t_param[i].stu_array[j].s_name = name_tail[j];

            int random = rand() % 61 + 40;
            t_param[i].stu_array[j].score = random;
        }
    }
}

// function for print information
void printInfo(struct Teacher t_param[], int length)
{
    // print out teacher and student information by for loop statement
    for (int i = 0; i < length; i++)
    {
        cout << "Teacher Name: " << t_param[i].t_name << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\tStudent Name: " << t_param[i].stu_array[j].s_name << endl;
            cout << "\tScore: " << t_param[i].stu_array[j].score << endl;
        }
    }
}

int main()
{
    // random number
    srand((unsigned int)time(NULL));

    // define teacher array (three teachers )
    struct Teacher t_array[3];

    // assign value to three teachers
    int length = sizeof(t_array) / sizeof(t_array[0]);
    allocateValues(t_array, length);

    // print all information of Teacher and Student.
    printInfo(t_array, length);

    return 0;
}