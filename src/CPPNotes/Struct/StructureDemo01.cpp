#include <iostream>
#include <stdio.h>

using namespace std;

// struct Rectangle
struct Rectangle
{
    int length;
    int breadth;
    char x;

}; // declaring r1,r2,r3;

int main(int argc, char const *argv[])
{
    // using struct
    struct Rectangle r = {10, 5};
    printf("%lu", sizeof(Rectangle)); // 12
    cout << sizeof(r) << endl; // 12

    /*
        int length , and int breadth take 4 bytes each
        char x takes 1 bytes,
        But result shows 12. why?
            in the machine which is easy to read 4 bytes at a time.
            therefore, lenth, breadth, occupied 4 bytes in memmory
            and char x occupied 4 bytes, but ONLY 1 bytes is in used.
    */
    return 0;

} // main
