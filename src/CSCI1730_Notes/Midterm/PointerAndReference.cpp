#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // int my_int = 1024;

    // // reference decalration
    // int &ref_my_int = my_int;
    // cout << "ref_my_int is: " << ref_my_int << endl;   // the value of variable my_int
    // cout << "&ref_my_int is: " << &ref_my_int << endl; // the address of variable my_int

    // // &ref_my_int = 100; // error a constant can not assgin to a reference
    // ref_my_int = 100;
    // cout << ref_my_int << endl;
    // cout << "&ref_my_int is: " << &ref_my_int << endl;

    // in the underlying logic of reference
    int my_int = 1024;
    int *my_int_ptr = &my_int;
    *my_int_ptr = 2048;
    cout << &my_int << " " << my_int_ptr << endl; // 0x7ffeee6ed23c 0x7ffeee6ed23c
    return 0;
} // main
