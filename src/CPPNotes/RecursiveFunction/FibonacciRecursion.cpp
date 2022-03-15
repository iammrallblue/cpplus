#include <iostream>
#include <stdio.h>

using namespace std;

// Fibonacci by Recursion
int rfib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return rfib(n - 2) + rfib(n - 1);
} // rfib

// Fibonacci by Iterative
int fib(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1)
    {
        return n;
    }
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;

} // fib

// Fibonacci by Momorization Function
int F[10];
int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n; // n == 0 and 1
        return n; // return 0 and 1
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = mfib(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = mfib(n - 1);
        }
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
} // mfib

int main(int argc, char const *argv[])
{
    int i;
    // initializing array F by for loop
    for (i = 0; i < 10; i++)
    {
        F[i] = -1;
        // initial values for each element in array F is -1,
        // 0 is also the term of Fibonacci
    }
    // printf("%d ", fib(r));
    printf("%d \n", fib(6));
    return 0;
} // main
