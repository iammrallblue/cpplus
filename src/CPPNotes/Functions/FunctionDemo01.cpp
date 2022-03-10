#include <iostream>

using namespace std;

// add function
int add(int a, int b)
{
    int c;
    c = a + b;

    return c; // return int value

} // add

int main(int argc, char const *argv[])
{
    int num1 = 10;
    int num2 = 15;
    int sum;

    // call add funciton, num1, num2 are acutal parameter
    sum = add(num1, num2);
    cout << "sum is: " << sum << endl;

    return 0;

} // main