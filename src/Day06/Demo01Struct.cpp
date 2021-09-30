#include <iostream>

using namespace std;

/*
    C++ Structs:
         C++ Structure is a collection of different data types. 
         It is similar to the class that holds different types of data.

        Key point:
            1. a struct is value type, (data type), a class is reference type.
            2. keyword struct can be voided when creating instance of struct.

        USAGE:
            1. create the instance of the structure to use variable in a struct.
            2. Three methods of creating instance of struct:
                1) struct Student stu_1;
                    assign values to instance variables of Student;
                2) struct Student stu_2 = {value1, value2, value3};
                3)  struct structure_name  
                    {  
                        // member declarations.  
                    }stu_3;
                            

        Syntax:
            struct structure_name  
            {  
                // member declarations.  
            };  

*/

// A student type struct
struct Student
{
    // struct variable
    string name;
    int age;
    int score;
    /* data */
} stu_3;

int main()
{
    // method 1, create an instance of Student struct
    // struct Student stu_1; // keyword struct can be voided.
    Student stu_1;
    stu_1.name = "Bella";
    stu_1.age = 18;
    stu_1.score = 99;
    cout << "Name: " << stu_1.name << endl;
    cout << "Age: " << stu_1.age << endl;
    cout << "Score: " << stu_1.score << endl;

    // method 2, create an instance of Student struct
    struct Student stu_2 = {"Abby", 20, 102};
    cout << "Name: " << stu_2.name << endl;
    cout << "Age: " << stu_2.age << endl;
    cout << "Score: " << stu_2.score << endl;

    // method3 , create an instance of Student struct with struct
    stu_3.name = "Cath";
    stu_3.age = 21;
    stu_3.score = 100;
    cout << "Name: " << stu_3.name << endl;
    cout << "Age: " << stu_3.age << endl;
    cout << "Score: " << stu_3.score << endl;

    return 0;
}