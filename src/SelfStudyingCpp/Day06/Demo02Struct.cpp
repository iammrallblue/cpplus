#include <iostream>
#include <cstring>

using namespace std;

/*
    Struct in C++:

*/

// A student struct
struct Student
{
    char name[20];
    long stu_id;
    bool gender;
    int math;
};

int main(int argc, char const *argv[])
{
    // using student struct (initialization)
    // a single student
    Student student;

    // or a student array
    Student stu_array[5];

    // input students by for loop
    for (int i = 0; i < 5; i++)
    {
        // input student name
        cout << "Input Student Name: ";
        cin >> stu_array[i].name;

        cout << "Input Math Score: ";
        cin >> stu_array[i].math;
    } // for

    // query score by student name
    char name[20];
    cout << "Input Student Name for Querying Score: ";
    cin >> name;

    for (int i = 0; i < 5; i++)
    {
        // if( strcmp(name,stu_array[i].name) == 0)
        if (!strcmp(name, stu_array[i].name))
        {
            cout << stu_array[i].name << "'s math score is: " << stu_array[i].math << endl;
        }
    }
    return 0;
}

// // a struct
// struct PersonInfo
// {
//     string name;
//     // char name[30];
//     int age;
// };

// int main(int argc, char const *argv[])
// {
//     // using PersonInfo struct
//     PersonInfo person_info[10];

//     // for loop for user input
//     for (int i = 0; i < 2; i++)
//     {
//         cin >> person_info[i].name >> person_info[i].age;
//     } // for

//     for (int i = 0; i < 10; i++)
//     {
//         cout << person_info[i].name << " " << person_info[i].age << endl;
//     }
//     return 0;
// } // main
