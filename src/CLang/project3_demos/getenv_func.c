#include <stdio.h>
#include <stdlib.h>

/* get the env information by getenv function.*/
int main(int argc, char *argv[])
{
    // C string
    const char *env_var[5] = {"PUBLIC", "HOME", "SESSIONNAME", "LIB", "SystemDrive"};
    char *env_val[5];

    printf("PATH: %s\n", getenv("PATH"));
    printf("HOME: %s\n", getenv("HOME"));
    printf("ROOT: %s\n", getenv("ROOT"));

    for (int i = 0; i < 5; i++)
    {
        env_val[i] = getenv(env_var[i]);
        if (env_val[i] != NULL)
        {
            printf("Variable: %s\n", env_var[i]);
            printf("Value: %s\n", env_val[i]);
        }
        else
        {
            printf("%s does not existed.\n", env_var[i]);
        }
    } // for

    return 0;
} // main
