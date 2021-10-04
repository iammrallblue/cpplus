#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Signed and unsigned in C++:


*/

int main(int argc, char const *argv[])
{
    short int i;
    short unsigned int j;

    j = 50000;

    i = j;

    cout << "i is: " << i << " j is: " << j << endl;
    return 0;
}
