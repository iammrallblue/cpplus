#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// a struct
struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

int main(int argc, char const *argv[])
{
    /*
    // initializing a struct
    struct Rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.breadth << endl;

    // creating a Rectangle pointer
    struct Rectangle *p = &r;
    // accessing data mbmeber of Rectangle r by pointer
    cout << p->length << endl;
    cout << p->breadth << endl;
    */

    /*Creating a Rectangle object in heap area by C and C++*/

    struct Rectangle *p;
    /*
    // A Rectangle object is created in the heap area
    // and point p is pointed to the object.
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    */

    // C++ style of creating a Rectangle object
    p = new Rectangle;

    // assian values by pointer p
    p->length = 200;
    p->breadth = 100;
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;

} // main
