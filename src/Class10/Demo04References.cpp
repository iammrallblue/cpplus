#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
/*
    References in C++:
        Def'n:
            A variable can be defined as a reference,
            An alternative name of thevariable
        
        Key points: (diffs of Reference and Pointer)
            1. DON'T exist a "null reference", 
                Reference needs to be initialized and 
                pointed to a existed the address in memory.
                * Pointer can be a null, nullptr, 0;
            2. Reference cannot be assigned twice. (Cannot be re-assigned.)
                * Pointer can be re-pointed to.
            3. Reference needs to be initialized at when declared.
                * Pointer can be initialized at any points.
            4. References modify a passed parameters, (see example 1)
                If a function receives a reference to a variable, 
                it can modify the value of the variable
            5. Avoiding a copy of large structures, (see example 2)
                Can use references to avoid large copies of objects. 
                    (see printInfo() function)
                If we pass it without reference, a new copy of it is 
                created which causes wastage of CPU time and memory.

        Examples:
            1. A reference pointed to a variable x,
            2. Modify the passed parameters in a function,
                example 1, swap two numbers.
            3. Avoiding a copy of large structures,
                example 2,
            4. In For Each Loops to modify all objects.
                We can use references in for each loops to modify all elements.
                example 3,
            5. For Each Loop to avoid the copy of objects.
                We can use references in each loop to avoid a copy of 
                    individual objects when objects are large.  



*/

// a Student struct
struct Student
{
    string name;
    string address;
    int rollId;
};

/*
    If we remove & in below function, a new
    copy of the student object is created. 
    We use const to avoid accidental updates
    in the function as the purpose of the function
    is to print s only.
*/
// a function print for printing student info
void printInfo(const Student &stu)
{
    cout << "name: " << stu.name << "\nAddress: " << stu.address << "\nStudent ID: " << stu.rollId << endl;
} // printInfo

// a function swap for swapping numbers
void swap(int &x, int &y)
{
    // swap numbers
    int temp = x;
    x = y;
    y = temp;
} // swap

int main(int argc, char const *argv[])
{
    // 1. A reference pointed to a variable x,
    // Using a reference
    int x = 100;

    int &ref = x; // get the address of variable x
    // same as: &x

    cout << "The value of &ref is: " << &ref << " \n and The value of &x is: " << &x << endl; // the address 0x7ffeed0f21dc
    cout << "The size of &ref is: " << sizeof(&ref) << endl;                                  // 8 bytes.

    cout << "The value of ref is: " << ref << endl;        // 100, ref = the value of x.
    cout << "The size of ref is: " << sizeof(ref) << endl; // 4 bytes

    // 2. Modify the passed parameters in a function, swapping number by reference
    int m = 9;
    int n = 23;
    cout << "before swap: " << endl;
    cout << "m= " << m << ", n= " << n << endl;
    swap(m, n);

    cout << "after swap: " << endl;
    cout << "m= " << m << ", n= " << n << endl;

    // 3. Avoiding a copy of large structures,
    Student stu; // create object of the struct Student
    stu.name = "Bella";
    stu.address = "Dalton";
    stu.rollId = 001;

    // call printInfo()
    printInfo(stu);

    /* VSCODE -> Run Build Task. */
    // 4. In For Each Loops to modify all objects.
    vector<int> my_vect{10, 20, 30, 40, 50, 60};

    // Using references to modify all values of the element in my_vect
    for (auto &i : my_vect)
    {
        i += 2; // change values in my_vect
    }           // for

    // print out modified results
    for (int i : my_vect)
    {
        cout << i << " "; // {12,22,32,42,52,62}
    }


    /* VSCODE -> Run Build Task. */
    // 5. For Each Loop to avoid the copy of objects
    vector<string> my_vect2{"a", "b", "c", "d", "e"};

    // using reference to avoid copying the whole object of vector<string>
    for (const auto &x : my_vect2)
    {
        cout << x << " ";
    }

    return 0;
} // main
