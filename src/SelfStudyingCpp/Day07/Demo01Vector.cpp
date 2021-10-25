#include <iostream>
#include <vector>

using namespace std;
/*

    Vector in C++ STL:
        Vector is same as the Dynamic Array w. the ability to resize itself automatically.

        1. When elements in the vector are changed, their storage would be being handled
            automatically by the container.
        2. Vector can be acessed and traversed using iterators, b/c vector elements are
            palced in contiguous storage.
        3. In vector, element is inserted in the end. Inserting at the end takes differential time.

             as sometimes there may be a need of extending the array. Removing the last element takes only
        constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.



        Vector functions:
            Iterators
                begin() – Returns an iterator pointing to the first element in the vector
                end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
                rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
                rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
                cbegin() – Returns a constant iterator pointing to the first element in the vector.
                cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
                crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
                crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

                int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";

    return 0;
}

*/

int main(int argc, char const *argv[])
{
    vector<int> vt;

    // input by for loop
    for (int i = 1; i <= 5; i++)
    {
        vt.push_back(i);
    }
    cout << "Output of begin and end: ";
    for (vector<int> i = vt.begin(); i != vt.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;
} // main
