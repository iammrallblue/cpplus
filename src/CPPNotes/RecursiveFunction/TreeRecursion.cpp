#include <iostream>
#include <stdio.h>

using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
        fun(n - 1);
    }
} // fun

int main(int argc, char const *argv[])
{
    fun(3);
    return 0;
} // main
