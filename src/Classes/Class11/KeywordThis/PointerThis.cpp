#include <iostream>

using namespace std;

/*
    this pointer:
        this is an instance of class,
        contains the address of pointer itself.
        1. this pointer to pointed to class member vairable
            this->age = age; // assign parameter age to class member variable age
            by using this pointer
        2. sometime function needs to return itself
            void setAge(int age){}
            Student setAge(int age)
            {
                return *this // return itself.
            }
        3. this pointer cannot point to static variable and function in class
        
        4. void test(), 
            the complier will add "Student *this" to test function
                void test(Student *this) to 
            when instantiate an object of class
                Student stu;
                the complier will add "&stu" &stu which is the address of the object stu
            *** the complier will "help" us to do something on this pointer
        Key points:
            1. this pointer does not occupied memory. (like 0 byte)
            2. Two method to call static member functions
                Student::lazy(); 
                stu.lazy();

*/

// A student class
class Student
{
private:
    int age;

public:
    int getAge()
    {
        return age;
    } // getAge()

    // void setAge(int age)
    // {
    //     age = age; // if don't use this pointer, age assigned itself to age
    //     this->age = age; // this pointer in
    //     cout << "age is: " << age << endl;
    // }

    Student setAge(int age)
    {
        this->age = age; // this point
        cout << "the parameter (age) is: " << age << endl;
        return *this; // this point
    }                 // setAge

    // test function
    void test()
    {
        cout << "the address included inside of this Pointer: " << this << endl;
    } // test

    static void lazy()
    {
        cout <<"Don't be lazy. " << endl;
        // cout << this->age << endl; 
        // "this" pointer is unavailable for static member function
    }
}; // Student

int main(int argc, char const *argv[])
{
    // an instance of Student Class
    Student stu;
    stu.setAge(18);
    cout << "the getAge function is called in main function: " << stu.getAge() << endl;
    // system("pause");

    // the size of Student
    cout << "the size of Student: " << sizeof(Student) << endl; // 4 bytes
    // the address of Student
    cout << "The address of the instance of Student: " << &stu << endl; //0x7ffee6222208

    // what the address inside of this pointer
    stu.test(); // the address is Student stu 0x7ffee6222208

    // call static member function
    Student::lazy();
    stu.lazy();


    return 0;
} // main
