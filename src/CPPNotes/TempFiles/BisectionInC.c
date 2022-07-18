#include <stdio.h>
#include <math.h>
#define EPSILON 0.001

float func(float x)
{
    return (x * x * x - x * x + 2);
}

void bisectionFunc(float x, float y)
{
    if (func(x) * func(y) >= 0)
    {
        printf("Wrong assumption of x and y. \n");
        return;
    }
    double z = x;
    while (y - x >= EPSILON)
    {
        z = (x + y) / 2;
        if(func(z) == 0)
        {
            break;
        }
        if(func(x)*func(z) < 0)
        {
            y = z;
        }
        else
        {
            x = z;
        }
    } // while
    printf("The value of Root is: %f", z);

} // bisectionFunc

int main(int argc, char const *argv[])
{
    int a = -500, b = 500;
    bisectionFunc(a,b);
    
    return 0;
}
