#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFSIZE 1024

int main(int argc, char const *argv[])
{
    int n;
    char buffer[BUFFSIZE];

    // use ctrl-d to send EOF in order to inform the program that
    // there's  nothing more to read, and the while loop can be terminated
    // b/c n would be 0
    while ((n = read(STDIN_FILENO, buffer, BUFFSIZE)) > 0)
    // read 1024 characters
    // STDIN_FILENO comes in ONLY one line one time
    // n is retrun number of bytes, not the number of characters.
    {
        if (write(STDOUT_FILENO, buffer, n) != n) // not BUFFSIZE
        {
            perror("write");
        } // if
    }     // while

    if (n == -1)
    {
        perror("read!");
    } // if

    return 0;
} // main (readwrite.c)