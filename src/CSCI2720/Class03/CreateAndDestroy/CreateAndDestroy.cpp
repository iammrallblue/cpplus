/*
    CreateAndDestroy class member-function definitions.
*/
#include <iostream>
#include "CreateAndDestroy.h" // include CreateAndDestroy class definition
using namespace std;

// constructor sets object's ID number and descriptive message
CreateAndDestroy::CreateAndDestroy(int ID, string messageString)
{
    objectID = ID;
    message = messageString;
    cout << "Object " << objectID << " constructor runs " << message << endl;

} // CreateAndDestroy

// destructor
CreateAndDestroy::~CreateAndDestroy()
{
    // output newlien for certain objects; helps readability
    cout << (objectID == 1 || objectID == 6 ? "\n" : "");

    cout << "Object " << objectID << " destructor runs " << message << endl;
}
