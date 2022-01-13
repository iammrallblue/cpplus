#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_PATH 200
/*
    chdir function in C:
        The chdir command is a system function (system call)
        
        which is used to change the current working directory.

        *** On some systems, this command is used as an alias for the shell command cd.

        chdir changes the current working directory of the calling process to
        the directory specified in path.

        Syntax:

            int chdir(const char *path);

                Parameter: the path is the Directory path
                which the user want to make the current working directory.

                Return Value:
                    This command returns zero (0) on success.
                    -1 is returned on an error and errno is set appropriately.
*/
int main(int argc, char const *argv[])
{

    // example 1
    char str[100];

    // output the current working directory
    printf("%s\n,", getcwd(str, MAX_PATH));

    // call chdir function, for changing current directory.
    chdir(".."); // goes back previous directory

    printf("%s\n", getcwd(str, MAX_PATH));

    // example 2

    // changing the current working directory(cwd) to /usr
    if (chdir("/usr") != 0)
    {
        perror("chdir() to /usr failed");
    }

    // changing the cwd to /tmp
    if (chdir("/tmp") != 0)
    {
        perror("chdir() to /temp failed.");
    }

    // changing the cwd to non-existed directory
    if (chdir("/error") != 0)
    {
        perror("chdir() to /error failed."); //chdir() to /error failed.: No such file or directory
    }

    return 0;
}
