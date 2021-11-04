#include <stdio.h>

int main()
{
    printf("Let's go Brandon. \n");
    // for (int i = 0; i < 10; i++)
    // {
    //     putchar('.');
    //     sleep(1);
    // } // for

    // putchar(), print out all letter by for loop
    char ch;
    for (ch = 32; ch <= 126; ch++)
    {
        putchar(ch);
        printf(" ");
    }

    // char ch2 = ;
    // printf("0 is %d", (int)ch2);

    return 0;
} // main
