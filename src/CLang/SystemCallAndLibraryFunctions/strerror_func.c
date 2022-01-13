#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/*
    strerror function in C:
        searches an internal array for the error number errnum and
        returns a pointer to an error message string.

        The error strings produced by strerror
        depend on the developing platform and compiler.

        Syntax:
            char *strerror(int errnum);
                Parameters
                    errnum − This is the error number, usually errno.

                Return Value
                    returns a pointer to the error string describing error errnum.
*/
int main(int argc, char *argv[])
{
    FILE *fp; // a file descirptor

    fp = fopen("File.md", "r");
    if (fp == NULL)
    {
        printf("Error: %s\n", strerror(errno)); // return result Error: No such file or directory
    }

    return 0;
} // main
