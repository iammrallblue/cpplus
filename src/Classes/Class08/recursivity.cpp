#include <iostream>

using namespace std;

// factorial function
long factorial(long x)
{
    if (x > 1)
    {
        return x * factorial(x - 1);
    }
    else
    {
        return 1;
    }
} // factorial

int main()
{

    // call factorial function
    long result = factorial(2);
    cout << "the result of factorial is: " << result << endl;
    return EXIT_SUCCESS;
} // main