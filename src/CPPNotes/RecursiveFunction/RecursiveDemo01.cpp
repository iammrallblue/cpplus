#include <iostream>
#include <stdio.h>

using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        printf("%d", n); // 321
    }
} // fun

int main(int argc, char const *argv[])
{
    int x = 3;
    fun(x);
    return 0;
} // main
