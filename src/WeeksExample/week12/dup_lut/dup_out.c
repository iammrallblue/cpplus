/*
    makefile
run: compilt
    output.txt
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/*
    file desciptor and dup function in syscall

     read and write from file

*/
int main(int argc, char const *argv[])
{
    printf("Before redirecting standard output. \n");

    int fd_out = dup(STDOUT_FILENO); // back up the fd for stdout

    if (fd_out == -1)
    {
        perror("dup");
    }
    printf("fd_out = %d\n", fd_out);

    char *msg = "Output to fd_out \n";

    if (write(fd_out, msg, strlen(msg)) == -1)
    {
        perror("write");
    }

    // redirecting , wriitng info fd file
    // fd to output.txt?
    int fd = creat(argv[1], 0644);
    if (fd == -1)
    {
        perror("creat");
    }

    if (dup2(fd, STDOUT_FILENO) == -1) // l
    {
        perror("dup2");
    }

    printf("This is from printf\n");
    char *msg2 = "write to fd\n";
    write(fd, msg2, strlen(msg2) == -1);

    // dup2 function
    if (dup2(fd_out, STDOUT_FILENO) == -1)
    {
        perror("dup2");
    }
    printf("After restoring standard output. \n");

    return 0;
} // mian (dup_out.c)