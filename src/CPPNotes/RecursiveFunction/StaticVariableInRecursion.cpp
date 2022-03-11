#include <iostream>
#include <stdio.h>

using namespace std;

// fun function
// int fun(int n)
// {
//     // static int x = 0;
//     if (n > 0)
//     {
//         return fun(n - 1) + n;
//     }

//     return 0;
// } // fun

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }

    return 0;
} // fun

int main(int argc, char const *argv[])
{
    int a = 5;
    printf("%d", fun(a));

    return 0;
}
