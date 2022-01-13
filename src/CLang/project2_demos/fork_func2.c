#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
    fork function in C:
        Interaction with I/O Functions
*/

int glo_var = 6;

int main(int argc, char const *argv[])
{
    int loc_var = 3;
    pid_t pid;
    printf("Before fork:");

    if ((pid = fork()) < 0) // error
    {
        perror("FORK ERROR");
    }
    else if (pid == 0) // in child process  
    // at this point, the child process and the parent process execute at the same time
    {
        ++glo_var;
        ++loc_var;
    }
    else // in parent process
    {
        sleep(3); 
    } // if

    printf("\n");
    printf("After fork: pid = %d, glo_var = %d, loc_var = %d\n", pid, glo_var, loc_var);

    return EXIT_SUCCESS;
} // main
