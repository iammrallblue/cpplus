/*
    Driver.cpp for calling Constructor and Destructor
    Order in which constructors and Destructors are called.
*/
#include <iostream>
#include "CreateAndDestroy.h" // include CreateAndDestroy class definition
using namespace std;

void create(); // prototype

CreateAndDestroy first = CreateAndDestroy(1, "(global before main)"); // global object

int main(int argc, char const *argv[])
{
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;

    CreateAndDestroy second = CreateAndDestroy(2, "(local in main)");

    static CreateAndDestroy third = CreateAndDestroy(3, "(local static in main)");

    create(); // call function to create objects

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;

    CreateAndDestroy fourth(4, "(local in main)");

    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;

    return 0;

} // main

// create function to create objects
void create()
{
    cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;

    CreateAndDestroy fifth = CreateAndDestroy(5, "(local in create function.)");

    static CreateAndDestroy sixth = CreateAndDestroy(6, "(local static in create function.)");

    CreateAndDestroy seventh = CreateAndDestroy(7, "(local in create function.)");

    cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;

} // create
