#include <iostream>
#include <stdio.h>

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
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    cout << sizeof(p1) << endl; // 8
    cout << sizeof(p2) << endl; // 8
    cout << sizeof(p3) << endl; // 8
    cout << sizeof(p4) << endl; // 8
    cout << sizeof(p5) << endl; // 8
    /**
     * @brief whatever type of pointer is.
     * the size of pointer is 8 bytes in x64 64bit machine
     * the size of pointer is 4 bytes in x32 32bit machine
     * 
     */
    
    return 0;
}
