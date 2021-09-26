#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // ex of ++*ptr == ++(*ptr)
    int arr[] = {10, 20};
    cout << "Before increment, arr[0]= " << arr[0] << " arr[1]= " << arr[1] << endl;
    cout << "the address of the array is: " << &arr << endl; // 0x7ffeed0161e0,

    int *ptr = arr;
    cout << "*ptr= " << *ptr << endl; // 10, get the value in the first index of the array
    // cout << "ptr= " << ptr << endl; // 0x7ffee49f11e0
    ++*ptr; // == ++(*ptr) , 10+1 =11

    cout << "After increment, arr[0]= " << arr[0] << " arr[1]= " << arr[1] << endl; // 11, 20
    cout << "++*ptr= " << *ptr << endl;                                             // 11

    // ex of *ptr++ == *(ptr++)
    int arr_2[] = {30, 40};
    int *ptr_2 = arr_2;
    *ptr_2++; // == *(ptr_2++)

    cout << "After increment, arr_2[0]= " << arr_2[0] << " arr_2[1]= " << arr_2[1] << endl; // 30, 40
    cout << "*ptr_2++= " << *ptr_2 << endl;                                                 //40

    // ex of *++ptr == *(++p)
    int arr_3[] = {50, 60};
    int *ptr_3 = arr_3;

    cout << "Pointer 3 Before self increemnt: " << *ptr_3 << endl; // 50
    
    *++ptr_3; // == *(++ptr_3)

    cout << "After increment, arr_3[0]= " << arr_3[0] << " arr_3[1]= " << arr_3[1] << endl; // 50, 60
    cout << "*++ptr_3= " << *ptr_3 << endl;  // 60

} // main