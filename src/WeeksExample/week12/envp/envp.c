#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[], char *envp[])
{
    char *sep = "\n";

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    printf(sep);

    for (int i = 0; argv[i] != NULL; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;

} // main (envp.c)
