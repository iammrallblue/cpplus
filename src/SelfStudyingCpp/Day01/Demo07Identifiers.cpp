#include <iostream>
using namespace std;

/*
    Identifiers: aka variables name
        All C++ variables must be identified with unique names.

        These unique names are called identifiers.

        Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

        Note: It is recommended to use descriptive names in order to create understandable and maintainable code:
    
    NOTICES:
        The general rules for constructing names for variables (unique identifiers) are:
            1. Names can contain letters, digits and underscores
            2. Names must begin with a letter or an underscore (_)
            3. Names are case sensitive (myVar and myvar are different variables)
            4. Names cannot contain whitespaces or special characters like !, #, %, etc.
            5. Reserved words (like C++ keywords, such as int) cannot be used as names
*/

int main()
{
    // Good
    int minutesPerHour = 60; // more descriptive name
    int _minutesPerHour = 60; // starts with underscore

    // OK, but not so easy to understand what m actually is
    int m = 60;
    int _m = 60;
    // int 6m = 60; //can't start with numbers.
    
    cout << minutesPerHour << _minutesPerHour << endl;
    return 0;
}