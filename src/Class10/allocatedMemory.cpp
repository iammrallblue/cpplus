#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    double *pvalue = NULL;
    if (!(pvalue = new double))
    {
        cout << "Error: out of memory." << endl;
        exit(1);
    } // if
    else
    {
        cout << "somewhere memory is allocated." << endl;
    }

    return 0;
}
