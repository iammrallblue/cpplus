#include <iostream>

using namespace std;

/*
    Struct Example:
*/

// a struct named Person
struct Person
{
    char name[30];
    int citizenship;
    int age;
};

int main(int argc, char const *argv[])
{
    // create an instance of a structure
    // Person prn; is same as "struct PErson prn"
    struct Person prn;

    // assign values to the struct members by the instance of Person struct
    prn.citizenship = 1;
    prn.age = 18;

    return 0;
} // main
