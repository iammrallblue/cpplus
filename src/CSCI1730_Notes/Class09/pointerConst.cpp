#include <iostream>
#include <cstdlib>

using namespace std;

void increment_all(int *start, int *stop)
{
    int *current = start;
    while (current != stop)
    {
        ++(*current); // increment value pointed
        ++current;
        // increment pointer
    } // while
} // increment_all
void print_all(const int *start, const int *stop)
{
    const int *current = start;
    while (current != stop)
    {
        cout << *current << endl;
        ++current;
        // increment pointer
    } // while
} // print_all

int main()
{
    int numbers[] = {10, 20, 30};
    increment_all(numbers, numbers + 3);
    print_all(numbers, numbers + 3);

    int x;
    int y = 10;
    const int *ptr = &y;
    x = *ptr;
    // *ptr = x; // ERROR, modifying pointer "ptr", which is const-qualified.
    //read-only variable is not assignable

    return EXIT_SUCCESS;
} // main