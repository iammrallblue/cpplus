#include <iostream>
#include <stdio.h>

using namespace std;
/**
 * Power Recursion
 * int m, constant
 * int n, the power of constant m
 */
// Power Recursion Function
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return power(m, n - 1) * m;
} // power

// power function
int power1(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power1(m * m, n / 2);
    else
        return m * power1(m * m, (n - 1) / 2);
}

int main(int argc, char const *argv[])
{
    // int r = power(3, 4); // result is 81
    int r = power1(3, 4); // 81
    printf("%d ", r);
    return 0;
}
