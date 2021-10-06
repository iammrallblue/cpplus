#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

/*
    Signed and unsigned in C++:
        to print out max and min values of signed and unsigned variables

            method 1:
                int x;
                    x - 1;

*/

int main(int argc, char const *argv[])
{
    short int i;
    short unsigned int j;

    j = 50000;

    i = j;

    short unsigned x = (short)9999999;
    cout << "The max value of short is: " << x << endl;

    cout << "i is: " << i << " j is: " << j << endl;

    cout << "The max value of unsigned int: " << numeric_limits<unsigned int>::max() << endl;
    cout << "The min value : " << numeric_limits<unsigned int>::min() << endl;

    // cout<<std::numeric_limits<int>::min()<<endl;
    return 0;
}
