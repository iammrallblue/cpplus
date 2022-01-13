#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
    fork function in C:
        to indicate that how is fork() working in Linux system
*/

// int glo_var = 6;

int main(int argc, char const *argv[])
{
    int count = 0;
    // int loc_var = 3;
    pid_t pid; // pid is the return value of the fork()

    printf("Before fork:\n");

    // after this point, there will be two process, one child process, and the parent process
    if ((pid = fork()) < 0) // error negvalues means system call fork() err
    {
        perror("Fork ERROR.");
    }
    else if (pid == 0) // in child process
    {
        printf("Child process, process id is %d\n", getpid());
        count = count + 1;
        // ++glo_var;
        // ++loc_var;
        printf("add of child count: %x\n", &count);
    }
    else // in parent process
    {

        sleep(3); // parent puts itself to sleep for 3 secs.
        printf("Parent process, process id is: %d\n", getpid());
        count = count + 2;
        printf("add of parent count: %x\n", &count);

    } // if

    // printf("After fork: pid = %d, glo_var = %d, loc_var = %d\n", pid, glo_var, loc_var);
    printf("count is: %d\n", count);

    return EXIT_SUCCESS;
} // main
