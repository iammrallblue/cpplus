#include <stdio.h>

// main function
void main(int argc, char *argv[], char *envp[])
{
    int i = 0;
    while (envp[i++] != NULL)
    {
        printf("\n%s", envp[i]);
    }
}